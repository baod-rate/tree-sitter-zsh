#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 2
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 5

enum {
  sym_keyword = 1,
  sym__special_chars = 2,
  anon_sym_SEMI = 3,
  anon_sym_AMP = 4,
  anon_sym_AMP_PIPE = 5,
  anon_sym_AMP_BANG = 6,
  anon_sym_LF = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_coproc = 10,
  anon_sym_BANG = 11,
  anon_sym_PIPE = 12,
  anon_sym_COLON = 13,
  anon_sym_declare = 14,
  anon_sym_LT = 15,
  anon_sym_LT_GT = 16,
  anon_sym_GT = 17,
  anon_sym_GT_PIPE = 18,
  anon_sym_GT_BANG = 19,
  anon_sym_GT_GT = 20,
  anon_sym_LT_AMP = 21,
  anon_sym_GT_AMP = 22,
  anon_sym_DASH = 23,
  anon_sym_p = 24,
  anon_sym_LPAREN_RPAREN = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_builtin = 28,
  anon_sym_command = 29,
  anon_sym_DASHp = 30,
  anon_sym_exec = 31,
  anon_sym_c = 32,
  anon_sym_l = 33,
  anon_sym_DASHa = 34,
  anon_sym_nocorrect = 35,
  anon_sym_noglob = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  anon_sym_always = 39,
  anon_sym_function = 40,
  anon_sym_DASHT = 41,
  sym_file_descriptor = 42,
  sym_word = 43,
  sym_program = 44,
  sym_list = 45,
  sym_TERM = 46,
  sym_sublist = 47,
  sym_pipeline = 48,
  sym__pipe_sequence = 49,
  sym__command = 50,
  sym_simple_command = 51,
  sym_io_redirect = 52,
  sym__io_redirect = 53,
  sym_anonymous_func = 54,
  sym_precommand_modifier = 55,
  sym__complex_command = 56,
  sym_subshell = 57,
  sym_always = 58,
  sym_function_def = 59,
  aux_sym_list_repeat1 = 60,
  aux_sym_sublist_repeat1 = 61,
  aux_sym_simple_command_repeat1 = 62,
  aux_sym_simple_command_repeat2 = 63,
  aux_sym_precommand_modifier_repeat1 = 64,
  aux_sym_precommand_modifier_repeat2 = 65,
  alias_sym_always_list = 66,
  alias_sym_try_list = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym__special_chars] = "_special_chars",
  [anon_sym_SEMI] = ";",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_PIPE] = "&|",
  [anon_sym_AMP_BANG] = "&!",
  [anon_sym_LF] = "\n",
  [anon_sym_AMP_AMP] = "and_if",
  [anon_sym_PIPE_PIPE] = "or_if",
  [anon_sym_coproc] = "coproc",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = "builtin",
  [anon_sym_declare] = "builtin",
  [anon_sym_LT] = "<",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_GT_PIPE] = ">|",
  [anon_sym_GT_BANG] = ">!",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_AMP] = "<&",
  [anon_sym_GT_AMP] = ">&",
  [anon_sym_DASH] = "-",
  [anon_sym_p] = "p",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_builtin] = "builtin",
  [anon_sym_command] = "command",
  [anon_sym_DASHp] = "-p",
  [anon_sym_exec] = "exec",
  [anon_sym_c] = "c",
  [anon_sym_l] = "l",
  [anon_sym_DASHa] = "-a",
  [anon_sym_nocorrect] = "nocorrect",
  [anon_sym_noglob] = "noglob",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_always] = "always",
  [anon_sym_function] = "function",
  [anon_sym_DASHT] = "-T",
  [sym_file_descriptor] = "file_descriptor",
  [sym_word] = "word",
  [sym_program] = "program",
  [sym_list] = "list",
  [sym_TERM] = "TERM",
  [sym_sublist] = "sublist",
  [sym_pipeline] = "pipeline",
  [sym__pipe_sequence] = "_pipe_sequence",
  [sym__command] = "_command",
  [sym_simple_command] = "simple_command",
  [sym_io_redirect] = "io_redirect",
  [sym__io_redirect] = "_io_redirect",
  [sym_anonymous_func] = "anonymous_func",
  [sym_precommand_modifier] = "precommand_modifier",
  [sym__complex_command] = "_complex_command",
  [sym_subshell] = "subshell",
  [sym_always] = "always",
  [sym_function_def] = "function_def",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_sublist_repeat1] = "sublist_repeat1",
  [aux_sym_simple_command_repeat1] = "simple_command_repeat1",
  [aux_sym_simple_command_repeat2] = "simple_command_repeat2",
  [aux_sym_precommand_modifier_repeat1] = "precommand_modifier_repeat1",
  [aux_sym_precommand_modifier_repeat2] = "precommand_modifier_repeat2",
  [alias_sym_always_list] = "always_list",
  [alias_sym_try_list] = "try_list",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym__special_chars] = sym__special_chars,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_PIPE] = anon_sym_AMP_PIPE,
  [anon_sym_AMP_BANG] = anon_sym_AMP_BANG,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_coproc] = anon_sym_coproc,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_declare] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_PIPE] = anon_sym_GT_PIPE,
  [anon_sym_GT_BANG] = anon_sym_GT_BANG,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_AMP] = anon_sym_LT_AMP,
  [anon_sym_GT_AMP] = anon_sym_GT_AMP,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_DASHp] = anon_sym_DASHp,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_DASHa] = anon_sym_DASHa,
  [anon_sym_nocorrect] = anon_sym_nocorrect,
  [anon_sym_noglob] = anon_sym_noglob,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASHT] = anon_sym_DASHT,
  [sym_file_descriptor] = sym_file_descriptor,
  [sym_word] = sym_word,
  [sym_program] = sym_program,
  [sym_list] = sym_list,
  [sym_TERM] = sym_TERM,
  [sym_sublist] = sym_sublist,
  [sym_pipeline] = sym_pipeline,
  [sym__pipe_sequence] = sym__pipe_sequence,
  [sym__command] = sym__command,
  [sym_simple_command] = sym_simple_command,
  [sym_io_redirect] = sym_io_redirect,
  [sym__io_redirect] = sym__io_redirect,
  [sym_anonymous_func] = sym_anonymous_func,
  [sym_precommand_modifier] = sym_precommand_modifier,
  [sym__complex_command] = sym__complex_command,
  [sym_subshell] = sym_subshell,
  [sym_always] = sym_always,
  [sym_function_def] = sym_function_def,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_sublist_repeat1] = aux_sym_sublist_repeat1,
  [aux_sym_simple_command_repeat1] = aux_sym_simple_command_repeat1,
  [aux_sym_simple_command_repeat2] = aux_sym_simple_command_repeat2,
  [aux_sym_precommand_modifier_repeat1] = aux_sym_precommand_modifier_repeat1,
  [aux_sym_precommand_modifier_repeat2] = aux_sym_precommand_modifier_repeat2,
  [alias_sym_always_list] = alias_sym_always_list,
  [alias_sym_try_list] = alias_sym_try_list,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__special_chars] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_coproc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocorrect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noglob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHT] = {
    .visible = true,
    .named = false,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_TERM] = {
    .visible = true,
    .named = true,
  },
  [sym_sublist] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym__pipe_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_command] = {
    .visible = true,
    .named = true,
  },
  [sym_io_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym__io_redirect] = {
    .visible = false,
    .named = true,
  },
  [sym_anonymous_func] = {
    .visible = true,
    .named = true,
  },
  [sym_precommand_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__complex_command] = {
    .visible = false,
    .named = true,
  },
  [sym_subshell] = {
    .visible = true,
    .named = true,
  },
  [sym_always] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sublist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_precommand_modifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_precommand_modifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_always_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_try_list] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_subshell,
  },
  [2] = {
    [4] = alias_sym_always_list,
  },
  [3] = {
    [1] = alias_sym_try_list,
  },
  [4] = {
    [1] = alias_sym_try_list,
    [5] = alias_sym_always_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_list, 4,
    sym_list,
    alias_sym_always_list,
    alias_sym_try_list,
    sym_subshell,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 39,
  [43] = 37,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 108,
  [119] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(110);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 106:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 107:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__special_chars);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__special_chars);
      if (lookahead == '[') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '|') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '|') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP_PIPE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP_BANG);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_coproc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(137);
      if (lookahead == '>') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '!') ADVANCE(135);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '|') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '|') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT_PIPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT_BANG);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_builtin);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_builtin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASHp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASHa);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASHa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_nocorrect);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_nocorrect);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_noglob);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_noglob);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(144);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASHT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 106},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 108},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 108},
  [31] = {.lex_state = 109},
  [32] = {.lex_state = 109},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 109},
  [35] = {.lex_state = 109},
  [36] = {.lex_state = 108},
  [37] = {.lex_state = 108},
  [38] = {.lex_state = 108},
  [39] = {.lex_state = 108},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 109},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 107},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 107},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 107},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 107},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 105},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 105},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 105},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 105},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 105},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 105},
  [119] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym__special_chars] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_PIPE] = ACTIONS(1),
    [anon_sym_AMP_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_PIPE] = ACTIONS(1),
    [anon_sym_GT_BANG] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_AMP] = ACTIONS(1),
    [anon_sym_GT_AMP] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_DASHa] = ACTIONS(1),
    [anon_sym_nocorrect] = ACTIONS(1),
    [anon_sym_noglob] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(110),
    [sym_list] = STATE(109),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [2] = {
    [sym_sublist] = STATE(74),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AMP_PIPE] = ACTIONS(39),
    [anon_sym_AMP_BANG] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_AMP] = ACTIONS(43),
    [anon_sym_GT_AMP] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [3] = {
    [sym_list] = STATE(99),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [4] = {
    [sym_list] = STATE(114),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [5] = {
    [sym_list] = STATE(107),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [6] = {
    [sym_list] = STATE(104),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [7] = {
    [sym_list] = STATE(95),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [8] = {
    [sym_list] = STATE(101),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [9] = {
    [sym_list] = STATE(94),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [10] = {
    [sym_list] = STATE(116),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [11] = {
    [sym_list] = STATE(100),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [12] = {
    [sym_list] = STATE(97),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [13] = {
    [sym_list] = STATE(93),
    [sym_sublist] = STATE(70),
    [sym_pipeline] = STATE(54),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [14] = {
    [sym_pipeline] = STATE(68),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_AMP] = ACTIONS(43),
    [anon_sym_GT_AMP] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
  [15] = {
    [sym_pipeline] = STATE(69),
    [sym__pipe_sequence] = STATE(51),
    [sym__command] = STATE(51),
    [sym_simple_command] = STATE(51),
    [sym_io_redirect] = STATE(25),
    [sym__io_redirect] = STATE(44),
    [sym_anonymous_func] = STATE(29),
    [sym_precommand_modifier] = STATE(82),
    [sym__complex_command] = STATE(51),
    [sym_subshell] = STATE(51),
    [sym_always] = STATE(51),
    [sym_function_def] = STATE(51),
    [aux_sym_simple_command_repeat1] = STATE(25),
    [anon_sym_coproc] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_GT_PIPE] = ACTIONS(15),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_AMP] = ACTIONS(17),
    [anon_sym_GT_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_builtin] = ACTIONS(19),
    [anon_sym_command] = ACTIONS(25),
    [anon_sym_exec] = ACTIONS(27),
    [anon_sym_nocorrect] = ACTIONS(19),
    [anon_sym_noglob] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [sym_file_descriptor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(41), 1,
      anon_sym_GT_PIPE,
    ACTIONS(45), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(82), 1,
      sym_precommand_modifier,
    ACTIONS(9), 2,
      anon_sym_COLON,
      anon_sym_declare,
    ACTIONS(43), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(25), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
    STATE(62), 6,
      sym__command,
      sym_simple_command,
      sym__complex_command,
      sym_subshell,
      sym_always,
      sym_function_def,
  [72] = 20,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(15), 1,
      anon_sym_GT_PIPE,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(35), 1,
      sym_word,
    STATE(29), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(82), 1,
      sym_precommand_modifier,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(17), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(25), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
    STATE(56), 7,
      sym__pipe_sequence,
      sym__command,
      sym_simple_command,
      sym__complex_command,
      sym_subshell,
      sym_always,
      sym_function_def,
  [146] = 20,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(15), 1,
      anon_sym_GT_PIPE,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(35), 1,
      sym_word,
    STATE(29), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(82), 1,
      sym_precommand_modifier,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(17), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(25), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
    STATE(52), 6,
      sym__command,
      sym_simple_command,
      sym__complex_command,
      sym_subshell,
      sym_always,
      sym_function_def,
  [219] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 29,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_coproc,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_declare,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_DASH,
      anon_sym_LPAREN_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_function,
      sym_file_descriptor,
      sym_word,
  [255] = 18,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(41), 1,
      anon_sym_GT_PIPE,
    ACTIONS(45), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(64), 1,
      sym_simple_command,
    STATE(82), 1,
      sym_precommand_modifier,
    ACTIONS(43), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(25), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLON,
      anon_sym_declare,
      sym_word,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
  [320] = 18,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_GT_PIPE,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(55), 1,
      sym_simple_command,
    STATE(82), 1,
      sym_precommand_modifier,
    ACTIONS(9), 2,
      anon_sym_declare,
      sym_word,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(17), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(25), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
  [383] = 10,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(87), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(91), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(27), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(79), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [428] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(97), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(95), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [470] = 9,
    ACTIONS(106), 1,
      anon_sym_GT_PIPE,
    ACTIONS(112), 1,
      sym_file_descriptor,
    ACTIONS(115), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(109), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(24), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(101), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [512] = 15,
    ACTIONS(15), 1,
      anon_sym_GT_PIPE,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(25), 1,
      anon_sym_command,
    ACTIONS(27), 1,
      anon_sym_exec,
    ACTIONS(33), 1,
      sym_file_descriptor,
    ACTIONS(118), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym_anonymous_func,
    STATE(44), 1,
      sym__io_redirect,
    STATE(83), 1,
      sym_precommand_modifier,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(17), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(120), 2,
      anon_sym_declare,
      sym_word,
    STATE(33), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(19), 4,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_nocorrect,
      anon_sym_noglob,
  [566] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(126), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(30), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(124), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [608] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(97), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(124), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [650] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(132), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(23), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(130), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [692] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(91), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(27), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(79), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [734] = 9,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    ACTIONS(97), 1,
      sym_word,
    STATE(38), 1,
      sym__io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(130), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [776] = 8,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    STATE(38), 1,
      sym__io_redirect,
    STATE(57), 1,
      sym_io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(136), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [814] = 8,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    STATE(38), 1,
      sym__io_redirect,
    STATE(61), 1,
      sym_io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(140), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [852] = 9,
    ACTIONS(152), 1,
      anon_sym_GT_PIPE,
    ACTIONS(158), 1,
      sym_file_descriptor,
    STATE(44), 1,
      sym__io_redirect,
    ACTIONS(142), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(155), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    STATE(33), 2,
      sym_io_redirect,
      aux_sym_simple_command_repeat1,
    ACTIONS(144), 8,
      anon_sym_declare,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      sym_word,
  [892] = 8,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    STATE(38), 1,
      sym__io_redirect,
    STATE(48), 1,
      sym_io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(163), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [930] = 8,
    ACTIONS(83), 1,
      anon_sym_GT_PIPE,
    ACTIONS(89), 1,
      sym_file_descriptor,
    STATE(38), 1,
      sym__io_redirect,
    STATE(59), 1,
      sym_io_redirect,
    ACTIONS(85), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_GT,
    ACTIONS(167), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [968] = 2,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(171), 18,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_file_descriptor,
      sym_word,
  [993] = 2,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(175), 18,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_file_descriptor,
      sym_word,
  [1018] = 2,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(179), 18,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_file_descriptor,
      sym_word,
  [1043] = 2,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(183), 18,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_file_descriptor,
      sym_word,
  [1068] = 2,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(187), 18,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_file_descriptor,
      sym_word,
  [1093] = 2,
    ACTIONS(185), 7,
      anon_sym_COLON,
      anon_sym_LT_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(187), 11,
      anon_sym_declare,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      sym_file_descriptor,
      sym_word,
  [1116] = 2,
    ACTIONS(181), 7,
      anon_sym_COLON,
      anon_sym_LT_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(183), 11,
      anon_sym_declare,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      sym_file_descriptor,
      sym_word,
  [1139] = 2,
    ACTIONS(173), 7,
      anon_sym_COLON,
      anon_sym_LT_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(175), 11,
      anon_sym_declare,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      sym_file_descriptor,
      sym_word,
  [1162] = 2,
    ACTIONS(177), 7,
      anon_sym_COLON,
      anon_sym_LT_GT,
      anon_sym_GT_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(179), 11,
      anon_sym_declare,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_builtin,
      anon_sym_command,
      anon_sym_exec,
      anon_sym_nocorrect,
      anon_sym_noglob,
      sym_file_descriptor,
      sym_word,
  [1185] = 3,
    ACTIONS(193), 1,
      anon_sym_always,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1204] = 3,
    ACTIONS(199), 1,
      anon_sym_always,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1223] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(203), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1239] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1255] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(207), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1271] = 4,
    STATE(63), 1,
      aux_sym_sublist_repeat1,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(213), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(211), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1291] = 3,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(217), 8,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1309] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1325] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(227), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1341] = 4,
    STATE(50), 1,
      aux_sym_sublist_repeat1,
    ACTIONS(213), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1361] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(235), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1377] = 3,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(239), 8,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1395] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(163), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1411] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(243), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1427] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1443] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(247), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1459] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(251), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1475] = 2,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(255), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1491] = 4,
    STATE(63), 1,
      aux_sym_sublist_repeat1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(261), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1511] = 2,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(266), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1527] = 2,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 9,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1543] = 6,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_TERM,
    STATE(66), 1,
      aux_sym_list_repeat1,
    ACTIONS(280), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(274), 4,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
  [1566] = 6,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_TERM,
    STATE(66), 1,
      aux_sym_list_repeat1,
    ACTIONS(288), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(284), 4,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
  [1589] = 2,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(259), 8,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1604] = 2,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(292), 8,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1619] = 6,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_TERM,
    STATE(67), 1,
      aux_sym_list_repeat1,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(284), 4,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
  [1642] = 4,
    STATE(73), 1,
      aux_sym_precommand_modifier_repeat1,
    ACTIONS(298), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(302), 2,
      anon_sym_c,
      anon_sym_l,
    ACTIONS(300), 4,
      anon_sym_declare,
      anon_sym_DASH,
      anon_sym_DASHa,
      sym_word,
  [1660] = 4,
    STATE(72), 1,
      aux_sym_precommand_modifier_repeat1,
    ACTIONS(304), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(308), 2,
      anon_sym_c,
      anon_sym_l,
    ACTIONS(306), 4,
      anon_sym_declare,
      anon_sym_DASH,
      anon_sym_DASHa,
      sym_word,
  [1678] = 4,
    STATE(72), 1,
      aux_sym_precommand_modifier_repeat1,
    ACTIONS(311), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(315), 2,
      anon_sym_c,
      anon_sym_l,
    ACTIONS(313), 4,
      anon_sym_declare,
      anon_sym_DASH,
      anon_sym_DASHa,
      sym_word,
  [1696] = 2,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(280), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_AMP_PIPE,
      anon_sym_AMP_BANG,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1709] = 5,
    ACTIONS(15), 1,
      anon_sym_GT_PIPE,
    STATE(41), 1,
      sym__io_redirect,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(17), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
  [1728] = 5,
    ACTIONS(319), 1,
      anon_sym_GT_PIPE,
    STATE(40), 1,
      sym__io_redirect,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 2,
      anon_sym_LT_GT,
      anon_sym_GT_GT,
    ACTIONS(321), 2,
      anon_sym_LT_AMP,
      anon_sym_GT_AMP,
  [1747] = 5,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_DASHa,
    STATE(79), 1,
      aux_sym_precommand_modifier_repeat2,
    ACTIONS(323), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(325), 2,
      anon_sym_declare,
      sym_word,
  [1765] = 5,
    ACTIONS(327), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      anon_sym_DASHa,
    STATE(77), 1,
      aux_sym_precommand_modifier_repeat2,
    ACTIONS(331), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(333), 2,
      anon_sym_declare,
      sym_word,
  [1783] = 5,
    ACTIONS(335), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_DASHa,
    STATE(79), 1,
      aux_sym_precommand_modifier_repeat2,
    ACTIONS(311), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(313), 2,
      anon_sym_declare,
      sym_word,
  [1801] = 2,
    ACTIONS(311), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(313), 4,
      anon_sym_declare,
      anon_sym_DASH,
      anon_sym_DASHa,
      sym_word,
  [1812] = 3,
    ACTIONS(341), 1,
      anon_sym_DASHp,
    ACTIONS(331), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(333), 2,
      anon_sym_declare,
      sym_word,
  [1824] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(118), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym_anonymous_func,
    ACTIONS(120), 2,
      anon_sym_declare,
      sym_word,
  [1838] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(343), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_anonymous_func,
    ACTIONS(345), 2,
      anon_sym_declare,
      sym_word,
  [1852] = 2,
    ACTIONS(323), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(325), 2,
      anon_sym_declare,
      sym_word,
  [1861] = 4,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
  [1874] = 2,
    ACTIONS(331), 2,
      anon_sym_COLON,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(333), 2,
      anon_sym_declare,
      sym_word,
  [1883] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      anon_sym_LPAREN_RPAREN,
  [1896] = 3,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
  [1906] = 1,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_p,
      sym_file_descriptor,
  [1912] = 1,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_p,
      sym_file_descriptor,
  [1918] = 3,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
  [1928] = 2,
    ACTIONS(371), 1,
      anon_sym_DASHT,
    ACTIONS(373), 1,
      sym_word,
  [1935] = 1,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
  [1939] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
  [1943] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
  [1947] = 1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
  [1951] = 1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [1955] = 1,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
  [1959] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [1963] = 1,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
  [1967] = 1,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [1971] = 1,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
  [1975] = 1,
    ACTIONS(391), 1,
      sym_word,
  [1979] = 1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [1983] = 1,
    ACTIONS(395), 1,
      sym_word,
  [1987] = 1,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [1991] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [1995] = 1,
    ACTIONS(401), 1,
      sym_word,
  [1999] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [2003] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [2007] = 1,
    ACTIONS(369), 1,
      sym_word,
  [2011] = 1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [2015] = 1,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [2019] = 1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
  [2023] = 1,
    ACTIONS(367), 1,
      sym_word,
  [2027] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [2031] = 1,
    ACTIONS(413), 1,
      anon_sym_GT_BANG,
  [2035] = 1,
    ACTIONS(415), 1,
      sym_word,
  [2039] = 1,
    ACTIONS(417), 1,
      anon_sym_GT_BANG,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 72,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 219,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 428,
  [SMALL_STATE(24)] = 470,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 608,
  [SMALL_STATE(28)] = 650,
  [SMALL_STATE(29)] = 692,
  [SMALL_STATE(30)] = 734,
  [SMALL_STATE(31)] = 776,
  [SMALL_STATE(32)] = 814,
  [SMALL_STATE(33)] = 852,
  [SMALL_STATE(34)] = 892,
  [SMALL_STATE(35)] = 930,
  [SMALL_STATE(36)] = 968,
  [SMALL_STATE(37)] = 993,
  [SMALL_STATE(38)] = 1018,
  [SMALL_STATE(39)] = 1043,
  [SMALL_STATE(40)] = 1068,
  [SMALL_STATE(41)] = 1093,
  [SMALL_STATE(42)] = 1116,
  [SMALL_STATE(43)] = 1139,
  [SMALL_STATE(44)] = 1162,
  [SMALL_STATE(45)] = 1185,
  [SMALL_STATE(46)] = 1204,
  [SMALL_STATE(47)] = 1223,
  [SMALL_STATE(48)] = 1239,
  [SMALL_STATE(49)] = 1255,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1291,
  [SMALL_STATE(52)] = 1309,
  [SMALL_STATE(53)] = 1325,
  [SMALL_STATE(54)] = 1341,
  [SMALL_STATE(55)] = 1361,
  [SMALL_STATE(56)] = 1377,
  [SMALL_STATE(57)] = 1395,
  [SMALL_STATE(58)] = 1411,
  [SMALL_STATE(59)] = 1427,
  [SMALL_STATE(60)] = 1443,
  [SMALL_STATE(61)] = 1459,
  [SMALL_STATE(62)] = 1475,
  [SMALL_STATE(63)] = 1491,
  [SMALL_STATE(64)] = 1511,
  [SMALL_STATE(65)] = 1527,
  [SMALL_STATE(66)] = 1543,
  [SMALL_STATE(67)] = 1566,
  [SMALL_STATE(68)] = 1589,
  [SMALL_STATE(69)] = 1604,
  [SMALL_STATE(70)] = 1619,
  [SMALL_STATE(71)] = 1642,
  [SMALL_STATE(72)] = 1660,
  [SMALL_STATE(73)] = 1678,
  [SMALL_STATE(74)] = 1696,
  [SMALL_STATE(75)] = 1709,
  [SMALL_STATE(76)] = 1728,
  [SMALL_STATE(77)] = 1747,
  [SMALL_STATE(78)] = 1765,
  [SMALL_STATE(79)] = 1783,
  [SMALL_STATE(80)] = 1801,
  [SMALL_STATE(81)] = 1812,
  [SMALL_STATE(82)] = 1824,
  [SMALL_STATE(83)] = 1838,
  [SMALL_STATE(84)] = 1852,
  [SMALL_STATE(85)] = 1861,
  [SMALL_STATE(86)] = 1874,
  [SMALL_STATE(87)] = 1883,
  [SMALL_STATE(88)] = 1896,
  [SMALL_STATE(89)] = 1906,
  [SMALL_STATE(90)] = 1912,
  [SMALL_STATE(91)] = 1918,
  [SMALL_STATE(92)] = 1928,
  [SMALL_STATE(93)] = 1935,
  [SMALL_STATE(94)] = 1939,
  [SMALL_STATE(95)] = 1943,
  [SMALL_STATE(96)] = 1947,
  [SMALL_STATE(97)] = 1951,
  [SMALL_STATE(98)] = 1955,
  [SMALL_STATE(99)] = 1959,
  [SMALL_STATE(100)] = 1963,
  [SMALL_STATE(101)] = 1967,
  [SMALL_STATE(102)] = 1971,
  [SMALL_STATE(103)] = 1975,
  [SMALL_STATE(104)] = 1979,
  [SMALL_STATE(105)] = 1983,
  [SMALL_STATE(106)] = 1987,
  [SMALL_STATE(107)] = 1991,
  [SMALL_STATE(108)] = 1995,
  [SMALL_STATE(109)] = 1999,
  [SMALL_STATE(110)] = 2003,
  [SMALL_STATE(111)] = 2007,
  [SMALL_STATE(112)] = 2011,
  [SMALL_STATE(113)] = 2015,
  [SMALL_STATE(114)] = 2019,
  [SMALL_STATE(115)] = 2023,
  [SMALL_STATE(116)] = 2027,
  [SMALL_STATE(117)] = 2031,
  [SMALL_STATE(118)] = 2035,
  [SMALL_STATE(119)] = 2039,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TERM, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TERM, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_command, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_command, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_command, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_command, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2), SHIFT_REPEAT(115),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2), SHIFT_REPEAT(119),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2), SHIFT_REPEAT(89),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2), SHIFT_REPEAT(76),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat2, 2), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_command, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_command, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_command, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_command, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 8),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat1, 2), SHIFT_REPEAT(111),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_command_repeat1, 2), SHIFT_REPEAT(111),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_command_repeat1, 2), SHIFT_REPEAT(117),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_command_repeat1, 2), SHIFT_REPEAT(90),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_command_repeat1, 2), SHIFT_REPEAT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_func, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_func, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__io_redirect, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__io_redirect, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_redirect, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_redirect, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__io_redirect, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__io_redirect, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_io_redirect, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_io_redirect, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_command, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_command, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_command, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_command, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always, 6, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 6, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sublist, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sublist, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe_sequence, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe_sequence, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always, 6, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 6, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sublist, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sublist, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subshell, 3, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subshell, 3, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always, 7, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 7, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 9),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 9),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe_sequence, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe_sequence, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sublist_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sublist_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sublist_repeat1, 2), SHIFT_REPEAT(14),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subshell, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subshell, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sublist_repeat1, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sublist_repeat1, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_precommand_modifier_repeat2, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat2, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_precommand_modifier_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat1, 2), SHIFT_REPEAT(72),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_precommand_modifier_repeat2, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat2, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precommand_modifier, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_precommand_modifier, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_precommand_modifier, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_precommand_modifier, 1),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat2, 2), SHIFT_REPEAT(71),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_precommand_modifier_repeat2, 2), SHIFT_REPEAT(105),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zsh(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_keyword,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
