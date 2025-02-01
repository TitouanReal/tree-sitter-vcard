#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_CR_LF = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  anon_sym_DOT = 4,
  anon_sym_SEMI = 5,
  anon_sym_COLON = 6,
  aux_sym_group_token1 = 7,
  sym_property_value = 8,
  anon_sym_EQ = 9,
  anon_sym_COMMA = 10,
  aux_sym_parameter_value_token1 = 11,
  aux_sym_parameter_value_token2 = 12,
  sym_source_file = 13,
  sym_crlf = 14,
  sym_property = 15,
  sym_group = 16,
  sym_property_name = 17,
  sym_parameter = 18,
  sym_parameter_name = 19,
  sym_parameter_value = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_source_file_repeat2 = 22,
  aux_sym_property_repeat1 = 23,
  aux_sym_parameter_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [aux_sym_group_token1] = "group_token1",
  [sym_property_value] = "property_value",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_parameter_value_token1] = "parameter_value_token1",
  [aux_sym_parameter_value_token2] = "parameter_value_token2",
  [sym_source_file] = "source_file",
  [sym_crlf] = "crlf",
  [sym_property] = "property",
  [sym_group] = "group",
  [sym_property_name] = "property_name",
  [sym_parameter] = "parameter",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_property_repeat1] = "property_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_group_token1] = aux_sym_group_token1,
  [sym_property_value] = sym_property_value,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_parameter_value_token1] = aux_sym_parameter_value_token1,
  [aux_sym_parameter_value_token2] = aux_sym_parameter_value_token2,
  [sym_source_file] = sym_source_file,
  [sym_crlf] = sym_crlf,
  [sym_property] = sym_property,
  [sym_group] = sym_group,
  [sym_property_name] = sym_property_name,
  [sym_parameter] = sym_parameter,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_crlf] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [10] = 6,
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
  [24] = 16,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 18,
  [39] = 17,
  [40] = 19,
  [41] = 37,
  [42] = 36,
  [43] = 32,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 52,
  [57] = 53,
  [58] = 58,
  [59] = 55,
  [60] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '=') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (lookahead > ' ' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead > 0x1f) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead > 0x1f &&
          lookahead != '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_parameter_value_token1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_parameter_value_token1);
      if (lookahead > 0x1f &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_parameter_value_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_group_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_parameter_value_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_crlf] = STATE(2),
    [sym_property] = STATE(9),
    [sym_group] = STATE(50),
    [sym_property_name] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(12),
    [anon_sym_CR_LF] = ACTIONS(3),
    [anon_sym_CR] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_group_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_group_token1,
    STATE(8), 1,
      sym_property,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(37), 1,
      sym_property_name,
    STATE(50), 1,
      sym_group,
    STATE(10), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [25] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_group_token1,
    STATE(6), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [41] = 4,
    ACTIONS(11), 1,
      aux_sym_group_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [57] = 4,
    ACTIONS(11), 1,
      aux_sym_group_token1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [73] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      aux_sym_group_token1,
    STATE(6), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [89] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [102] = 3,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [115] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [128] = 3,
    ACTIONS(22), 1,
      aux_sym_group_token1,
    STATE(10), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [141] = 3,
    ACTIONS(11), 1,
      aux_sym_group_token1,
    STATE(10), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [154] = 5,
    ACTIONS(29), 1,
      aux_sym_group_token1,
    STATE(8), 1,
      sym_property,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(37), 1,
      sym_property_name,
    STATE(50), 1,
      sym_group,
  [170] = 2,
    STATE(11), 2,
      sym_crlf,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [180] = 5,
    ACTIONS(29), 1,
      aux_sym_group_token1,
    STATE(7), 1,
      sym_property,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(37), 1,
      sym_property_name,
    STATE(50), 1,
      sym_group,
  [196] = 5,
    ACTIONS(31), 1,
      aux_sym_group_token1,
    STATE(13), 1,
      sym_property,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(41), 1,
      sym_property_name,
    STATE(60), 1,
      sym_group,
  [212] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 4,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_group_token1,
  [222] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [231] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [240] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [249] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [260] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [269] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(58), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [280] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(60), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [291] = 1,
    ACTIONS(36), 4,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_group_token1,
  [298] = 1,
    ACTIONS(56), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [304] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_property_repeat1,
  [314] = 2,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [322] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_property_repeat1,
  [332] = 3,
    ACTIONS(75), 1,
      aux_sym_parameter_value_token1,
    ACTIONS(77), 1,
      aux_sym_parameter_value_token2,
    STATE(20), 1,
      sym_parameter_value,
  [342] = 3,
    ACTIONS(79), 1,
      aux_sym_group_token1,
    STATE(44), 1,
      sym_parameter,
    STATE(58), 1,
      sym_parameter_name,
  [352] = 1,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [358] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(28), 1,
      aux_sym_property_repeat1,
  [368] = 3,
    ACTIONS(75), 1,
      aux_sym_parameter_value_token1,
    ACTIONS(77), 1,
      aux_sym_parameter_value_token2,
    STATE(35), 1,
      sym_parameter_value,
  [378] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_property_repeat1,
  [388] = 1,
    ACTIONS(60), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [394] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_property_repeat1,
  [404] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      anon_sym_COLON,
    STATE(36), 1,
      aux_sym_property_repeat1,
  [414] = 1,
    ACTIONS(44), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [420] = 1,
    ACTIONS(40), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [426] = 1,
    ACTIONS(48), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [432] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_COLON,
    STATE(42), 1,
      aux_sym_property_repeat1,
  [442] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_property_repeat1,
  [452] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_property_repeat1,
  [462] = 1,
    ACTIONS(88), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [467] = 1,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [472] = 2,
    ACTIONS(100), 1,
      aux_sym_group_token1,
    STATE(32), 1,
      sym_property_name,
  [479] = 2,
    ACTIONS(100), 1,
      aux_sym_group_token1,
    STATE(43), 1,
      sym_property_name,
  [486] = 1,
    ACTIONS(102), 1,
      sym_property_value,
  [490] = 1,
    ACTIONS(104), 1,
      anon_sym_EQ,
  [494] = 1,
    ACTIONS(106), 1,
      anon_sym_DOT,
  [498] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [502] = 1,
    ACTIONS(110), 1,
      sym_property_value,
  [506] = 1,
    ACTIONS(112), 1,
      sym_property_value,
  [510] = 1,
    ACTIONS(114), 1,
      sym_property_value,
  [514] = 1,
    ACTIONS(116), 1,
      sym_property_value,
  [518] = 1,
    ACTIONS(118), 1,
      sym_property_value,
  [522] = 1,
    ACTIONS(120), 1,
      sym_property_value,
  [526] = 1,
    ACTIONS(122), 1,
      anon_sym_EQ,
  [530] = 1,
    ACTIONS(124), 1,
      sym_property_value,
  [534] = 1,
    ACTIONS(126), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 322,
  [SMALL_STATE(29)] = 332,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 358,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 378,
  [SMALL_STATE(35)] = 388,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 404,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 420,
  [SMALL_STATE(40)] = 426,
  [SMALL_STATE(41)] = 432,
  [SMALL_STATE(42)] = 442,
  [SMALL_STATE(43)] = 452,
  [SMALL_STATE(44)] = 462,
  [SMALL_STATE(45)] = 467,
  [SMALL_STATE(46)] = 472,
  [SMALL_STATE(47)] = 479,
  [SMALL_STATE(48)] = 486,
  [SMALL_STATE(49)] = 490,
  [SMALL_STATE(50)] = 494,
  [SMALL_STATE(51)] = 498,
  [SMALL_STATE(52)] = 502,
  [SMALL_STATE(53)] = 506,
  [SMALL_STATE(54)] = 510,
  [SMALL_STATE(55)] = 514,
  [SMALL_STATE(56)] = 518,
  [SMALL_STATE(57)] = 522,
  [SMALL_STATE(58)] = 526,
  [SMALL_STATE(59)] = 530,
  [SMALL_STATE(60)] = 534,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_crlf, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_crlf, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vcard(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
