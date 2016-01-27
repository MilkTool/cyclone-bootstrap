/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
 **
 **/

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

#define closcall3(td,cfn,a1,a2,a3) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,2, (closure)a1, cfn,a2,a3); } else { ((cfn)->fn)(td,3,cfn,a1,a2,a3);}
/* Check for GC, then call given continuation closure */
#define return_closcall3(td,cfn,a1,a2,a3) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td,cfn,buf,3); return; \
 } else {closcall3(td,(closure) (cfn),a1,a2,a3); return;}}

/* Check for GC, then call C function directly */
#define return_direct3(td,_fn,a1,a2,a3) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 3); return; \
 } else { (_fn)(td,3,(closure)_fn,a1,a2,a3); }}

#include "cyclone/types.h"
object __glo_lib_91init_117scheme_191char = nil;
object __glo_string_91downcase = nil;
object __glo_string_91upcase = nil;
object __glo_digit_91value = nil;
object __glo_char_91whitespace_127 = nil;
object __glo_char_91numeric_127 = nil;
object __glo_char_91lower_91case_127 = nil;
object __glo_char_91upper_91case_127 = nil;
object __glo_char_91alphabetic_127 = nil;
object __glo_char_91downcase = nil;
object __glo_char_91upcase = nil;
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
extern object __glo_floor;
extern object __glo_ceiling;
extern object __glo_truncate;
extern object __glo_round;
extern object __glo_exact;
extern object __glo_inexact;
#include "cyclone/runtime.h"
static void __lambda_23(void *data, int argc, closure _,object k_7316) ;
static void __lambda_22(void *data, int argc, closure _,object k_7319, object str_734) ;
static void __lambda_21(void *data, int argc, closure _,object k_7322, object str_735) ;
static void __lambda_20(void *data, int argc, closure _,object k_7325, object c_736) ;
static void __lambda_19(void *data, int argc, object self_7360, object r_7326) ;
static void __lambda_18(void *data, int argc, object self_7361, object r_7327) ;
static void __lambda_17(void *data, int argc, closure _,object k_7330, object c_737) ;
static void __lambda_16(void *data, int argc, object self_7362, object r_7331) ;
static void __lambda_15(void *data, int argc, closure _,object k_7334, object c_738) ;
static void __lambda_14(void *data, int argc, object self_7363, object r_7335) ;
static void __lambda_13(void *data, int argc, closure _,object k_7338, object c_739) ;
static void __lambda_12(void *data, int argc, object self_7364, object r_7339) ;
static void __lambda_11(void *data, int argc, closure _,object k_7342, object c_7310) ;
static void __lambda_10(void *data, int argc, object self_7365, object r_7343) ;
static void __lambda_9(void *data, int argc, closure _,object k_7346, object c_7311) ;
static void __lambda_8(void *data, int argc, object self_7366, object r_7347) ;
static void __lambda_7(void *data, int argc, closure _,object k_7350, object c_7312) ;
static void __lambda_6(void *data, int argc, object self_7367, object r_7351) ;
static void __lambda_5(void *data, int argc, object self_7368, object r_7353) ;
static void __lambda_4(void *data, int argc, object self_7369, object r_7352) ;
static void __lambda_3(void *data, int argc, closure _,object k_7356, object c_7313) ;
static void __lambda_2(void *data, int argc, object self_7370, object r_7357) ;
static void __lambda_1(void *data, int argc, object self_7371, object r_7359) ;
static void __lambda_0(void *data, int argc, object self_7372, object r_7358) ;

static void __lambda_23(void *data, int argc, closure _,object k_7316) {
  Cyc_st_add(data, "scheme/char.sld:lib-init:scheme_char");

make_int(c_73194, 0);
return_closcall1(data,  k_7316,  &c_73194);; 
}

static void __lambda_22(void *data, int argc, closure _,object k_7319, object str_734) {
  Cyc_st_add(data, "scheme/char.sld:string-downcase");
return_closcall3(data,  __glo_string_91map,  k_7319, __glo_char_91downcase, str_734);; 
}

static void __lambda_21(void *data, int argc, closure _,object k_7322, object str_735) {
  Cyc_st_add(data, "scheme/char.sld:string-upcase");
return_closcall3(data,  __glo_string_91map,  k_7322, __glo_char_91upcase, str_735);; 
}

static void __lambda_20(void *data, int argc, closure _,object k_7325, object c_736) {
  Cyc_st_add(data, "scheme/char.sld:digit-value");

closureN_type c_73173;
c_73173.hdr.mark = gc_color_red;
 c_73173.hdr.grayed = 0;
c_73173.tag = closureN_tag;
 c_73173.fn = (function_type)__lambda_19;
c_73173.num_args = 1;
c_73173.num_elt = 2;
c_73173.elts = (object *)alloca(sizeof(object) * 2);
c_73173.elts[0] = c_736;
c_73173.elts[1] = k_7325;

return_closcall2(data,  __glo_char_91numeric_127,  &c_73173, c_736);; 
}

static void __lambda_19(void *data, int argc, object self_7360, object r_7326) {
  Cyc_st_add(data, "scheme/char.sld:digit-value");
if( !eq(boolean_f, r_7326) ){ 
  
closureN_type c_73175;
c_73175.hdr.mark = gc_color_red;
 c_73175.hdr.grayed = 0;
c_73175.tag = closureN_tag;
 c_73175.fn = (function_type)__lambda_18;
c_73175.num_args = 1;
c_73175.num_elt = 1;
c_73175.elts = (object *)alloca(sizeof(object) * 1);
c_73175.elts[0] = ((closureN)self_7360)->elts[1];


integer_type c_73184 = Cyc_char2integer(((closureN)self_7360)->elts[0]);
return_closcall1(data,(closure)&c_73175,  &c_73184);
} else { 
  return_closcall1(data,  ((closureN)self_7360)->elts[1],  boolean_f);}
; 
}

static void __lambda_18(void *data, int argc, object self_7361, object r_7327) {
  Cyc_st_add(data, "scheme/char.sld:digit-value");

make_int(c_73181, 48);

common_type c_73180 = Cyc_sub(data,2,r_7327, &c_73181);
return_closcall1(data,  ((closureN)self_7361)->elts[0],  &c_73180);; 
}

static void __lambda_17(void *data, int argc, closure _,object k_7330, object c_737) {
  Cyc_st_add(data, "scheme/char.sld:char-whitespace?");

closureN_type c_73161;
c_73161.hdr.mark = gc_color_red;
 c_73161.hdr.grayed = 0;
c_73161.tag = closureN_tag;
 c_73161.fn = (function_type)__lambda_16;
c_73161.num_args = 1;
c_73161.num_elt = 2;
c_73161.elts = (object *)alloca(sizeof(object) * 2);
c_73161.elts[0] = c_737;
c_73161.elts[1] = k_7330;


make_cons(c_73170,obj_char2obj(10),nil);

make_cons(c_73169,obj_char2obj(13),&c_73170);

make_cons(c_73168,obj_char2obj(32),&c_73169);

make_cons(c_73167,obj_char2obj(9),&c_73168);
return_closcall1(data,(closure)&c_73161,  &c_73167);; 
}

static void __lambda_16(void *data, int argc, object self_7362, object r_7331) {
  Cyc_st_add(data, "scheme/char.sld:char-whitespace?");
return_closcall1(data,  ((closureN)self_7362)->elts[1],  memberp(data, ((closureN)self_7362)->elts[0], r_7331));; 
}

static void __lambda_15(void *data, int argc, closure _,object k_7334, object c_738) {
  Cyc_st_add(data, "scheme/char.sld:char-numeric?");

closureN_type c_73143;
c_73143.hdr.mark = gc_color_red;
 c_73143.hdr.grayed = 0;
c_73143.tag = closureN_tag;
 c_73143.fn = (function_type)__lambda_14;
c_73143.num_args = 1;
c_73143.num_elt = 2;
c_73143.elts = (object *)alloca(sizeof(object) * 2);
c_73143.elts[0] = c_738;
c_73143.elts[1] = k_7334;


make_cons(c_73158,obj_char2obj(57),nil);

make_cons(c_73157,obj_char2obj(56),&c_73158);

make_cons(c_73156,obj_char2obj(55),&c_73157);

make_cons(c_73155,obj_char2obj(54),&c_73156);

make_cons(c_73154,obj_char2obj(53),&c_73155);

make_cons(c_73153,obj_char2obj(52),&c_73154);

make_cons(c_73152,obj_char2obj(51),&c_73153);

make_cons(c_73151,obj_char2obj(50),&c_73152);

make_cons(c_73150,obj_char2obj(49),&c_73151);

make_cons(c_73149,obj_char2obj(48),&c_73150);
return_closcall1(data,(closure)&c_73143,  &c_73149);; 
}

static void __lambda_14(void *data, int argc, object self_7363, object r_7335) {
  Cyc_st_add(data, "scheme/char.sld:char-numeric?");
return_closcall1(data,  ((closureN)self_7363)->elts[1],  memberp(data, ((closureN)self_7363)->elts[0], r_7335));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7338, object c_739) {
  Cyc_st_add(data, "scheme/char.sld:char-lower-case?");

closureN_type c_73135;
c_73135.hdr.mark = gc_color_red;
 c_73135.hdr.grayed = 0;
c_73135.tag = closureN_tag;
 c_73135.fn = (function_type)__lambda_12;
c_73135.num_args = 1;
c_73135.num_elt = 2;
c_73135.elts = (object *)alloca(sizeof(object) * 2);
c_73135.elts[0] = c_739;
c_73135.elts[1] = k_7338;

return_closcall3(data,  __glo_char_125_123_127,  &c_73135, c_739, obj_char2obj(97));; 
}

static void __lambda_12(void *data, int argc, object self_7364, object r_7339) {
  Cyc_st_add(data, "scheme/char.sld:char-lower-case?");
if( !eq(boolean_f, r_7339) ){ 
  return_closcall3(data,  __glo_char_121_123_127,  ((closureN)self_7364)->elts[1], ((closureN)self_7364)->elts[0], obj_char2obj(122));
} else { 
  return_closcall1(data,  ((closureN)self_7364)->elts[1],  boolean_f);}
; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7342, object c_7310) {
  Cyc_st_add(data, "scheme/char.sld:char-upper-case?");

closureN_type c_73127;
c_73127.hdr.mark = gc_color_red;
 c_73127.hdr.grayed = 0;
c_73127.tag = closureN_tag;
 c_73127.fn = (function_type)__lambda_10;
c_73127.num_args = 1;
c_73127.num_elt = 2;
c_73127.elts = (object *)alloca(sizeof(object) * 2);
c_73127.elts[0] = c_7310;
c_73127.elts[1] = k_7342;

return_closcall3(data,  __glo_char_125_123_127,  &c_73127, c_7310, obj_char2obj(65));; 
}

static void __lambda_10(void *data, int argc, object self_7365, object r_7343) {
  Cyc_st_add(data, "scheme/char.sld:char-upper-case?");
if( !eq(boolean_f, r_7343) ){ 
  return_closcall3(data,  __glo_char_121_123_127,  ((closureN)self_7365)->elts[1], ((closureN)self_7365)->elts[0], obj_char2obj(90));
} else { 
  return_closcall1(data,  ((closureN)self_7365)->elts[1],  boolean_f);}
; 
}

static void __lambda_9(void *data, int argc, closure _,object k_7346, object c_7311) {
  Cyc_st_add(data, "scheme/char.sld:char-alphabetic?");

closureN_type c_73119;
c_73119.hdr.mark = gc_color_red;
 c_73119.hdr.grayed = 0;
c_73119.tag = closureN_tag;
 c_73119.fn = (function_type)__lambda_8;
c_73119.num_args = 1;
c_73119.num_elt = 2;
c_73119.elts = (object *)alloca(sizeof(object) * 2);
c_73119.elts[0] = c_7311;
c_73119.elts[1] = k_7346;

return_closcall3(data,  __glo_char_125_123_127,  &c_73119, c_7311, obj_char2obj(65));; 
}

static void __lambda_8(void *data, int argc, object self_7366, object r_7347) {
  Cyc_st_add(data, "scheme/char.sld:char-alphabetic?");
if( !eq(boolean_f, r_7347) ){ 
  return_closcall3(data,  __glo_char_121_123_127,  ((closureN)self_7366)->elts[1], ((closureN)self_7366)->elts[0], obj_char2obj(122));
} else { 
  return_closcall1(data,  ((closureN)self_7366)->elts[1],  boolean_f);}
; 
}

static void __lambda_7(void *data, int argc, closure _,object k_7350, object c_7312) {
  Cyc_st_add(data, "scheme/char.sld:char-downcase");

closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_6;
c_7397.num_args = 1;
c_7397.num_elt = 2;
c_7397.elts = (object *)alloca(sizeof(object) * 2);
c_7397.elts[0] = c_7312;
c_7397.elts[1] = k_7350;

return_closcall2(data,  __glo_char_91upper_91case_127,  &c_7397, c_7312);; 
}

static void __lambda_6(void *data, int argc, object self_7367, object r_7351) {
  Cyc_st_add(data, "scheme/char.sld:char-downcase");
if( !eq(boolean_f, r_7351) ){ 
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_5;
c_7399.num_args = 1;
c_7399.num_elt = 1;
c_7399.elts = (object *)alloca(sizeof(object) * 1);
c_7399.elts[0] = ((closureN)self_7367)->elts[1];


integer_type c_73112 = Cyc_char2integer(((closureN)self_7367)->elts[0]);
return_closcall1(data,(closure)&c_7399,  &c_73112);
} else { 
  return_closcall1(data,  ((closureN)self_7367)->elts[1],  ((closureN)self_7367)->elts[0]);}
; 
}

static void __lambda_5(void *data, int argc, object self_7368, object r_7353) {
  Cyc_st_add(data, "scheme/char.sld:char-downcase");

closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_4;
c_73101.num_args = 1;
c_73101.num_elt = 1;
c_73101.elts = (object *)alloca(sizeof(object) * 1);
c_73101.elts[0] = ((closureN)self_7368)->elts[0];


make_int(c_73109, 32);

common_type c_73108 = Cyc_sum(data,2,r_7353, &c_73109);
return_closcall1(data,(closure)&c_73101,  &c_73108);; 
}

static void __lambda_4(void *data, int argc, object self_7369, object r_7352) {
  Cyc_st_add(data, "scheme/char.sld:char-downcase");
return_closcall1(data,  ((closureN)self_7369)->elts[0],  Cyc_integer2char(data, r_7352));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7356, object c_7313) {
  Cyc_st_add(data, "scheme/char.sld:char-upcase");

closureN_type c_7375;
c_7375.hdr.mark = gc_color_red;
 c_7375.hdr.grayed = 0;
c_7375.tag = closureN_tag;
 c_7375.fn = (function_type)__lambda_2;
c_7375.num_args = 1;
c_7375.num_elt = 2;
c_7375.elts = (object *)alloca(sizeof(object) * 2);
c_7375.elts[0] = c_7313;
c_7375.elts[1] = k_7356;

return_closcall2(data,  __glo_char_91lower_91case_127,  &c_7375, c_7313);; 
}

static void __lambda_2(void *data, int argc, object self_7370, object r_7357) {
  Cyc_st_add(data, "scheme/char.sld:char-upcase");
if( !eq(boolean_f, r_7357) ){ 
  
closureN_type c_7377;
c_7377.hdr.mark = gc_color_red;
 c_7377.hdr.grayed = 0;
c_7377.tag = closureN_tag;
 c_7377.fn = (function_type)__lambda_1;
c_7377.num_args = 1;
c_7377.num_elt = 1;
c_7377.elts = (object *)alloca(sizeof(object) * 1);
c_7377.elts[0] = ((closureN)self_7370)->elts[1];


integer_type c_7390 = Cyc_char2integer(((closureN)self_7370)->elts[0]);
return_closcall1(data,(closure)&c_7377,  &c_7390);
} else { 
  return_closcall1(data,  ((closureN)self_7370)->elts[1],  ((closureN)self_7370)->elts[0]);}
; 
}

static void __lambda_1(void *data, int argc, object self_7371, object r_7359) {
  Cyc_st_add(data, "scheme/char.sld:char-upcase");

closureN_type c_7379;
c_7379.hdr.mark = gc_color_red;
 c_7379.hdr.grayed = 0;
c_7379.tag = closureN_tag;
 c_7379.fn = (function_type)__lambda_0;
c_7379.num_args = 1;
c_7379.num_elt = 1;
c_7379.elts = (object *)alloca(sizeof(object) * 1);
c_7379.elts[0] = ((closureN)self_7371)->elts[0];


make_int(c_7387, 32);

common_type c_7386 = Cyc_sub(data,2,r_7359, &c_7387);
return_closcall1(data,(closure)&c_7379,  &c_7386);; 
}

static void __lambda_0(void *data, int argc, object self_7372, object r_7358) {
  Cyc_st_add(data, "scheme/char.sld:char-upcase");
return_closcall1(data,  ((closureN)self_7372)->elts[0],  Cyc_integer2char(data, r_7358));; 
}

void c_scheme_char_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117scheme_191char);
  add_global((object *) &__glo_string_91downcase);
  add_global((object *) &__glo_string_91upcase);
  add_global((object *) &__glo_digit_91value);
  add_global((object *) &__glo_char_91whitespace_127);
  add_global((object *) &__glo_char_91numeric_127);
  add_global((object *) &__glo_char_91lower_91case_127);
  add_global((object *) &__glo_char_91upper_91case_127);
  add_global((object *) &__glo_char_91alphabetic_127);
  add_global((object *) &__glo_char_91downcase);
  add_global((object *) &__glo_char_91upcase);
  mclosure0(c_73192, (function_type)__lambda_23);c_73192.num_args = 0; 
  __glo_lib_91init_117scheme_191char = &c_73192; 
  mclosure0(c_73190, (function_type)__lambda_22);c_73190.num_args = 1; 
  __glo_string_91downcase = &c_73190; 
  mclosure0(c_73188, (function_type)__lambda_21);c_73188.num_args = 1; 
  __glo_string_91upcase = &c_73188; 
  mclosure0(c_73171, (function_type)__lambda_20);c_73171.num_args = 1; 
  __glo_digit_91value = &c_73171; 
  mclosure0(c_73159, (function_type)__lambda_17);c_73159.num_args = 1; 
  __glo_char_91whitespace_127 = &c_73159; 
  mclosure0(c_73141, (function_type)__lambda_15);c_73141.num_args = 1; 
  __glo_char_91numeric_127 = &c_73141; 
  mclosure0(c_73133, (function_type)__lambda_13);c_73133.num_args = 1; 
  __glo_char_91lower_91case_127 = &c_73133; 
  mclosure0(c_73125, (function_type)__lambda_11);c_73125.num_args = 1; 
  __glo_char_91upper_91case_127 = &c_73125; 
  mclosure0(c_73117, (function_type)__lambda_9);c_73117.num_args = 1; 
  __glo_char_91alphabetic_127 = &c_73117; 
  mclosure0(c_7395, (function_type)__lambda_7);c_7395.num_args = 1; 
  __glo_char_91downcase = &c_7395; 
  mclosure0(c_7373, (function_type)__lambda_3);c_7373.num_args = 1; 
  __glo_char_91upcase = &c_7373; 

  make_cvar(cvar_73195, (object *)&__glo_lib_91init_117scheme_191char);make_cons(pair_73196, find_or_add_symbol("lib-init:scheme_char"), &cvar_73195);
  make_cvar(cvar_73197, (object *)&__glo_string_91downcase);make_cons(pair_73198, find_or_add_symbol("string-downcase"), &cvar_73197);
  make_cvar(cvar_73199, (object *)&__glo_string_91upcase);make_cons(pair_73200, find_or_add_symbol("string-upcase"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_digit_91value);make_cons(pair_73202, find_or_add_symbol("digit-value"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_char_91whitespace_127);make_cons(pair_73204, find_or_add_symbol("char-whitespace?"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_char_91numeric_127);make_cons(pair_73206, find_or_add_symbol("char-numeric?"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_char_91lower_91case_127);make_cons(pair_73208, find_or_add_symbol("char-lower-case?"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_char_91upper_91case_127);make_cons(pair_73210, find_or_add_symbol("char-upper-case?"), &cvar_73209);
  make_cvar(cvar_73211, (object *)&__glo_char_91alphabetic_127);make_cons(pair_73212, find_or_add_symbol("char-alphabetic?"), &cvar_73211);
  make_cvar(cvar_73213, (object *)&__glo_char_91downcase);make_cons(pair_73214, find_or_add_symbol("char-downcase"), &cvar_73213);
  make_cvar(cvar_73215, (object *)&__glo_char_91upcase);make_cons(pair_73216, find_or_add_symbol("char-upcase"), &cvar_73215);
make_cons(c_73217, &pair_73196,Cyc_global_variables);
make_cons(c_73218, &pair_73198, &c_73217);
make_cons(c_73219, &pair_73200, &c_73218);
make_cons(c_73220, &pair_73202, &c_73219);
make_cons(c_73221, &pair_73204, &c_73220);
make_cons(c_73222, &pair_73206, &c_73221);
make_cons(c_73223, &pair_73208, &c_73222);
make_cons(c_73224, &pair_73210, &c_73223);
make_cons(c_73225, &pair_73212, &c_73224);
make_cons(c_73226, &pair_73214, &c_73225);
make_cons(c_73227, &pair_73216, &c_73226);
Cyc_global_variables = &c_73227;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117scheme_191char)->fn)(data, 1, cont, cont);
}
