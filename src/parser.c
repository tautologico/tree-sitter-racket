#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 11
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  anon_sym_POUNDlang = 1,
  anon_sym_SQUOTE = 2,
  sym_identifier = 3,
  sym_number = 4,
  sym__comment = 5,
  sym_source_file = 6,
  sym_lang_line = 7,
  sym_datum = 8,
  sym_quoted_datum = 9,
  aux_sym_source_file_repeat1 = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDlang] = "#lang",
  [anon_sym_SQUOTE] = "'",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__comment] = "_comment",
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
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(6);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'l')
        ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'n')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'g')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 11:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(3),
    [anon_sym_POUNDlang] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_lang_line] = STATE(4),
    [anon_sym_POUNDlang] = ACTIONS(5),
    [sym__comment] = ACTIONS(1),
  },
  [2] = {
    [sym__comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(7),
  },
  [3] = {
    [sym__comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [sym_datum] = STATE(8),
    [sym_quoted_datum] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
  },
  [5] = {
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [6] = {
    [sym_datum] = STATE(9),
    [sym_quoted_datum] = STATE(7),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
  },
  [7] = {
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_identifier] = ACTIONS(19),
  },
  [8] = {
    [sym_datum] = STATE(10),
    [sym_quoted_datum] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
  },
  [9] = {
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
  [10] = {
    [sym_datum] = STATE(10),
    [sym_quoted_datum] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_number] = ACTIONS(30),
    [sym_identifier] = ACTIONS(30),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_lang_line, 2),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_datum, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_datum, 2),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
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
