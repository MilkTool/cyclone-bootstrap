/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.3.3 (beta)
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#define closcall4(td, clo,a1,a2,a3,a4) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 3, (closure)(a1), clo,a2,a3,a4); \
} else { \
   ((clo)->fn)(td, 4, clo,a1,a2,a3,a4);\
}
#define return_closcall4(td, clo,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     closcall4(td, (closure) (clo),a1,a2,a3,a4); \
     return;\
 } \
}

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#define closcall5(td, clo,a1,a2,a3,a4,a5) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 4, (closure)(a1), clo,a2,a3,a4,a5); \
} else { \
   ((clo)->fn)(td, 5, clo,a1,a2,a3,a4,a5);\
}
#define return_closcall5(td, clo,a1,a2,a3,a4,a5) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[5]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;\
     GC(td, clo, buf, 5); \
     return; \
 } else {\
     closcall5(td, (closure) (clo),a1,a2,a3,a4,a5); \
     return;\
 } \
}

#define return_direct5(td, _fn,a1,a2,a3,a4,a5) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[5]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 5); \
     return; \
 } else { \
     (_fn)(td, 5, (closure)_fn,a1,a2,a3,a4,a5); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecycloneast_scheme_cyclone_ast = NULL;
object __glo_ast_117make_91lambda_scheme_cyclone_ast = NULL;
object __glo_ast_117_75make_91lambda_scheme_cyclone_ast = NULL;
object __glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast = NULL;
object __glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast = NULL;
object __glo_ast_117lambda_91body_scheme_cyclone_ast = NULL;
object __glo_ast_117lambda_91args_scheme_cyclone_ast = NULL;
object __glo_ast_117lambda_91id_scheme_cyclone_ast = NULL;
object __glo_ast_117lambda_127_scheme_cyclone_ast = NULL;
object __glo__121lambda_91ast_125_scheme_cyclone_ast = NULL;
object __glo__85lambda_91id_85_scheme_cyclone_ast = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_tagged_91list_127_scheme_cyclone_util;
extern object __glo_if_127_scheme_cyclone_util;
extern object __glo_if_91syntax_127_scheme_cyclone_util;
extern object __glo_begin_127_scheme_cyclone_util;
extern object __glo_lambda_127_scheme_cyclone_util;
extern object __glo_pair_91_125list_scheme_cyclone_util;
extern object __glo_formals_91_125list_scheme_cyclone_util;
extern object __glo_lambda_91formals_91_125list_scheme_cyclone_util;
extern object __glo_lambda_91varargs_127_scheme_cyclone_util;
extern object __glo_lambda_91_125formals_scheme_cyclone_util;
extern object __glo_lambda_91_125exp_scheme_cyclone_util;
extern object __glo_lambda_91formals_91type_scheme_cyclone_util;
extern object __glo_lambda_91varargs_91var_scheme_cyclone_util;
extern object __glo_pack_91lambda_91arguments_scheme_cyclone_util;
extern object __glo_if_91_125condition_scheme_cyclone_util;
extern object __glo_if_91_125then_scheme_cyclone_util;
extern object __glo_if_91else_127_scheme_cyclone_util;
extern object __glo_if_91_125else_scheme_cyclone_util;
extern object __glo_const_127_scheme_cyclone_util;
extern object __glo_ref_127_scheme_cyclone_util;
extern object __glo_quote_127_scheme_cyclone_util;
extern object __glo_define_91c_127_scheme_cyclone_util;
extern object __glo_set_67_127_scheme_cyclone_util;
extern object __glo_set_67_91_125var_scheme_cyclone_util;
extern object __glo_set_67_91_125exp_scheme_cyclone_util;
extern object __glo_define_127_scheme_cyclone_util;
extern object __glo_define_91_125var_scheme_cyclone_util;
extern object __glo_define_91_125exp_scheme_cyclone_util;
extern object __glo_app_127_scheme_cyclone_util;
extern object __glo_env_117enclosing_91environment_scheme_cyclone_util;
extern object __glo_env_117first_91frame_scheme_cyclone_util;
extern object __glo_env_117the_91empty_91environment_scheme_cyclone_util;
extern object __glo_env_117make_91frame_scheme_cyclone_util;
extern object __glo_env_117frame_91variables_scheme_cyclone_util;
extern object __glo_env_117frame_91values_scheme_cyclone_util;
extern object __glo_env_117add_91binding_91to_91frame_67_scheme_cyclone_util;
extern object __glo_env_117all_91variables_scheme_cyclone_util;
extern object __glo_env_117all_91values_scheme_cyclone_util;
extern object __glo_env_117extend_91environment_scheme_cyclone_util;
extern object __glo_env_117lookup_scheme_cyclone_util;
extern object __glo_env_117lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117_191lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117set_91variable_91value_67_scheme_cyclone_util;
extern object __glo_env_117define_91variable_67_scheme_cyclone_util;
extern object __glo_make_91syntactic_91closure_scheme_cyclone_util;
extern object __glo_strip_91syntactic_91closures_scheme_cyclone_util;
extern object __glo_identifier_91_125symbol_scheme_cyclone_util;
extern object __glo_identifier_127_scheme_cyclone_util;
extern object __glo_identifier_123_127_scheme_cyclone_util;
extern object __glo_Cyc_91er_91rename_scheme_cyclone_util;
extern object __glo_Cyc_91er_91compare_127_scheme_cyclone_util;
extern object __glo_mangle_scheme_cyclone_util;
extern object __glo_mangle_91global_scheme_cyclone_util;
extern object __glo_gensym_scheme_cyclone_util;
extern object __glo_delete_scheme_cyclone_util;
extern object __glo_delete_91duplicates_scheme_cyclone_util;
extern object __glo_flatten_scheme_cyclone_util;
extern object __glo_length_95obj_scheme_cyclone_util;
extern object __glo_list_91index2_scheme_cyclone_util;
extern object __glo_list_91insert_91at_67_scheme_cyclone_util;
extern object __glo_list_91prefix_127_scheme_cyclone_util;
extern object __glo_string_91replace_91all_scheme_cyclone_util;
extern object __glo_take_scheme_cyclone_util;
extern object __glo_filter_scheme_cyclone_util;
#include "cyclone/runtime.h"
defsymbol(args);
defsymbol(body);
defsymbol(id);
static void __lambda_28(void *data, int argc, closure _,object k_7311) ;
static void __lambda_27(void *data, int argc, object self_7371, object r_7346) ;
static void __lambda_26(void *data, int argc, object self_7372, object r_7313) ;
static void __lambda_25(void *data, int argc, object self_7373, object r_7345) ;
static void __lambda_24(void *data, int argc, object self_7374, object r_7314) ;
static void __lambda_23(void *data, int argc, object self_7375, object r_7343) ;
static void __lambda_22(void *data, int argc, object self_7376, object r_7342) ;
static void __lambda_21(void *data, int argc, object self_7377, object r_7315) ;
static void __lambda_20(void *data, int argc, object self_7378, object r_7340) ;
static void __lambda_19(void *data, int argc, object self_7379, object r_7339) ;
static void __lambda_18(void *data, int argc, object self_7380, object r_7316) ;
static void __lambda_17(void *data, int argc, object self_7381, object r_7337) ;
static void __lambda_16(void *data, int argc, object self_7382, object r_7336) ;
static void __lambda_15(void *data, int argc, object self_7383, object r_7317) ;
static void __lambda_14(void *data, int argc, object self_7384, object r_7334) ;
static void __lambda_13(void *data, int argc, object self_7385, object r_7333) ;
static void __lambda_12(void *data, int argc, object self_7386, object r_7319) ;
static void __lambda_11(void *data, int argc, object self_7387, object r_7331) ;
static void __lambda_10(void *data, int argc, object self_7388, object r_7330) ;
static void __lambda_9(void *data, int argc, object self_7389, object r_7320) ;
static void __lambda_8(void *data, int argc, object self_7390, object _75make_732) ;
static void __lambda_7(void *data, int argc, object self_7391, object k_7323, object id_735, object args_734, object body_733) ;
static void __lambda_6(void *data, int argc, object self_7392, object res_736) ;
static void __lambda_5(void *data, int argc, object self_7393, object r_7325) ;
static void __lambda_4(void *data, int argc, object self_7394, object r_7326) ;
static void __lambda_3(void *data, int argc, object self_7395, object r_7328) ;
static void __lambda_2(void *data, int argc, object self_7396, object r_7327) ;
static void __lambda_1(void *data, int argc, closure _,object k_7350, object args_738, object body_737) ;
static void __lambda_0(void *data, int argc, object self_7397, object r_7351) ;

static void __lambda_28(void *data, int argc, closure _,object k_7311) {
  Cyc_st_add(data, "scheme/cyclone/ast.sld:lib-init:schemecycloneast");

closureN_type c_73113;
c_73113.hdr.mark = gc_color_red;
 c_73113.hdr.grayed = 0;
c_73113.tag = closureN_tag;
 c_73113.fn = (function_type)__lambda_27;
c_73113.num_args = 1;
c_73113.num_elements = 1;
c_73113.elements = (object *)alloca(sizeof(object) * 1);
c_73113.elements[0] = k_7311;


make_pair(c_73198,quote_body,NULL);

make_pair(c_73197,quote_args,&c_73198);

make_pair(c_73196,quote_id,&c_73197);
return_closcall4(data,  __glo_register_91simple_91type_scheme_base,  &c_73113, __glo__121lambda_91ast_125_scheme_cyclone_ast, boolean_f, &c_73196);; 
}

static void __lambda_27(void *data, int argc, object self_7371, object r_7346) {
  
closureN_type c_73115;
c_73115.hdr.mark = gc_color_red;
 c_73115.hdr.grayed = 0;
c_73115.tag = closureN_tag;
 c_73115.fn = (function_type)__lambda_26;
c_73115.num_args = 1;
c_73115.num_elements = 1;
c_73115.elements = (object *)alloca(sizeof(object) * 1);
c_73115.elements[0] = ((closureN)self_7371)->elements[0];

return_closcall1(data,(closure)&c_73115,  global_set(__glo__121lambda_91ast_125_scheme_cyclone_ast, r_7346));; 
}

static void __lambda_26(void *data, int argc, object self_7372, object r_7313) {
  
closureN_type c_73117;
c_73117.hdr.mark = gc_color_red;
 c_73117.hdr.grayed = 0;
c_73117.tag = closureN_tag;
 c_73117.fn = (function_type)__lambda_25;
c_73117.num_args = 1;
c_73117.num_elements = 1;
c_73117.elements = (object *)alloca(sizeof(object) * 1);
c_73117.elements[0] = ((closureN)self_7372)->elements[0];

return_closcall3(data,  __glo_make_91type_91predicate_scheme_base,  &c_73117, __glo_ast_117lambda_127_scheme_cyclone_ast, __glo__121lambda_91ast_125_scheme_cyclone_ast);; 
}

static void __lambda_25(void *data, int argc, object self_7373, object r_7345) {
  
closureN_type c_73119;
c_73119.hdr.mark = gc_color_red;
 c_73119.hdr.grayed = 0;
c_73119.tag = closureN_tag;
 c_73119.fn = (function_type)__lambda_24;
c_73119.num_args = 1;
c_73119.num_elements = 1;
c_73119.elements = (object *)alloca(sizeof(object) * 1);
c_73119.elements[0] = ((closureN)self_7373)->elements[0];

return_closcall1(data,(closure)&c_73119,  global_set(__glo_ast_117lambda_127_scheme_cyclone_ast, r_7345));; 
}

static void __lambda_24(void *data, int argc, object self_7374, object r_7314) {
  
closureN_type c_73121;
c_73121.hdr.mark = gc_color_red;
 c_73121.hdr.grayed = 0;
c_73121.tag = closureN_tag;
 c_73121.fn = (function_type)__lambda_23;
c_73121.num_args = 1;
c_73121.num_elements = 1;
c_73121.elements = (object *)alloca(sizeof(object) * 1);
c_73121.elements[0] = ((closureN)self_7374)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73121, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_id);; 
}

static void __lambda_23(void *data, int argc, object self_7375, object r_7343) {
  
closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_22;
c_73123.num_args = 1;
c_73123.num_elements = 1;
c_73123.elements = (object *)alloca(sizeof(object) * 1);
c_73123.elements[0] = ((closureN)self_7375)->elements[0];


make_string(c_73191, "ast:lambda-id");
return_closcall4(data,  __glo_make_91getter_scheme_base,  &c_73123, &c_73191, __glo__121lambda_91ast_125_scheme_cyclone_ast, r_7343);; 
}

static void __lambda_22(void *data, int argc, object self_7376, object r_7342) {
  
closureN_type c_73125;
c_73125.hdr.mark = gc_color_red;
 c_73125.hdr.grayed = 0;
c_73125.tag = closureN_tag;
 c_73125.fn = (function_type)__lambda_21;
c_73125.num_args = 1;
c_73125.num_elements = 1;
c_73125.elements = (object *)alloca(sizeof(object) * 1);
c_73125.elements[0] = ((closureN)self_7376)->elements[0];

return_closcall1(data,(closure)&c_73125,  global_set(__glo_ast_117lambda_91id_scheme_cyclone_ast, r_7342));; 
}

static void __lambda_21(void *data, int argc, object self_7377, object r_7315) {
  
closureN_type c_73127;
c_73127.hdr.mark = gc_color_red;
 c_73127.hdr.grayed = 0;
c_73127.tag = closureN_tag;
 c_73127.fn = (function_type)__lambda_20;
c_73127.num_args = 1;
c_73127.num_elements = 1;
c_73127.elements = (object *)alloca(sizeof(object) * 1);
c_73127.elements[0] = ((closureN)self_7377)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73127, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_args);; 
}

static void __lambda_20(void *data, int argc, object self_7378, object r_7340) {
  
closureN_type c_73129;
c_73129.hdr.mark = gc_color_red;
 c_73129.hdr.grayed = 0;
c_73129.tag = closureN_tag;
 c_73129.fn = (function_type)__lambda_19;
c_73129.num_args = 1;
c_73129.num_elements = 1;
c_73129.elements = (object *)alloca(sizeof(object) * 1);
c_73129.elements[0] = ((closureN)self_7378)->elements[0];


make_string(c_73188, "ast:lambda-args");
return_closcall4(data,  __glo_make_91getter_scheme_base,  &c_73129, &c_73188, __glo__121lambda_91ast_125_scheme_cyclone_ast, r_7340);; 
}

static void __lambda_19(void *data, int argc, object self_7379, object r_7339) {
  
closureN_type c_73131;
c_73131.hdr.mark = gc_color_red;
 c_73131.hdr.grayed = 0;
c_73131.tag = closureN_tag;
 c_73131.fn = (function_type)__lambda_18;
c_73131.num_args = 1;
c_73131.num_elements = 1;
c_73131.elements = (object *)alloca(sizeof(object) * 1);
c_73131.elements[0] = ((closureN)self_7379)->elements[0];

return_closcall1(data,(closure)&c_73131,  global_set(__glo_ast_117lambda_91args_scheme_cyclone_ast, r_7339));; 
}

static void __lambda_18(void *data, int argc, object self_7380, object r_7316) {
  
closureN_type c_73133;
c_73133.hdr.mark = gc_color_red;
 c_73133.hdr.grayed = 0;
c_73133.tag = closureN_tag;
 c_73133.fn = (function_type)__lambda_17;
c_73133.num_args = 1;
c_73133.num_elements = 1;
c_73133.elements = (object *)alloca(sizeof(object) * 1);
c_73133.elements[0] = ((closureN)self_7380)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73133, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_body);; 
}

static void __lambda_17(void *data, int argc, object self_7381, object r_7337) {
  
closureN_type c_73135;
c_73135.hdr.mark = gc_color_red;
 c_73135.hdr.grayed = 0;
c_73135.tag = closureN_tag;
 c_73135.fn = (function_type)__lambda_16;
c_73135.num_args = 1;
c_73135.num_elements = 1;
c_73135.elements = (object *)alloca(sizeof(object) * 1);
c_73135.elements[0] = ((closureN)self_7381)->elements[0];


make_string(c_73185, "ast:lambda-body");
return_closcall4(data,  __glo_make_91getter_scheme_base,  &c_73135, &c_73185, __glo__121lambda_91ast_125_scheme_cyclone_ast, r_7337);; 
}

static void __lambda_16(void *data, int argc, object self_7382, object r_7336) {
  
closureN_type c_73137;
c_73137.hdr.mark = gc_color_red;
 c_73137.hdr.grayed = 0;
c_73137.tag = closureN_tag;
 c_73137.fn = (function_type)__lambda_15;
c_73137.num_args = 1;
c_73137.num_elements = 1;
c_73137.elements = (object *)alloca(sizeof(object) * 1);
c_73137.elements[0] = ((closureN)self_7382)->elements[0];

return_closcall1(data,(closure)&c_73137,  global_set(__glo_ast_117lambda_91body_scheme_cyclone_ast, r_7336));; 
}

static void __lambda_15(void *data, int argc, object self_7383, object r_7317) {
  
closureN_type c_73139;
c_73139.hdr.mark = gc_color_red;
 c_73139.hdr.grayed = 0;
c_73139.tag = closureN_tag;
 c_73139.fn = (function_type)__lambda_14;
c_73139.num_args = 1;
c_73139.num_elements = 1;
c_73139.elements = (object *)alloca(sizeof(object) * 1);
c_73139.elements[0] = ((closureN)self_7383)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73139, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_args);; 
}

static void __lambda_14(void *data, int argc, object self_7384, object r_7334) {
  
closureN_type c_73141;
c_73141.hdr.mark = gc_color_red;
 c_73141.hdr.grayed = 0;
c_73141.tag = closureN_tag;
 c_73141.fn = (function_type)__lambda_13;
c_73141.num_args = 1;
c_73141.num_elements = 1;
c_73141.elements = (object *)alloca(sizeof(object) * 1);
c_73141.elements[0] = ((closureN)self_7384)->elements[0];


make_string(c_73182, "ast:set-lambda-args!");
return_closcall4(data,  __glo_make_91setter_scheme_base,  &c_73141, &c_73182, __glo__121lambda_91ast_125_scheme_cyclone_ast, r_7334);; 
}

static void __lambda_13(void *data, int argc, object self_7385, object r_7333) {
  
closureN_type c_73143;
c_73143.hdr.mark = gc_color_red;
 c_73143.hdr.grayed = 0;
c_73143.tag = closureN_tag;
 c_73143.fn = (function_type)__lambda_12;
c_73143.num_args = 1;
c_73143.num_elements = 1;
c_73143.elements = (object *)alloca(sizeof(object) * 1);
c_73143.elements[0] = ((closureN)self_7385)->elements[0];

return_closcall1(data,(closure)&c_73143,  global_set(__glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast, r_7333));; 
}

static void __lambda_12(void *data, int argc, object self_7386, object r_7319) {
  
closureN_type c_73145;
c_73145.hdr.mark = gc_color_red;
 c_73145.hdr.grayed = 0;
c_73145.tag = closureN_tag;
 c_73145.fn = (function_type)__lambda_11;
c_73145.num_args = 1;
c_73145.num_elements = 1;
c_73145.elements = (object *)alloca(sizeof(object) * 1);
c_73145.elements[0] = ((closureN)self_7386)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73145, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_body);; 
}

static void __lambda_11(void *data, int argc, object self_7387, object r_7331) {
  
closureN_type c_73147;
c_73147.hdr.mark = gc_color_red;
 c_73147.hdr.grayed = 0;
c_73147.tag = closureN_tag;
 c_73147.fn = (function_type)__lambda_10;
c_73147.num_args = 1;
c_73147.num_elements = 1;
c_73147.elements = (object *)alloca(sizeof(object) * 1);
c_73147.elements[0] = ((closureN)self_7387)->elements[0];


make_string(c_73179, "ast:set-lambda-body!");
return_closcall4(data,  __glo_make_91setter_scheme_base,  &c_73147, &c_73179, __glo__121lambda_91ast_125_scheme_cyclone_ast, r_7331);; 
}

static void __lambda_10(void *data, int argc, object self_7388, object r_7330) {
  
closureN_type c_73149;
c_73149.hdr.mark = gc_color_red;
 c_73149.hdr.grayed = 0;
c_73149.tag = closureN_tag;
 c_73149.fn = (function_type)__lambda_9;
c_73149.num_args = 1;
c_73149.num_elements = 1;
c_73149.elements = (object *)alloca(sizeof(object) * 1);
c_73149.elements[0] = ((closureN)self_7388)->elements[0];

return_closcall1(data,(closure)&c_73149,  global_set(__glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast, r_7330));; 
}

static void __lambda_9(void *data, int argc, object self_7389, object r_7320) {
  
closureN_type c_73151;
c_73151.hdr.mark = gc_color_red;
 c_73151.hdr.grayed = 0;
c_73151.tag = closureN_tag;
 c_73151.fn = (function_type)__lambda_8;
c_73151.num_args = 1;
c_73151.num_elements = 1;
c_73151.elements = (object *)alloca(sizeof(object) * 1);
c_73151.elements[0] = ((closureN)self_7389)->elements[0];


make_string(c_73176, "ast:%make-lambda");
return_closcall3(data,  __glo_make_91constructor_scheme_base,  &c_73151, &c_73176, __glo__121lambda_91ast_125_scheme_cyclone_ast);; 
}

static void __lambda_8(void *data, int argc, object self_7390, object _75make_732) {
  
closureN_type c_73156;
c_73156.hdr.mark = gc_color_red;
 c_73156.hdr.grayed = 0;
c_73156.tag = closureN_tag;
 c_73156.fn = (function_type)__lambda_7;
c_73156.num_args = 3;
c_73156.num_elements = 1;
c_73156.elements = (object *)alloca(sizeof(object) * 1);
c_73156.elements[0] = _75make_732;

return_closcall1(data,  ((closureN)self_7390)->elements[0],  global_set(__glo_ast_117_75make_91lambda_scheme_cyclone_ast, &c_73156));; 
}

static void __lambda_7(void *data, int argc, object self_7391, object k_7323, object id_735, object args_734, object body_733) {
  
closureN_type c_73159;
c_73159.hdr.mark = gc_color_red;
 c_73159.hdr.grayed = 0;
c_73159.tag = closureN_tag;
 c_73159.fn = (function_type)__lambda_6;
c_73159.num_args = 1;
c_73159.num_elements = 4;
c_73159.elements = (object *)alloca(sizeof(object) * 4);
c_73159.elements[0] = args_734;
c_73159.elements[1] = body_733;
c_73159.elements[2] = id_735;
c_73159.elements[3] = k_7323;

return_closcall1(data,  ((closureN)self_7391)->elements[0],  &c_73159);; 
}

static void __lambda_6(void *data, int argc, object self_7392, object res_736) {
  
closureN_type c_73161;
c_73161.hdr.mark = gc_color_red;
 c_73161.hdr.grayed = 0;
c_73161.tag = closureN_tag;
 c_73161.fn = (function_type)__lambda_5;
c_73161.num_args = 1;
c_73161.num_elements = 4;
c_73161.elements = (object *)alloca(sizeof(object) * 4);
c_73161.elements[0] = ((closureN)self_7392)->elements[0];
c_73161.elements[1] = ((closureN)self_7392)->elements[2];
c_73161.elements[2] = ((closureN)self_7392)->elements[3];
c_73161.elements[3] = res_736;

return_closcall3(data,  __glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast,  &c_73161, res_736, ((closureN)self_7392)->elements[1]);; 
}

static void __lambda_5(void *data, int argc, object self_7393, object r_7325) {
  
closureN_type c_73163;
c_73163.hdr.mark = gc_color_red;
 c_73163.hdr.grayed = 0;
c_73163.tag = closureN_tag;
 c_73163.fn = (function_type)__lambda_4;
c_73163.num_args = 1;
c_73163.num_elements = 3;
c_73163.elements = (object *)alloca(sizeof(object) * 3);
c_73163.elements[0] = ((closureN)self_7393)->elements[1];
c_73163.elements[1] = ((closureN)self_7393)->elements[2];
c_73163.elements[2] = ((closureN)self_7393)->elements[3];

return_closcall3(data,  __glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast,  &c_73163, ((closureN)self_7393)->elements[3], ((closureN)self_7393)->elements[0]);; 
}

static void __lambda_4(void *data, int argc, object self_7394, object r_7326) {
  
closureN_type c_73165;
c_73165.hdr.mark = gc_color_red;
 c_73165.hdr.grayed = 0;
c_73165.tag = closureN_tag;
 c_73165.fn = (function_type)__lambda_3;
c_73165.num_args = 1;
c_73165.num_elements = 3;
c_73165.elements = (object *)alloca(sizeof(object) * 3);
c_73165.elements[0] = ((closureN)self_7394)->elements[0];
c_73165.elements[1] = ((closureN)self_7394)->elements[1];
c_73165.elements[2] = ((closureN)self_7394)->elements[2];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_73165, __glo__121lambda_91ast_125_scheme_cyclone_ast, quote_id);; 
}

static void __lambda_3(void *data, int argc, object self_7395, object r_7328) {
  
closureN_type c_73167;
c_73167.hdr.mark = gc_color_red;
 c_73167.hdr.grayed = 0;
c_73167.tag = closureN_tag;
 c_73167.fn = (function_type)__lambda_2;
c_73167.num_args = 1;
c_73167.num_elements = 2;
c_73167.elements = (object *)alloca(sizeof(object) * 2);
c_73167.elements[0] = ((closureN)self_7395)->elements[1];
c_73167.elements[1] = ((closureN)self_7395)->elements[2];

return_closcall5(data,  __glo_slot_91set_67_scheme_base,  &c_73167, __glo__121lambda_91ast_125_scheme_cyclone_ast, ((closureN)self_7395)->elements[2], r_7328, ((closureN)self_7395)->elements[0]);; 
}

static void __lambda_2(void *data, int argc, object self_7396, object r_7327) {
  return_closcall1(data,  ((closureN)self_7396)->elements[0],  ((closureN)self_7396)->elements[1]);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7350, object args_738, object body_737) {
  Cyc_st_add(data, "scheme/cyclone/ast.sld:ast:make-lambda");

closureN_type c_73100;
c_73100.hdr.mark = gc_color_red;
 c_73100.hdr.grayed = 0;
c_73100.tag = closureN_tag;
 c_73100.fn = (function_type)__lambda_0;
c_73100.num_args = 1;
c_73100.num_elements = 3;
c_73100.elements = (object *)alloca(sizeof(object) * 3);
c_73100.elements[0] = args_738;
c_73100.elements[1] = body_737;
c_73100.elements[2] = k_7350;


common_type local_73109; object c_73110 = Cyc_fast_sum(data,&local_73109,obj_int2obj(1), __glo__85lambda_91id_85_scheme_cyclone_ast);
return_closcall1(data,(closure)&c_73100,  global_set(__glo__85lambda_91id_85_scheme_cyclone_ast, c_73110));; 
}

static void __lambda_0(void *data, int argc, object self_7397, object r_7351) {
  return_closcall4(data,  __glo_ast_117_75make_91lambda_scheme_cyclone_ast,  ((closureN)self_7397)->elements[2], __glo__85lambda_91id_85_scheme_cyclone_ast, ((closureN)self_7397)->elements[0], ((closureN)self_7397)->elements[1]);; 
}

void c_schemecycloneast_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_args = find_or_add_symbol("args");
  quote_body = find_or_add_symbol("body");
  quote_id = find_or_add_symbol("id");

  add_global((object *) &__glo_lib_91init_117schemecycloneast_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117make_91lambda_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117_75make_91lambda_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117lambda_91body_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117lambda_91args_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117lambda_91id_scheme_cyclone_ast);
  add_global((object *) &__glo_ast_117lambda_127_scheme_cyclone_ast);
  add_global((object *) &__glo__121lambda_91ast_125_scheme_cyclone_ast);
  add_global((object *) &__glo__85lambda_91id_85_scheme_cyclone_ast);
  add_symbol(quote_args);
  add_symbol(quote_body);
  add_symbol(quote_id);
  mclosure0(c_73111, (function_type)__lambda_28);c_73111.num_args = 0; 
  __glo_lib_91init_117schemecycloneast_scheme_cyclone_ast = &c_73111; 
  mclosure0(c_7398, (function_type)__lambda_1);c_7398.num_args = 2; 
  __glo_ast_117make_91lambda_scheme_cyclone_ast = &c_7398; 
  __glo_ast_117_75make_91lambda_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117lambda_91body_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117lambda_91args_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117lambda_91id_scheme_cyclone_ast = boolean_f; 
  __glo_ast_117lambda_127_scheme_cyclone_ast = boolean_f; 
  __glo__121lambda_91ast_125_scheme_cyclone_ast = boolean_f; 
  __glo__85lambda_91id_85_scheme_cyclone_ast = obj_int2obj(0); 

  make_cvar(cvar_73199, (object *)&__glo_lib_91init_117schemecycloneast_scheme_cyclone_ast);make_pair(pair_73200, find_or_add_symbol("lib-init:schemecycloneast"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_ast_117make_91lambda_scheme_cyclone_ast);make_pair(pair_73202, find_or_add_symbol("ast:make-lambda"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_ast_117_75make_91lambda_scheme_cyclone_ast);make_pair(pair_73204, find_or_add_symbol("ast:%make-lambda"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_ast_117set_91lambda_91body_67_scheme_cyclone_ast);make_pair(pair_73206, find_or_add_symbol("ast:set-lambda-body!"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_ast_117set_91lambda_91args_67_scheme_cyclone_ast);make_pair(pair_73208, find_or_add_symbol("ast:set-lambda-args!"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_ast_117lambda_91body_scheme_cyclone_ast);make_pair(pair_73210, find_or_add_symbol("ast:lambda-body"), &cvar_73209);
  make_cvar(cvar_73211, (object *)&__glo_ast_117lambda_91args_scheme_cyclone_ast);make_pair(pair_73212, find_or_add_symbol("ast:lambda-args"), &cvar_73211);
  make_cvar(cvar_73213, (object *)&__glo_ast_117lambda_91id_scheme_cyclone_ast);make_pair(pair_73214, find_or_add_symbol("ast:lambda-id"), &cvar_73213);
  make_cvar(cvar_73215, (object *)&__glo_ast_117lambda_127_scheme_cyclone_ast);make_pair(pair_73216, find_or_add_symbol("ast:lambda?"), &cvar_73215);
  make_cvar(cvar_73217, (object *)&__glo__121lambda_91ast_125_scheme_cyclone_ast);make_pair(pair_73218, find_or_add_symbol("<lambda-ast>"), &cvar_73217);
  make_cvar(cvar_73219, (object *)&__glo__85lambda_91id_85_scheme_cyclone_ast);make_pair(pair_73220, find_or_add_symbol("*lambda-id*"), &cvar_73219);
make_pair(c_73221, &pair_73200,Cyc_global_variables);
make_pair(c_73222, &pair_73202, &c_73221);
make_pair(c_73223, &pair_73204, &c_73222);
make_pair(c_73224, &pair_73206, &c_73223);
make_pair(c_73225, &pair_73208, &c_73224);
make_pair(c_73226, &pair_73210, &c_73225);
make_pair(c_73227, &pair_73212, &c_73226);
make_pair(c_73228, &pair_73214, &c_73227);
make_pair(c_73229, &pair_73216, &c_73228);
make_pair(c_73230, &pair_73218, &c_73229);
make_pair(c_73231, &pair_73220, &c_73230);
Cyc_global_variables = &c_73231;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecycloneast_scheme_cyclone_ast)->fn)(data, 1, cont, cont);
}
