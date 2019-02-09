#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 43
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_POUNDlang = 1,
  sym_true_lit = 2,
  sym_false_lit = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  anon_sym_SQUOTE = 6,
  sym_number = 7,
  sym_symbol = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_dot = 15,
  sym__comment = 16,
  sym_source_file = 17,
  sym_lang_line = 18,
  sym_datum = 19,
  sym_boolean = 20,
  sym_string = 21,
  sym_quoted_datum = 22,
  sym_list_or_pair = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_list_or_pair_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDlang] = "#lang",
  [sym_true_lit] = "true_lit",
  [sym_false_lit] = "false_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|')
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == 'F')
        ADVANCE(15);
      if (lookahead == 'T')
        ADVANCE(16);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(17);
      if (lookahead == 't')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
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
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          lookahead == '/')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
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
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 14:
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
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false_lit);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_true_lit);
      END_STATE();
    case 17:
      if (lookahead == 'a')
        ADVANCE(20);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
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
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
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
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'g')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 25:
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == 'l')
        ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'F')
        ADVANCE(15);
      if (lookahead == 'T')
        ADVANCE(16);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n')
        ADVANCE(32);
      if (lookahead == '"')
        ADVANCE(8);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|')
        ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|')
        ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_false_lit] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_true_lit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_lang_line] = STATE(4),
    [anon_sym_POUNDlang] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym__comment] = ACTIONS(3),
    [sym_symbol] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_quoted_datum] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_true_lit] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_true_lit] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_false_lit] = ACTIONS(27),
    [sym_symbol] = ACTIONS(29),
  },
  [6] = {
    [aux_sym_string_token1] = ACTIONS(31),
    [sym__comment] = ACTIONS(33),
  },
  [7] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(15),
    [sym_quoted_datum] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_true_lit] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
  },
  [8] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(24),
    [aux_sym_list_or_pair_repeat1] = STATE(24),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [9] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(26),
    [aux_sym_list_or_pair_repeat1] = STATE(26),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_true_lit] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym_false_lit] = ACTIONS(57),
    [sym_symbol] = ACTIONS(59),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_true_lit] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_false_lit] = ACTIONS(61),
    [sym_symbol] = ACTIONS(63),
  },
  [12] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(28),
    [aux_sym_list_or_pair_repeat1] = STATE(28),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_dot] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [13] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_quoted_datum] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_true_lit] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
  },
  [14] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(71),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_true_lit] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_false_lit] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
  },
  [16] = {
    [aux_sym_string_token1] = ACTIONS(77),
    [sym__comment] = ACTIONS(33),
  },
  [17] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(32),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [18] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(34),
    [aux_sym_list_or_pair_repeat1] = STATE(34),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [19] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(35),
    [aux_sym_list_or_pair_repeat1] = STATE(35),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [20] = {
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_dot] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_true_lit] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_false_lit] = ACTIONS(57),
    [sym_symbol] = ACTIONS(59),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_dot] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_true_lit] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_false_lit] = ACTIONS(61),
    [sym_symbol] = ACTIONS(63),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_true_lit] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [sym_false_lit] = ACTIONS(85),
    [sym_symbol] = ACTIONS(87),
  },
  [23] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(36),
    [aux_sym_list_or_pair_repeat1] = STATE(36),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_dot] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [24] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(38),
    [aux_sym_list_or_pair_repeat1] = STATE(38),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [25] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(32),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [26] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [27] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(32),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [28] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_dot] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [29] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_quoted_datum] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_true_lit] = ACTIONS(113),
    [sym_number] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_false_lit] = ACTIONS(113),
    [sym_symbol] = ACTIONS(116),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_true_lit] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym_false_lit] = ACTIONS(122),
    [sym_symbol] = ACTIONS(124),
  },
  [31] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(126),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_dot] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_true_lit] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_false_lit] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_dot] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(85),
    [sym_true_lit] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_false_lit] = ACTIONS(85),
    [sym_symbol] = ACTIONS(87),
  },
  [34] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(38),
    [aux_sym_list_or_pair_repeat1] = STATE(38),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [35] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(128),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [36] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_dot] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_true_lit] = ACTIONS(45),
    [sym_number] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_false_lit] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_true_lit] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_false_lit] = ACTIONS(130),
    [sym_symbol] = ACTIONS(132),
  },
  [38] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(38),
    [aux_sym_list_or_pair_repeat1] = STATE(38),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_true_lit] = ACTIONS(149),
    [sym_number] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym_false_lit] = ACTIONS(149),
    [sym_symbol] = ACTIONS(152),
  },
  [39] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(21),
    [sym_dot] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_true_lit] = ACTIONS(149),
    [sym_number] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(155),
    [sym_false_lit] = ACTIONS(149),
    [sym_symbol] = ACTIONS(152),
  },
  [40] = {
    [sym_list_or_pair] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(155),
    [sym_dot] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_true_lit] = ACTIONS(149),
    [sym_number] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym_false_lit] = ACTIONS(149),
    [sym_symbol] = ACTIONS(152),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_dot] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_true_lit] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_false_lit] = ACTIONS(122),
    [sym_symbol] = ACTIONS(124),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [sym_dot] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_true_lit] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym_false_lit] = ACTIONS(130),
    [sym_symbol] = ACTIONS(132),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_lang_line, 2),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [35] = {.count = 1, .reusable = false}, SHIFT(24),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = false}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_datum, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(28),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_datum, 2),
  [77] = {.count = 1, .reusable = false}, SHIFT(31),
  [79] = {.count = 1, .reusable = false}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(33),
  [83] = {.count = 1, .reusable = false}, SHIFT(35),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 2),
  [89] = {.count = 1, .reusable = false}, SHIFT(36),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = true}, SHIFT(37),
  [95] = {.count = 1, .reusable = false}, SHIFT(39),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(41),
  [128] = {.count = 1, .reusable = true}, SHIFT(42),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 3),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(38),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(16),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(17),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(18),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(19),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(20),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(21),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(23),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(39),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(25),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(40),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(27),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
