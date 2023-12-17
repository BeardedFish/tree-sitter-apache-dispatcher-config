#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_function_name_token1 = 3,
  sym_number = 4,
  sym_string = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  aux_sym_property_name_token1 = 8,
  sym_source_file = 9,
  sym_comment = 10,
  sym_function_name = 11,
  sym_function = 12,
  sym_scoped_property = 13,
  sym_property_name = 14,
  sym_property = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_scoped_property_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_function_name_token1] = "function_name_token1",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_property_name_token1] = "property_name_token1",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_function_name] = "function_name",
  [sym_function] = "function",
  [sym_scoped_property] = "scoped_property",
  [sym_property_name] = "property_name",
  [sym_property] = "property",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scoped_property_repeat1] = "scoped_property_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_function_name_token1] = aux_sym_function_name_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_property_name_token1] = aux_sym_property_name_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_function_name] = sym_function_name,
  [sym_function] = sym_function,
  [sym_scoped_property] = sym_scoped_property,
  [sym_property_name] = sym_property_name,
  [sym_property] = sym_property,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scoped_property_repeat1] = aux_sym_scoped_property_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_property_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scoped_property_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function_parameter = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_parameter] = "function_parameter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_parameter, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_function_name_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_property_name_token1);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_function_name_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_property_name_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_comment] = STATE(3),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(3),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_function_name_token1] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [aux_sym_property_name_token1] = ACTIONS(11),
  },
  [2] = {
    [sym_comment] = STATE(13),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(13),
    [sym_scoped_property] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_function_name_token1] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(13),
    [aux_sym_property_name_token1] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = STATE(4),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(4),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_function_name_token1] = ACTIONS(7),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [aux_sym_property_name_token1] = ACTIONS(11),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(4),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [aux_sym_function_name_token1] = ACTIONS(28),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [aux_sym_property_name_token1] = ACTIONS(34),
  },
  [5] = {
    [sym_comment] = STATE(6),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(6),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(6),
    [aux_sym_scoped_property_repeat1] = STATE(6),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_function_name_token1] = ACTIONS(7),
    [sym_string] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(39),
    [aux_sym_property_name_token1] = ACTIONS(11),
  },
  [6] = {
    [sym_comment] = STATE(7),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(7),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(7),
    [aux_sym_scoped_property_repeat1] = STATE(7),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_function_name_token1] = ACTIONS(7),
    [sym_string] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(43),
    [aux_sym_property_name_token1] = ACTIONS(11),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_function_name] = STATE(10),
    [sym_function] = STATE(7),
    [sym_property_name] = STATE(2),
    [sym_property] = STATE(7),
    [aux_sym_scoped_property_repeat1] = STATE(7),
    [anon_sym_POUND] = ACTIONS(45),
    [aux_sym_function_name_token1] = ACTIONS(48),
    [sym_string] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(54),
    [aux_sym_property_name_token1] = ACTIONS(56),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [11] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [21] = 2,
    ACTIONS(65), 1,
      sym_string,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [33] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [43] = 1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [53] = 1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [63] = 1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [73] = 1,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_function_name_token1,
      sym_number,
      sym_string,
      anon_sym_RBRACE,
      aux_sym_property_name_token1,
  [83] = 1,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
  [87] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 11,
  [SMALL_STATE(10)] = 21,
  [SMALL_STATE(11)] = 33,
  [SMALL_STATE(12)] = 43,
  [SMALL_STATE(13)] = 53,
  [SMALL_STATE(14)] = 63,
  [SMALL_STATE(15)] = 73,
  [SMALL_STATE(16)] = 83,
  [SMALL_STATE(17)] = 87,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_property_repeat1, 2), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_property_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_property_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scoped_property_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scoped_property_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_property, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_property, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_apache_dispatcher_config(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
