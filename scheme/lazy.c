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

#include "cyclone/types.h"
object __glo_lib_91init_117schemelazy_scheme_lazy = NULL;
object __glo_promise_127_scheme_lazy = NULL;
object __glo_make_91promise_scheme_lazy = NULL;
object __glo_delay_91force_scheme_lazy = NULL;
object __glo_delay_scheme_lazy = NULL;
object __glo_force_scheme_lazy = NULL;
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
defsymbol(make_91promise);
defsymbol(lambda);
static void __lambda_21(void *data, int argc, closure _,object k_7316) ;
static void __lambda_20(void *data, int argc, closure _,object k_7322, object proc_733) ;
static void __lambda_19(void *data, int argc, object self_7356, object result_91ready_127_735, object result_734) ;
static void __lambda_18(void *data, int argc, object self_7357, object result_91ready_127_735) ;
static void __lambda_17(void *data, int argc, object self_7358, object result_734) ;
static void __lambda_16(void *data, int argc, object self_7359, object k_7323) ;
static void __lambda_15(void *data, int argc, object self_7360, object x_736) ;
static void __lambda_14(void *data, int argc, object self_7361, object r_7325) ;
static void __lambda_13(void *data, int argc, object self_7362, object r_7326) ;
static void __lambda_12(void *data, int argc, closure _,object k_7329, object expr_739, object rename_738, object compare_737) ;
static void __lambda_11(void *data, int argc, object self_7363, object r_7330) ;
static void __lambda_10(void *data, int argc, object self_7364, object r_7334) ;
static void __lambda_9(void *data, int argc, object self_7365, object r_7336) ;
static void __lambda_8(void *data, int argc, object self_7366, object r_7339) ;
static void __lambda_7(void *data, int argc, object self_7367, object r_7333) ;
static void __lambda_6(void *data, int argc, closure _,object k_7342, object expr_7312, object rename_7311, object compare_7310) ;
static void __lambda_5(void *data, int argc, object self_7368, object r_7343) ;
static void __lambda_4(void *data, int argc, object self_7369, object r_7347) ;
static void __lambda_3(void *data, int argc, object self_7370, object r_7349) ;
static void __lambda_2(void *data, int argc, object self_7371, object r_7352) ;
static void __lambda_1(void *data, int argc, object self_7372, object r_7346) ;
static void __lambda_0(void *data, int argc, closure _,object k_7355, object object_7313) ;

static void __lambda_21(void *data, int argc, closure _,object k_7316) {
  Cyc_st_add(data, "scheme/lazy.sld:lib-init:schemelazy");
return_closcall1(data,  k_7316,  global_set(__glo_promise_127_scheme_lazy, primitive_procedure_127));; 
}

static void __lambda_20(void *data, int argc, closure _,object k_7322, object proc_733) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73147;
c_73147.hdr.mark = gc_color_red;
 c_73147.hdr.grayed = 0;
c_73147.tag = closureN_tag;
 c_73147.fn = (function_type)__lambda_19;
c_73147.num_args = 2;
c_73147.num_elements = 2;
c_73147.elements = (object *)alloca(sizeof(object) * 2);
c_73147.elements[0] = k_7322;
c_73147.elements[1] = proc_733;

return_closcall2(data,(closure)&c_73147,  boolean_f, boolean_f);; 
}

static void __lambda_19(void *data, int argc, object self_7356, object result_91ready_127_735, object result_734) {
  
closureN_type c_73149;
c_73149.hdr.mark = gc_color_red;
 c_73149.hdr.grayed = 0;
c_73149.tag = closureN_tag;
 c_73149.fn = (function_type)__lambda_18;
c_73149.num_args = 1;
c_73149.num_elements = 3;
c_73149.elements = (object *)alloca(sizeof(object) * 3);
c_73149.elements[0] = ((closureN)self_7356)->elements[0];
c_73149.elements[1] = ((closureN)self_7356)->elements[1];
c_73149.elements[2] = result_734;


make_cell(c_73194,result_91ready_127_735);
return_closcall1(data,(closure)&c_73149,  &c_73194);; 
}

static void __lambda_18(void *data, int argc, object self_7357, object result_91ready_127_735) {
  
closureN_type c_73151;
c_73151.hdr.mark = gc_color_red;
 c_73151.hdr.grayed = 0;
c_73151.tag = closureN_tag;
 c_73151.fn = (function_type)__lambda_17;
c_73151.num_args = 1;
c_73151.num_elements = 3;
c_73151.elements = (object *)alloca(sizeof(object) * 3);
c_73151.elements[0] = ((closureN)self_7357)->elements[0];
c_73151.elements[1] = ((closureN)self_7357)->elements[1];
c_73151.elements[2] = result_91ready_127_735;


make_cell(c_73190,((closureN)self_7357)->elements[2]);
return_closcall1(data,(closure)&c_73151,  &c_73190);; 
}

static void __lambda_17(void *data, int argc, object self_7358, object result_734) {
  
closureN_type c_73154;
c_73154.hdr.mark = gc_color_red;
 c_73154.hdr.grayed = 0;
c_73154.tag = closureN_tag;
 c_73154.fn = (function_type)__lambda_16;
c_73154.num_args = 0;
c_73154.num_elements = 3;
c_73154.elements = (object *)alloca(sizeof(object) * 3);
c_73154.elements[0] = ((closureN)self_7358)->elements[1];
c_73154.elements[1] = result_734;
c_73154.elements[2] = ((closureN)self_7358)->elements[2];

return_closcall1(data,  ((closureN)self_7358)->elements[0],  &c_73154);; 
}

static void __lambda_16(void *data, int argc, object self_7359, object k_7323) {
  if( (boolean_f != cell_get(((closureN)self_7359)->elements[2])) ){ 
  return_closcall1(data,  k_7323,  cell_get(((closureN)self_7359)->elements[1]));
} else { 
  
closureN_type c_73164;
c_73164.hdr.mark = gc_color_red;
 c_73164.hdr.grayed = 0;
c_73164.tag = closureN_tag;
 c_73164.fn = (function_type)__lambda_15;
c_73164.num_args = 1;
c_73164.num_elements = 3;
c_73164.elements = (object *)alloca(sizeof(object) * 3);
c_73164.elements[0] = k_7323;
c_73164.elements[1] = ((closureN)self_7359)->elements[1];
c_73164.elements[2] = ((closureN)self_7359)->elements[2];

return_closcall1(data,  ((closureN)self_7359)->elements[0],  &c_73164);}
; 
}

static void __lambda_15(void *data, int argc, object self_7360, object x_736) {
  if( (boolean_f != cell_get(((closureN)self_7360)->elements[2])) ){ 
  return_closcall1(data,  ((closureN)self_7360)->elements[0],  cell_get(((closureN)self_7360)->elements[1]));
} else { 
  
closureN_type c_73174;
c_73174.hdr.mark = gc_color_red;
 c_73174.hdr.grayed = 0;
c_73174.tag = closureN_tag;
 c_73174.fn = (function_type)__lambda_14;
c_73174.num_args = 1;
c_73174.num_elements = 3;
c_73174.elements = (object *)alloca(sizeof(object) * 3);
c_73174.elements[0] = ((closureN)self_7360)->elements[0];
c_73174.elements[1] = ((closureN)self_7360)->elements[1];
c_73174.elements[2] = ((closureN)self_7360)->elements[2];

return_closcall1(data,(closure)&c_73174,  Cyc_set_cell(data, ((closureN)self_7360)->elements[1], x_736));}
; 
}

static void __lambda_14(void *data, int argc, object self_7361, object r_7325) {
  
closureN_type c_73176;
c_73176.hdr.mark = gc_color_red;
 c_73176.hdr.grayed = 0;
c_73176.tag = closureN_tag;
 c_73176.fn = (function_type)__lambda_13;
c_73176.num_args = 1;
c_73176.num_elements = 2;
c_73176.elements = (object *)alloca(sizeof(object) * 2);
c_73176.elements[0] = ((closureN)self_7361)->elements[0];
c_73176.elements[1] = ((closureN)self_7361)->elements[1];

return_closcall1(data,(closure)&c_73176,  Cyc_set_cell(data, ((closureN)self_7361)->elements[2], boolean_t));; 
}

static void __lambda_13(void *data, int argc, object self_7362, object r_7326) {
  return_closcall1(data,  ((closureN)self_7362)->elements[0],  cell_get(((closureN)self_7362)->elements[1]));; 
}

static void __lambda_12(void *data, int argc, closure _,object k_7329, object expr_739, object rename_738, object compare_737) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73112;
c_73112.hdr.mark = gc_color_red;
 c_73112.hdr.grayed = 0;
c_73112.tag = closureN_tag;
 c_73112.fn = (function_type)__lambda_11;
c_73112.num_args = 1;
c_73112.num_elements = 2;
c_73112.elements = (object *)alloca(sizeof(object) * 2);
c_73112.elements[0] = expr_739;
c_73112.elements[1] = k_7329;

return_closcall1(data,(closure)&c_73112,  quote_make_91promise);; 
}

static void __lambda_11(void *data, int argc, object self_7363, object r_7330) {
  
closureN_type c_73114;
c_73114.hdr.mark = gc_color_red;
 c_73114.hdr.grayed = 0;
c_73114.tag = closureN_tag;
 c_73114.fn = (function_type)__lambda_10;
c_73114.num_args = 1;
c_73114.num_elements = 3;
c_73114.elements = (object *)alloca(sizeof(object) * 3);
c_73114.elements[0] = ((closureN)self_7363)->elements[0];
c_73114.elements[1] = ((closureN)self_7363)->elements[1];
c_73114.elements[2] = r_7330;

return_closcall1(data,(closure)&c_73114,  quote_lambda);; 
}

static void __lambda_10(void *data, int argc, object self_7364, object r_7334) {
  
closureN_type c_73116;
c_73116.hdr.mark = gc_color_red;
 c_73116.hdr.grayed = 0;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_9;
c_73116.num_args = 1;
c_73116.num_elements = 4;
c_73116.elements = (object *)alloca(sizeof(object) * 4);
c_73116.elements[0] = ((closureN)self_7364)->elements[0];
c_73116.elements[1] = ((closureN)self_7364)->elements[1];
c_73116.elements[2] = ((closureN)self_7364)->elements[2];
c_73116.elements[3] = r_7334;

return_closcall1(data,(closure)&c_73116,  NULL);; 
}

static void __lambda_9(void *data, int argc, object self_7365, object r_7336) {
  
closureN_type c_73118;
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_8;
c_73118.num_args = 1;
c_73118.num_elements = 5;
c_73118.elements = (object *)alloca(sizeof(object) * 5);
c_73118.elements[0] = ((closureN)self_7365)->elements[0];
c_73118.elements[1] = ((closureN)self_7365)->elements[1];
c_73118.elements[2] = ((closureN)self_7365)->elements[2];
c_73118.elements[3] = ((closureN)self_7365)->elements[3];
c_73118.elements[4] = r_7336;

return_closcall1(data,(closure)&c_73118,  NULL);; 
}

static void __lambda_8(void *data, int argc, object self_7366, object r_7339) {
  
closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_7;
c_73120.num_args = 1;
c_73120.num_elements = 6;
c_73120.elements = (object *)alloca(sizeof(object) * 6);
c_73120.elements[0] = ((closureN)self_7366)->elements[0];
c_73120.elements[1] = ((closureN)self_7366)->elements[1];
c_73120.elements[2] = ((closureN)self_7366)->elements[2];
c_73120.elements[3] = ((closureN)self_7366)->elements[3];
c_73120.elements[4] = ((closureN)self_7366)->elements[4];
c_73120.elements[5] = r_7339;

return_closcall1(data,(closure)&c_73120,  NULL);; 
}

static void __lambda_7(void *data, int argc, object self_7367, object r_7333) {
  
make_pair(c_73140,Cyc_cadr(data, ((closureN)self_7367)->elements[0]), ((closureN)self_7367)->elements[5]);

make_pair(c_73136,((closureN)self_7367)->elements[4], &c_73140);

make_pair(c_73132,((closureN)self_7367)->elements[3], &c_73136);

make_pair(c_73129,&c_73132, r_7333);

make_pair(c_73125,((closureN)self_7367)->elements[2], &c_73129);
return_closcall1(data,  ((closureN)self_7367)->elements[1],  &c_73125);; 
}

static void __lambda_6(void *data, int argc, closure _,object k_7342, object expr_7312, object rename_7311, object compare_7310) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7377;
c_7377.hdr.mark = gc_color_red;
 c_7377.hdr.grayed = 0;
c_7377.tag = closureN_tag;
 c_7377.fn = (function_type)__lambda_5;
c_7377.num_args = 1;
c_7377.num_elements = 2;
c_7377.elements = (object *)alloca(sizeof(object) * 2);
c_7377.elements[0] = expr_7312;
c_7377.elements[1] = k_7342;

return_closcall1(data,(closure)&c_7377,  quote_make_91promise);; 
}

static void __lambda_5(void *data, int argc, object self_7368, object r_7343) {
  
closureN_type c_7379;
c_7379.hdr.mark = gc_color_red;
 c_7379.hdr.grayed = 0;
c_7379.tag = closureN_tag;
 c_7379.fn = (function_type)__lambda_4;
c_7379.num_args = 1;
c_7379.num_elements = 3;
c_7379.elements = (object *)alloca(sizeof(object) * 3);
c_7379.elements[0] = ((closureN)self_7368)->elements[0];
c_7379.elements[1] = ((closureN)self_7368)->elements[1];
c_7379.elements[2] = r_7343;

return_closcall1(data,(closure)&c_7379,  quote_lambda);; 
}

static void __lambda_4(void *data, int argc, object self_7369, object r_7347) {
  
closureN_type c_7381;
c_7381.hdr.mark = gc_color_red;
 c_7381.hdr.grayed = 0;
c_7381.tag = closureN_tag;
 c_7381.fn = (function_type)__lambda_3;
c_7381.num_args = 1;
c_7381.num_elements = 4;
c_7381.elements = (object *)alloca(sizeof(object) * 4);
c_7381.elements[0] = ((closureN)self_7369)->elements[0];
c_7381.elements[1] = ((closureN)self_7369)->elements[1];
c_7381.elements[2] = ((closureN)self_7369)->elements[2];
c_7381.elements[3] = r_7347;

return_closcall1(data,(closure)&c_7381,  NULL);; 
}

static void __lambda_3(void *data, int argc, object self_7370, object r_7349) {
  
closureN_type c_7383;
c_7383.hdr.mark = gc_color_red;
 c_7383.hdr.grayed = 0;
c_7383.tag = closureN_tag;
 c_7383.fn = (function_type)__lambda_2;
c_7383.num_args = 1;
c_7383.num_elements = 5;
c_7383.elements = (object *)alloca(sizeof(object) * 5);
c_7383.elements[0] = ((closureN)self_7370)->elements[0];
c_7383.elements[1] = ((closureN)self_7370)->elements[1];
c_7383.elements[2] = ((closureN)self_7370)->elements[2];
c_7383.elements[3] = ((closureN)self_7370)->elements[3];
c_7383.elements[4] = r_7349;

return_closcall1(data,(closure)&c_7383,  NULL);; 
}

static void __lambda_2(void *data, int argc, object self_7371, object r_7352) {
  
closureN_type c_7385;
c_7385.hdr.mark = gc_color_red;
 c_7385.hdr.grayed = 0;
c_7385.tag = closureN_tag;
 c_7385.fn = (function_type)__lambda_1;
c_7385.num_args = 1;
c_7385.num_elements = 6;
c_7385.elements = (object *)alloca(sizeof(object) * 6);
c_7385.elements[0] = ((closureN)self_7371)->elements[0];
c_7385.elements[1] = ((closureN)self_7371)->elements[1];
c_7385.elements[2] = ((closureN)self_7371)->elements[2];
c_7385.elements[3] = ((closureN)self_7371)->elements[3];
c_7385.elements[4] = ((closureN)self_7371)->elements[4];
c_7385.elements[5] = r_7352;

return_closcall1(data,(closure)&c_7385,  NULL);; 
}

static void __lambda_1(void *data, int argc, object self_7372, object r_7346) {
  
make_pair(c_73105,Cyc_cadr(data, ((closureN)self_7372)->elements[0]), ((closureN)self_7372)->elements[5]);

make_pair(c_73101,((closureN)self_7372)->elements[4], &c_73105);

make_pair(c_7397,((closureN)self_7372)->elements[3], &c_73101);

make_pair(c_7394,&c_7397, r_7346);

make_pair(c_7390,((closureN)self_7372)->elements[2], &c_7394);
return_closcall1(data,  ((closureN)self_7372)->elements[1],  &c_7390);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7355, object object_7313) {
  Cyc_st_add(data, "scheme/lazy.sld:force");
return_closcall1(data,  object_7313,  k_7355);; 
}

void c_schemelazy_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_make_91promise = find_or_add_symbol("make-promise");
  quote_lambda = find_or_add_symbol("lambda");

  add_global((object *) &__glo_lib_91init_117schemelazy_scheme_lazy);
  add_global((object *) &__glo_promise_127_scheme_lazy);
  add_global((object *) &__glo_make_91promise_scheme_lazy);
  add_global((object *) &__glo_delay_91force_scheme_lazy);
  add_global((object *) &__glo_delay_scheme_lazy);
  add_global((object *) &__glo_force_scheme_lazy);
  add_symbol(quote_make_91promise);
  add_symbol(quote_lambda);
  mclosure0(c_73195, (function_type)__lambda_21);c_73195.num_args = 0; 
  __glo_lib_91init_117schemelazy_scheme_lazy = &c_73195; 
  mclosure0(c_73145, (function_type)__lambda_20);c_73145.num_args = 1; 
  __glo_make_91promise_scheme_lazy = &c_73145; 
  mmacro(c_73110, (function_type)__lambda_12);c_73110.num_args = 3; 
  __glo_delay_91force_scheme_lazy = &c_73110; 
  mmacro(c_7375, (function_type)__lambda_6);c_7375.num_args = 3; 
  __glo_delay_scheme_lazy = &c_7375; 
  mclosure0(c_7373, (function_type)__lambda_0);c_7373.num_args = 1; 
  __glo_force_scheme_lazy = &c_7373; 
  __glo_promise_127_scheme_lazy = boolean_f; 

  make_cvar(cvar_73199, (object *)&__glo_lib_91init_117schemelazy_scheme_lazy);make_pair(pair_73200, find_or_add_symbol("lib-init:schemelazy"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_promise_127_scheme_lazy);make_pair(pair_73202, find_or_add_symbol("promise?"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_make_91promise_scheme_lazy);make_pair(pair_73204, find_or_add_symbol("make-promise"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_delay_91force_scheme_lazy);make_pair(pair_73206, find_or_add_symbol("delay-force"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_delay_scheme_lazy);make_pair(pair_73208, find_or_add_symbol("delay"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_force_scheme_lazy);make_pair(pair_73210, find_or_add_symbol("force"), &cvar_73209);
make_pair(c_73211, &pair_73200,Cyc_global_variables);
make_pair(c_73212, &pair_73202, &c_73211);
make_pair(c_73213, &pair_73204, &c_73212);
make_pair(c_73214, &pair_73206, &c_73213);
make_pair(c_73215, &pair_73208, &c_73214);
make_pair(c_73216, &pair_73210, &c_73215);
Cyc_global_variables = &c_73216;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemelazy_scheme_lazy)->fn)(data, 1, cont, cont);
}
