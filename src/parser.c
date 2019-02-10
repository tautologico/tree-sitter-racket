#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 43
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
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
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(15);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == 'F')
        ADVANCE(16);
      if (lookahead == 'T')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(16);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(17);
      if (lookahead == 'x')
        ADVANCE(19);
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
        ADVANCE(15);
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
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          lookahead == '/')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
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
        ADVANCE(15);
      END_STATE();
    case 15:
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
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_false_lit);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_true_lit);
      END_STATE();
    case 18:
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
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
        ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'n')
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
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
        ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'g')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 26:
      if (lookahead == '#')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == 'l')
        ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(30);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'F')
        ADVANCE(16);
      if (lookahead == 'T')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(17);
      if (lookahead == 'x')
        ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(30);
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
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '"')
        ADVANCE(8);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(30);
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
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|' &&
          lookahead != '}')
        ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(30);
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
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|')
        ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(30);
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
      if (lookahead == '`')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_false_lit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_true_lit] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_lang_line] = STATE(4),
    [anon_sym_POUNDlang] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_symbol] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_quoted_datum] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_true_lit] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(19),
    [sym_number] = ACTIONS(23),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_true_lit] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_false_lit] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
  },
  [6] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(22),
    [aux_sym_list_or_pair_repeat1] = STATE(22),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_dot] = ACTIONS(39),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [7] = {
    [aux_sym_string_token1] = ACTIONS(49),
    [sym__comment] = ACTIONS(51),
  },
  [8] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(24),
    [sym_quoted_datum] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_true_lit] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(19),
    [sym_number] = ACTIONS(23),
  },
  [9] = {
    [anon_sym_LPAREN] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [sym_true_lit] = ACTIONS(53),
    [anon_sym_BQUOTE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_symbol] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_false_lit] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
  },
  [10] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(26),
    [aux_sym_list_or_pair_repeat1] = STATE(26),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_dot] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_true_lit] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_symbol] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_false_lit] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
  },
  [12] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(28),
    [aux_sym_list_or_pair_repeat1] = STATE(28),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_dot] = ACTIONS(67),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [13] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_quoted_datum] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_true_lit] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_false_lit] = ACTIONS(19),
    [sym_number] = ACTIONS(23),
  },
  [14] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(31),
    [aux_sym_list_or_pair_repeat1] = STATE(31),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_dot] = ACTIONS(73),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [15] = {
    [aux_sym_string_token1] = ACTIONS(75),
    [sym__comment] = ACTIONS(51),
  },
  [16] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(33),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [17] = {
    [anon_sym_LPAREN] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_true_lit] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_false_lit] = ACTIONS(77),
    [sym_number] = ACTIONS(79),
  },
  [18] = {
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_symbol] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_false_lit] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(53),
    [sym_dot] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_true_lit] = ACTIONS(53),
    [anon_sym_BQUOTE] = ACTIONS(53),
  },
  [19] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(34),
    [aux_sym_list_or_pair_repeat1] = STATE(34),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_dot] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [20] = {
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_symbol] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_false_lit] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_dot] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_true_lit] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(61),
  },
  [21] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(35),
    [aux_sym_list_or_pair_repeat1] = STATE(35),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_dot] = ACTIONS(83),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [22] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(37),
    [aux_sym_list_or_pair_repeat1] = STATE(37),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_dot] = ACTIONS(87),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [23] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(89),
  },
  [24] = {
    [anon_sym_LPAREN] = ACTIONS(91),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_true_lit] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_symbol] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_false_lit] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
  },
  [25] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(33),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [26] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_dot] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [27] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(33),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [28] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_dot] = ACTIONS(97),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [29] = {
    [sym_list_or_pair] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(11),
    [sym_datum] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym_quoted_datum] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_true_lit] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_symbol] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(119),
    [sym_false_lit] = ACTIONS(110),
    [sym_number] = ACTIONS(116),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_false_lit] = ACTIONS(77),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_dot] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_true_lit] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
  },
  [31] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(37),
    [aux_sym_list_or_pair_repeat1] = STATE(37),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_dot] = ACTIONS(87),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [32] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_symbol] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_false_lit] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_dot] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_true_lit] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
  },
  [34] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_dot] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [35] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_dot] = ACTIONS(97),
    [sym_true_lit] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_false_lit] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(126),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [sym_true_lit] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [sym_symbol] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_false_lit] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
  },
  [37] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(37),
    [aux_sym_list_or_pair_repeat1] = STATE(37),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_dot] = ACTIONS(141),
    [sym_true_lit] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_symbol] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_false_lit] = ACTIONS(144),
    [sym_number] = ACTIONS(150),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(156),
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [sym_true_lit] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [sym_symbol] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_false_lit] = ACTIONS(156),
    [sym_number] = ACTIONS(158),
  },
  [39] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(39),
    [aux_sym_list_or_pair_repeat1] = STATE(39),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [sym_dot] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(139),
    [sym_true_lit] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_symbol] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_false_lit] = ACTIONS(144),
    [sym_number] = ACTIONS(150),
  },
  [40] = {
    [sym_list_or_pair] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_string] = STATE(20),
    [sym_datum] = STATE(40),
    [aux_sym_list_or_pair_repeat1] = STATE(40),
    [sym_quoted_datum] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [sym_dot] = ACTIONS(169),
    [sym_true_lit] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_symbol] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_false_lit] = ACTIONS(144),
    [sym_number] = ACTIONS(150),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [sym_symbol] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_false_lit] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(126),
    [sym_dot] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(126),
    [sym_true_lit] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [sym_symbol] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_false_lit] = ACTIONS(156),
    [sym_number] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(156),
    [sym_dot] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_true_lit] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_lang_line, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = false}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = false}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = false}, SHIFT(23),
  [51] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = false}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_datum, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = false}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = false}, SHIFT(31),
  [75] = {.count = 1, .reusable = false}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(34),
  [83] = {.count = 1, .reusable = false}, SHIFT(35),
  [85] = {.count = 1, .reusable = true}, SHIFT(36),
  [87] = {.count = 1, .reusable = false}, SHIFT(37),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_datum, 2),
  [95] = {.count = 1, .reusable = false}, SHIFT(39),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.count = 1, .reusable = true}, SHIFT(41),
  [124] = {.count = 1, .reusable = true}, SHIFT(42),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_list_or_pair, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_list_or_pair, 3),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(14),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(15),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(16),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(37),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(18),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(19),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(20),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(21),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(25),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(39),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(27),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_or_pair_repeat1, 2), SHIFT_REPEAT(40),
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
