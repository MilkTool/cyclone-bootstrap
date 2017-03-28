/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.4.1 
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
extern object __glo_bignum_127_scheme_base;
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
extern object __glo_with_91handler_scheme_base;
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
#include "cyclone/runtime.h"
defsymbol(_121param_91convert_125);
defsymbol(_121param_91set_67_125);
static void __lambda_20(void *data, int argc, closure _,object k_7315) ;
static void __lambda_19(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) ;
static void __lambda_18(void *data, int argc, object self_7356, object r_7319) ;
static void __lambda_17(void *data, int argc, object self_7357, object r_7329) ;
static void __lambda_16(void *data, int argc, object self_7358, object r_7320) ;
static void __lambda_15(void *data, int argc, object self_7359, object old_734, object new_733) ;
static void __lambda_14(void *data, int argc, object self_7360, object k_7323) ;
static void __lambda_13(void *data, int argc, object self_7361, object r_7326) ;
static void __lambda_12(void *data, int argc, object self_7362, object r_7324) ;
static void __lambda_11(void *data, int argc, object self_7363, object k_7327) ;
static void __lambda_10(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) ;
static void __lambda_9(void *data, int argc, object self_7364, object r_7335) ;
static void __lambda_8(void *data, int argc, object self_7365, object r_7345) ;
static void __lambda_7(void *data, int argc, object self_7366, object r_7336) ;
static void __lambda_6(void *data, int argc, object self_7367, object old_738, object new_737) ;
static void __lambda_5(void *data, int argc, object self_7368, object k_7339) ;
static void __lambda_4(void *data, int argc, object self_7369, object r_7342) ;
static void __lambda_3(void *data, int argc, object self_7370, object r_7340) ;
static void __lambda_2(void *data, int argc, object self_7371, object k_7343) ;
static void __lambda_1(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) ;
static void __lambda_0(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) ;

static void __lambda_20(void *data, int argc, closure _,object k_7315) {
  Cyc_st_add(data, "scheme/file.sld:lib-init:schemefile");
return_closcall1(data,  k_7315,  obj_int2obj(0));; 
}

static void __lambda_19(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73114;
c_73114.hdr.mark = gc_color_red;
 c_73114.hdr.grayed = 0;
c_73114.tag = closureN_tag;
 c_73114.fn = (function_type)__lambda_18;
c_73114.num_args = 1;
c_73114.num_elements = 3;
c_73114.elements = (object *)alloca(sizeof(object) * 3);
c_73114.elements[0] = k_7318;
c_73114.elements[1] = string_732;
c_73114.elements[2] = thunk_731;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73114);; 
}

static void __lambda_18(void *data, int argc, object self_7356, object r_7319) {
  
closureN_type c_73116;
c_73116.hdr.mark = gc_color_red;
 c_73116.hdr.grayed = 0;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_17;
c_73116.num_args = 1;
c_73116.num_elements = 4;
c_73116.elements = (object *)alloca(sizeof(object) * 4);
c_73116.elements[0] = ((closureN)self_7356)->elements[0];
c_73116.elements[1] = r_7319;
c_73116.elements[2] = ((closureN)self_7356)->elements[1];
c_73116.elements[3] = ((closureN)self_7356)->elements[2];

return_closcall2(data,  __glo_current_91output_91port_scheme_base,  &c_73116, quote__121param_91convert_125);; 
}

static void __lambda_17(void *data, int argc, object self_7357, object r_7329) {
  
closureN_type c_73118;
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_16;
c_73118.num_args = 1;
c_73118.num_elements = 3;
c_73118.elements = (object *)alloca(sizeof(object) * 3);
c_73118.elements[0] = ((closureN)self_7357)->elements[0];
c_73118.elements[1] = ((closureN)self_7357)->elements[1];
c_73118.elements[2] = ((closureN)self_7357)->elements[3];


port_type c_73140 = Cyc_io_open_output_file(data,((closureN)self_7357)->elements[2]);
return_closcall2(data,  r_7329,  &c_73118, &c_73140);; 
}

static void __lambda_16(void *data, int argc, object self_7358, object r_7320) {
  
closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_15;
c_73120.num_args = 2;
c_73120.num_elements = 2;
c_73120.elements = (object *)alloca(sizeof(object) * 2);
c_73120.elements[0] = ((closureN)self_7358)->elements[0];
c_73120.elements[1] = ((closureN)self_7358)->elements[2];

return_closcall2(data,(closure)&c_73120,  ((closureN)self_7358)->elements[1], r_7320);; 
}

static void __lambda_15(void *data, int argc, object self_7359, object old_734, object new_733) {
  
closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_11;
c_73123.num_args = 0;
c_73123.num_elements = 1;
c_73123.elements = (object *)alloca(sizeof(object) * 1);
c_73123.elements[0] = new_733;


closureN_type c_73127;
c_73127.hdr.mark = gc_color_red;
 c_73127.hdr.grayed = 0;
c_73127.tag = closureN_tag;
 c_73127.fn = (function_type)__lambda_14;
c_73127.num_args = 0;
c_73127.num_elements = 1;
c_73127.elements = (object *)alloca(sizeof(object) * 1);
c_73127.elements[0] = old_734;

return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7359)->elements[0], &c_73123, ((closureN)self_7359)->elements[1], &c_73127);; 
}

static void __lambda_14(void *data, int argc, object self_7360, object k_7323) {
  
closureN_type c_73129;
c_73129.hdr.mark = gc_color_red;
 c_73129.hdr.grayed = 0;
c_73129.tag = closureN_tag;
 c_73129.fn = (function_type)__lambda_13;
c_73129.num_args = 1;
c_73129.num_elements = 2;
c_73129.elements = (object *)alloca(sizeof(object) * 2);
c_73129.elements[0] = k_7323;
c_73129.elements[1] = ((closureN)self_7360)->elements[0];

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73129);; 
}

static void __lambda_13(void *data, int argc, object self_7361, object r_7326) {
  
closureN_type c_73131;
c_73131.hdr.mark = gc_color_red;
 c_73131.hdr.grayed = 0;
c_73131.tag = closureN_tag;
 c_73131.fn = (function_type)__lambda_12;
c_73131.num_args = 1;
c_73131.num_elements = 2;
c_73131.elements = (object *)alloca(sizeof(object) * 2);
c_73131.elements[0] = ((closureN)self_7361)->elements[0];
c_73131.elements[1] = ((closureN)self_7361)->elements[1];

return_closcall1(data,(closure)&c_73131,  Cyc_io_close_port(data, r_7326));; 
}

static void __lambda_12(void *data, int argc, object self_7362, object r_7324) {
  return_closcall3(data,  __glo_current_91output_91port_scheme_base,  ((closureN)self_7362)->elements[0], quote__121param_91set_67_125, ((closureN)self_7362)->elements[1]);; 
}

static void __lambda_11(void *data, int argc, object self_7363, object k_7327) {
  return_closcall3(data,  __glo_current_91output_91port_scheme_base,  k_7327, quote__121param_91set_67_125, ((closureN)self_7363)->elements[0]);; 
}

static void __lambda_10(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_7384;
c_7384.hdr.mark = gc_color_red;
 c_7384.hdr.grayed = 0;
c_7384.tag = closureN_tag;
 c_7384.fn = (function_type)__lambda_9;
c_7384.num_args = 1;
c_7384.num_elements = 3;
c_7384.elements = (object *)alloca(sizeof(object) * 3);
c_7384.elements[0] = k_7334;
c_7384.elements[1] = string_736;
c_7384.elements[2] = thunk_735;

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_7384);; 
}

static void __lambda_9(void *data, int argc, object self_7364, object r_7335) {
  
closureN_type c_7386;
c_7386.hdr.mark = gc_color_red;
 c_7386.hdr.grayed = 0;
c_7386.tag = closureN_tag;
 c_7386.fn = (function_type)__lambda_8;
c_7386.num_args = 1;
c_7386.num_elements = 4;
c_7386.elements = (object *)alloca(sizeof(object) * 4);
c_7386.elements[0] = ((closureN)self_7364)->elements[0];
c_7386.elements[1] = r_7335;
c_7386.elements[2] = ((closureN)self_7364)->elements[1];
c_7386.elements[3] = ((closureN)self_7364)->elements[2];

return_closcall2(data,  __glo_current_91input_91port_scheme_base,  &c_7386, quote__121param_91convert_125);; 
}

static void __lambda_8(void *data, int argc, object self_7365, object r_7345) {
  
closureN_type c_7388;
c_7388.hdr.mark = gc_color_red;
 c_7388.hdr.grayed = 0;
c_7388.tag = closureN_tag;
 c_7388.fn = (function_type)__lambda_7;
c_7388.num_args = 1;
c_7388.num_elements = 3;
c_7388.elements = (object *)alloca(sizeof(object) * 3);
c_7388.elements[0] = ((closureN)self_7365)->elements[0];
c_7388.elements[1] = ((closureN)self_7365)->elements[1];
c_7388.elements[2] = ((closureN)self_7365)->elements[3];


port_type c_73110 = Cyc_io_open_input_file(data,((closureN)self_7365)->elements[2]);
return_closcall2(data,  r_7345,  &c_7388, &c_73110);; 
}

static void __lambda_7(void *data, int argc, object self_7366, object r_7336) {
  
closureN_type c_7390;
c_7390.hdr.mark = gc_color_red;
 c_7390.hdr.grayed = 0;
c_7390.tag = closureN_tag;
 c_7390.fn = (function_type)__lambda_6;
c_7390.num_args = 2;
c_7390.num_elements = 2;
c_7390.elements = (object *)alloca(sizeof(object) * 2);
c_7390.elements[0] = ((closureN)self_7366)->elements[0];
c_7390.elements[1] = ((closureN)self_7366)->elements[2];

return_closcall2(data,(closure)&c_7390,  ((closureN)self_7366)->elements[1], r_7336);; 
}

static void __lambda_6(void *data, int argc, object self_7367, object old_738, object new_737) {
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_2;
c_7393.num_args = 0;
c_7393.num_elements = 1;
c_7393.elements = (object *)alloca(sizeof(object) * 1);
c_7393.elements[0] = new_737;


closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_5;
c_7397.num_args = 0;
c_7397.num_elements = 1;
c_7397.elements = (object *)alloca(sizeof(object) * 1);
c_7397.elements[0] = old_738;

return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7367)->elements[0], &c_7393, ((closureN)self_7367)->elements[1], &c_7397);; 
}

static void __lambda_5(void *data, int argc, object self_7368, object k_7339) {
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_4;
c_7399.num_args = 1;
c_7399.num_elements = 2;
c_7399.elements = (object *)alloca(sizeof(object) * 2);
c_7399.elements[0] = k_7339;
c_7399.elements[1] = ((closureN)self_7368)->elements[0];

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_7399);; 
}

static void __lambda_4(void *data, int argc, object self_7369, object r_7342) {
  
closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_3;
c_73101.num_args = 1;
c_73101.num_elements = 2;
c_73101.elements = (object *)alloca(sizeof(object) * 2);
c_73101.elements[0] = ((closureN)self_7369)->elements[0];
c_73101.elements[1] = ((closureN)self_7369)->elements[1];

return_closcall1(data,(closure)&c_73101,  Cyc_io_close_port(data, r_7342));; 
}

static void __lambda_3(void *data, int argc, object self_7370, object r_7340) {
  return_closcall3(data,  __glo_current_91input_91port_scheme_base,  ((closureN)self_7370)->elements[0], quote__121param_91set_67_125, ((closureN)self_7370)->elements[1]);; 
}

static void __lambda_2(void *data, int argc, object self_7371, object k_7343) {
  return_closcall3(data,  __glo_current_91input_91port_scheme_base,  k_7343, quote__121param_91set_67_125, ((closureN)self_7371)->elements[0]);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) {
  Cyc_st_add(data, "scheme/file.sld:call-with-output-file");

port_type c_7381 = Cyc_io_open_output_file(data,string_7310);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7350, &c_7381, proc_739);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) {
  Cyc_st_add(data, "scheme/file.sld:call-with-input-file");

port_type c_7376 = Cyc_io_open_input_file(data,string_7312);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7354, &c_7376, proc_7311);; 
}

void c_schemefile_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote__121param_91convert_125 = find_or_add_symbol("<param-convert>");
  quote__121param_91set_67_125 = find_or_add_symbol("<param-set!>");

  add_global((object *) &__glo_lib_91init_117schemefile_scheme_file);
  add_global((object *) &__glo_with_91output_91to_91file_scheme_file);
  add_global((object *) &__glo_with_91input_91from_91file_scheme_file);
  add_global((object *) &__glo_call_91with_91output_91file_scheme_file);
  add_global((object *) &__glo_call_91with_91input_91file_scheme_file);
  add_symbol(quote__121param_91convert_125);
  add_symbol(quote__121param_91set_67_125);
  mclosure0(c_73142, (function_type)__lambda_20);c_73142.num_args = 0; 
  __glo_lib_91init_117schemefile_scheme_file = &c_73142; 
  mclosure0(c_73112, (function_type)__lambda_19);c_73112.num_args = 2; 
  __glo_with_91output_91to_91file_scheme_file = &c_73112; 
  mclosure0(c_7382, (function_type)__lambda_10);c_7382.num_args = 2; 
  __glo_with_91input_91from_91file_scheme_file = &c_7382; 
  mclosure0(c_7377, (function_type)__lambda_1);c_7377.num_args = 2; 
  __glo_call_91with_91output_91file_scheme_file = &c_7377; 
  mclosure0(c_7372, (function_type)__lambda_0);c_7372.num_args = 2; 
  __glo_call_91with_91input_91file_scheme_file = &c_7372; 

  make_cvar(cvar_73144, (object *)&__glo_lib_91init_117schemefile_scheme_file);make_pair(pair_73145, find_or_add_symbol("lib-init:schemefile"), &cvar_73144);
  make_cvar(cvar_73146, (object *)&__glo_with_91output_91to_91file_scheme_file);make_pair(pair_73147, find_or_add_symbol("with-output-to-file"), &cvar_73146);
  make_cvar(cvar_73148, (object *)&__glo_with_91input_91from_91file_scheme_file);make_pair(pair_73149, find_or_add_symbol("with-input-from-file"), &cvar_73148);
  make_cvar(cvar_73150, (object *)&__glo_call_91with_91output_91file_scheme_file);make_pair(pair_73151, find_or_add_symbol("call-with-output-file"), &cvar_73150);
  make_cvar(cvar_73152, (object *)&__glo_call_91with_91input_91file_scheme_file);make_pair(pair_73153, find_or_add_symbol("call-with-input-file"), &cvar_73152);
make_pair(c_73154, &pair_73145,Cyc_global_variables);
make_pair(c_73155, &pair_73147, &c_73154);
make_pair(c_73156, &pair_73149, &c_73155);
make_pair(c_73157, &pair_73151, &c_73156);
make_pair(c_73158, &pair_73153, &c_73157);
Cyc_global_variables = &c_73158;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemefile_scheme_file)->fn)(data, 1, cont, cont);
}
void c_schemefile_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_file");
  c_schemefile_entry_pt_first_lambda(data, argc, cont,value);
}
