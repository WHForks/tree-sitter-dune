#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN = 1,
  aux_sym_ocaml_syntax_token1 = 2,
  anon_sym_DQUOTE = 3,
  sym_multiline_string = 4,
  sym__quoted_string_char = 5,
  sym__atom = 6,
  sym_named_variable = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_comment = 10,
  anon_sym_vendored_dirs = 11,
  anon_sym_ocamllex = 12,
  anon_sym_ocamlyacc = 13,
  anon_sym_include_subdirs = 14,
  anon_sym_test = 15,
  anon_sym_data_only_dirs = 16,
  anon_sym_cram = 17,
  anon_sym_dirs = 18,
  anon_sym_toplevel = 19,
  anon_sym_install = 20,
  anon_sym_documentation = 21,
  anon_sym_env = 22,
  anon_sym_modules = 23,
  anon_sym_alias = 24,
  anon_sym_name = 25,
  anon_sym_action = 26,
  anon_sym_subdir = 27,
  anon_sym_executable = 28,
  anon_sym_public_name = 29,
  anon_sym_libraries = 30,
  anon_sym_enabled_if = 31,
  anon_sym_re_export = 32,
  anon_sym_select = 33,
  anon_sym_rule = 34,
  anon_sym_mode = 35,
  anon_sym_target = 36,
  anon_sym_targets = 37,
  anon_sym_package = 38,
  anon_sym_fallback = 39,
  anon_sym_locks = 40,
  anon_sym_deps = 41,
  anon_sym_universe = 42,
  anon_sym_sandbox = 43,
  anon_sym_env_var = 44,
  anon_sym_alias_rec = 45,
  anon_sym_source_tree = 46,
  anon_sym_glob_files = 47,
  anon_sym_dir = 48,
  anon_sym_true = 49,
  anon_sym_false = 50,
  anon_sym_promote = 51,
  anon_sym_promote_DASHinto = 52,
  anon_sym_only = 53,
  anon_sym_into = 54,
  anon_sym_EQ = 55,
  anon_sym_LT_GT = 56,
  anon_sym_GT = 57,
  anon_sym_LT = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_or = 61,
  anon_sym_and = 62,
  anon_sym_bash = 63,
  anon_sym_cat = 64,
  anon_sym_cmp = 65,
  anon_sym_chdir = 66,
  anon_sym_copy = 67,
  anon_sym_copy_POUND = 68,
  anon_sym_diff = 69,
  anon_sym_diff_QMARK = 70,
  anon_sym_echo = 71,
  anon_sym_ignore_DASHstdout = 72,
  anon_sym_no_DASHinfer = 73,
  anon_sym_pipe_DASHoutputs = 74,
  anon_sym_progn = 75,
  anon_sym_run = 76,
  anon_sym_setenv = 77,
  anon_sym_system = 78,
  anon_sym_with_DASHaccepted_DASHexit_DASHcodes = 79,
  anon_sym_with_DASHoutputs_DASHto = 80,
  anon_sym_with_DASHstderr_DASHto = 81,
  anon_sym_with_DASHstdout_DASHto = 82,
  anon_sym_write_DASHfile = 83,
  anon_sym_library = 84,
  anon_sym_synopsis = 85,
  anon_sym_instrumentation = 86,
  anon_sym_wrapped = 87,
  anon_sym_transition = 88,
  anon_sym_kind = 89,
  anon_sym_ppx_DOTdriver = 90,
  sym_source_file = 91,
  sym_ocaml_syntax = 92,
  sym_sexp = 93,
  sym_sexps1 = 94,
  sym__atom_or_qs = 95,
  sym_quoted_string = 96,
  sym__list = 97,
  sym_stanza = 98,
  sym__field_modules_maybe_inline = 99,
  sym__stanza_alias = 100,
  sym__stanza_subdir = 101,
  sym__stanza_executable = 102,
  sym__field_buildable = 103,
  sym__modules_osl = 104,
  sym__lib_dep = 105,
  sym_library_name = 106,
  sym_public_name = 107,
  sym_module_name = 108,
  sym_file_name = 109,
  sym_file_name_dep = 110,
  sym_file_name_target = 111,
  sym_package_name = 112,
  sym_lock_name = 113,
  sym_shell_command = 114,
  sym__stanza_rule = 115,
  sym__deps_field = 116,
  sym__dep = 117,
  sym__target = 118,
  sym__bool = 119,
  sym__rule_mode = 120,
  sym__rule_mode_promote_field = 121,
  sym_blang = 122,
  sym_blang_op = 123,
  sym_alias_name = 124,
  sym_action = 125,
  sym__stanza_library = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_ocaml_syntax_repeat1 = 128,
  aux_sym_sexps1_repeat1 = 129,
  aux_sym_quoted_string_repeat1 = 130,
  aux_sym_stanza_repeat1 = 131,
  aux_sym_stanza_repeat2 = 132,
  aux_sym__field_modules_maybe_inline_repeat1 = 133,
  aux_sym__stanza_alias_repeat1 = 134,
  aux_sym__stanza_executable_repeat1 = 135,
  aux_sym__field_buildable_repeat1 = 136,
  aux_sym__stanza_rule_repeat1 = 137,
  aux_sym__stanza_rule_repeat2 = 138,
  aux_sym__stanza_rule_repeat3 = 139,
  aux_sym__stanza_rule_repeat4 = 140,
  aux_sym__deps_field_repeat1 = 141,
  aux_sym__dep_repeat1 = 142,
  aux_sym_blang_repeat1 = 143,
  aux_sym_action_repeat1 = 144,
  aux_sym__stanza_library_repeat1 = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = "(* -*- tuareg -*- *)",
  [aux_sym_ocaml_syntax_token1] = "ocaml_syntax_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_multiline_string] = "multiline_string",
  [sym__quoted_string_char] = "_quoted_string_char",
  [sym__atom] = "_atom",
  [sym_named_variable] = "named_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_vendored_dirs] = "stanza_name",
  [anon_sym_ocamllex] = "stanza_name",
  [anon_sym_ocamlyacc] = "stanza_name",
  [anon_sym_include_subdirs] = "stanza_name",
  [anon_sym_test] = "stanza_name",
  [anon_sym_data_only_dirs] = "stanza_name",
  [anon_sym_cram] = "stanza_name",
  [anon_sym_dirs] = "stanza_name",
  [anon_sym_toplevel] = "stanza_name",
  [anon_sym_install] = "stanza_name",
  [anon_sym_documentation] = "stanza_name",
  [anon_sym_env] = "stanza_name",
  [anon_sym_modules] = "field_name",
  [anon_sym_alias] = "alias",
  [anon_sym_name] = "field_name",
  [anon_sym_action] = "field_name",
  [anon_sym_subdir] = "stanza_name",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_public_name] = "field_name",
  [anon_sym_libraries] = "field_name",
  [anon_sym_enabled_if] = "field_name",
  [anon_sym_re_export] = "field_name",
  [anon_sym_select] = "field_name",
  [anon_sym_rule] = "stanza_name",
  [anon_sym_mode] = "field_name",
  [anon_sym_target] = "field_name",
  [anon_sym_targets] = "field_name",
  [anon_sym_package] = "package",
  [anon_sym_fallback] = "fallback",
  [anon_sym_locks] = "field_name",
  [anon_sym_deps] = "field_name",
  [anon_sym_universe] = "universe",
  [anon_sym_sandbox] = "sandbox",
  [anon_sym_env_var] = "env_var",
  [anon_sym_alias_rec] = "alias_rec",
  [anon_sym_source_tree] = "source_tree",
  [anon_sym_glob_files] = "glob_files",
  [anon_sym_dir] = "dir",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_promote] = "promote",
  [anon_sym_promote_DASHinto] = "field_name",
  [anon_sym_only] = "field_name",
  [anon_sym_into] = "field_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_bash] = "action_name",
  [anon_sym_cat] = "action_name",
  [anon_sym_cmp] = "action_name",
  [anon_sym_chdir] = "action_name",
  [anon_sym_copy] = "action_name",
  [anon_sym_copy_POUND] = "action_name",
  [anon_sym_diff] = "action_name",
  [anon_sym_diff_QMARK] = "action_name",
  [anon_sym_echo] = "action_name",
  [anon_sym_ignore_DASHstdout] = "action_name",
  [anon_sym_no_DASHinfer] = "action_name",
  [anon_sym_pipe_DASHoutputs] = "action_name",
  [anon_sym_progn] = "action_name",
  [anon_sym_run] = "action_name",
  [anon_sym_setenv] = "action_name",
  [anon_sym_system] = "action_name",
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = "action_name",
  [anon_sym_with_DASHoutputs_DASHto] = "action_name",
  [anon_sym_with_DASHstderr_DASHto] = "action_name",
  [anon_sym_with_DASHstdout_DASHto] = "action_name",
  [anon_sym_write_DASHfile] = "action_name",
  [anon_sym_library] = "stanza_name",
  [anon_sym_synopsis] = "field_name",
  [anon_sym_instrumentation] = "field_name",
  [anon_sym_wrapped] = "field_name",
  [anon_sym_transition] = "field_name",
  [anon_sym_kind] = "field_name",
  [anon_sym_ppx_DOTdriver] = "field_name",
  [sym_source_file] = "source_file",
  [sym_ocaml_syntax] = "ocaml_syntax",
  [sym_sexp] = "sexp",
  [sym_sexps1] = "sexps1",
  [sym__atom_or_qs] = "_atom_or_qs",
  [sym_quoted_string] = "quoted_string",
  [sym__list] = "_list",
  [sym_stanza] = "stanza",
  [sym__field_modules_maybe_inline] = "_field_modules_maybe_inline",
  [sym__stanza_alias] = "_stanza_alias",
  [sym__stanza_subdir] = "_stanza_subdir",
  [sym__stanza_executable] = "_stanza_executable",
  [sym__field_buildable] = "_field_buildable",
  [sym__modules_osl] = "_modules_osl",
  [sym__lib_dep] = "_lib_dep",
  [sym_library_name] = "library_name",
  [sym_public_name] = "public_name",
  [sym_module_name] = "module_name",
  [sym_file_name] = "file_name",
  [sym_file_name_dep] = "file_name_dep",
  [sym_file_name_target] = "file_name_target",
  [sym_package_name] = "package_name",
  [sym_lock_name] = "lock_name",
  [sym_shell_command] = "shell_command",
  [sym__stanza_rule] = "_stanza_rule",
  [sym__deps_field] = "_deps_field",
  [sym__dep] = "_dep",
  [sym__target] = "_target",
  [sym__bool] = "_bool",
  [sym__rule_mode] = "_rule_mode",
  [sym__rule_mode_promote_field] = "_rule_mode_promote_field",
  [sym_blang] = "blang",
  [sym_blang_op] = "blang_op",
  [sym_alias_name] = "alias_name",
  [sym_action] = "action",
  [sym__stanza_library] = "_stanza_library",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ocaml_syntax_repeat1] = "ocaml_syntax_repeat1",
  [aux_sym_sexps1_repeat1] = "sexps1_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_stanza_repeat1] = "stanza_repeat1",
  [aux_sym_stanza_repeat2] = "stanza_repeat2",
  [aux_sym__field_modules_maybe_inline_repeat1] = "_field_modules_maybe_inline_repeat1",
  [aux_sym__stanza_alias_repeat1] = "_stanza_alias_repeat1",
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__field_buildable_repeat1] = "_field_buildable_repeat1",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [aux_sym__stanza_rule_repeat2] = "_stanza_rule_repeat2",
  [aux_sym__stanza_rule_repeat3] = "_stanza_rule_repeat3",
  [aux_sym__stanza_rule_repeat4] = "_stanza_rule_repeat4",
  [aux_sym__deps_field_repeat1] = "_deps_field_repeat1",
  [aux_sym__dep_repeat1] = "_dep_repeat1",
  [aux_sym_blang_repeat1] = "blang_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym__stanza_library_repeat1] = "_stanza_library_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN,
  [aux_sym_ocaml_syntax_token1] = aux_sym_ocaml_syntax_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_multiline_string] = sym_multiline_string,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [sym__atom] = sym__atom,
  [sym_named_variable] = sym_named_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_vendored_dirs] = anon_sym_vendored_dirs,
  [anon_sym_ocamllex] = anon_sym_vendored_dirs,
  [anon_sym_ocamlyacc] = anon_sym_vendored_dirs,
  [anon_sym_include_subdirs] = anon_sym_vendored_dirs,
  [anon_sym_test] = anon_sym_vendored_dirs,
  [anon_sym_data_only_dirs] = anon_sym_vendored_dirs,
  [anon_sym_cram] = anon_sym_vendored_dirs,
  [anon_sym_dirs] = anon_sym_vendored_dirs,
  [anon_sym_toplevel] = anon_sym_vendored_dirs,
  [anon_sym_install] = anon_sym_vendored_dirs,
  [anon_sym_documentation] = anon_sym_vendored_dirs,
  [anon_sym_env] = anon_sym_vendored_dirs,
  [anon_sym_modules] = anon_sym_modules,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_name] = anon_sym_modules,
  [anon_sym_action] = anon_sym_modules,
  [anon_sym_subdir] = anon_sym_vendored_dirs,
  [anon_sym_executable] = anon_sym_vendored_dirs,
  [anon_sym_public_name] = anon_sym_modules,
  [anon_sym_libraries] = anon_sym_modules,
  [anon_sym_enabled_if] = anon_sym_modules,
  [anon_sym_re_export] = anon_sym_modules,
  [anon_sym_select] = anon_sym_modules,
  [anon_sym_rule] = anon_sym_vendored_dirs,
  [anon_sym_mode] = anon_sym_modules,
  [anon_sym_target] = anon_sym_modules,
  [anon_sym_targets] = anon_sym_modules,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_locks] = anon_sym_modules,
  [anon_sym_deps] = anon_sym_modules,
  [anon_sym_universe] = anon_sym_universe,
  [anon_sym_sandbox] = anon_sym_sandbox,
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_alias_rec] = anon_sym_alias_rec,
  [anon_sym_source_tree] = anon_sym_source_tree,
  [anon_sym_glob_files] = anon_sym_glob_files,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_promote] = anon_sym_promote,
  [anon_sym_promote_DASHinto] = anon_sym_modules,
  [anon_sym_only] = anon_sym_modules,
  [anon_sym_into] = anon_sym_modules,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_cat] = anon_sym_bash,
  [anon_sym_cmp] = anon_sym_bash,
  [anon_sym_chdir] = anon_sym_bash,
  [anon_sym_copy] = anon_sym_bash,
  [anon_sym_copy_POUND] = anon_sym_bash,
  [anon_sym_diff] = anon_sym_bash,
  [anon_sym_diff_QMARK] = anon_sym_bash,
  [anon_sym_echo] = anon_sym_bash,
  [anon_sym_ignore_DASHstdout] = anon_sym_bash,
  [anon_sym_no_DASHinfer] = anon_sym_bash,
  [anon_sym_pipe_DASHoutputs] = anon_sym_bash,
  [anon_sym_progn] = anon_sym_bash,
  [anon_sym_run] = anon_sym_bash,
  [anon_sym_setenv] = anon_sym_bash,
  [anon_sym_system] = anon_sym_bash,
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = anon_sym_bash,
  [anon_sym_with_DASHoutputs_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstderr_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstdout_DASHto] = anon_sym_bash,
  [anon_sym_write_DASHfile] = anon_sym_bash,
  [anon_sym_library] = anon_sym_vendored_dirs,
  [anon_sym_synopsis] = anon_sym_modules,
  [anon_sym_instrumentation] = anon_sym_modules,
  [anon_sym_wrapped] = anon_sym_modules,
  [anon_sym_transition] = anon_sym_modules,
  [anon_sym_kind] = anon_sym_modules,
  [anon_sym_ppx_DOTdriver] = anon_sym_modules,
  [sym_source_file] = sym_source_file,
  [sym_ocaml_syntax] = sym_ocaml_syntax,
  [sym_sexp] = sym_sexp,
  [sym_sexps1] = sym_sexps1,
  [sym__atom_or_qs] = sym__atom_or_qs,
  [sym_quoted_string] = sym_quoted_string,
  [sym__list] = sym__list,
  [sym_stanza] = sym_stanza,
  [sym__field_modules_maybe_inline] = sym__field_modules_maybe_inline,
  [sym__stanza_alias] = sym__stanza_alias,
  [sym__stanza_subdir] = sym__stanza_subdir,
  [sym__stanza_executable] = sym__stanza_executable,
  [sym__field_buildable] = sym__field_buildable,
  [sym__modules_osl] = sym__modules_osl,
  [sym__lib_dep] = sym__lib_dep,
  [sym_library_name] = sym_library_name,
  [sym_public_name] = sym_public_name,
  [sym_module_name] = sym_module_name,
  [sym_file_name] = sym_file_name,
  [sym_file_name_dep] = sym_file_name_dep,
  [sym_file_name_target] = sym_file_name_target,
  [sym_package_name] = sym_package_name,
  [sym_lock_name] = sym_lock_name,
  [sym_shell_command] = sym_shell_command,
  [sym__stanza_rule] = sym__stanza_rule,
  [sym__deps_field] = sym__deps_field,
  [sym__dep] = sym__dep,
  [sym__target] = sym__target,
  [sym__bool] = sym__bool,
  [sym__rule_mode] = sym__rule_mode,
  [sym__rule_mode_promote_field] = sym__rule_mode_promote_field,
  [sym_blang] = sym_blang,
  [sym_blang_op] = sym_blang_op,
  [sym_alias_name] = sym_alias_name,
  [sym_action] = sym_action,
  [sym__stanza_library] = sym__stanza_library,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ocaml_syntax_repeat1] = aux_sym_ocaml_syntax_repeat1,
  [aux_sym_sexps1_repeat1] = aux_sym_sexps1_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_stanza_repeat1] = aux_sym_stanza_repeat1,
  [aux_sym_stanza_repeat2] = aux_sym_stanza_repeat2,
  [aux_sym__field_modules_maybe_inline_repeat1] = aux_sym__field_modules_maybe_inline_repeat1,
  [aux_sym__stanza_alias_repeat1] = aux_sym__stanza_alias_repeat1,
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__field_buildable_repeat1] = aux_sym__field_buildable_repeat1,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [aux_sym__stanza_rule_repeat2] = aux_sym__stanza_rule_repeat2,
  [aux_sym__stanza_rule_repeat3] = aux_sym__stanza_rule_repeat3,
  [aux_sym__stanza_rule_repeat4] = aux_sym__stanza_rule_repeat4,
  [aux_sym__deps_field_repeat1] = aux_sym__deps_field_repeat1,
  [aux_sym__dep_repeat1] = aux_sym__dep_repeat1,
  [aux_sym_blang_repeat1] = aux_sym_blang_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym__stanza_library_repeat1] = aux_sym__stanza_library_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ocaml_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_named_variable] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vendored_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamllex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamlyacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include_subdirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_data_only_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cram] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_modules] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_libraries] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enabled_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_re_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_targets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_universe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sandbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote_DASHinto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_chdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore_DASHstdout] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHinfer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pipe_DASHoutputs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHoutputs_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstderr_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstdout_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_write_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_instrumentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wrapped] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_transition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_kind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ppx_DOTdriver] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym_sexps1] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_or_qs] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_stanza] = {
    .visible = true,
    .named = true,
  },
  [sym__field_modules_maybe_inline] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_subdir] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_executable] = {
    .visible = false,
    .named = true,
  },
  [sym__field_buildable] = {
    .visible = false,
    .named = true,
  },
  [sym__modules_osl] = {
    .visible = false,
    .named = true,
  },
  [sym__lib_dep] = {
    .visible = false,
    .named = true,
  },
  [sym_library_name] = {
    .visible = true,
    .named = true,
  },
  [sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_dep] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_target] = {
    .visible = true,
    .named = true,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__deps_field] = {
    .visible = false,
    .named = true,
  },
  [sym__dep] = {
    .visible = false,
    .named = true,
  },
  [sym__target] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode_promote_field] = {
    .visible = false,
    .named = true,
  },
  [sym_blang] = {
    .visible = true,
    .named = true,
  },
  [sym_blang_op] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_library] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocaml_syntax_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexps1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_modules_maybe_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_executable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_buildable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deps_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blang_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_library_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_sym_vendored_dirs,
  },
  [2] = {
    [1] = anon_sym_modules,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 25,
  [31] = 26,
  [32] = 18,
  [33] = 19,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 39,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 34,
  [50] = 50,
  [51] = 47,
  [52] = 48,
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
  [74] = 68,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 70,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 98,
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 106,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 123,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 138,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 134,
  [152] = 152,
  [153] = 153,
  [154] = 131,
  [155] = 130,
  [156] = 156,
  [157] = 139,
  [158] = 158,
  [159] = 159,
  [160] = 129,
  [161] = 161,
  [162] = 125,
  [163] = 141,
  [164] = 114,
  [165] = 165,
  [166] = 166,
  [167] = 148,
  [168] = 113,
  [169] = 109,
  [170] = 107,
  [171] = 122,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 145,
  [179] = 179,
  [180] = 180,
  [181] = 143,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 193,
  [198] = 191,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(429);
      ADVANCE_MAP(
        '"', 434,
        '(', 629,
        ')', 630,
        ':', 425,
        ';', 631,
        '<', 703,
        '=', 700,
        '>', 702,
        'a', 86,
        'b', 43,
        'c', 49,
        'd', 52,
        'e', 88,
        'f', 47,
        'g', 230,
        'i', 185,
        'k', 196,
        'l', 194,
        'm', 283,
        'n', 44,
        'o', 97,
        'p', 54,
        'r', 126,
        's', 71,
        't', 45,
        'u', 260,
        'v', 175,
        'w', 197,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 434,
        '(', 628,
        ')', 630,
        ';', 631,
        'a', 527,
        'c', 571,
        'd', 444,
        'e', 544,
        'i', 545,
        'l', 508,
        'o', 473,
        'r', 609,
        's', 610,
        't', 487,
        'v', 493,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '(') ADVANCE(628);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == ';') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 434,
        '(', 628,
        ')', 630,
        ';', 631,
        'e', 556,
        'i', 553,
        'k', 516,
        'l', 523,
        'm', 562,
        'n', 454,
        'p', 565,
        's', 624,
        'w', 583,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 434,
        '(', 628,
        ')', 630,
        ';', 631,
        'e', 556,
        'l', 523,
        'm', 562,
        'n', 454,
        'p', 613,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(433);
      if (lookahead == ';') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(436);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '(', 628,
        ')', 630,
        ';', 631,
        'a', 87,
        'b', 43,
        'c', 48,
        'd', 143,
        'e', 89,
        'f', 47,
        'i', 184,
        'l', 282,
        'm', 298,
        'n', 274,
        'p', 55,
        'r', 401,
        's', 171,
        't', 46,
        'w', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(430);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(115);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ':', 425,
        ';', 631,
        'a', 229,
        'e', 262,
        'g', 230,
        'p', 53,
        's', 72,
        'u', 260,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(423);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(414);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(388);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(653);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(284);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(707);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(714);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(672);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(708);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(729);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(682);
      END_STATE();
    case 223:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 224:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(644);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(710);
      END_STATE();
    case 303:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(717);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 404:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 405:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 406:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 407:
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 408:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 409:
      if (lookahead == 'v') ADVANCE(722);
      END_STATE();
    case 410:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 411:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 412:
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 413:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 414:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 415:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 416:
      if (lookahead == 'x') ADVANCE(687);
      END_STATE();
    case 417:
      if (lookahead == 'x') ADVANCE(634);
      END_STATE();
    case 418:
      if (lookahead == 'x') ADVANCE(309);
      END_STATE();
    case 419:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 420:
      if (lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 421:
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 422:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 423:
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(1);
      END_STATE();
    case 424:
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 425:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(627);
      END_STATE();
    case 426:
      if (eof) ADVANCE(429);
      if (lookahead == '\n') SKIP(426);
      if (lookahead == ';') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(431);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 427:
      if (eof) ADVANCE(429);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '(') ADVANCE(629);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == ';') ADVANCE(631);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(427);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 428:
      if (eof) ADVANCE(429);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '(') ADVANCE(628);
      if (lookahead == ')') ADVANCE(630);
      if (lookahead == ';') ADVANCE(631);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(428);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead == ';') ADVANCE(432);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(423);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_multiline_string);
      if (lookahead == '"') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__quoted_string_char);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == 'x') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_named_variable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(2);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_cram);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_cram);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_toplevel);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_install);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_documentation);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_documentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_modules);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_subdir);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_subdir);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_public_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_libraries);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_re_export);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_targets);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_locks);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_deps);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_universe);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_sandbox);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_env_var);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_alias_rec);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_source_tree);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_glob_files);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_promote);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_promote);
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_promote_DASHinto);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(704);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(705);
      if (lookahead == '>') ADVANCE(701);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_chdir);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead == '#') ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_copy_POUND);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == '?') ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_diff_QMARK);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_ignore_DASHstdout);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_no_DASHinfer);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_pipe_DASHoutputs);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_progn);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_with_DASHaccepted_DASHexit_DASHcodes);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_with_DASHoutputs_DASHto);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_with_DASHstderr_DASHto);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_with_DASHstdout_DASHto);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_write_DASHfile);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_synopsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_wrapped);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_wrapped);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_transition);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_kind);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_kind);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(626);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 427},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 428},
  [8] = {.lex_state = 428},
  [9] = {.lex_state = 428},
  [10] = {.lex_state = 428},
  [11] = {.lex_state = 428},
  [12] = {.lex_state = 428},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 428},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 428},
  [17] = {.lex_state = 428},
  [18] = {.lex_state = 428},
  [19] = {.lex_state = 428},
  [20] = {.lex_state = 428},
  [21] = {.lex_state = 428},
  [22] = {.lex_state = 428},
  [23] = {.lex_state = 428},
  [24] = {.lex_state = 428},
  [25] = {.lex_state = 428},
  [26] = {.lex_state = 428},
  [27] = {.lex_state = 428},
  [28] = {.lex_state = 428},
  [29] = {.lex_state = 428},
  [30] = {.lex_state = 428},
  [31] = {.lex_state = 428},
  [32] = {.lex_state = 428},
  [33] = {.lex_state = 428},
  [34] = {.lex_state = 428},
  [35] = {.lex_state = 428},
  [36] = {.lex_state = 428},
  [37] = {.lex_state = 428},
  [38] = {.lex_state = 428},
  [39] = {.lex_state = 428},
  [40] = {.lex_state = 428},
  [41] = {.lex_state = 428},
  [42] = {.lex_state = 428},
  [43] = {.lex_state = 428},
  [44] = {.lex_state = 428},
  [45] = {.lex_state = 428},
  [46] = {.lex_state = 428},
  [47] = {.lex_state = 428},
  [48] = {.lex_state = 428},
  [49] = {.lex_state = 428},
  [50] = {.lex_state = 428},
  [51] = {.lex_state = 428},
  [52] = {.lex_state = 428},
  [53] = {.lex_state = 428},
  [54] = {.lex_state = 428},
  [55] = {.lex_state = 428},
  [56] = {.lex_state = 428},
  [57] = {.lex_state = 428},
  [58] = {.lex_state = 428},
  [59] = {.lex_state = 428},
  [60] = {.lex_state = 428},
  [61] = {.lex_state = 428},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 428},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 427},
  [66] = {.lex_state = 428},
  [67] = {.lex_state = 427},
  [68] = {.lex_state = 427},
  [69] = {.lex_state = 427},
  [70] = {.lex_state = 427},
  [71] = {.lex_state = 427},
  [72] = {.lex_state = 428},
  [73] = {.lex_state = 427},
  [74] = {.lex_state = 427},
  [75] = {.lex_state = 427},
  [76] = {.lex_state = 427},
  [77] = {.lex_state = 427},
  [78] = {.lex_state = 427},
  [79] = {.lex_state = 427},
  [80] = {.lex_state = 427},
  [81] = {.lex_state = 427},
  [82] = {.lex_state = 427},
  [83] = {.lex_state = 427},
  [84] = {.lex_state = 427},
  [85] = {.lex_state = 427},
  [86] = {.lex_state = 427},
  [87] = {.lex_state = 427},
  [88] = {.lex_state = 427},
  [89] = {.lex_state = 427},
  [90] = {.lex_state = 427},
  [91] = {.lex_state = 427},
  [92] = {.lex_state = 427},
  [93] = {.lex_state = 427},
  [94] = {.lex_state = 428},
  [95] = {.lex_state = 427},
  [96] = {.lex_state = 427},
  [97] = {.lex_state = 428},
  [98] = {.lex_state = 427},
  [99] = {.lex_state = 427},
  [100] = {.lex_state = 427},
  [101] = {.lex_state = 427},
  [102] = {.lex_state = 427},
  [103] = {.lex_state = 427},
  [104] = {.lex_state = 427},
  [105] = {.lex_state = 427},
  [106] = {.lex_state = 428},
  [107] = {.lex_state = 428},
  [108] = {.lex_state = 427},
  [109] = {.lex_state = 428},
  [110] = {.lex_state = 427},
  [111] = {.lex_state = 427},
  [112] = {.lex_state = 427},
  [113] = {.lex_state = 428},
  [114] = {.lex_state = 428},
  [115] = {.lex_state = 427},
  [116] = {.lex_state = 427},
  [117] = {.lex_state = 427},
  [118] = {.lex_state = 427},
  [119] = {.lex_state = 428},
  [120] = {.lex_state = 428},
  [121] = {.lex_state = 428},
  [122] = {.lex_state = 428},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 428},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 428},
  [128] = {.lex_state = 428},
  [129] = {.lex_state = 428},
  [130] = {.lex_state = 428},
  [131] = {.lex_state = 428},
  [132] = {.lex_state = 428},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 428},
  [135] = {.lex_state = 428},
  [136] = {.lex_state = 427},
  [137] = {.lex_state = 427},
  [138] = {.lex_state = 428},
  [139] = {.lex_state = 428},
  [140] = {.lex_state = 428},
  [141] = {.lex_state = 428},
  [142] = {.lex_state = 428},
  [143] = {.lex_state = 428},
  [144] = {.lex_state = 428},
  [145] = {.lex_state = 428},
  [146] = {.lex_state = 428},
  [147] = {.lex_state = 428},
  [148] = {.lex_state = 428},
  [149] = {.lex_state = 427},
  [150] = {.lex_state = 428},
  [151] = {.lex_state = 428},
  [152] = {.lex_state = 428},
  [153] = {.lex_state = 428},
  [154] = {.lex_state = 428},
  [155] = {.lex_state = 428},
  [156] = {.lex_state = 428},
  [157] = {.lex_state = 428},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 427},
  [160] = {.lex_state = 428},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 428},
  [163] = {.lex_state = 428},
  [164] = {.lex_state = 428},
  [165] = {.lex_state = 427},
  [166] = {.lex_state = 427},
  [167] = {.lex_state = 428},
  [168] = {.lex_state = 428},
  [169] = {.lex_state = 428},
  [170] = {.lex_state = 428},
  [171] = {.lex_state = 428},
  [172] = {.lex_state = 428},
  [173] = {.lex_state = 428},
  [174] = {.lex_state = 427},
  [175] = {.lex_state = 428},
  [176] = {.lex_state = 427},
  [177] = {.lex_state = 427},
  [178] = {.lex_state = 428},
  [179] = {.lex_state = 428},
  [180] = {.lex_state = 428},
  [181] = {.lex_state = 428},
  [182] = {.lex_state = 427},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 427},
  [185] = {.lex_state = 427},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 428},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 426},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 426},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 426},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [sym_named_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(1),
    [anon_sym_ocamllex] = ACTIONS(1),
    [anon_sym_ocamlyacc] = ACTIONS(1),
    [anon_sym_include_subdirs] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_data_only_dirs] = ACTIONS(1),
    [anon_sym_cram] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
    [anon_sym_documentation] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_modules] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_subdir] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_public_name] = ACTIONS(1),
    [anon_sym_libraries] = ACTIONS(1),
    [anon_sym_enabled_if] = ACTIONS(1),
    [anon_sym_re_export] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_targets] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_locks] = ACTIONS(1),
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_universe] = ACTIONS(1),
    [anon_sym_sandbox] = ACTIONS(1),
    [anon_sym_alias_rec] = ACTIONS(1),
    [anon_sym_source_tree] = ACTIONS(1),
    [anon_sym_glob_files] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_promote] = ACTIONS(1),
    [anon_sym_promote_DASHinto] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_chdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_copy_POUND] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_diff_QMARK] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_ignore_DASHstdout] = ACTIONS(1),
    [anon_sym_no_DASHinfer] = ACTIONS(1),
    [anon_sym_pipe_DASHoutputs] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = ACTIONS(1),
    [anon_sym_with_DASHoutputs_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstderr_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstdout_DASHto] = ACTIONS(1),
    [anon_sym_write_DASHfile] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_synopsis] = ACTIONS(1),
    [anon_sym_instrumentation] = ACTIONS(1),
    [anon_sym_wrapped] = ACTIONS(1),
    [anon_sym_transition] = ACTIONS(1),
    [anon_sym_kind] = ACTIONS(1),
    [anon_sym_ppx_DOTdriver] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(241),
    [sym_ocaml_syntax] = STATE(240),
    [sym_sexp] = STATE(122),
    [sym__atom_or_qs] = STATE(107),
    [sym_quoted_string] = STATE(107),
    [sym__list] = STATE(107),
    [sym_stanza] = STATE(10),
    [sym__stanza_alias] = STATE(122),
    [sym__stanza_subdir] = STATE(122),
    [sym__stanza_executable] = STATE(122),
    [sym__stanza_rule] = STATE(122),
    [sym__stanza_library] = STATE(122),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multiline_string] = ACTIONS(11),
    [sym__atom] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_alias,
    ACTIONS(17), 1,
      anon_sym_action,
    ACTIONS(19), 1,
      anon_sym_enabled_if,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      anon_sym_target,
    ACTIONS(25), 1,
      anon_sym_targets,
    ACTIONS(27), 1,
      anon_sym_package,
    ACTIONS(29), 1,
      anon_sym_fallback,
    ACTIONS(31), 1,
      anon_sym_locks,
    ACTIONS(33), 1,
      anon_sym_deps,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(41), 1,
      anon_sym_chdir,
    ACTIONS(43), 1,
      anon_sym_copy,
    ACTIONS(45), 1,
      anon_sym_copy_POUND,
    ACTIONS(47), 1,
      anon_sym_diff,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(53), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(55), 1,
      anon_sym_progn,
    ACTIONS(57), 1,
      anon_sym_run,
    ACTIONS(59), 1,
      anon_sym_setenv,
    ACTIONS(61), 1,
      anon_sym_with_DASHaccepted_DASHexit_DASHcodes,
    ACTIONS(65), 1,
      anon_sym_write_DASHfile,
    ACTIONS(35), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(39), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(51), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(63), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [87] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_multiline_string,
    ACTIONS(71), 1,
      sym__atom,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_data_only_dirs,
    ACTIONS(83), 1,
      anon_sym_alias,
    ACTIONS(85), 1,
      anon_sym_subdir,
    ACTIONS(87), 1,
      anon_sym_executable,
    ACTIONS(89), 1,
      anon_sym_rule,
    ACTIONS(91), 1,
      anon_sym_library,
    ACTIONS(79), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(38), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    ACTIONS(77), 9,
      anon_sym_vendored_dirs,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [148] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_multiline_string,
    ACTIONS(71), 1,
      sym__atom,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_data_only_dirs,
    ACTIONS(101), 1,
      anon_sym_alias,
    ACTIONS(103), 1,
      anon_sym_subdir,
    ACTIONS(105), 1,
      anon_sym_executable,
    ACTIONS(107), 1,
      anon_sym_rule,
    ACTIONS(109), 1,
      anon_sym_library,
    ACTIONS(97), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(41), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    ACTIONS(95), 9,
      anon_sym_vendored_dirs,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [209] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(41), 1,
      anon_sym_chdir,
    ACTIONS(43), 1,
      anon_sym_copy,
    ACTIONS(45), 1,
      anon_sym_copy_POUND,
    ACTIONS(47), 1,
      anon_sym_diff,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(53), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(55), 1,
      anon_sym_progn,
    ACTIONS(57), 1,
      anon_sym_run,
    ACTIONS(59), 1,
      anon_sym_setenv,
    ACTIONS(61), 1,
      anon_sym_with_DASHaccepted_DASHexit_DASHcodes,
    ACTIONS(65), 1,
      anon_sym_write_DASHfile,
    ACTIONS(35), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(39), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(51), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(63), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [266] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_multiline_string,
    ACTIONS(71), 1,
      sym__atom,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_modules,
    ACTIONS(113), 1,
      anon_sym_name,
    ACTIONS(115), 1,
      anon_sym_public_name,
    ACTIONS(117), 1,
      anon_sym_libraries,
    ACTIONS(119), 1,
      anon_sym_enabled_if,
    ACTIONS(121), 1,
      anon_sym_synopsis,
    ACTIONS(125), 1,
      anon_sym_wrapped,
    ACTIONS(127), 1,
      anon_sym_ppx_DOTdriver,
    ACTIONS(123), 2,
      anon_sym_instrumentation,
      anon_sym_kind,
    STATE(41), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 2,
      sym_multiline_string,
      sym__atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(107), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(122), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(11), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(171), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [390] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(11), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(171), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [424] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym__atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(107), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(122), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [458] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 2,
      sym_multiline_string,
      sym__atom,
    STATE(11), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(171), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(8), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(171), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [523] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_multiline_string,
    ACTIONS(71), 1,
      sym__atom,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_modules,
    ACTIONS(113), 1,
      anon_sym_name,
    ACTIONS(115), 1,
      anon_sym_public_name,
    ACTIONS(117), 1,
      anon_sym_libraries,
    ACTIONS(119), 1,
      anon_sym_enabled_if,
    STATE(41), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(9), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(171), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [597] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_multiline_string,
    ACTIONS(71), 1,
      sym__atom,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_name,
    ACTIONS(161), 1,
      anon_sym_action,
    ACTIONS(163), 1,
      anon_sym_deps,
    STATE(41), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 2,
      sym_multiline_string,
      sym__atom,
    STATE(16), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(24), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [688] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(16), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [715] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(20), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 2,
      sym_multiline_string,
      sym__atom,
    STATE(20), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_file_name,
    ACTIONS(202), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(21), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(27), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [827] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(24), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      sym_multiline_string,
      sym__atom,
    STATE(24), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [881] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(19), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [908] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(32), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(21), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(17), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(23), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1018] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(33), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1045] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(18), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1072] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(16), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1099] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(20), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(37), 3,
      sym__field_modules_maybe_inline,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1152] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(54), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(54), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(53), 3,
      sym__field_modules_maybe_inline,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 2,
      sym_multiline_string,
      sym__atom,
    STATE(135), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(56), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1360] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(53), 3,
      sym__field_modules_maybe_inline,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 2,
      sym_multiline_string,
      sym__atom,
    STATE(135), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(40), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1438] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym__modules_osl,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(73), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(39), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(38), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1518] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(43), 3,
      sym__field_modules_maybe_inline,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1544] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(42), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1596] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(41), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1622] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(53), 3,
      sym__field_modules_maybe_inline,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(54), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym_sexps1,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(44), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1700] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 2,
      sym_multiline_string,
      sym__atom,
    STATE(135), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(56), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__modules_osl,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(73), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1754] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_sexps1,
    ACTIONS(69), 2,
      sym_multiline_string,
      sym__atom,
    STATE(44), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(170), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1780] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 2,
      sym_multiline_string,
      sym__atom,
    STATE(61), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(132), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(35), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1828] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 2,
      sym_multiline_string,
      sym__atom,
    STATE(61), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(132), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1853] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_named_variable,
    ACTIONS(346), 1,
      anon_sym_alias,
    ACTIONS(348), 1,
      anon_sym_package,
    ACTIONS(350), 1,
      anon_sym_universe,
    ACTIONS(354), 1,
      anon_sym_alias_rec,
    ACTIONS(356), 1,
      anon_sym_source_tree,
    ACTIONS(358), 1,
      anon_sym_glob_files,
    ACTIONS(352), 2,
      anon_sym_sandbox,
      anon_sym_env_var,
  [1882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(36), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym_blang_op,
    ACTIONS(362), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 6,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [1924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(75), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 2,
      sym_multiline_string,
      sym__atom,
    STATE(59), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(132), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 2,
      sym_multiline_string,
      sym__atom,
    STATE(78), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(184), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2034] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym_sexp,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym__atom,
    STATE(107), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(75), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      sym_multiline_string,
      sym__atom,
    STATE(75), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 2,
      sym_multiline_string,
      sym__atom,
    STATE(77), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(182), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 2,
      sym_multiline_string,
      sym__atom,
    STATE(77), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(182), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 2,
      sym_multiline_string,
      sym__atom,
    STATE(78), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(184), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(68), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_file_name_dep,
    STATE(185), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_file_name,
    STATE(224), 1,
      sym_file_name_target,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_file_name_dep,
    STATE(185), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_file_name,
    STATE(216), 1,
      sym_file_name_target,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_file_name_dep,
    STATE(185), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 2,
      sym_multiline_string,
      sym__atom,
    STATE(93), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_file_name,
    STATE(230), 1,
      sym_file_name_dep,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_file_name,
    STATE(200), 1,
      sym_file_name_target,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_file_name,
    STATE(137), 1,
      sym_file_name_target,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2460] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 2,
      sym_multiline_string,
      sym__atom,
    STATE(69), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(184), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_file_name,
    STATE(224), 1,
      sym_file_name_dep,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2538] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_blang,
    ACTIONS(327), 2,
      sym_multiline_string,
      sym__atom,
    STATE(132), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 2,
      sym_multiline_string,
      sym__atom,
    STATE(76), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(182), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_blang,
    ACTIONS(327), 2,
      sym_multiline_string,
      sym__atom,
    STATE(132), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_package_name,
    ACTIONS(424), 2,
      sym_multiline_string,
      sym__atom,
    STATE(239), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_alias_name,
    ACTIONS(390), 2,
      sym_multiline_string,
      sym__atom,
    STATE(182), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      sym_library_name,
    ACTIONS(263), 2,
      sym_multiline_string,
      sym__atom,
    STATE(135), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_alias_name,
    ACTIONS(390), 2,
      sym_multiline_string,
      sym__atom,
    STATE(182), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 2,
      sym_multiline_string,
      sym__atom,
    STATE(96), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_module_name,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_public_name,
    ACTIONS(440), 2,
      sym_multiline_string,
      sym__atom,
    STATE(218), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 2,
      sym_multiline_string,
      sym__atom,
    STATE(83), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_file_name,
    ACTIONS(210), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      sym_shell_command,
    ACTIONS(452), 2,
      sym_multiline_string,
      sym__atom,
    STATE(232), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      sym_package_name,
    ACTIONS(424), 2,
      sym_multiline_string,
      sym__atom,
    STATE(239), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(161), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(133), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(123), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(161), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 2,
      sym_multiline_string,
      sym__atom,
    STATE(202), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(518), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(526), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    ACTIONS(550), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(518), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 2,
      sym_multiline_string,
      sym__atom,
    STATE(225), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    ACTIONS(572), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym__bool,
    ACTIONS(578), 2,
      anon_sym_true,
      anon_sym_false,
  [3510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 2,
      sym_multiline_string,
      sym__atom,
    STATE(222), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(161), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(585), 2,
      sym_multiline_string,
      sym__atom,
    STATE(200), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 2,
      sym_multiline_string,
      sym__atom,
    STATE(136), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(591), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    ACTIONS(595), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 2,
      sym_multiline_string,
      sym__atom,
    STATE(215), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
    ACTIONS(601), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 2,
      sym_multiline_string,
      sym__atom,
    STATE(234), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 2,
      sym_multiline_string,
      sym__atom,
    STATE(226), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    ACTIONS(609), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(186), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    ACTIONS(629), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(190), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym__rule_mode,
    ACTIONS(605), 2,
      anon_sym_fallback,
      anon_sym_promote,
  [3901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym__bool,
    ACTIONS(605), 2,
      anon_sym_true,
      anon_sym_false,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
    ACTIONS(635), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(190), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3941] = 4,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      sym__quoted_string_char,
    ACTIONS(646), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_quoted_string_repeat1,
  [3954] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(194), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3967] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(654), 1,
      sym__quoted_string_char,
    STATE(195), 1,
      aux_sym_quoted_string_repeat1,
  [3980] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    ACTIONS(658), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(194), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3993] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_DQUOTE,
    ACTIONS(663), 1,
      sym__quoted_string_char,
    STATE(195), 1,
      aux_sym_quoted_string_repeat1,
  [4006] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(192), 1,
      aux_sym_ocaml_syntax_repeat1,
  [4019] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__quoted_string_char,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_quoted_string_repeat1,
  [4032] = 4,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    ACTIONS(674), 1,
      sym__quoted_string_char,
    STATE(197), 1,
      aux_sym_quoted_string_repeat1,
  [4045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(186), 2,
      sym_action,
      aux_sym_action_repeat1,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_action,
  [4066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_only,
    ACTIONS(678), 1,
      anon_sym_into,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_action,
  [4086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_action,
  [4112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_promote,
    ACTIONS(686), 1,
      anon_sym_promote_DASHinto,
  [4122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_action,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym__rule_mode_promote_field,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_action,
  [4176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_re_export,
    ACTIONS(698), 1,
      anon_sym_select,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [4208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_transition,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
  [4250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [4257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [4264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [4271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [4278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
  [4299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
  [4306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_modules,
  [4313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [4334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_dir,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [4348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
  [4355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [4376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 266,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 566,
  [SMALL_STATE(15)] = 597,
  [SMALL_STATE(16)] = 634,
  [SMALL_STATE(17)] = 661,
  [SMALL_STATE(18)] = 688,
  [SMALL_STATE(19)] = 715,
  [SMALL_STATE(20)] = 742,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 798,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 854,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 935,
  [SMALL_STATE(28)] = 964,
  [SMALL_STATE(29)] = 991,
  [SMALL_STATE(30)] = 1018,
  [SMALL_STATE(31)] = 1045,
  [SMALL_STATE(32)] = 1072,
  [SMALL_STATE(33)] = 1099,
  [SMALL_STATE(34)] = 1126,
  [SMALL_STATE(35)] = 1152,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1204,
  [SMALL_STATE(38)] = 1230,
  [SMALL_STATE(39)] = 1256,
  [SMALL_STATE(40)] = 1282,
  [SMALL_STATE(41)] = 1308,
  [SMALL_STATE(42)] = 1334,
  [SMALL_STATE(43)] = 1360,
  [SMALL_STATE(44)] = 1386,
  [SMALL_STATE(45)] = 1412,
  [SMALL_STATE(46)] = 1438,
  [SMALL_STATE(47)] = 1466,
  [SMALL_STATE(48)] = 1492,
  [SMALL_STATE(49)] = 1518,
  [SMALL_STATE(50)] = 1544,
  [SMALL_STATE(51)] = 1570,
  [SMALL_STATE(52)] = 1596,
  [SMALL_STATE(53)] = 1622,
  [SMALL_STATE(54)] = 1648,
  [SMALL_STATE(55)] = 1674,
  [SMALL_STATE(56)] = 1700,
  [SMALL_STATE(57)] = 1726,
  [SMALL_STATE(58)] = 1754,
  [SMALL_STATE(59)] = 1780,
  [SMALL_STATE(60)] = 1805,
  [SMALL_STATE(61)] = 1828,
  [SMALL_STATE(62)] = 1853,
  [SMALL_STATE(63)] = 1882,
  [SMALL_STATE(64)] = 1905,
  [SMALL_STATE(65)] = 1924,
  [SMALL_STATE(66)] = 1946,
  [SMALL_STATE(67)] = 1968,
  [SMALL_STATE(68)] = 1990,
  [SMALL_STATE(69)] = 2012,
  [SMALL_STATE(70)] = 2034,
  [SMALL_STATE(71)] = 2056,
  [SMALL_STATE(72)] = 2078,
  [SMALL_STATE(73)] = 2100,
  [SMALL_STATE(74)] = 2122,
  [SMALL_STATE(75)] = 2144,
  [SMALL_STATE(76)] = 2166,
  [SMALL_STATE(77)] = 2188,
  [SMALL_STATE(78)] = 2210,
  [SMALL_STATE(79)] = 2232,
  [SMALL_STATE(80)] = 2254,
  [SMALL_STATE(81)] = 2275,
  [SMALL_STATE(82)] = 2296,
  [SMALL_STATE(83)] = 2317,
  [SMALL_STATE(84)] = 2336,
  [SMALL_STATE(85)] = 2357,
  [SMALL_STATE(86)] = 2378,
  [SMALL_STATE(87)] = 2397,
  [SMALL_STATE(88)] = 2418,
  [SMALL_STATE(89)] = 2439,
  [SMALL_STATE(90)] = 2460,
  [SMALL_STATE(91)] = 2479,
  [SMALL_STATE(92)] = 2498,
  [SMALL_STATE(93)] = 2519,
  [SMALL_STATE(94)] = 2538,
  [SMALL_STATE(95)] = 2559,
  [SMALL_STATE(96)] = 2578,
  [SMALL_STATE(97)] = 2597,
  [SMALL_STATE(98)] = 2618,
  [SMALL_STATE(99)] = 2636,
  [SMALL_STATE(100)] = 2654,
  [SMALL_STATE(101)] = 2672,
  [SMALL_STATE(102)] = 2690,
  [SMALL_STATE(103)] = 2708,
  [SMALL_STATE(104)] = 2726,
  [SMALL_STATE(105)] = 2744,
  [SMALL_STATE(106)] = 2762,
  [SMALL_STATE(107)] = 2776,
  [SMALL_STATE(108)] = 2790,
  [SMALL_STATE(109)] = 2806,
  [SMALL_STATE(110)] = 2820,
  [SMALL_STATE(111)] = 2838,
  [SMALL_STATE(112)] = 2856,
  [SMALL_STATE(113)] = 2874,
  [SMALL_STATE(114)] = 2888,
  [SMALL_STATE(115)] = 2902,
  [SMALL_STATE(116)] = 2918,
  [SMALL_STATE(117)] = 2936,
  [SMALL_STATE(118)] = 2954,
  [SMALL_STATE(119)] = 2972,
  [SMALL_STATE(120)] = 2985,
  [SMALL_STATE(121)] = 2998,
  [SMALL_STATE(122)] = 3011,
  [SMALL_STATE(123)] = 3024,
  [SMALL_STATE(124)] = 3039,
  [SMALL_STATE(125)] = 3054,
  [SMALL_STATE(126)] = 3067,
  [SMALL_STATE(127)] = 3082,
  [SMALL_STATE(128)] = 3095,
  [SMALL_STATE(129)] = 3108,
  [SMALL_STATE(130)] = 3121,
  [SMALL_STATE(131)] = 3134,
  [SMALL_STATE(132)] = 3147,
  [SMALL_STATE(133)] = 3160,
  [SMALL_STATE(134)] = 3175,
  [SMALL_STATE(135)] = 3188,
  [SMALL_STATE(136)] = 3201,
  [SMALL_STATE(137)] = 3216,
  [SMALL_STATE(138)] = 3231,
  [SMALL_STATE(139)] = 3244,
  [SMALL_STATE(140)] = 3257,
  [SMALL_STATE(141)] = 3270,
  [SMALL_STATE(142)] = 3283,
  [SMALL_STATE(143)] = 3296,
  [SMALL_STATE(144)] = 3309,
  [SMALL_STATE(145)] = 3322,
  [SMALL_STATE(146)] = 3335,
  [SMALL_STATE(147)] = 3348,
  [SMALL_STATE(148)] = 3361,
  [SMALL_STATE(149)] = 3374,
  [SMALL_STATE(150)] = 3389,
  [SMALL_STATE(151)] = 3402,
  [SMALL_STATE(152)] = 3415,
  [SMALL_STATE(153)] = 3428,
  [SMALL_STATE(154)] = 3441,
  [SMALL_STATE(155)] = 3454,
  [SMALL_STATE(156)] = 3467,
  [SMALL_STATE(157)] = 3480,
  [SMALL_STATE(158)] = 3493,
  [SMALL_STATE(159)] = 3510,
  [SMALL_STATE(160)] = 3525,
  [SMALL_STATE(161)] = 3538,
  [SMALL_STATE(162)] = 3553,
  [SMALL_STATE(163)] = 3566,
  [SMALL_STATE(164)] = 3579,
  [SMALL_STATE(165)] = 3592,
  [SMALL_STATE(166)] = 3607,
  [SMALL_STATE(167)] = 3622,
  [SMALL_STATE(168)] = 3635,
  [SMALL_STATE(169)] = 3648,
  [SMALL_STATE(170)] = 3661,
  [SMALL_STATE(171)] = 3674,
  [SMALL_STATE(172)] = 3687,
  [SMALL_STATE(173)] = 3700,
  [SMALL_STATE(174)] = 3713,
  [SMALL_STATE(175)] = 3728,
  [SMALL_STATE(176)] = 3741,
  [SMALL_STATE(177)] = 3756,
  [SMALL_STATE(178)] = 3771,
  [SMALL_STATE(179)] = 3784,
  [SMALL_STATE(180)] = 3797,
  [SMALL_STATE(181)] = 3810,
  [SMALL_STATE(182)] = 3823,
  [SMALL_STATE(183)] = 3835,
  [SMALL_STATE(184)] = 3849,
  [SMALL_STATE(185)] = 3861,
  [SMALL_STATE(186)] = 3873,
  [SMALL_STATE(187)] = 3887,
  [SMALL_STATE(188)] = 3901,
  [SMALL_STATE(189)] = 3915,
  [SMALL_STATE(190)] = 3927,
  [SMALL_STATE(191)] = 3941,
  [SMALL_STATE(192)] = 3954,
  [SMALL_STATE(193)] = 3967,
  [SMALL_STATE(194)] = 3980,
  [SMALL_STATE(195)] = 3993,
  [SMALL_STATE(196)] = 4006,
  [SMALL_STATE(197)] = 4019,
  [SMALL_STATE(198)] = 4032,
  [SMALL_STATE(199)] = 4045,
  [SMALL_STATE(200)] = 4056,
  [SMALL_STATE(201)] = 4066,
  [SMALL_STATE(202)] = 4076,
  [SMALL_STATE(203)] = 4086,
  [SMALL_STATE(204)] = 4094,
  [SMALL_STATE(205)] = 4102,
  [SMALL_STATE(206)] = 4112,
  [SMALL_STATE(207)] = 4122,
  [SMALL_STATE(208)] = 4132,
  [SMALL_STATE(209)] = 4140,
  [SMALL_STATE(210)] = 4148,
  [SMALL_STATE(211)] = 4158,
  [SMALL_STATE(212)] = 4166,
  [SMALL_STATE(213)] = 4176,
  [SMALL_STATE(214)] = 4186,
  [SMALL_STATE(215)] = 4194,
  [SMALL_STATE(216)] = 4201,
  [SMALL_STATE(217)] = 4208,
  [SMALL_STATE(218)] = 4215,
  [SMALL_STATE(219)] = 4222,
  [SMALL_STATE(220)] = 4229,
  [SMALL_STATE(221)] = 4236,
  [SMALL_STATE(222)] = 4243,
  [SMALL_STATE(223)] = 4250,
  [SMALL_STATE(224)] = 4257,
  [SMALL_STATE(225)] = 4264,
  [SMALL_STATE(226)] = 4271,
  [SMALL_STATE(227)] = 4278,
  [SMALL_STATE(228)] = 4285,
  [SMALL_STATE(229)] = 4292,
  [SMALL_STATE(230)] = 4299,
  [SMALL_STATE(231)] = 4306,
  [SMALL_STATE(232)] = 4313,
  [SMALL_STATE(233)] = 4320,
  [SMALL_STATE(234)] = 4327,
  [SMALL_STATE(235)] = 4334,
  [SMALL_STATE(236)] = 4341,
  [SMALL_STATE(237)] = 4348,
  [SMALL_STATE(238)] = 4355,
  [SMALL_STATE(239)] = 4362,
  [SMALL_STATE(240)] = 4369,
  [SMALL_STATE(241)] = 4376,
  [SMALL_STATE(242)] = 4383,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexps1, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexps1_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__deps_field_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blang_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 1, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat3, 2, 0, 0), SHIFT_REPEAT(191),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2, 0, 0), SHIFT_REPEAT(184),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dep_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_target, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_target, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 3, 0, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 3, 0, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_name, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_subdir, 5, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_subdir, 5, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 4, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 4, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 3, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 3, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_modules_maybe_inline, 4, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_modules_maybe_inline, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 4, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 4, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 4, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 4, 0, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 4, 0, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 3, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 4, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 4, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 4, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 4, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deps_field, 4, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deps_field, 4, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_modules_maybe_inline, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_modules_maybe_inline, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2, 0, 0), SHIFT_REPEAT(2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 7, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 7, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target, 4, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 4, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 4, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 4, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 4, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lib_dep, 4, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lib_dep, 4, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lock_name, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_name, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_dep, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_dep, 1, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang_op, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang_op, 1, 0, 0),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 4, 0, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 3, 0, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode, 4, 0, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 3, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode_promote_field, 4, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_name, 1, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
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

TS_PUBLIC const TSLanguage *tree_sitter_dune(void) {
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
