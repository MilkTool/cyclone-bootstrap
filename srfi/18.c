/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014 Justin Ethier
 ** Version 0.0.3 (Pre-release)
 **
 **/

#define closcall0(td,cfn) ((cfn)->fn)(td,0,cfn)
/* Check for GC, then call given continuation closure */
#define return_closcall0(td,cfn) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0]; \
     GC(td,cfn,buf,0); return; \
 } else {closcall0(td,(closure) (cfn)); return;}}

/* Check for GC, then call C function directly */
#define return_direct0(td,_fn) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0];  \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 0); return; \
 } else { (_fn)(td,0,(closure)_fn); }}

#define closcall1(td,cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,0, (closure)a1, cfn); } else { ((cfn)->fn)(td,1,cfn,a1);}
/* Check for GC, then call given continuation closure */
#define return_closcall1(td,cfn,a1) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,cfn,buf,1); return; \
 } else {closcall1(td,(closure) (cfn),a1); return;}}

/* Check for GC, then call C function directly */
#define return_direct1(td,_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(td,2,cfn,a1,a2);}
/* Check for GC, then call given continuation closure */
#define return_closcall2(td,cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,cfn,buf,2); return; \
 } else {closcall2(td,(closure) (cfn),a1,a2); return;}}

/* Check for GC, then call C function directly */
#define return_direct2(td,_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#define closcall6(td,cfn,a1,a2,a3,a4,a5,a6) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,5, (closure)a1, cfn,a2,a3,a4,a5,a6); } else { ((cfn)->fn)(td,6,cfn,a1,a2,a3,a4,a5,a6);}
/* Check for GC, then call given continuation closure */
#define return_closcall6(td,cfn,a1,a2,a3,a4,a5,a6) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6;\
     GC(td,cfn,buf,6); return; \
 } else {closcall6(td,(closure) (cfn),a1,a2,a3,a4,a5,a6); return;}}

/* Check for GC, then call C function directly */
#define return_direct6(td,_fn,a1,a2,a3,a4,a5,a6) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 6); return; \
 } else { (_fn)(td,6,(closure)_fn,a1,a2,a3,a4,a5,a6); }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi18 = nil;
object __glo_thread_91yield_67 = nil;
object __glo_thread_91start_67 = nil;
object __glo_thread_91specific_91set_67 = nil;
object __glo_thread_91specific = nil;
object __glo_thread_91name = nil;
object __glo_make_91thread = nil;
object __glo_thread_127 = nil;
extern object __glo_thread_127;
extern object __glo_make_91thread;
extern object __glo_thread_91name;
extern object __glo_thread_91specific;
extern object __glo_thread_91specific_91set_67;
extern object __glo_thread_91start_67;
extern object __glo_thread_91yield_67;
extern object __glo_call_91with_91current_91continuation;
extern object __glo_call_95cc;
extern object __glo_call_91with_91values;
extern object __glo_dynamic_91wind;
extern object __glo_values;
extern object __glo_char_123_127;
extern object __glo_char_121_127;
extern object __glo_char_125_127;
extern object __glo_char_121_123_127;
extern object __glo_char_125_123_127;
extern object __glo_string_123_127;
extern object __glo_string_121_127;
extern object __glo_string_121_123_127;
extern object __glo_string_125_127;
extern object __glo_string_125_123_127;
extern object __glo_foldl;
extern object __glo_foldr;
extern object __glo_not;
extern object __glo_list_127;
extern object __glo_zero_127;
extern object __glo_positive_127;
extern object __glo_negative_127;
extern object __glo_append;
extern object __glo__list;
extern object __glo_make_91list;
extern object __glo_list_91copy;
extern object __glo_map;
extern object __glo_for_91each;
extern object __glo_list_91tail;
extern object __glo_list_91ref;
extern object __glo_list_91set_67;
extern object __glo_reverse;
extern object __glo_boolean_123_127;
extern object __glo_symbol_123_127;
extern object __glo_Cyc_91obj_123_127;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_vector_91map;
extern object __glo_vector_91for_91each;
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_string_91copy;
extern object __glo_string_91copy_67;
extern object __glo_string_91fill_67;
extern object __glo_string_91_125list;
extern object __glo_string_91_125vector;
extern object __glo_string_91map;
extern object __glo_string_91for_91each;
extern object __glo_make_91parameter;
extern object __glo_current_91output_91port;
extern object __glo_current_91input_91port;
extern object __glo_current_91error_91port;
extern object __glo_call_91with_91port;
extern object __glo_error;
extern object __glo_raise;
extern object __glo_raise_91continuable;
extern object __glo_with_91exception_91handler;
extern object __glo__85exception_91handler_91stack_85;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_features;
extern object __glo_any;
extern object __glo_every;
extern object __glo_and;
extern object __glo_or;
extern object __glo_let;
extern object __glo_let_85;
extern object __glo_letrec;
extern object __glo_begin;
extern object __glo__case;
extern object __glo_cond;
extern object __glo_cond_91expand;
extern object __glo_when;
extern object __glo_quasiquote;
#include "cyclone/runtime.h"
defsymbol(cyc_91thread_91obj);
static void __lambda_22(void *data, int argc, closure _,object k_7321) ;
static void __lambda_21(void *data, int argc, closure _,object k_7324) ;
static void __lambda_20(void *data, int argc, closure _,object k_7327, object t_738) ;
static void __lambda_19(void *data, int argc, object self_7354, object r_7328) ;
static void __lambda_18(void *data, int argc, object self_7355, object thunk_739) ;
static void __lambda_17(void *data, int argc, object self_7356, object r_7329) ;
static void __lambda_16(void *data, int argc, object self_7357, object mutator_91id_7310) ;
static void __lambda_15(void *data, int argc, object self_7358) ;
static void __lambda_14(void *data, int argc, closure _,object k_7332, object t_7312, object obj_7311) ;
static void __lambda_13(void *data, int argc, closure _,object k_7335, object t_7313) ;
static void __lambda_12(void *data, int argc, closure _,object k_7338, object t_7314) ;
static void __lambda_11(void *data, int argc, closure _,object k_7341, object thunk_7316, object name_7315_raw, ...) ;
static void __lambda_10(void *data, int argc, object self_7359, object r_7342) ;
static void __lambda_9(void *data, int argc, object self_7360, object name_91str_7317) ;
static void __lambda_8(void *data, int argc, object self_7361, object r_7343) ;
static void __lambda_7(void *data, int argc, object self_7362, object k_7344) ;
static void __lambda_6(void *data, int argc, object self_7363, object r_7345) ;
static void __lambda_5(void *data, int argc, closure _,object k_7348, object obj_7318) ;
static void __lambda_4(void *data, int argc, object self_7364, object r_7349) ;
static void __lambda_3(void *data, int argc, object self_7365, object r_7353) ;
static void __lambda_2(void *data, int argc, object self_7366, object r_7350) ;
static void __lambda_1(void *data, int argc, object self_7367, object r_7351) ;
static void __lambda_0(void *data, int argc, object self_7368, object r_7352) ;

static void __lambda_22(void *data, int argc, closure _,object k_7321) {
  Cyc_st_add(data, "srfi/18.sld:lib-init:srfi18");

make_int(c_73172, 0);
return_closcall1(data,  k_7321,  &c_73172);; 
}

static void __lambda_21(void *data, int argc, closure _,object k_7324) {
  Cyc_st_add(data, "srfi/18.sld:thread-yield!");

make_int(c_73169, 1);
return_closcall1(data,  k_7324,  Cyc_thread_sleep(data, &c_73169));; 
}

static void __lambda_20(void *data, int argc, closure _,object k_7327, object t_738) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73144;
c_73144.hdr.mark = gc_color_red;
 c_73144.hdr.grayed = 0;
c_73144.tag = closureN_tag;
 c_73144.fn = (function_type)__lambda_19;
c_73144.num_args = 1;
c_73144.num_elt = 2;
c_73144.elts = (object *)alloca(sizeof(object) * 2);
c_73144.elts[0] = k_7327;
c_73144.elts[1] = t_738;


make_int(c_73164, 1);
return_closcall1(data,(closure)&c_73144,  Cyc_vector_ref(data, t_738, &c_73164));; 
}

static void __lambda_19(void *data, int argc, object self_7354, object r_7328) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73146;
c_73146.hdr.mark = gc_color_red;
 c_73146.hdr.grayed = 0;
c_73146.tag = closureN_tag;
 c_73146.fn = (function_type)__lambda_18;
c_73146.num_args = 1;
c_73146.num_elt = 2;
c_73146.elts = (object *)alloca(sizeof(object) * 2);
c_73146.elts[0] = ((closureN)self_7354)->elts[0];
c_73146.elts[1] = ((closureN)self_7354)->elts[1];

return_closcall1(data,(closure)&c_73146,  r_7328);; 
}

static void __lambda_18(void *data, int argc, object self_7355, object thunk_739) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73148;
c_73148.hdr.mark = gc_color_red;
 c_73148.hdr.grayed = 0;
c_73148.tag = closureN_tag;
 c_73148.fn = (function_type)__lambda_17;
c_73148.num_args = 1;
c_73148.num_elt = 2;
c_73148.elts = (object *)alloca(sizeof(object) * 2);
c_73148.elts[0] = ((closureN)self_7355)->elts[0];
c_73148.elts[1] = ((closureN)self_7355)->elts[1];

return_closcall1(data,(closure)&c_73148,  Cyc_spawn_thread(thunk_739));; 
}

static void __lambda_17(void *data, int argc, object self_7356, object r_7329) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73150;
c_73150.hdr.mark = gc_color_red;
 c_73150.hdr.grayed = 0;
c_73150.tag = closureN_tag;
 c_73150.fn = (function_type)__lambda_16;
c_73150.num_args = 1;
c_73150.num_elt = 2;
c_73150.elts = (object *)alloca(sizeof(object) * 2);
c_73150.elts[0] = ((closureN)self_7356)->elts[0];
c_73150.elts[1] = ((closureN)self_7356)->elts[1];

return_closcall1(data,(closure)&c_73150,  r_7329);; 
}

static void __lambda_16(void *data, int argc, object self_7357, object mutator_91id_7310) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73152;
c_73152.hdr.mark = gc_color_red;
 c_73152.hdr.grayed = 0;
c_73152.tag = closureN_tag;
 c_73152.fn = (function_type)__lambda_15;
c_73152.num_args = 0;
c_73152.num_elt = 3;
c_73152.elts = (object *)alloca(sizeof(object) * 3);
c_73152.elts[0] = ((closureN)self_7357)->elts[0];
c_73152.elts[1] = mutator_91id_7310;
c_73152.elts[2] = ((closureN)self_7357)->elts[1];

return_closcall0(data,(closure)&c_73152);; 
}

static void __lambda_15(void *data, int argc, object self_7358) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

make_int(c_73158, 2);
return_closcall1(data,  ((closureN)self_7358)->elts[0],  Cyc_vector_set(data, ((closureN)self_7358)->elts[2], &c_73158, ((closureN)self_7358)->elts[1]));; 
}

static void __lambda_14(void *data, int argc, closure _,object k_7332, object t_7312, object obj_7311) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific-set!");

make_int(c_73141, 4);
return_closcall1(data,  k_7332,  Cyc_vector_set(data, t_7312, &c_73141, obj_7311));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7335, object t_7313) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific");

make_int(c_73136, 4);
return_closcall1(data,  k_7335,  Cyc_vector_ref(data, t_7313, &c_73136));; 
}

static void __lambda_12(void *data, int argc, closure _,object k_7338, object t_7314) {
  Cyc_st_add(data, "srfi/18.sld:thread-name");

make_int(c_73131, 3);
return_closcall1(data,  k_7338,  Cyc_vector_ref(data, t_7314, &c_73131));; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7341, object thunk_7316, object name_7315_raw, ...) {
load_varargs(name_7315, name_7315_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73104;
c_73104.hdr.mark = gc_color_red;
 c_73104.hdr.grayed = 0;
c_73104.tag = closureN_tag;
 c_73104.fn = (function_type)__lambda_7;
c_73104.num_args = 0;
c_73104.num_elt = 1;
c_73104.elts = (object *)alloca(sizeof(object) * 1);
c_73104.elts[0] = name_7315;


closureN_type c_73118;
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_10;
c_73118.num_args = 1;
c_73118.num_elt = 2;
c_73118.elts = (object *)alloca(sizeof(object) * 2);
c_73118.elts[0] = k_7341;
c_73118.elts[1] = thunk_7316;

return_closcall1(data,(closure)&c_73104,  &c_73118);; 
}

static void __lambda_10(void *data, int argc, object self_7359, object r_7342) {
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_9;
c_73120.num_args = 1;
c_73120.num_elt = 2;
c_73120.elts = (object *)alloca(sizeof(object) * 2);
c_73120.elts[0] = ((closureN)self_7359)->elts[0];
c_73120.elts[1] = ((closureN)self_7359)->elts[1];

return_closcall1(data,(closure)&c_73120,  r_7342);; 
}

static void __lambda_9(void *data, int argc, object self_7360, object name_91str_7317) {
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73122;
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_8;
c_73122.num_args = 1;
c_73122.num_elt = 3;
c_73122.elts = (object *)alloca(sizeof(object) * 3);
c_73122.elts[0] = ((closureN)self_7360)->elts[0];
c_73122.elts[1] = name_91str_7317;
c_73122.elts[2] = ((closureN)self_7360)->elts[1];

return_closcall1(data,(closure)&c_73122,  quote_cyc_91thread_91obj);; 
}

static void __lambda_8(void *data, int argc, object self_7361, object r_7343) {
  Cyc_st_add(data, "srfi/18.sld:make-thread");
return_closcall6(data,  __glo_vector,  ((closureN)self_7361)->elts[0], r_7343, ((closureN)self_7361)->elts[2], boolean_f, ((closureN)self_7361)->elts[1], boolean_f);; 
}

static void __lambda_7(void *data, int argc, object self_7362, object k_7344) {
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73106;
c_73106.hdr.mark = gc_color_red;
 c_73106.hdr.grayed = 0;
c_73106.tag = closureN_tag;
 c_73106.fn = (function_type)__lambda_6;
c_73106.num_args = 1;
c_73106.num_elt = 2;
c_73106.elts = (object *)alloca(sizeof(object) * 2);
c_73106.elts[0] = k_7344;
c_73106.elts[1] = ((closureN)self_7362)->elts[0];

return_closcall1(data,(closure)&c_73106,  Cyc_is_cons(((closureN)self_7362)->elts[0]));; 
}

static void __lambda_6(void *data, int argc, object self_7363, object r_7345) {
  Cyc_st_add(data, "srfi/18.sld:make-thread");
if( !eq(boolean_f, r_7345) ){ 
  return_closcall1(data,  ((closureN)self_7363)->elts[0],  car(((closureN)self_7363)->elts[1]));
} else { 
  
make_string(c_73114, "");
return_closcall1(data,  ((closureN)self_7363)->elts[0],  &c_73114);}
; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7348, object obj_7318) {
  Cyc_st_add(data, "srfi/18.sld:thread?");

closureN_type c_7371;
c_7371.hdr.mark = gc_color_red;
 c_7371.hdr.grayed = 0;
c_7371.tag = closureN_tag;
 c_7371.fn = (function_type)__lambda_4;
c_7371.num_args = 1;
c_7371.num_elt = 2;
c_7371.elts = (object *)alloca(sizeof(object) * 2);
c_7371.elts[0] = k_7348;
c_7371.elts[1] = obj_7318;

return_closcall1(data,(closure)&c_7371,  Cyc_is_vector(obj_7318));; 
}

static void __lambda_4(void *data, int argc, object self_7364, object r_7349) {
  Cyc_st_add(data, "srfi/18.sld:thread?");
if( !eq(boolean_f, r_7349) ){ 
  
closureN_type c_7373;
c_7373.hdr.mark = gc_color_red;
 c_7373.hdr.grayed = 0;
c_7373.tag = closureN_tag;
 c_7373.fn = (function_type)__lambda_3;
c_7373.num_args = 1;
c_7373.num_elt = 2;
c_7373.elts = (object *)alloca(sizeof(object) * 2);
c_7373.elts[0] = ((closureN)self_7364)->elts[0];
c_7373.elts[1] = ((closureN)self_7364)->elts[1];


integer_type c_7396 = Cyc_vector_length(data,((closureN)self_7364)->elts[1]);
return_closcall1(data,(closure)&c_7373,  &c_7396);
} else { 
  return_closcall1(data,  ((closureN)self_7364)->elts[0],  boolean_f);}
; 
}

static void __lambda_3(void *data, int argc, object self_7365, object r_7353) {
  Cyc_st_add(data, "srfi/18.sld:thread?");

closureN_type c_7375;
c_7375.hdr.mark = gc_color_red;
 c_7375.hdr.grayed = 0;
c_7375.tag = closureN_tag;
 c_7375.fn = (function_type)__lambda_2;
c_7375.num_args = 1;
c_7375.num_elt = 2;
c_7375.elts = (object *)alloca(sizeof(object) * 2);
c_7375.elts[0] = ((closureN)self_7365)->elts[0];
c_7375.elts[1] = ((closureN)self_7365)->elts[1];


make_int(c_7393, 0);
return_closcall1(data,(closure)&c_7375,  __num_gt(data, r_7353, &c_7393));; 
}

static void __lambda_2(void *data, int argc, object self_7366, object r_7350) {
  Cyc_st_add(data, "srfi/18.sld:thread?");
if( !eq(boolean_f, r_7350) ){ 
  
closureN_type c_7377;
c_7377.hdr.mark = gc_color_red;
 c_7377.hdr.grayed = 0;
c_7377.tag = closureN_tag;
 c_7377.fn = (function_type)__lambda_1;
c_7377.num_args = 1;
c_7377.num_elt = 2;
c_7377.elts = (object *)alloca(sizeof(object) * 2);
c_7377.elts[0] = ((closureN)self_7366)->elts[0];
c_7377.elts[1] = ((closureN)self_7366)->elts[1];

return_closcall1(data,(closure)&c_7377,  quote_cyc_91thread_91obj);
} else { 
  return_closcall1(data,  ((closureN)self_7366)->elts[0],  boolean_f);}
; 
}

static void __lambda_1(void *data, int argc, object self_7367, object r_7351) {
  Cyc_st_add(data, "srfi/18.sld:thread?");

closureN_type c_7379;
c_7379.hdr.mark = gc_color_red;
 c_7379.hdr.grayed = 0;
c_7379.tag = closureN_tag;
 c_7379.fn = (function_type)__lambda_0;
c_7379.num_args = 1;
c_7379.num_elt = 2;
c_7379.elts = (object *)alloca(sizeof(object) * 2);
c_7379.elts[0] = ((closureN)self_7367)->elts[0];
c_7379.elts[1] = r_7351;


make_int(c_7388, 0);
return_closcall1(data,(closure)&c_7379,  Cyc_vector_ref(data, ((closureN)self_7367)->elts[1], &c_7388));; 
}

static void __lambda_0(void *data, int argc, object self_7368, object r_7352) {
  Cyc_st_add(data, "srfi/18.sld:thread?");
return_closcall1(data,  ((closureN)self_7368)->elts[0],  equalp(((closureN)self_7368)->elts[1], r_7352));; 
}

void c_srfi18_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_cyc_91thread_91obj = find_or_add_symbol("cyc-thread-obj");

  add_global((object *) &__glo_lib_91init_117srfi18);
  add_global((object *) &__glo_thread_91yield_67);
  add_global((object *) &__glo_thread_91start_67);
  add_global((object *) &__glo_thread_91specific_91set_67);
  add_global((object *) &__glo_thread_91specific);
  add_global((object *) &__glo_thread_91name);
  add_global((object *) &__glo_make_91thread);
  add_global((object *) &__glo_thread_127);
  add_symbol(quote_cyc_91thread_91obj);
  mclosure0(c_73170, (function_type)__lambda_22);c_73170.num_args = 0; 
  __glo_lib_91init_117srfi18 = &c_73170; 
  mclosure0(c_73165, (function_type)__lambda_21);c_73165.num_args = 0; 
  __glo_thread_91yield_67 = &c_73165; 
  mclosure0(c_73142, (function_type)__lambda_20);c_73142.num_args = 1; 
  __glo_thread_91start_67 = &c_73142; 
  mclosure0(c_73137, (function_type)__lambda_14);c_73137.num_args = 2; 
  __glo_thread_91specific_91set_67 = &c_73137; 
  mclosure0(c_73132, (function_type)__lambda_13);c_73132.num_args = 1; 
  __glo_thread_91specific = &c_73132; 
  mclosure0(c_73127, (function_type)__lambda_12);c_73127.num_args = 1; 
  __glo_thread_91name = &c_73127; 
  mclosure0(c_73102, (function_type)__lambda_11);c_73102.num_args = 1; 
  __glo_make_91thread = &c_73102; 
  mclosure0(c_7369, (function_type)__lambda_5);c_7369.num_args = 1; 
  __glo_thread_127 = &c_7369; 

  make_cvar(cvar_73173, (object *)&__glo_lib_91init_117srfi18);make_cons(pair_73174, find_or_add_symbol("lib-init:srfi18"), &cvar_73173);
  make_cvar(cvar_73175, (object *)&__glo_thread_91yield_67);make_cons(pair_73176, find_or_add_symbol("thread-yield!"), &cvar_73175);
  make_cvar(cvar_73177, (object *)&__glo_thread_91start_67);make_cons(pair_73178, find_or_add_symbol("thread-start!"), &cvar_73177);
  make_cvar(cvar_73179, (object *)&__glo_thread_91specific_91set_67);make_cons(pair_73180, find_or_add_symbol("thread-specific-set!"), &cvar_73179);
  make_cvar(cvar_73181, (object *)&__glo_thread_91specific);make_cons(pair_73182, find_or_add_symbol("thread-specific"), &cvar_73181);
  make_cvar(cvar_73183, (object *)&__glo_thread_91name);make_cons(pair_73184, find_or_add_symbol("thread-name"), &cvar_73183);
  make_cvar(cvar_73185, (object *)&__glo_make_91thread);make_cons(pair_73186, find_or_add_symbol("make-thread"), &cvar_73185);
  make_cvar(cvar_73187, (object *)&__glo_thread_127);make_cons(pair_73188, find_or_add_symbol("thread?"), &cvar_73187);
make_cons(c_73189, &pair_73174,Cyc_global_variables);
make_cons(c_73190, &pair_73176, &c_73189);
make_cons(c_73191, &pair_73178, &c_73190);
make_cons(c_73192, &pair_73180, &c_73191);
make_cons(c_73193, &pair_73182, &c_73192);
make_cons(c_73194, &pair_73184, &c_73193);
make_cons(c_73195, &pair_73186, &c_73194);
make_cons(c_73196, &pair_73188, &c_73195);
Cyc_global_variables = &c_73196;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117srfi18)->fn)(data, 1, cont, cont);
}
