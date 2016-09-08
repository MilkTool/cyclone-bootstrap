/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.2 (beta)
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemefile_scheme_file = NULL;
object __glo_with_91output_91to_91file_scheme_file = NULL;
object __glo_with_91input_91from_91file_scheme_file = NULL;
object __glo_call_91with_91output_91file_scheme_file = NULL;
object __glo_call_91with_91input_91file_scheme_file = NULL;
extern object __glo_member_scheme_base;
extern object __glo_memv_scheme_base;
extern object __glo_memq_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_assv_scheme_base;
extern object __glo_assq_scheme_base;
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
#include "cyclone/runtime.h"
defsymbol(_121param_91convert_125);
defsymbol(_121param_91set_67_125);
static void __lambda_30(void *data, int argc, closure _,object k_7315) ;
static void __lambda_29(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) ;
static void __lambda_28(void *data, int argc, object self_7356, object r_7319) ;
static void __lambda_27(void *data, int argc, object self_7357, object r_7331) ;
static void __lambda_26(void *data, int argc, object self_7358, object r_7329) ;
static void __lambda_25(void *data, int argc, object self_7359, object r_7320) ;
static void __lambda_24(void *data, int argc, object self_7360, object old_734, object new_733) ;
static void __lambda_23(void *data, int argc, object self_7361, object k_7327) ;
static void __lambda_22(void *data, int argc, object self_7362, object r_7328) ;
static void __lambda_21(void *data, int argc, object self_7363, object r_7321) ;
static void __lambda_20(void *data, int argc, object self_7364, object k_7323) ;
static void __lambda_19(void *data, int argc, object self_7365, object r_7326) ;
static void __lambda_18(void *data, int argc, object self_7366, object r_7324) ;
static void __lambda_17(void *data, int argc, object self_7367, object r_7325) ;
static void __lambda_16(void *data, int argc, object self_7368, object r_7322) ;
static void __lambda_15(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) ;
static void __lambda_14(void *data, int argc, object self_7369, object r_7335) ;
static void __lambda_13(void *data, int argc, object self_7370, object r_7347) ;
static void __lambda_12(void *data, int argc, object self_7371, object r_7345) ;
static void __lambda_11(void *data, int argc, object self_7372, object r_7336) ;
static void __lambda_10(void *data, int argc, object self_7373, object old_738, object new_737) ;
static void __lambda_9(void *data, int argc, object self_7374, object k_7343) ;
static void __lambda_8(void *data, int argc, object self_7375, object r_7344) ;
static void __lambda_7(void *data, int argc, object self_7376, object r_7337) ;
static void __lambda_6(void *data, int argc, object self_7377, object k_7339) ;
static void __lambda_5(void *data, int argc, object self_7378, object r_7342) ;
static void __lambda_4(void *data, int argc, object self_7379, object r_7340) ;
static void __lambda_3(void *data, int argc, object self_7380, object r_7341) ;
static void __lambda_2(void *data, int argc, object self_7381, object r_7338) ;
static void __lambda_1(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) ;
static void __lambda_0(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) ;

static void __lambda_30(void *data, int argc, closure _,object k_7315) {
  Cyc_st_add(data, "scheme/file.sld:lib-init:schemefile");
return_closcall1(data,  k_7315,  obj_int2obj(0));; 
}

static void __lambda_29(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73136;
c_73136.hdr.mark = gc_color_red;
 c_73136.hdr.grayed = 0;
c_73136.tag = closureN_tag;
 c_73136.fn = (function_type)__lambda_28;
c_73136.num_args = 1;
c_73136.num_elements = 3;
c_73136.elements = (object *)alloca(sizeof(object) * 3);
c_73136.elements[0] = k_7318;
c_73136.elements[1] = string_732;
c_73136.elements[2] = thunk_731;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73136);; 
}

static void __lambda_28(void *data, int argc, object self_7356, object r_7319) {
  
closureN_type c_73138;
c_73138.hdr.mark = gc_color_red;
 c_73138.hdr.grayed = 0;
c_73138.tag = closureN_tag;
 c_73138.fn = (function_type)__lambda_27;
c_73138.num_args = 1;
c_73138.num_elements = 4;
c_73138.elements = (object *)alloca(sizeof(object) * 4);
c_73138.elements[0] = ((closureN)self_7356)->elements[0];
c_73138.elements[1] = r_7319;
c_73138.elements[2] = ((closureN)self_7356)->elements[1];
c_73138.elements[3] = ((closureN)self_7356)->elements[2];

return_closcall1(data,(closure)&c_73138,  quote__121param_91convert_125);; 
}

static void __lambda_27(void *data, int argc, object self_7357, object r_7331) {
  
closureN_type c_73140;
c_73140.hdr.mark = gc_color_red;
 c_73140.hdr.grayed = 0;
c_73140.tag = closureN_tag;
 c_73140.fn = (function_type)__lambda_26;
c_73140.num_args = 1;
c_73140.num_elements = 4;
c_73140.elements = (object *)alloca(sizeof(object) * 4);
c_73140.elements[0] = ((closureN)self_7357)->elements[0];
c_73140.elements[1] = ((closureN)self_7357)->elements[1];
c_73140.elements[2] = ((closureN)self_7357)->elements[2];
c_73140.elements[3] = ((closureN)self_7357)->elements[3];

return_closcall2(data,  __glo_current_91output_91port_scheme_base,  &c_73140, r_7331);; 
}

static void __lambda_26(void *data, int argc, object self_7358, object r_7329) {
  
closureN_type c_73142;
c_73142.hdr.mark = gc_color_red;
 c_73142.hdr.grayed = 0;
c_73142.tag = closureN_tag;
 c_73142.fn = (function_type)__lambda_25;
c_73142.num_args = 1;
c_73142.num_elements = 3;
c_73142.elements = (object *)alloca(sizeof(object) * 3);
c_73142.elements[0] = ((closureN)self_7358)->elements[0];
c_73142.elements[1] = ((closureN)self_7358)->elements[1];
c_73142.elements[2] = ((closureN)self_7358)->elements[3];


port_type c_73174 = Cyc_io_open_output_file(data,((closureN)self_7358)->elements[2]);
return_closcall2(data,  r_7329,  &c_73142, &c_73174);; 
}

static void __lambda_25(void *data, int argc, object self_7359, object r_7320) {
  
closureN_type c_73144;
c_73144.hdr.mark = gc_color_red;
 c_73144.hdr.grayed = 0;
c_73144.tag = closureN_tag;
 c_73144.fn = (function_type)__lambda_24;
c_73144.num_args = 2;
c_73144.num_elements = 2;
c_73144.elements = (object *)alloca(sizeof(object) * 2);
c_73144.elements[0] = ((closureN)self_7359)->elements[0];
c_73144.elements[1] = ((closureN)self_7359)->elements[2];

return_closcall2(data,(closure)&c_73144,  ((closureN)self_7359)->elements[1], r_7320);; 
}

static void __lambda_24(void *data, int argc, object self_7360, object old_734, object new_733) {
  
closureN_type c_73146;
c_73146.hdr.mark = gc_color_red;
 c_73146.hdr.grayed = 0;
c_73146.tag = closureN_tag;
 c_73146.fn = (function_type)__lambda_21;
c_73146.num_args = 1;
c_73146.num_elements = 3;
c_73146.elements = (object *)alloca(sizeof(object) * 3);
c_73146.elements[0] = ((closureN)self_7360)->elements[0];
c_73146.elements[1] = old_734;
c_73146.elements[2] = ((closureN)self_7360)->elements[1];


closureN_type c_73165;
c_73165.hdr.mark = gc_color_red;
 c_73165.hdr.grayed = 0;
c_73165.tag = closureN_tag;
 c_73165.fn = (function_type)__lambda_23;
c_73165.num_args = 0;
c_73165.num_elements = 1;
c_73165.elements = (object *)alloca(sizeof(object) * 1);
c_73165.elements[0] = new_733;

return_closcall1(data,(closure)&c_73146,  &c_73165);; 
}

static void __lambda_23(void *data, int argc, object self_7361, object k_7327) {
  
closureN_type c_73167;
c_73167.hdr.mark = gc_color_red;
 c_73167.hdr.grayed = 0;
c_73167.tag = closureN_tag;
 c_73167.fn = (function_type)__lambda_22;
c_73167.num_args = 1;
c_73167.num_elements = 2;
c_73167.elements = (object *)alloca(sizeof(object) * 2);
c_73167.elements[0] = k_7327;
c_73167.elements[1] = ((closureN)self_7361)->elements[0];

return_closcall1(data,(closure)&c_73167,  quote__121param_91set_67_125);; 
}

static void __lambda_22(void *data, int argc, object self_7362, object r_7328) {
  return_closcall3(data,  __glo_current_91output_91port_scheme_base,  ((closureN)self_7362)->elements[0], r_7328, ((closureN)self_7362)->elements[1]);; 
}

static void __lambda_21(void *data, int argc, object self_7363, object r_7321) {
  
closureN_type c_73148;
c_73148.hdr.mark = gc_color_red;
 c_73148.hdr.grayed = 0;
c_73148.tag = closureN_tag;
 c_73148.fn = (function_type)__lambda_16;
c_73148.num_args = 1;
c_73148.num_elements = 3;
c_73148.elements = (object *)alloca(sizeof(object) * 3);
c_73148.elements[0] = ((closureN)self_7363)->elements[0];
c_73148.elements[1] = r_7321;
c_73148.elements[2] = ((closureN)self_7363)->elements[2];


closureN_type c_73153;
c_73153.hdr.mark = gc_color_red;
 c_73153.hdr.grayed = 0;
c_73153.tag = closureN_tag;
 c_73153.fn = (function_type)__lambda_20;
c_73153.num_args = 0;
c_73153.num_elements = 1;
c_73153.elements = (object *)alloca(sizeof(object) * 1);
c_73153.elements[0] = ((closureN)self_7363)->elements[1];

return_closcall1(data,(closure)&c_73148,  &c_73153);; 
}

static void __lambda_20(void *data, int argc, object self_7364, object k_7323) {
  
closureN_type c_73155;
c_73155.hdr.mark = gc_color_red;
 c_73155.hdr.grayed = 0;
c_73155.tag = closureN_tag;
 c_73155.fn = (function_type)__lambda_19;
c_73155.num_args = 1;
c_73155.num_elements = 2;
c_73155.elements = (object *)alloca(sizeof(object) * 2);
c_73155.elements[0] = k_7323;
c_73155.elements[1] = ((closureN)self_7364)->elements[0];

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73155);; 
}

static void __lambda_19(void *data, int argc, object self_7365, object r_7326) {
  
closureN_type c_73157;
c_73157.hdr.mark = gc_color_red;
 c_73157.hdr.grayed = 0;
c_73157.tag = closureN_tag;
 c_73157.fn = (function_type)__lambda_18;
c_73157.num_args = 1;
c_73157.num_elements = 2;
c_73157.elements = (object *)alloca(sizeof(object) * 2);
c_73157.elements[0] = ((closureN)self_7365)->elements[0];
c_73157.elements[1] = ((closureN)self_7365)->elements[1];

return_closcall1(data,(closure)&c_73157,  Cyc_io_close_port(data, r_7326));; 
}

static void __lambda_18(void *data, int argc, object self_7366, object r_7324) {
  
closureN_type c_73159;
c_73159.hdr.mark = gc_color_red;
 c_73159.hdr.grayed = 0;
c_73159.tag = closureN_tag;
 c_73159.fn = (function_type)__lambda_17;
c_73159.num_args = 1;
c_73159.num_elements = 2;
c_73159.elements = (object *)alloca(sizeof(object) * 2);
c_73159.elements[0] = ((closureN)self_7366)->elements[0];
c_73159.elements[1] = ((closureN)self_7366)->elements[1];

return_closcall1(data,(closure)&c_73159,  quote__121param_91set_67_125);; 
}

static void __lambda_17(void *data, int argc, object self_7367, object r_7325) {
  return_closcall3(data,  __glo_current_91output_91port_scheme_base,  ((closureN)self_7367)->elements[0], r_7325, ((closureN)self_7367)->elements[1]);; 
}

static void __lambda_16(void *data, int argc, object self_7368, object r_7322) {
  return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7368)->elements[0], ((closureN)self_7368)->elements[1], ((closureN)self_7368)->elements[2], r_7322);; 
}

static void __lambda_15(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_7394;
c_7394.hdr.mark = gc_color_red;
 c_7394.hdr.grayed = 0;
c_7394.tag = closureN_tag;
 c_7394.fn = (function_type)__lambda_14;
c_7394.num_args = 1;
c_7394.num_elements = 3;
c_7394.elements = (object *)alloca(sizeof(object) * 3);
c_7394.elements[0] = k_7334;
c_7394.elements[1] = string_736;
c_7394.elements[2] = thunk_735;

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_7394);; 
}

static void __lambda_14(void *data, int argc, object self_7369, object r_7335) {
  
closureN_type c_7396;
c_7396.hdr.mark = gc_color_red;
 c_7396.hdr.grayed = 0;
c_7396.tag = closureN_tag;
 c_7396.fn = (function_type)__lambda_13;
c_7396.num_args = 1;
c_7396.num_elements = 4;
c_7396.elements = (object *)alloca(sizeof(object) * 4);
c_7396.elements[0] = ((closureN)self_7369)->elements[0];
c_7396.elements[1] = r_7335;
c_7396.elements[2] = ((closureN)self_7369)->elements[1];
c_7396.elements[3] = ((closureN)self_7369)->elements[2];

return_closcall1(data,(closure)&c_7396,  quote__121param_91convert_125);; 
}

static void __lambda_13(void *data, int argc, object self_7370, object r_7347) {
  
closureN_type c_7398;
c_7398.hdr.mark = gc_color_red;
 c_7398.hdr.grayed = 0;
c_7398.tag = closureN_tag;
 c_7398.fn = (function_type)__lambda_12;
c_7398.num_args = 1;
c_7398.num_elements = 4;
c_7398.elements = (object *)alloca(sizeof(object) * 4);
c_7398.elements[0] = ((closureN)self_7370)->elements[0];
c_7398.elements[1] = ((closureN)self_7370)->elements[1];
c_7398.elements[2] = ((closureN)self_7370)->elements[2];
c_7398.elements[3] = ((closureN)self_7370)->elements[3];

return_closcall2(data,  __glo_current_91input_91port_scheme_base,  &c_7398, r_7347);; 
}

static void __lambda_12(void *data, int argc, object self_7371, object r_7345) {
  
closureN_type c_73100;
c_73100.hdr.mark = gc_color_red;
 c_73100.hdr.grayed = 0;
c_73100.tag = closureN_tag;
 c_73100.fn = (function_type)__lambda_11;
c_73100.num_args = 1;
c_73100.num_elements = 3;
c_73100.elements = (object *)alloca(sizeof(object) * 3);
c_73100.elements[0] = ((closureN)self_7371)->elements[0];
c_73100.elements[1] = ((closureN)self_7371)->elements[1];
c_73100.elements[2] = ((closureN)self_7371)->elements[3];


port_type c_73132 = Cyc_io_open_input_file(data,((closureN)self_7371)->elements[2]);
return_closcall2(data,  r_7345,  &c_73100, &c_73132);; 
}

static void __lambda_11(void *data, int argc, object self_7372, object r_7336) {
  
closureN_type c_73102;
c_73102.hdr.mark = gc_color_red;
 c_73102.hdr.grayed = 0;
c_73102.tag = closureN_tag;
 c_73102.fn = (function_type)__lambda_10;
c_73102.num_args = 2;
c_73102.num_elements = 2;
c_73102.elements = (object *)alloca(sizeof(object) * 2);
c_73102.elements[0] = ((closureN)self_7372)->elements[0];
c_73102.elements[1] = ((closureN)self_7372)->elements[2];

return_closcall2(data,(closure)&c_73102,  ((closureN)self_7372)->elements[1], r_7336);; 
}

static void __lambda_10(void *data, int argc, object self_7373, object old_738, object new_737) {
  
closureN_type c_73104;
c_73104.hdr.mark = gc_color_red;
 c_73104.hdr.grayed = 0;
c_73104.tag = closureN_tag;
 c_73104.fn = (function_type)__lambda_7;
c_73104.num_args = 1;
c_73104.num_elements = 3;
c_73104.elements = (object *)alloca(sizeof(object) * 3);
c_73104.elements[0] = ((closureN)self_7373)->elements[0];
c_73104.elements[1] = old_738;
c_73104.elements[2] = ((closureN)self_7373)->elements[1];


closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_9;
c_73123.num_args = 0;
c_73123.num_elements = 1;
c_73123.elements = (object *)alloca(sizeof(object) * 1);
c_73123.elements[0] = new_737;

return_closcall1(data,(closure)&c_73104,  &c_73123);; 
}

static void __lambda_9(void *data, int argc, object self_7374, object k_7343) {
  
closureN_type c_73125;
c_73125.hdr.mark = gc_color_red;
 c_73125.hdr.grayed = 0;
c_73125.tag = closureN_tag;
 c_73125.fn = (function_type)__lambda_8;
c_73125.num_args = 1;
c_73125.num_elements = 2;
c_73125.elements = (object *)alloca(sizeof(object) * 2);
c_73125.elements[0] = k_7343;
c_73125.elements[1] = ((closureN)self_7374)->elements[0];

return_closcall1(data,(closure)&c_73125,  quote__121param_91set_67_125);; 
}

static void __lambda_8(void *data, int argc, object self_7375, object r_7344) {
  return_closcall3(data,  __glo_current_91input_91port_scheme_base,  ((closureN)self_7375)->elements[0], r_7344, ((closureN)self_7375)->elements[1]);; 
}

static void __lambda_7(void *data, int argc, object self_7376, object r_7337) {
  
closureN_type c_73106;
c_73106.hdr.mark = gc_color_red;
 c_73106.hdr.grayed = 0;
c_73106.tag = closureN_tag;
 c_73106.fn = (function_type)__lambda_2;
c_73106.num_args = 1;
c_73106.num_elements = 3;
c_73106.elements = (object *)alloca(sizeof(object) * 3);
c_73106.elements[0] = ((closureN)self_7376)->elements[0];
c_73106.elements[1] = r_7337;
c_73106.elements[2] = ((closureN)self_7376)->elements[2];


closureN_type c_73111;
c_73111.hdr.mark = gc_color_red;
 c_73111.hdr.grayed = 0;
c_73111.tag = closureN_tag;
 c_73111.fn = (function_type)__lambda_6;
c_73111.num_args = 0;
c_73111.num_elements = 1;
c_73111.elements = (object *)alloca(sizeof(object) * 1);
c_73111.elements[0] = ((closureN)self_7376)->elements[1];

return_closcall1(data,(closure)&c_73106,  &c_73111);; 
}

static void __lambda_6(void *data, int argc, object self_7377, object k_7339) {
  
closureN_type c_73113;
c_73113.hdr.mark = gc_color_red;
 c_73113.hdr.grayed = 0;
c_73113.tag = closureN_tag;
 c_73113.fn = (function_type)__lambda_5;
c_73113.num_args = 1;
c_73113.num_elements = 2;
c_73113.elements = (object *)alloca(sizeof(object) * 2);
c_73113.elements[0] = k_7339;
c_73113.elements[1] = ((closureN)self_7377)->elements[0];

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_73113);; 
}

static void __lambda_5(void *data, int argc, object self_7378, object r_7342) {
  
closureN_type c_73115;
c_73115.hdr.mark = gc_color_red;
 c_73115.hdr.grayed = 0;
c_73115.tag = closureN_tag;
 c_73115.fn = (function_type)__lambda_4;
c_73115.num_args = 1;
c_73115.num_elements = 2;
c_73115.elements = (object *)alloca(sizeof(object) * 2);
c_73115.elements[0] = ((closureN)self_7378)->elements[0];
c_73115.elements[1] = ((closureN)self_7378)->elements[1];

return_closcall1(data,(closure)&c_73115,  Cyc_io_close_port(data, r_7342));; 
}

static void __lambda_4(void *data, int argc, object self_7379, object r_7340) {
  
closureN_type c_73117;
c_73117.hdr.mark = gc_color_red;
 c_73117.hdr.grayed = 0;
c_73117.tag = closureN_tag;
 c_73117.fn = (function_type)__lambda_3;
c_73117.num_args = 1;
c_73117.num_elements = 2;
c_73117.elements = (object *)alloca(sizeof(object) * 2);
c_73117.elements[0] = ((closureN)self_7379)->elements[0];
c_73117.elements[1] = ((closureN)self_7379)->elements[1];

return_closcall1(data,(closure)&c_73117,  quote__121param_91set_67_125);; 
}

static void __lambda_3(void *data, int argc, object self_7380, object r_7341) {
  return_closcall3(data,  __glo_current_91input_91port_scheme_base,  ((closureN)self_7380)->elements[0], r_7341, ((closureN)self_7380)->elements[1]);; 
}

static void __lambda_2(void *data, int argc, object self_7381, object r_7338) {
  return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7381)->elements[0], ((closureN)self_7381)->elements[1], ((closureN)self_7381)->elements[2], r_7338);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) {
  Cyc_st_add(data, "scheme/file.sld:call-with-output-file");

port_type c_7391 = Cyc_io_open_output_file(data,string_7310);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7350, &c_7391, proc_739);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) {
  Cyc_st_add(data, "scheme/file.sld:call-with-input-file");

port_type c_7386 = Cyc_io_open_input_file(data,string_7312);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7354, &c_7386, proc_7311);; 
}

void c_schemefile_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote__121param_91convert_125 = find_or_add_symbol("<param-convert>");
  quote__121param_91set_67_125 = find_or_add_symbol("<param-set!>");

  add_global((object *) &__glo_lib_91init_117schemefile_scheme_file);
  add_global((object *) &__glo_with_91output_91to_91file_scheme_file);
  add_global((object *) &__glo_with_91input_91from_91file_scheme_file);
  add_global((object *) &__glo_call_91with_91output_91file_scheme_file);
  add_global((object *) &__glo_call_91with_91input_91file_scheme_file);
  add_symbol(quote__121param_91convert_125);
  add_symbol(quote__121param_91set_67_125);
  mclosure0(c_73176, (function_type)__lambda_30);c_73176.num_args = 0; 
  __glo_lib_91init_117schemefile_scheme_file = &c_73176; 
  mclosure0(c_73134, (function_type)__lambda_29);c_73134.num_args = 2; 
  __glo_with_91output_91to_91file_scheme_file = &c_73134; 
  mclosure0(c_7392, (function_type)__lambda_15);c_7392.num_args = 2; 
  __glo_with_91input_91from_91file_scheme_file = &c_7392; 
  mclosure0(c_7387, (function_type)__lambda_1);c_7387.num_args = 2; 
  __glo_call_91with_91output_91file_scheme_file = &c_7387; 
  mclosure0(c_7382, (function_type)__lambda_0);c_7382.num_args = 2; 
  __glo_call_91with_91input_91file_scheme_file = &c_7382; 

  make_cvar(cvar_73178, (object *)&__glo_lib_91init_117schemefile_scheme_file);make_pair(pair_73179, find_or_add_symbol("lib-init:schemefile"), &cvar_73178);
  make_cvar(cvar_73180, (object *)&__glo_with_91output_91to_91file_scheme_file);make_pair(pair_73181, find_or_add_symbol("with-output-to-file"), &cvar_73180);
  make_cvar(cvar_73182, (object *)&__glo_with_91input_91from_91file_scheme_file);make_pair(pair_73183, find_or_add_symbol("with-input-from-file"), &cvar_73182);
  make_cvar(cvar_73184, (object *)&__glo_call_91with_91output_91file_scheme_file);make_pair(pair_73185, find_or_add_symbol("call-with-output-file"), &cvar_73184);
  make_cvar(cvar_73186, (object *)&__glo_call_91with_91input_91file_scheme_file);make_pair(pair_73187, find_or_add_symbol("call-with-input-file"), &cvar_73186);
make_pair(c_73188, &pair_73179,Cyc_global_variables);
make_pair(c_73189, &pair_73181, &c_73188);
make_pair(c_73190, &pair_73183, &c_73189);
make_pair(c_73191, &pair_73185, &c_73190);
make_pair(c_73192, &pair_73187, &c_73191);
Cyc_global_variables = &c_73192;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemefile_scheme_file)->fn)(data, 1, cont, cont);
}
