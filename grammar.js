/* eslint-disable arrow-parens */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const RESERVED_WORDS = [
  // https://zsh.sourceforge.io/Doc/Release/Shell-Grammar.html#Reserved-Words
  'do',
  'done',
  'esac',
  'then',
  'elif',
  'else',
  'fi',
  'for',
  'case',
  'if',
  'while',
  'function',
  'repeat',
  'time',
  'until',
  'select',
  'coproc',
  'nocorrect',
  'foreach',
  'end',
  '!',
  '[[',
  '{',
  '}',
  'declare',
  'export',
  'float',
  'integer',
  'local',
  'readonly',
  'typeset',
];

const BUILTINS = [
  // TODO: add the rest of the builtins
  ':',
  'declare',
];

// TODO: don't treat `\n` specially
// const IFS = / \t\n\\0/;
const IFS = / \t\\0/;

const WHITESPACE = [' ', '\t', '\0'];
const NEWLINE = '\n';

module.exports = grammar({
  name: 'zsh',

  word: $ => $.keyword,

  // extras: _ => [...WHITESPACE],

  rules: {
    program: $ => choice($.list),

    _special_chars: _ => /[\[\]|&;<>()$`\\"']/,

    keyword: _ => token(choice(...RESERVED_WORDS)),

    list: $ => choice(
      seq($.sublist, repeat(seq($.TERM, optional($.sublist)))),
    ),

    // TODO: hide this node (sublist terminator)
    TERM: _ => choice(
      ';', '&', '&|', '&!', NEWLINE,
    ),

    sublist: $ => seq(
      $.pipeline,
      repeat(seq(
        choice(alias('&&', $.and_if), alias('||', $.or_if)),
        optional(NEWLINE),
        $.pipeline,
      )),
    ),

    pipeline: $ => choice(
      $._pipe_sequence,
      seq('coproc', $._pipe_sequence),
      seq('!', $._pipe_sequence),
    ),

    _pipe_sequence: $ => choice(
      $._command,
      seq(
        $._pipe_sequence,
        '|',
        optional(NEWLINE),
        $._command,
      ),
    ),
    _command: $ => choice(
      $.simple_command,
      $._complex_command,
    ),

    simple_command: $ => seq(
      repeat(choice(
        // TODO: assignment (i.e. passing env vars)
        $.io_redirect,
      )),
      optional($.precommand_modifier),
      choice(
        alias(choice(...BUILTINS), $.builtin),
        $.word,
        $.anonymous_func,
      ),
      repeat(choice(
        $.io_redirect,
        $.word,
      )),
    ),

    io_redirect: $ => choice(
      $._io_redirect,
      seq($.file_descriptor, $._io_redirect),
    ),
    _io_redirect: $ => choice(
      // https://zsh.sourceforge.io/Doc/Release/Redirection.html
      seq('<', $.word), // read
      seq('<>', $.word), // read-write
      seq('>', $.word), // write
      seq('>|', '>!', $.word), // clobber
      seq('>>', $.word), // append
      // TODO: here-document
      // TODO: here-string
      seq(choice('<&', '>&'), $.file_descriptor), // duplicate file descriptor
      seq(choice('<&', '>&'), '-'), // close
      seq(choice('<&', '>&'), 'p'), // coprocess
      // TODO: >& word redirections
      // TODO: ( >& | &> ) word
      // TODO: ( >&| / >&! / &>| / &>! ) word
      // TODO: ( >>& | &>> ) word
      // TODO: ( >>&| / >>&! / &>>| / &>>! ) word
    ),

    anonymous_func: $ => seq('()', '{', $.list, '}'),

    precommand_modifier: $ => choice(
      // https://zsh.sourceforge.io/Doc/Release/Shell-Grammar.html#Precommand-Modifiers
      '-',
      'builtin',
      seq('command', optional('-p')),
      'exec',
      seq(
        'exec',
        repeat(choice(
          seq('-', repeat(choice('c', 'l'))),
          seq('-a', $.word),
        )),
      ),
      'nocorrect',
      'noglob',
    ),

    _complex_command: $ => choice(
      // TODO: if list then list [ elif list then list ] ... [ else list ] fi
      // TODO: for name ... [ in word ... ] term do list done
      // TODO: for (( [expr1] ; [expr2] ; [expr3] )) do list done
      // TODO: while list do list done
      // TODO: until list do list done
      // TODO: repeat word do list done
      // TODO: case word in [ [(] pattern [ |  pattern  ]  ...  )  list (;;|;&|;|) ] ... esac
      // TODO: select name [ in word ... term ] do list done

      seq('{', optional($.list), '}'),
      $.subshell,
      $.always,
      $.function_def,

      // TODO: time [ pipeline ]
      // TODO: [[ exp ]]
      // TODO: if  list  {  list  } [ elif list { list } ] ... [ else { list } ]
      // TODO: if list sublist
      // TODO: for name ... ( word ... ) sublist
      // TODO: for name ... [ in word ... ] term sublist
      // TODO: for (( [expr1] ; [expr2] ; [expr3] )) sublist
      // TODO: foreach name ... ( word ... ) list end
      // TODO: while list { list }
      // TODO: until list { list }
      // TODO: repeat word sublist
      // TODO: case word { [ [(] pattern [  |  pattern  ]  ...  )  list (;;|;&|;|) ] ... }
      // TODO: select name [ in word ... term ] sublist
      // TODO: function word ... [ () ] [ term ] sublist
    ),

    // ( ... )
    subshell: $ => seq('(', alias(optional($.list), $.subshell), ')'),
    // { try-list } always { always-list }
    always: $ => seq('{', alias(optional($.list), $.try_list), '}', 'always', '{', alias(optional($.list), $.always_list), '}'),

    function_def: $ => choice(
      seq(
        choice(
          // function [ -T ] word ... [ () ] [ term ] { list }
          seq('function', optional('-T'), $.word, optional('()'), optional(choice(NEWLINE, ';')), '{', $.list, '}'),
          // word ... () [ term ] { list }
          seq($.word, '()', optional(choice(NEWLINE, ';')), '{', $.list, '}'),
          // doesn't seem to be documented but seems to work as you would expect
          seq($.word, '()', optional(choice(NEWLINE, ';')), '(', $.list, ')'),
        ),
        // "The redirection is stored with the function and applied whenever the function is executed."
        optional($.io_redirect),
      ),
      // word ... () [ term ] command
      seq($.word, '()', optional(choice(NEWLINE, ';')), $.simple_command),
    ),

    // TODO: {myfd}>&1
    file_descriptor: _ => /[0-9]+/,

    // https://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap02.html#tag_18_02
    // word: _ => prec(-1, /[^|&;<>()$`\\"'\s]\S+/),
    word: _ => /[-a-zA-Z0-9]+/,
  },
});
