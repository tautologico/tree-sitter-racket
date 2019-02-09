#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 14
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_POUNDlang = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_token1 = 3,
  anon_sym_SQUOTE = 4,
  sym_identifier = 5,
  sym_number = 6,
  sym__comment = 7,
  sym_source_file = 8,
  sym_lang_line = 9,
  sym_datum = 10,
  sym_string = 11,
  sym_quoted_datum = 12,
  aux_sym_source_file_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDlang] = "#lang",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym_lang_line] = "lang_line",
  [sym_datum] = "datum",
  [sym_string] = "string",
  [sym_quoted_datum] = "quoted_datum",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_datum] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'g')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 12:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ';')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n')
        ADVANCE(16);
      if (lookahead == '"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_lang_line] = STATE(4),
    [anon_sym_POUNDlang] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_identifier] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [sym_string] = STATE(6),
    [sym_quoted_datum] = STATE(6),
    [sym_datum] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(11),
  },
  [5] = {
    [sym_identifier] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(19),
  },
  [6] = {
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(21),
  },
  [7] = {
    [aux_sym_string_token1] = ACTIONS(23),
    [sym__comment] = ACTIONS(25),
  },
  [8] = {
    [sym_datum] = STATE(11),
    [sym_string] = STATE(6),
    [sym_quoted_datum] = STATE(6),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(11),
  },
  [9] = {
    [sym_string] = STATE(6),
    [sym_quoted_datum] = STATE(6),
    [sym_datum] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(11),
  },
  [10] = {
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_identifier] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(31),
  },
  [12] = {
    [sym_string] = STATE(6),
    [sym_quoted_datum] = STATE(6),
    [sym_datum] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(33),
  },
  [13] = {
    [sym_identifier] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [sym__comment] = ACTIONS(3),
    [sym_number] = ACTIONS(44),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
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
