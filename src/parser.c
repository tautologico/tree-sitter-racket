#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 39
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_POUNDlang = 1,
  sym_true_lit = 2,
  sym_false_lit = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  anon_sym_SQUOTE = 6,
  anon_sym_BQUOTE = 7,
  sym_number = 8,
  sym_symbol = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_dot = 16,
  sym__comment = 17,
  sym_source_file = 18,
  sym_lang_line = 19,
  sym_datum = 20,
  sym_boolean = 21,
  sym_string = 22,
  sym_quoted_datum = 23,
  sym_list_or_pair = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_list_or_pair_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDlang] = "#lang",
  [sym_true_lit] = "true_lit",
  [sym_false_lit] = "false_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_dot] = "dot",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym_lang_line] = "lang_line",
  [sym_datum] = "datum",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_quoted_datum] = "quoted_datum",
  [sym_list_or_pair] = "list_or_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_or_pair_repeat1] = "list_or_pair_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [sym_true_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_false_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_line] = {
    .visible = true,
    .named = true,
  },
  [sym_datum] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_datum] = {
    .visible = true,
    .named = true,
  },
  [sym_list_or_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_or_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_true_lit);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_false_lit);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 15},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [sym_true_lit] = ACTIONS(1),
    [sym_false_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_lang_line] = STATE(16),
    [anon_sym_POUNDlang] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(7),
    [sym_false_lit] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(10),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(16),
    [sym_symbol] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(22),
    [sym_dot] = ACTIONS(30),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym_datum] = STATE(3),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(3),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_dot] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [sym_datum] = STATE(4),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(4),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [sym_datum] = STATE(5),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(5),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [sym_datum] = STATE(12),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(12),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(61),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [sym_datum] = STATE(13),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(13),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_datum] = STATE(14),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(14),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_dot] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [13] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [14] = {
    [sym_datum] = STATE(2),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(2),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_dot] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [15] = {
    [sym_datum] = STATE(15),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_quoted_datum] = STATE(30),
    [sym_list_or_pair] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_true_lit] = ACTIONS(71),
    [sym_false_lit] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(80),
    [sym_symbol] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym_datum] = STATE(17),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_quoted_datum] = STATE(30),
    [sym_list_or_pair] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_true_lit] = ACTIONS(94),
    [sym_false_lit] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_symbol] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [sym_datum] = STATE(15),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_quoted_datum] = STATE(30),
    [sym_list_or_pair] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_true_lit] = ACTIONS(94),
    [sym_false_lit] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_symbol] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [sym_datum] = STATE(29),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_quoted_datum] = STATE(30),
    [sym_list_or_pair] = STATE(30),
    [sym_true_lit] = ACTIONS(94),
    [sym_false_lit] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym_symbol] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym__comment] = ACTIONS(3),
  },
  [19] = {
    [sym_datum] = STATE(20),
    [sym_boolean] = STATE(22),
    [sym_string] = STATE(22),
    [sym_quoted_datum] = STATE(22),
    [sym_list_or_pair] = STATE(22),
    [sym_true_lit] = ACTIONS(33),
    [sym_false_lit] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_symbol] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym__comment] = ACTIONS(3),
  },
  [20] = {
    [sym_true_lit] = ACTIONS(110),
    [sym_false_lit] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_symbol] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [sym_dot] = ACTIONS(112),
    [sym__comment] = ACTIONS(3),
  },
  [21] = {
    [sym_true_lit] = ACTIONS(114),
    [sym_false_lit] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(116),
    [sym_symbol] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [sym_dot] = ACTIONS(116),
    [sym__comment] = ACTIONS(3),
  },
  [22] = {
    [sym_true_lit] = ACTIONS(118),
    [sym_false_lit] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_symbol] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_dot] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym_true_lit] = ACTIONS(122),
    [sym_false_lit] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
    [sym_symbol] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [sym_true_lit] = ACTIONS(126),
    [sym_false_lit] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
    [sym_symbol] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_dot] = ACTIONS(128),
    [sym__comment] = ACTIONS(3),
  },
  [25] = {
    [sym_true_lit] = ACTIONS(130),
    [sym_false_lit] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [sym_symbol] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym_dot] = ACTIONS(132),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_true_lit] = ACTIONS(126),
    [sym_false_lit] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
    [sym_symbol] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_true_lit] = ACTIONS(130),
    [sym_false_lit] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [sym_symbol] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_true_lit] = ACTIONS(122),
    [sym_false_lit] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
    [sym_symbol] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_true_lit] = ACTIONS(110),
    [sym_false_lit] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_symbol] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_true_lit] = ACTIONS(118),
    [sym_false_lit] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_symbol] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_true_lit] = ACTIONS(114),
    [sym_false_lit] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(116),
    [sym_symbol] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [sym__comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_true_lit] = ACTIONS(134),
    [sym_false_lit] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_symbol] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [sym__comment] = ACTIONS(3),
  },
  [33] = {
    [sym_symbol] = ACTIONS(138),
    [sym__comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_string_token1] = ACTIONS(142),
    [sym__comment] = ACTIONS(144),
  },
  [36] = {
    [anon_sym_DQUOTE] = ACTIONS(146),
    [sym__comment] = ACTIONS(3),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_string_token1] = ACTIONS(150),
    [sym__comment] = ACTIONS(144),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(33),
  [7] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(21),
  [10] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(38),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(19),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(22),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(8),
  [22] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(7),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.count = 1, .reusable = true}, SHIFT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(38),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(8),
  [43] = {.count = 1, .reusable = true}, SHIFT(7),
  [45] = {.count = 1, .reusable = true}, SHIFT(6),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = false}, SHIFT(2),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(3),
  [55] = {.count = 1, .reusable = false}, SHIFT(4),
  [57] = {.count = 1, .reusable = false}, SHIFT(5),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = false}, SHIFT(12),
  [63] = {.count = 1, .reusable = false}, SHIFT(13),
  [65] = {.count = 1, .reusable = false}, SHIFT(14),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [94] = {.count = 1, .reusable = true}, SHIFT(31),
  [96] = {.count = 1, .reusable = true}, SHIFT(35),
  [98] = {.count = 1, .reusable = true}, SHIFT(18),
  [100] = {.count = 1, .reusable = false}, SHIFT(30),
  [102] = {.count = 1, .reusable = true}, SHIFT(9),
  [104] = {.count = 1, .reusable = true}, SHIFT(10),
  [106] = {.count = 1, .reusable = true}, SHIFT(11),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_datum, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_datum, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 2),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_lang_line, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(32),
  [140] = {.count = 1, .reusable = true}, SHIFT(26),
  [142] = {.count = 1, .reusable = false}, SHIFT(34),
  [144] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [146] = {.count = 1, .reusable = true}, SHIFT(24),
  [148] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [150] = {.count = 1, .reusable = false}, SHIFT(36),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
