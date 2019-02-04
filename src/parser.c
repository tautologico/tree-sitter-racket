#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 11
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  anon_sym_POUNDlang = 1,
  sym_identifier = 2,
  anon_sym_SQUOTE = 3,
  sym_number = 4,
  sym_source_file = 5,
  sym_lang_line = 6,
  sym_datum = 7,
  sym_quoted_datum = 8,
  aux_sym_source_file_repeat1 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDlang] = "#lang",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_lang_line] = "lang_line",
  [sym_datum] = "datum",
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
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
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'l')
        ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'n')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'g')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 10:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_identifier] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUNDlang] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_lang_line] = STATE(4),
    [anon_sym_POUNDlang] = ACTIONS(3),
  },
  [2] = {
    [sym_identifier] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [4] = {
    [sym_datum] = STATE(8),
    [sym_quoted_datum] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_number] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [5] = {
    [sym_identifier] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [6] = {
    [sym_identifier] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [7] = {
    [sym_datum] = STATE(9),
    [sym_quoted_datum] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(9),
  },
  [8] = {
    [sym_datum] = STATE(10),
    [sym_quoted_datum] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_number] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [9] = {
    [sym_identifier] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
  },
  [10] = {
    [sym_datum] = STATE(10),
    [sym_quoted_datum] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_number] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(28),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
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
