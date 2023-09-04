#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_COLON = 2,
  anon_sym_SEMI = 3,
  anon_sym_GT_GT = 4,
  sym_node_name = 5,
  sym_number = 6,
  sym_beat_pattern = 7,
  sym_reference_pointer = 8,
  anon_sym_BSLASH = 9,
  aux_sym_symbol_token1 = 10,
  anon_sym_POUND_POUND = 11,
  aux_sym_js_code_token1 = 12,
  anon_sym_POUND = 13,
  anon_sym_BQUOTE = 14,
  aux_sym_rhai_code_token1 = 15,
  aux_sym_reference_token1 = 16,
  sym__newline = 17,
  sym_document = 18,
  sym_line = 19,
  sym_chain = 20,
  sym_node = 21,
  sym__application = 22,
  aux_sym__argument = 23,
  sym_symbol = 24,
  sym_js_code = 25,
  sym_rhai_code = 26,
  sym_reference = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_chain_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_GT_GT] = ">>",
  [sym_node_name] = "node_name",
  [sym_number] = "number",
  [sym_beat_pattern] = "beat_pattern",
  [sym_reference_pointer] = "reference_pointer",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_POUND_POUND] = "##",
  [aux_sym_js_code_token1] = "js_code_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_rhai_code_token1] = "rhai_code_token1",
  [aux_sym_reference_token1] = "reference_token1",
  [sym__newline] = "_newline",
  [sym_document] = "document",
  [sym_line] = "line",
  [sym_chain] = "chain",
  [sym_node] = "node",
  [sym__application] = "_application",
  [aux_sym__argument] = "_argument",
  [sym_symbol] = "symbol",
  [sym_js_code] = "js_code",
  [sym_rhai_code] = "rhai_code",
  [sym_reference] = "reference",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_chain_repeat1] = "chain_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_node_name] = sym_node_name,
  [sym_number] = sym_number,
  [sym_beat_pattern] = sym_beat_pattern,
  [sym_reference_pointer] = sym_reference_pointer,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [aux_sym_js_code_token1] = aux_sym_js_code_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_rhai_code_token1] = aux_sym_rhai_code_token1,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym__newline] = sym__newline,
  [sym_document] = sym_document,
  [sym_line] = sym_line,
  [sym_chain] = sym_chain,
  [sym_node] = sym_node,
  [sym__application] = sym__application,
  [aux_sym__argument] = aux_sym__argument,
  [sym_symbol] = sym_symbol,
  [sym_js_code] = sym_js_code,
  [sym_rhai_code] = sym_rhai_code,
  [sym_reference] = sym_reference,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_chain_repeat1] = aux_sym_chain_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_beat_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_js_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rhai_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__argument] = {
    .visible = false,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_js_code] = {
    .visible = true,
    .named = true,
  },
  [sym_rhai_code] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chain_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == '~') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == '~') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '~') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '_' ||
          lookahead == '~') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == '~') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_node_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_beat_pattern);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_beat_pattern);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_beat_pattern);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_beat_pattern);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_beat_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_reference_pointer);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_reference_pointer);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_reference_pointer);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_js_code_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_js_code_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_js_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_js_code_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_rhai_code_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_rhai_code_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_rhai_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_rhai_code_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_node_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_reference_pointer] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [sym_line] = STATE(8),
    [sym_reference] = STATE(28),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_reference_token1] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
  },
  [2] = {
    [aux_sym__argument] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_js_code] = STATE(2),
    [sym_rhai_code] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_beat_pattern] = ACTIONS(16),
    [sym_reference_pointer] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(22),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [aux_sym_reference_token1] = ACTIONS(28),
    [sym__newline] = ACTIONS(11),
  },
  [3] = {
    [aux_sym__argument] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_js_code] = STATE(2),
    [sym_rhai_code] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_GT_GT] = ACTIONS(30),
    [sym_number] = ACTIONS(32),
    [sym_beat_pattern] = ACTIONS(34),
    [sym_reference_pointer] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(36),
    [anon_sym_POUND_POUND] = ACTIONS(38),
    [anon_sym_BQUOTE] = ACTIONS(40),
    [aux_sym_reference_token1] = ACTIONS(42),
    [sym__newline] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      sym_beat_pattern,
      aux_sym_reference_token1,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      sym_number,
      sym_reference_pointer,
      anon_sym_BSLASH,
      anon_sym_POUND_POUND,
      anon_sym_BQUOTE,
      sym__newline,
  [19] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      sym_beat_pattern,
      aux_sym_reference_token1,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      sym_number,
      sym_reference_pointer,
      anon_sym_BSLASH,
      anon_sym_POUND_POUND,
      anon_sym_BQUOTE,
      sym__newline,
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      sym_beat_pattern,
      aux_sym_reference_token1,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      sym_number,
      sym_reference_pointer,
      anon_sym_BSLASH,
      anon_sym_POUND_POUND,
      anon_sym_BQUOTE,
      sym__newline,
  [57] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_BSLASH,
    ACTIONS(38), 1,
      anon_sym_POUND_POUND,
    ACTIONS(40), 1,
      anon_sym_BQUOTE,
    ACTIONS(58), 1,
      sym_beat_pattern,
    ACTIONS(56), 2,
      sym_number,
      sym_reference_pointer,
    STATE(3), 4,
      aux_sym__argument,
      sym_symbol,
      sym_js_code,
      sym_rhai_code,
  [83] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_reference_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym__newline,
    STATE(28), 1,
      sym_reference,
    STATE(11), 2,
      sym_line,
      aux_sym_document_repeat1,
  [103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_GT_GT,
    ACTIONS(68), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_chain_repeat1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_reference_token1,
  [121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT_GT,
    ACTIONS(76), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_chain_repeat1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_reference_token1,
  [139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_reference_token1,
    ACTIONS(84), 1,
      sym__newline,
    STATE(28), 1,
      sym_reference,
    STATE(11), 2,
      sym_line,
      aux_sym_document_repeat1,
  [159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_chain_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_reference_token1,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      aux_sym_reference_token1,
      sym__newline,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      aux_sym_reference_token1,
      sym__newline,
  [199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_node_name,
    ACTIONS(98), 1,
      sym_reference_pointer,
    STATE(9), 1,
      sym_node,
    STATE(13), 1,
      sym__application,
    STATE(17), 1,
      sym_chain,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_GT_GT,
      aux_sym_reference_token1,
      sym__newline,
  [229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      aux_sym_reference_token1,
      sym__newline,
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_node_name,
    ACTIONS(98), 1,
      sym_reference_pointer,
    STATE(13), 1,
      sym__application,
    STATE(14), 1,
      sym_node,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_node_name,
    ACTIONS(98), 1,
      sym_reference_pointer,
    STATE(13), 1,
      sym__application,
    STATE(16), 1,
      sym_node,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      aux_sym_reference_token1,
      sym__newline,
  [282] = 2,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_rhai_code_token1,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_BQUOTE,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_GT_GT,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_POUND,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [317] = 2,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_js_code_token1,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 273,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 296,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 317,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument, 2), SHIFT_REPEAT(2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument, 2), SHIFT_REPEAT(27),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument, 2), SHIFT_REPEAT(26),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__argument, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhai_code, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rhai_code, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_code, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_code, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_chain, 1), SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chain_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_repeat1, 2), SHIFT_REPEAT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_chain, 2), SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chain_repeat1, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_glicol(void) {
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
