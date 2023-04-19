/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __MSALIGN__(X) __declspec(align(X))
#else
#define __MSALIGN__(X)
#endif



/* Global Declarations */

/* Types Declarations */
struct l_struct_struct_OC_sfn_desc;
struct l_array_16_uint32_t;
struct l_struct_struct_OC_loki_ctx;
struct l_array_8_uint8_t;
struct l_array_24_uint8_t;
struct l_array_4_uint8_t;
struct l_array_2_uint8_t;
struct l_array_32_uint8_t;
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc;

/* Function definitions */
typedef uint16_t l_fptr_7(uint32_t, bool);

typedef void l_fptr_5(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_10(uint8_t*, uint8_t*, uint64_t);

typedef uint16_t l_fptr_9(uint16_t, uint16_t, uint16_t, bool);

typedef void l_fptr_4(uint8_t*, uint64_t, struct l_struct_struct_OC_loki_ctx*, uint64_t);

typedef uint32_t l_fptr_6(uint32_t, uint32_t, bool);

typedef void l_fptr_2(uint8_t*, uint8_t*, uint64_t, bool);

typedef uint32_t l_fptr_3(uint8_t*, ...);

typedef uint32_t l_fptr_1(void);

typedef void l_fptr_8(uint32_t*, uint64_t, uint32_t*, uint64_t, uint8_t*, uint64_t, bool);


/* Types Definitions */
struct l_struct_struct_OC_sfn_desc {
  uint16_t field0;
  uint16_t field1;
};
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_struct_struct_OC_loki_ctx {
  struct l_array_16_uint32_t field0;
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_2_uint8_t {
  uint8_t array[2];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc {
  struct l_struct_struct_OC_sfn_desc array[17];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(uint8_t*, ...);
void setlokikey(uint8_t*, uint64_t, struct l_struct_struct_OC_loki_ctx*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
void enloki(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t f(uint32_t, uint32_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
int16_t s(uint32_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
void perm32(uint32_t*, uint64_t, uint32_t*, uint64_t, uint8_t*, uint64_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
int16_t exp8(int16_t, int16_t, int16_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
int16_t mult8(int16_t, int16_t, int16_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
void deloki(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);


/* Global Variable Definitions and Initialization */
static const struct l_array_8_uint8_t __const_OC_main_OC_key = { "\x01#Eg\x89\xAB\xCD\xE7" };
static const __MSALIGN__(16) struct l_array_24_uint8_t __const_OC_main_OC_data __attribute__((aligned(16))) = { "\x06\x66v\xCF\xB0\xB4\xEB\x89\x02\xC4\x42i\xDA\x1C\xF6\xBA\x66\xD3\xF8\xB6\xD4\xB1\x00\xA9" };
static const struct l_array_4_uint8_t _OC_str = { "%d " };
static const struct l_array_2_uint8_t _OC_str_OC_1 = { "\n" };
__MSALIGN__(64) struct l_array_32_uint8_t P __attribute__((aligned(64))) = { "\x1F\x17\x0F\a\x1E\x16\x0E\x06\x1D\x15\r\x05\x1C\x14\x0C\x04\x1B\x13\v\x03\x1A\x12\n\x02\x19\x11\t\x01\x18\x10\x08" };
__MSALIGN__(64) struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc sfn __attribute__((aligned(64))) = { { { 375, 31 }, { 379, 31 }, { 391, 31 }, { 395, 31 }, { 397, 31 }, { 415, 31 }, { 419, 31 }, { 425, 31 }, { 433, 31 }, { 445, 31 }, { 451, 31 }, { 463, 31 }, { 471, 31 }, { 477, 31 }, { 487, 31 }, { 499, 31 }, { 0, 0 } } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint16_t llvm_select_u16(bool condition, uint16_t iftrue, uint16_t ifnot) {
  uint16_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint8_t* llvm_select_pu8(bool condition, uint8_t* iftrue, uint8_t* ifnot) {
  uint8_t* r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint16_t* llvm_select_pu16(bool condition, uint16_t* iftrue, uint16_t* ifnot) {
  uint16_t* r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

int main(void) {
  uint32_t _1;    /* Address-exposed local */
  struct l_array_8_uint8_t _2;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_24_uint8_t _3 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_struct_OC_loki_ctx _4;    /* Address-exposed local */
  uint64_t _5;    /* Address-exposed local */
  uint8_t* _6;
  uint8_t* _7;
  uint64_t _8;
  uint64_t _9;
  uint8_t _10;
  uint32_t _11;
  uint64_t _12;
  uint32_t _13;

  _1 = 0;
  _6 = memcpy((((uint8_t*)(&_2))), ((&__const_OC_main_OC_key.array[((int32_t)0)])), 8);
  _7 = memcpy((((uint8_t*)(&_3))), ((&__const_OC_main_OC_data.array[((int32_t)0)])), 24);
  setlokikey(((&_2.array[((int64_t)0)])), 8, (&_4), (((int64_t)(int32_t)1)));
  enloki((&_4), (((int64_t)(int32_t)1)), ((&_3.array[((int64_t)0)])), 24);
  _5 = 0;
  goto _14;

  do {     /* Syntactic loop '' to make GCC happy */
_14:
  _8 = _5;
  if ((((((uint64_t)_8) < ((uint64_t)UINT64_C(24)))&1))) {
    goto _15;
  } else {
    goto _16;
  }

_15:
  _9 = _5;
  _10 = *((&_3.array[((int64_t)_9)]));
  _11 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_10)));
  goto _17;

_17:
  _12 = _5;
  _5 = (llvm_add_u64(_12, 1));
  goto _14;

  } while (1); /* end of syntactic loop '' */
_16:
  _13 = printf(((&_OC_str_OC_1.array[((int64_t)0)])));
  return 0;
}


void setlokikey(uint8_t* _18, uint64_t llvm_cbe_N, struct l_struct_struct_OC_loki_ctx* _19, uint64_t llvm_cbe_N1) {
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint32_t _20;
  uint32_t _21;
  uint32_t _22;
  uint32_t _23;
  uint32_t _24;
  uint32_t _25;
  uint32_t _26;
  uint32_t _27;
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;
  uint32_t _31;
  uint32_t _32;
  uint32_t _33;
  uint32_t _34;
  uint32_t _35;
  uint32_t _36;
  uint32_t _37;
  uint32_t _38;
  uint32_t _39;
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */

  llvm_cbe_out_2e_ = ((1) & 1);
  _20 = *((&(*(((uint32_t*)_18)))));
  _21 = *((&(((uint32_t*)_18))[((int64_t)1)]));
  *((&(*((&_19->field0))).array[((int64_t)0)])) = _20;
  _22 = (_20 << 12) | (llvm_ashr_u32(_20, 20));
  *((&(*((&_19->field0))).array[((int64_t)1)])) = _22;
  _23 = (_22 << 13) | (llvm_ashr_u32(_22, 19));
  *((&(*((&_19->field0))).array[((int64_t)2)])) = _21;
  _24 = (_21 << 12) | (llvm_ashr_u32(_21, 20));
  *((&(*((&_19->field0))).array[((int64_t)3)])) = _24;
  _25 = (_24 << 13) | (llvm_ashr_u32(_24, 19));
  *((&(*((&_19->field0))).array[((int64_t)4)])) = _23;
  _26 = (_23 << 12) | (llvm_ashr_u32(_23, 20));
  *((&(*((&_19->field0))).array[((int64_t)5)])) = _26;
  _27 = (_26 << 13) | (llvm_ashr_u32(_26, 19));
  *((&(*((&_19->field0))).array[((int64_t)6)])) = _25;
  _28 = (_25 << 12) | (llvm_ashr_u32(_25, 20));
  *((&(*((&_19->field0))).array[((int64_t)7)])) = _28;
  _29 = (_28 << 13) | (llvm_ashr_u32(_28, 19));
  *((&(*((&_19->field0))).array[((int64_t)8)])) = _27;
  _30 = (_27 << 12) | (llvm_ashr_u32(_27, 20));
  *((&(*((&_19->field0))).array[((int64_t)9)])) = _30;
  _31 = (_30 << 13) | (llvm_ashr_u32(_30, 19));
  *((&(*((&_19->field0))).array[((int64_t)10)])) = _29;
  _32 = (_29 << 12) | (llvm_ashr_u32(_29, 20));
  *((&(*((&_19->field0))).array[((int64_t)11)])) = _32;
  _33 = (_32 << 13) | (llvm_ashr_u32(_32, 19));
  *((&(*((&_19->field0))).array[((int64_t)12)])) = _31;
  _34 = (_31 << 12) | (llvm_ashr_u32(_31, 20));
  *((&(*((&_19->field0))).array[((int64_t)13)])) = _34;
  _35 = _34 << 13;
  _36 = llvm_ashr_u32(_34, 19);
  *((&(*((&_19->field0))).array[((int64_t)14)])) = _33;
  _37 = (_33 << 12) | (llvm_ashr_u32(_33, 20));
  *((&(*((&_19->field0))).array[((int64_t)15)])) = _37;
  _38 = _37 << 13;
  _39 = llvm_ashr_u32(_37, 19);
}


void enloki(struct l_struct_struct_OC_loki_ctx* _40, uint64_t llvm_cbe_N, uint8_t* _41, uint64_t llvm_cbe_N1) {
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint32_t _42;
  uint32_t _43;
  uint32_t _44;
  uint32_t _45;
  uint32_t _46;
  uint32_t _47;
  uint32_t _48;
  uint32_t _49;
  uint32_t _50;
  uint32_t _51;
  uint32_t _52;
  uint32_t _53;
  uint32_t _54;
  uint32_t _55;
  uint32_t _56;
  uint32_t _57;
  uint32_t _58;
  uint32_t _59;
  uint32_t _60;
  uint32_t _61;
  uint32_t _62;
  uint32_t _63;
  uint32_t _64;
  uint32_t _65;
  uint32_t _66;
  uint32_t _67;
  uint32_t _68;
  uint32_t _69;
  uint32_t _70;
  uint32_t _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t _74;
  uint32_t _75;
  uint32_t _76;
  uint32_t _77;
  uint32_t _78;
  uint32_t _79;
  uint32_t _80;
  uint32_t _81;
  uint32_t _82;
  uint32_t _83;
  uint32_t _84;
  uint32_t _85;
  uint32_t _86;
  uint32_t _87;
  uint32_t _88;
  uint32_t _89;
  uint32_t _90;
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */

  llvm_cbe_out_2e_ = ((1) & 1);
  _42 = *((&(*(((uint32_t*)_41)))));
  _43 = *((&(((uint32_t*)_41))[((int64_t)1)]));
  _44 = *((&(*((&_40->field0))).array[((int64_t)0)]));
  _45 = f(_43, _44, 1);
  _46 = _42 ^ _45;
  _47 = *((&(*((&_40->field0))).array[((int64_t)1)]));
  _48 = f(_46, _47, 1);
  _49 = _43 ^ _48;
  _50 = *((&(*((&_40->field0))).array[((int64_t)2)]));
  _51 = f(_49, _50, 1);
  _52 = _46 ^ _51;
  _53 = *((&(*((&_40->field0))).array[((int64_t)3)]));
  _54 = f(_52, _53, 1);
  _55 = _49 ^ _54;
  _56 = *((&(*((&_40->field0))).array[((int64_t)4)]));
  _57 = f(_55, _56, 1);
  _58 = _52 ^ _57;
  _59 = *((&(*((&_40->field0))).array[((int64_t)5)]));
  _60 = f(_58, _59, 1);
  _61 = _55 ^ _60;
  _62 = *((&(*((&_40->field0))).array[((int64_t)6)]));
  _63 = f(_61, _62, 1);
  _64 = _58 ^ _63;
  _65 = *((&(*((&_40->field0))).array[((int64_t)7)]));
  _66 = f(_64, _65, 1);
  _67 = _61 ^ _66;
  _68 = *((&(*((&_40->field0))).array[((int64_t)8)]));
  _69 = f(_67, _68, 1);
  _70 = _64 ^ _69;
  _71 = *((&(*((&_40->field0))).array[((int64_t)9)]));
  _72 = f(_70, _71, 1);
  _73 = _67 ^ _72;
  _74 = *((&(*((&_40->field0))).array[((int64_t)10)]));
  _75 = f(_73, _74, 1);
  _76 = _70 ^ _75;
  _77 = *((&(*((&_40->field0))).array[((int64_t)11)]));
  _78 = f(_76, _77, 1);
  _79 = _73 ^ _78;
  _80 = *((&(*((&_40->field0))).array[((int64_t)12)]));
  _81 = f(_79, _80, 1);
  _82 = _76 ^ _81;
  _83 = *((&(*((&_40->field0))).array[((int64_t)13)]));
  _84 = f(_82, _83, 1);
  _85 = _79 ^ _84;
  _86 = *((&(*((&_40->field0))).array[((int64_t)14)]));
  _87 = f(_85, _86, 1);
  _88 = _82 ^ _87;
  _89 = *((&(*((&_40->field0))).array[((int64_t)15)]));
  _90 = f(_88, _89, 1);
  *(((uint32_t*)_41)) = (_85 ^ _90);
  *((&(((uint32_t*)_41))[((int64_t)1)])) = _88;
}


uint32_t f(uint32_t _91, uint32_t _92, bool llvm_cbe__2e_cond) {
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint32_t _93;    /* Address-exposed local */
  uint32_t _94;    /* Address-exposed local */
  uint32_t _95;
  uint16_t _96;
  uint16_t _97;
  uint16_t _98;
  uint16_t _99;
  bool _100;
  uint32_t _101;
  bool _102;
  uint32_t _103;

  llvm_cbe_out_2e_ = ((llvm_cbe__2e_cond) & 1);
  _95 = _91 ^ _92;
  _96 = s((_95 & 4095), llvm_cbe__2e_cond);
  _97 = s(((llvm_ashr_u32(_95, 8)) & 4095), llvm_cbe__2e_cond);
  _98 = s(((llvm_ashr_u32(_95, 16)) & 4095), llvm_cbe__2e_cond);
  _99 = s((((llvm_ashr_u32(_95, 24)) | (_95 << 8)) & 4095), llvm_cbe__2e_cond);
  _100 = ((llvm_cbe_out_2e_)&1);
  _101 = _93;
  _93 = (llvm_select_u32(_100, ((((((int32_t)(int16_t)_96)) | ((((int32_t)(int16_t)_97)) << 8)) | ((((int32_t)(int16_t)_98)) << 16)) | ((((int32_t)(int16_t)_99)) << 24)), _101));
  perm32((&_93), (((int64_t)(int32_t)1)), (&_94), (((int64_t)(int32_t)1)), ((&P.array[((int64_t)0)])), 32, llvm_cbe__2e_cond);
  _102 = ((llvm_cbe_out_2e_)&1);
  _103 = _94;
  return _103;
}


int16_t s(uint32_t _104, bool llvm_cbe__2e_cond) {
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint16_t _105;
  bool _106;
  uint16_t _107;
  bool _108;
  uint16_t _109;
  uint16_t _110;

  llvm_cbe_out_2e_ = ((llvm_cbe__2e_cond) & 1);
  _105 = ((uint16_t)(((llvm_ashr_u32(_104, 8)) & 12) | (_104 & 3)));
  _106 = ((llvm_cbe_out_2e_)&1);
  _107 = *(llvm_select_pu16((((_106 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)UINT64_C(17)))&1)))&1)), ((&((&sfn.array[((int64_t)(((int64_t)(int16_t)_105)))]))->field1)), (((uint16_t*)(&llvm_cbe_shadow)))));
  _108 = ((llvm_cbe_out_2e_)&1);
  _109 = *(llvm_select_pu16((((_108 | (((((int64_t)(((int64_t)(int32_t)0))) < ((int64_t)UINT64_C(17)))&1)))&1)), ((&((&sfn.array[((int64_t)(((int64_t)(int16_t)_105)))]))->field0)), (((uint16_t*)(&llvm_cbe_shadow)))));
  _110 = exp8((((uint16_t)((llvm_add_u32((((int32_t)(int16_t)(((uint16_t)((llvm_ashr_u32(_104, 2)) & 255))))), ((llvm_mul_u32((((int32_t)(int16_t)_105)), 17)) ^ 255))) & 255))), _107, _109, llvm_cbe__2e_cond);
  return _110;
}


void perm32(uint32_t* _111, uint64_t llvm_cbe_N, uint32_t* _112, uint64_t llvm_cbe_N1, uint8_t* _113, uint64_t llvm_cbe_N2, bool llvm_cbe__2e_cond) {
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  bool llvm_cbe_out_2e_1;    /* Address-exposed local */
  bool llvm_cbe_out_2e_2;    /* Address-exposed local */
  bool llvm_cbe_out_2e_3;    /* Address-exposed local */
  bool llvm_cbe_out_2e_4;    /* Address-exposed local */
  bool llvm_cbe_out_2e_5;    /* Address-exposed local */
  bool llvm_cbe_out_2e_6;    /* Address-exposed local */
  bool llvm_cbe_out_2e_7;    /* Address-exposed local */
  bool llvm_cbe_out_2e_8;    /* Address-exposed local */
  bool llvm_cbe_out_2e_9;    /* Address-exposed local */
  bool llvm_cbe_out_2e_10;    /* Address-exposed local */
  bool llvm_cbe_out_2e_11;    /* Address-exposed local */
  bool llvm_cbe_out_2e_12;    /* Address-exposed local */
  bool llvm_cbe_out_2e_13;    /* Address-exposed local */
  bool llvm_cbe_out_2e_14;    /* Address-exposed local */
  bool llvm_cbe_out_2e_15;    /* Address-exposed local */
  bool llvm_cbe_out_2e_16;    /* Address-exposed local */
  bool llvm_cbe_out_2e_17;    /* Address-exposed local */
  bool llvm_cbe_out_2e_18;    /* Address-exposed local */
  bool llvm_cbe_out_2e_19;    /* Address-exposed local */
  bool llvm_cbe_out_2e_20;    /* Address-exposed local */
  bool llvm_cbe_out_2e_21;    /* Address-exposed local */
  bool llvm_cbe_out_2e_22;    /* Address-exposed local */
  bool llvm_cbe_out_2e_23;    /* Address-exposed local */
  bool llvm_cbe_out_2e_24;    /* Address-exposed local */
  bool llvm_cbe_out_2e_25;    /* Address-exposed local */
  bool llvm_cbe_out_2e_26;    /* Address-exposed local */
  bool llvm_cbe_out_2e_27;    /* Address-exposed local */
  bool llvm_cbe_out_2e_28;    /* Address-exposed local */
  bool llvm_cbe_out_2e_29;    /* Address-exposed local */
  bool llvm_cbe_out_2e_30;    /* Address-exposed local */
  bool llvm_cbe_out_2e_31;    /* Address-exposed local */
  bool llvm_cbe_out_2e_32;    /* Address-exposed local */
  bool llvm_cbe_out_2e_33;    /* Address-exposed local */
  bool llvm_cbe_out_2e_34;    /* Address-exposed local */
  bool llvm_cbe_out_2e_35;    /* Address-exposed local */
  bool llvm_cbe_out_2e_36;    /* Address-exposed local */
  bool llvm_cbe_out_2e_37;    /* Address-exposed local */
  bool llvm_cbe_out_2e_38;    /* Address-exposed local */
  bool llvm_cbe_out_2e_39;    /* Address-exposed local */
  bool llvm_cbe_out_2e_40;    /* Address-exposed local */
  bool llvm_cbe_out_2e_41;    /* Address-exposed local */
  bool llvm_cbe_out_2e_42;    /* Address-exposed local */
  bool llvm_cbe_out_2e_43;    /* Address-exposed local */
  bool llvm_cbe_out_2e_44;    /* Address-exposed local */
  bool llvm_cbe_out_2e_45;    /* Address-exposed local */
  bool llvm_cbe_out_2e_46;    /* Address-exposed local */
  bool llvm_cbe_out_2e_47;    /* Address-exposed local */
  bool llvm_cbe_out_2e_48;    /* Address-exposed local */
  bool llvm_cbe_out_2e_49;    /* Address-exposed local */
  bool llvm_cbe_out_2e_50;    /* Address-exposed local */
  bool llvm_cbe_out_2e_51;    /* Address-exposed local */
  bool llvm_cbe_out_2e_52;    /* Address-exposed local */
  bool llvm_cbe_out_2e_53;    /* Address-exposed local */
  bool llvm_cbe_out_2e_54;    /* Address-exposed local */
  bool llvm_cbe_out_2e_55;    /* Address-exposed local */
  bool llvm_cbe_out_2e_56;    /* Address-exposed local */
  bool llvm_cbe_out_2e_57;    /* Address-exposed local */
  bool llvm_cbe_out_2e_58;    /* Address-exposed local */
  bool llvm_cbe_out_2e_59;    /* Address-exposed local */
  bool llvm_cbe_out_2e_60;    /* Address-exposed local */
  bool llvm_cbe_out_2e_61;    /* Address-exposed local */
  bool llvm_cbe_out_2e_62;    /* Address-exposed local */
  bool llvm_cbe_out_2e_63;    /* Address-exposed local */
  bool llvm_cbe_out_2e_64;    /* Address-exposed local */
  bool _114;
  uint32_t _115;
  uint8_t* _116;
  bool _117;
  uint8_t _118;
  bool _119;
  uint32_t _120;
  bool _121;
  bool _122;
  uint32_t _123;
  bool _124;
  uint32_t _125;
  bool _126;
  bool _127;
  uint8_t* _128;
  bool _129;
  uint8_t _130;
  bool _131;
  uint32_t _132;
  bool _133;
  bool _134;
  uint32_t _135;
  bool _136;
  uint32_t _137;
  bool _138;
  bool _139;
  uint8_t* _140;
  bool _141;
  uint8_t _142;
  bool _143;
  uint32_t _144;
  bool _145;
  bool _146;
  uint32_t _147;
  bool _148;
  uint32_t _149;
  bool _150;
  bool _151;
  uint8_t* _152;
  bool _153;
  uint8_t _154;
  bool _155;
  uint32_t _156;
  bool _157;
  bool _158;
  uint32_t _159;
  bool _160;
  uint32_t _161;
  bool _162;
  bool _163;
  uint8_t* _164;
  bool _165;
  uint8_t _166;
  bool _167;
  uint32_t _168;
  bool _169;
  bool _170;
  uint32_t _171;
  bool _172;
  uint32_t _173;
  bool _174;
  bool _175;
  uint8_t* _176;
  bool _177;
  uint8_t _178;
  bool _179;
  uint32_t _180;
  bool _181;
  bool _182;
  uint32_t _183;
  bool _184;
  uint32_t _185;
  bool _186;
  bool _187;
  uint8_t* _188;
  bool _189;
  uint8_t _190;
  bool _191;
  uint32_t _192;
  bool _193;
  bool _194;
  uint32_t _195;
  bool _196;
  uint32_t _197;
  bool _198;
  bool _199;
  uint8_t* _200;
  bool _201;
  uint8_t _202;
  bool _203;
  uint32_t _204;
  bool _205;
  bool _206;
  uint32_t _207;
  bool _208;
  uint32_t _209;
  bool _210;
  bool _211;
  uint8_t* _212;
  bool _213;
  uint8_t _214;
  bool _215;
  uint32_t _216;
  bool _217;
  bool _218;
  uint32_t _219;
  bool _220;
  uint32_t _221;
  bool _222;
  bool _223;
  uint8_t* _224;
  bool _225;
  uint8_t _226;
  bool _227;
  uint32_t _228;
  bool _229;
  bool _230;
  uint32_t _231;
  bool _232;
  uint32_t _233;
  bool _234;
  bool _235;
  uint8_t* _236;
  bool _237;
  uint8_t _238;
  bool _239;
  uint32_t _240;
  bool _241;
  bool _242;
  uint32_t _243;
  bool _244;
  uint32_t _245;
  bool _246;
  bool _247;
  uint8_t* _248;
  bool _249;
  uint8_t _250;
  bool _251;
  uint32_t _252;
  bool _253;
  bool _254;
  uint32_t _255;
  bool _256;
  uint32_t _257;
  bool _258;
  bool _259;
  uint8_t* _260;
  bool _261;
  uint8_t _262;
  bool _263;
  uint32_t _264;
  bool _265;
  bool _266;
  uint32_t _267;
  bool _268;
  uint32_t _269;
  bool _270;
  bool _271;
  uint8_t* _272;
  bool _273;
  uint8_t _274;
  bool _275;
  uint32_t _276;
  bool _277;
  bool _278;
  uint32_t _279;
  bool _280;
  uint32_t _281;
  bool _282;
  bool _283;
  uint8_t* _284;
  bool _285;
  uint8_t _286;
  bool _287;
  uint32_t _288;
  bool _289;
  bool _290;
  uint32_t _291;
  bool _292;
  uint32_t _293;
  bool _294;
  bool _295;
  uint8_t* _296;
  bool _297;
  uint8_t _298;
  bool _299;
  uint32_t _300;
  bool _301;
  bool _302;
  uint32_t _303;
  bool _304;
  uint32_t _305;
  bool _306;
  bool _307;
  uint8_t* _308;
  bool _309;
  uint8_t _310;
  bool _311;
  uint32_t _312;
  bool _313;
  bool _314;
  uint32_t _315;
  bool _316;
  uint32_t _317;
  bool _318;
  bool _319;
  uint8_t* _320;
  bool _321;
  uint8_t _322;
  bool _323;
  uint32_t _324;
  bool _325;
  bool _326;
  uint32_t _327;
  bool _328;
  uint32_t _329;
  bool _330;
  bool _331;
  uint8_t* _332;
  bool _333;
  uint8_t _334;
  bool _335;
  uint32_t _336;
  bool _337;
  bool _338;
  uint32_t _339;
  bool _340;
  uint32_t _341;
  bool _342;
  bool _343;
  uint8_t* _344;
  bool _345;
  uint8_t _346;
  bool _347;
  uint32_t _348;
  bool _349;
  bool _350;
  uint32_t _351;
  bool _352;
  uint32_t _353;
  bool _354;
  bool _355;
  uint8_t* _356;
  bool _357;
  uint8_t _358;
  bool _359;
  uint32_t _360;
  bool _361;
  bool _362;
  uint32_t _363;
  bool _364;
  uint32_t _365;
  bool _366;
  bool _367;
  uint8_t* _368;
  bool _369;
  uint8_t _370;
  bool _371;
  uint32_t _372;
  bool _373;
  bool _374;
  uint32_t _375;
  bool _376;
  uint32_t _377;
  bool _378;
  bool _379;
  uint8_t* _380;
  bool _381;
  uint8_t _382;
  bool _383;
  uint32_t _384;
  bool _385;
  bool _386;
  uint32_t _387;
  bool _388;
  uint32_t _389;
  bool _390;
  bool _391;
  uint8_t* _392;
  bool _393;
  uint8_t _394;
  bool _395;
  uint32_t _396;
  bool _397;
  bool _398;
  uint32_t _399;
  bool _400;
  uint32_t _401;
  bool _402;
  bool _403;
  uint8_t* _404;
  bool _405;
  uint8_t _406;
  bool _407;
  uint32_t _408;
  bool _409;
  bool _410;
  uint32_t _411;
  bool _412;
  uint32_t _413;
  bool _414;
  bool _415;
  uint8_t* _416;
  bool _417;
  uint8_t _418;
  bool _419;
  uint32_t _420;
  bool _421;
  bool _422;
  uint32_t _423;
  bool _424;
  uint32_t _425;
  bool _426;
  bool _427;
  uint8_t* _428;
  bool _429;
  uint8_t _430;
  bool _431;
  uint32_t _432;
  bool _433;
  bool _434;
  uint32_t _435;
  bool _436;
  uint32_t _437;
  bool _438;
  bool _439;
  uint8_t* _440;
  bool _441;
  uint8_t _442;
  bool _443;
  uint32_t _444;
  bool _445;
  bool _446;
  uint32_t _447;
  bool _448;
  uint32_t _449;
  bool _450;
  bool _451;
  uint8_t* _452;
  bool _453;
  uint8_t _454;
  bool _455;
  uint32_t _456;
  bool _457;
  bool _458;
  uint32_t _459;
  bool _460;
  uint32_t _461;
  bool _462;
  bool _463;
  uint8_t* _464;
  bool _465;
  uint8_t _466;
  bool _467;
  uint32_t _468;
  bool _469;
  bool _470;
  uint32_t _471;
  bool _472;
  uint32_t _473;
  bool _474;
  bool _475;
  bool _476;
  uint8_t _477;
  bool _478;
  uint32_t _479;
  bool _480;
  bool _481;
  uint32_t _482;
  bool _483;
  uint32_t _484;
  bool _485;
  bool _486;
  bool _487;
  uint8_t _488;
  bool _489;
  uint32_t _490;
  bool _491;
  bool _492;
  uint32_t _493;
  bool _494;
  uint32_t _495;
  bool _496;
  bool _497;

  llvm_cbe_out_2e_ = ((llvm_cbe__2e_cond) & 1);
  _114 = ((llvm_cbe_out_2e_)&1);
  _115 = *_112;
  *_112 = (llvm_select_u32(_114, 0, _115));
  _116 = (&_113[((int32_t)1)]);
  _117 = ((llvm_cbe_out_2e_)&1);
  _118 = *_113;
  _119 = ((llvm_cbe_out_2e_)&1);
  _120 = *_111;
  _121 = ((llvm_cbe_out_2e_)&1);
  llvm_cbe_out_2e_1 = (((((_121 & (((((llvm_ashr_u32(_120, (((int32_t)(int8_t)_118)))) & 1) != 0u)&1)))&1))) & 1);
  _122 = ((llvm_cbe_out_2e_1)&1);
  _123 = *_112;
  _124 = ((llvm_cbe_out_2e_1)&1);
  _125 = *_112;
  *_112 = (llvm_select_u32(_124, (_123 | 2147483648u), _125));
  _126 = ((llvm_cbe_out_2e_)&1);
  _127 = ((llvm_cbe_out_2e_1)&1);
  llvm_cbe_out_2e_2 = ((((((((_126 & (((~((((((llvm_ashr_u32(_120, (((int32_t)(int8_t)_118)))) & 1) != 0u)&1))))&1)))&1)) | _127)&1))) & 1);
  _128 = (&_116[((int32_t)1)]);
  _129 = ((llvm_cbe_out_2e_2)&1);
  _130 = *(llvm_select_pu8((((_129 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _116, (((uint8_t*)(&llvm_cbe_shadow)))));
  _131 = ((llvm_cbe_out_2e_2)&1);
  _132 = *_111;
  _133 = ((llvm_cbe_out_2e_2)&1);
  llvm_cbe_out_2e_3 = (((((_133 & (((((llvm_ashr_u32(_132, (((int32_t)(int8_t)_130)))) & 1) != 0u)&1)))&1))) & 1);
  _134 = ((llvm_cbe_out_2e_3)&1);
  _135 = *_112;
  _136 = ((llvm_cbe_out_2e_3)&1);
  _137 = *_112;
  *_112 = (llvm_select_u32(_136, (_135 | -1073741824), _137));
  _138 = ((llvm_cbe_out_2e_2)&1);
  _139 = ((llvm_cbe_out_2e_3)&1);
  llvm_cbe_out_2e_4 = ((((((((_138 & (((~((((((llvm_ashr_u32(_132, (((int32_t)(int8_t)_130)))) & 1) != 0u)&1))))&1)))&1)) | _139)&1))) & 1);
  _140 = (&_128[((int32_t)1)]);
  _141 = ((llvm_cbe_out_2e_4)&1);
  _142 = *(llvm_select_pu8((((_141 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _128, (((uint8_t*)(&llvm_cbe_shadow)))));
  _143 = ((llvm_cbe_out_2e_4)&1);
  _144 = *_111;
  _145 = ((llvm_cbe_out_2e_4)&1);
  llvm_cbe_out_2e_5 = (((((_145 & (((((llvm_ashr_u32(_144, (((int32_t)(int8_t)_142)))) & 1) != 0u)&1)))&1))) & 1);
  _146 = ((llvm_cbe_out_2e_5)&1);
  _147 = *_112;
  _148 = ((llvm_cbe_out_2e_5)&1);
  _149 = *_112;
  *_112 = (llvm_select_u32(_148, (_147 | -536870912), _149));
  _150 = ((llvm_cbe_out_2e_4)&1);
  _151 = ((llvm_cbe_out_2e_5)&1);
  llvm_cbe_out_2e_6 = ((((((((_150 & (((~((((((llvm_ashr_u32(_144, (((int32_t)(int8_t)_142)))) & 1) != 0u)&1))))&1)))&1)) | _151)&1))) & 1);
  _152 = (&_140[((int32_t)1)]);
  _153 = ((llvm_cbe_out_2e_6)&1);
  _154 = *(llvm_select_pu8((((_153 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _140, (((uint8_t*)(&llvm_cbe_shadow)))));
  _155 = ((llvm_cbe_out_2e_6)&1);
  _156 = *_111;
  _157 = ((llvm_cbe_out_2e_6)&1);
  llvm_cbe_out_2e_7 = (((((_157 & (((((llvm_ashr_u32(_156, (((int32_t)(int8_t)_154)))) & 1) != 0u)&1)))&1))) & 1);
  _158 = ((llvm_cbe_out_2e_7)&1);
  _159 = *_112;
  _160 = ((llvm_cbe_out_2e_7)&1);
  _161 = *_112;
  *_112 = (llvm_select_u32(_160, (_159 | -268435456), _161));
  _162 = ((llvm_cbe_out_2e_6)&1);
  _163 = ((llvm_cbe_out_2e_7)&1);
  llvm_cbe_out_2e_8 = ((((((((_162 & (((~((((((llvm_ashr_u32(_156, (((int32_t)(int8_t)_154)))) & 1) != 0u)&1))))&1)))&1)) | _163)&1))) & 1);
  _164 = (&_152[((int32_t)1)]);
  _165 = ((llvm_cbe_out_2e_8)&1);
  _166 = *(llvm_select_pu8((((_165 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _152, (((uint8_t*)(&llvm_cbe_shadow)))));
  _167 = ((llvm_cbe_out_2e_8)&1);
  _168 = *_111;
  _169 = ((llvm_cbe_out_2e_8)&1);
  llvm_cbe_out_2e_9 = (((((_169 & (((((llvm_ashr_u32(_168, (((int32_t)(int8_t)_166)))) & 1) != 0u)&1)))&1))) & 1);
  _170 = ((llvm_cbe_out_2e_9)&1);
  _171 = *_112;
  _172 = ((llvm_cbe_out_2e_9)&1);
  _173 = *_112;
  *_112 = (llvm_select_u32(_172, (_171 | -134217728), _173));
  _174 = ((llvm_cbe_out_2e_8)&1);
  _175 = ((llvm_cbe_out_2e_9)&1);
  llvm_cbe_out_2e_10 = ((((((((_174 & (((~((((((llvm_ashr_u32(_168, (((int32_t)(int8_t)_166)))) & 1) != 0u)&1))))&1)))&1)) | _175)&1))) & 1);
  _176 = (&_164[((int32_t)1)]);
  _177 = ((llvm_cbe_out_2e_10)&1);
  _178 = *(llvm_select_pu8((((_177 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _164, (((uint8_t*)(&llvm_cbe_shadow)))));
  _179 = ((llvm_cbe_out_2e_10)&1);
  _180 = *_111;
  _181 = ((llvm_cbe_out_2e_10)&1);
  llvm_cbe_out_2e_11 = (((((_181 & (((((llvm_ashr_u32(_180, (((int32_t)(int8_t)_178)))) & 1) != 0u)&1)))&1))) & 1);
  _182 = ((llvm_cbe_out_2e_11)&1);
  _183 = *_112;
  _184 = ((llvm_cbe_out_2e_11)&1);
  _185 = *_112;
  *_112 = (llvm_select_u32(_184, (_183 | -67108864), _185));
  _186 = ((llvm_cbe_out_2e_10)&1);
  _187 = ((llvm_cbe_out_2e_11)&1);
  llvm_cbe_out_2e_12 = ((((((((_186 & (((~((((((llvm_ashr_u32(_180, (((int32_t)(int8_t)_178)))) & 1) != 0u)&1))))&1)))&1)) | _187)&1))) & 1);
  _188 = (&_176[((int32_t)1)]);
  _189 = ((llvm_cbe_out_2e_12)&1);
  _190 = *(llvm_select_pu8((((_189 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _176, (((uint8_t*)(&llvm_cbe_shadow)))));
  _191 = ((llvm_cbe_out_2e_12)&1);
  _192 = *_111;
  _193 = ((llvm_cbe_out_2e_12)&1);
  llvm_cbe_out_2e_13 = (((((_193 & (((((llvm_ashr_u32(_192, (((int32_t)(int8_t)_190)))) & 1) != 0u)&1)))&1))) & 1);
  _194 = ((llvm_cbe_out_2e_13)&1);
  _195 = *_112;
  _196 = ((llvm_cbe_out_2e_13)&1);
  _197 = *_112;
  *_112 = (llvm_select_u32(_196, (_195 | -33554432), _197));
  _198 = ((llvm_cbe_out_2e_12)&1);
  _199 = ((llvm_cbe_out_2e_13)&1);
  llvm_cbe_out_2e_14 = ((((((((_198 & (((~((((((llvm_ashr_u32(_192, (((int32_t)(int8_t)_190)))) & 1) != 0u)&1))))&1)))&1)) | _199)&1))) & 1);
  _200 = (&_188[((int32_t)1)]);
  _201 = ((llvm_cbe_out_2e_14)&1);
  _202 = *(llvm_select_pu8((((_201 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _188, (((uint8_t*)(&llvm_cbe_shadow)))));
  _203 = ((llvm_cbe_out_2e_14)&1);
  _204 = *_111;
  _205 = ((llvm_cbe_out_2e_14)&1);
  llvm_cbe_out_2e_15 = (((((_205 & (((((llvm_ashr_u32(_204, (((int32_t)(int8_t)_202)))) & 1) != 0u)&1)))&1))) & 1);
  _206 = ((llvm_cbe_out_2e_15)&1);
  _207 = *_112;
  _208 = ((llvm_cbe_out_2e_15)&1);
  _209 = *_112;
  *_112 = (llvm_select_u32(_208, (_207 | -16777216), _209));
  _210 = ((llvm_cbe_out_2e_14)&1);
  _211 = ((llvm_cbe_out_2e_15)&1);
  llvm_cbe_out_2e_16 = ((((((((_210 & (((~((((((llvm_ashr_u32(_204, (((int32_t)(int8_t)_202)))) & 1) != 0u)&1))))&1)))&1)) | _211)&1))) & 1);
  _212 = (&_200[((int32_t)1)]);
  _213 = ((llvm_cbe_out_2e_16)&1);
  _214 = *(llvm_select_pu8((((_213 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _200, (((uint8_t*)(&llvm_cbe_shadow)))));
  _215 = ((llvm_cbe_out_2e_16)&1);
  _216 = *_111;
  _217 = ((llvm_cbe_out_2e_16)&1);
  llvm_cbe_out_2e_17 = (((((_217 & (((((llvm_ashr_u32(_216, (((int32_t)(int8_t)_214)))) & 1) != 0u)&1)))&1))) & 1);
  _218 = ((llvm_cbe_out_2e_17)&1);
  _219 = *_112;
  _220 = ((llvm_cbe_out_2e_17)&1);
  _221 = *_112;
  *_112 = (llvm_select_u32(_220, (_219 | -8388608), _221));
  _222 = ((llvm_cbe_out_2e_16)&1);
  _223 = ((llvm_cbe_out_2e_17)&1);
  llvm_cbe_out_2e_18 = ((((((((_222 & (((~((((((llvm_ashr_u32(_216, (((int32_t)(int8_t)_214)))) & 1) != 0u)&1))))&1)))&1)) | _223)&1))) & 1);
  _224 = (&_212[((int32_t)1)]);
  _225 = ((llvm_cbe_out_2e_18)&1);
  _226 = *(llvm_select_pu8((((_225 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _212, (((uint8_t*)(&llvm_cbe_shadow)))));
  _227 = ((llvm_cbe_out_2e_18)&1);
  _228 = *_111;
  _229 = ((llvm_cbe_out_2e_18)&1);
  llvm_cbe_out_2e_19 = (((((_229 & (((((llvm_ashr_u32(_228, (((int32_t)(int8_t)_226)))) & 1) != 0u)&1)))&1))) & 1);
  _230 = ((llvm_cbe_out_2e_19)&1);
  _231 = *_112;
  _232 = ((llvm_cbe_out_2e_19)&1);
  _233 = *_112;
  *_112 = (llvm_select_u32(_232, (_231 | -4194304), _233));
  _234 = ((llvm_cbe_out_2e_18)&1);
  _235 = ((llvm_cbe_out_2e_19)&1);
  llvm_cbe_out_2e_20 = ((((((((_234 & (((~((((((llvm_ashr_u32(_228, (((int32_t)(int8_t)_226)))) & 1) != 0u)&1))))&1)))&1)) | _235)&1))) & 1);
  _236 = (&_224[((int32_t)1)]);
  _237 = ((llvm_cbe_out_2e_20)&1);
  _238 = *(llvm_select_pu8((((_237 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _224, (((uint8_t*)(&llvm_cbe_shadow)))));
  _239 = ((llvm_cbe_out_2e_20)&1);
  _240 = *_111;
  _241 = ((llvm_cbe_out_2e_20)&1);
  llvm_cbe_out_2e_21 = (((((_241 & (((((llvm_ashr_u32(_240, (((int32_t)(int8_t)_238)))) & 1) != 0u)&1)))&1))) & 1);
  _242 = ((llvm_cbe_out_2e_21)&1);
  _243 = *_112;
  _244 = ((llvm_cbe_out_2e_21)&1);
  _245 = *_112;
  *_112 = (llvm_select_u32(_244, (_243 | -2097152), _245));
  _246 = ((llvm_cbe_out_2e_20)&1);
  _247 = ((llvm_cbe_out_2e_21)&1);
  llvm_cbe_out_2e_22 = ((((((((_246 & (((~((((((llvm_ashr_u32(_240, (((int32_t)(int8_t)_238)))) & 1) != 0u)&1))))&1)))&1)) | _247)&1))) & 1);
  _248 = (&_236[((int32_t)1)]);
  _249 = ((llvm_cbe_out_2e_22)&1);
  _250 = *(llvm_select_pu8((((_249 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _236, (((uint8_t*)(&llvm_cbe_shadow)))));
  _251 = ((llvm_cbe_out_2e_22)&1);
  _252 = *_111;
  _253 = ((llvm_cbe_out_2e_22)&1);
  llvm_cbe_out_2e_23 = (((((_253 & (((((llvm_ashr_u32(_252, (((int32_t)(int8_t)_250)))) & 1) != 0u)&1)))&1))) & 1);
  _254 = ((llvm_cbe_out_2e_23)&1);
  _255 = *_112;
  _256 = ((llvm_cbe_out_2e_23)&1);
  _257 = *_112;
  *_112 = (llvm_select_u32(_256, (_255 | -1048576), _257));
  _258 = ((llvm_cbe_out_2e_22)&1);
  _259 = ((llvm_cbe_out_2e_23)&1);
  llvm_cbe_out_2e_24 = ((((((((_258 & (((~((((((llvm_ashr_u32(_252, (((int32_t)(int8_t)_250)))) & 1) != 0u)&1))))&1)))&1)) | _259)&1))) & 1);
  _260 = (&_248[((int32_t)1)]);
  _261 = ((llvm_cbe_out_2e_24)&1);
  _262 = *(llvm_select_pu8((((_261 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _248, (((uint8_t*)(&llvm_cbe_shadow)))));
  _263 = ((llvm_cbe_out_2e_24)&1);
  _264 = *_111;
  _265 = ((llvm_cbe_out_2e_24)&1);
  llvm_cbe_out_2e_25 = (((((_265 & (((((llvm_ashr_u32(_264, (((int32_t)(int8_t)_262)))) & 1) != 0u)&1)))&1))) & 1);
  _266 = ((llvm_cbe_out_2e_25)&1);
  _267 = *_112;
  _268 = ((llvm_cbe_out_2e_25)&1);
  _269 = *_112;
  *_112 = (llvm_select_u32(_268, (_267 | -524288), _269));
  _270 = ((llvm_cbe_out_2e_24)&1);
  _271 = ((llvm_cbe_out_2e_25)&1);
  llvm_cbe_out_2e_26 = ((((((((_270 & (((~((((((llvm_ashr_u32(_264, (((int32_t)(int8_t)_262)))) & 1) != 0u)&1))))&1)))&1)) | _271)&1))) & 1);
  _272 = (&_260[((int32_t)1)]);
  _273 = ((llvm_cbe_out_2e_26)&1);
  _274 = *(llvm_select_pu8((((_273 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _260, (((uint8_t*)(&llvm_cbe_shadow)))));
  _275 = ((llvm_cbe_out_2e_26)&1);
  _276 = *_111;
  _277 = ((llvm_cbe_out_2e_26)&1);
  llvm_cbe_out_2e_27 = (((((_277 & (((((llvm_ashr_u32(_276, (((int32_t)(int8_t)_274)))) & 1) != 0u)&1)))&1))) & 1);
  _278 = ((llvm_cbe_out_2e_27)&1);
  _279 = *_112;
  _280 = ((llvm_cbe_out_2e_27)&1);
  _281 = *_112;
  *_112 = (llvm_select_u32(_280, (_279 | -262144), _281));
  _282 = ((llvm_cbe_out_2e_26)&1);
  _283 = ((llvm_cbe_out_2e_27)&1);
  llvm_cbe_out_2e_28 = ((((((((_282 & (((~((((((llvm_ashr_u32(_276, (((int32_t)(int8_t)_274)))) & 1) != 0u)&1))))&1)))&1)) | _283)&1))) & 1);
  _284 = (&_272[((int32_t)1)]);
  _285 = ((llvm_cbe_out_2e_28)&1);
  _286 = *(llvm_select_pu8((((_285 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _272, (((uint8_t*)(&llvm_cbe_shadow)))));
  _287 = ((llvm_cbe_out_2e_28)&1);
  _288 = *_111;
  _289 = ((llvm_cbe_out_2e_28)&1);
  llvm_cbe_out_2e_29 = (((((_289 & (((((llvm_ashr_u32(_288, (((int32_t)(int8_t)_286)))) & 1) != 0u)&1)))&1))) & 1);
  _290 = ((llvm_cbe_out_2e_29)&1);
  _291 = *_112;
  _292 = ((llvm_cbe_out_2e_29)&1);
  _293 = *_112;
  *_112 = (llvm_select_u32(_292, (_291 | -131072), _293));
  _294 = ((llvm_cbe_out_2e_28)&1);
  _295 = ((llvm_cbe_out_2e_29)&1);
  llvm_cbe_out_2e_30 = ((((((((_294 & (((~((((((llvm_ashr_u32(_288, (((int32_t)(int8_t)_286)))) & 1) != 0u)&1))))&1)))&1)) | _295)&1))) & 1);
  _296 = (&_284[((int32_t)1)]);
  _297 = ((llvm_cbe_out_2e_30)&1);
  _298 = *(llvm_select_pu8((((_297 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _284, (((uint8_t*)(&llvm_cbe_shadow)))));
  _299 = ((llvm_cbe_out_2e_30)&1);
  _300 = *_111;
  _301 = ((llvm_cbe_out_2e_30)&1);
  llvm_cbe_out_2e_31 = (((((_301 & (((((llvm_ashr_u32(_300, (((int32_t)(int8_t)_298)))) & 1) != 0u)&1)))&1))) & 1);
  _302 = ((llvm_cbe_out_2e_31)&1);
  _303 = *_112;
  _304 = ((llvm_cbe_out_2e_31)&1);
  _305 = *_112;
  *_112 = (llvm_select_u32(_304, (_303 | -65536), _305));
  _306 = ((llvm_cbe_out_2e_30)&1);
  _307 = ((llvm_cbe_out_2e_31)&1);
  llvm_cbe_out_2e_32 = ((((((((_306 & (((~((((((llvm_ashr_u32(_300, (((int32_t)(int8_t)_298)))) & 1) != 0u)&1))))&1)))&1)) | _307)&1))) & 1);
  _308 = (&_296[((int32_t)1)]);
  _309 = ((llvm_cbe_out_2e_32)&1);
  _310 = *(llvm_select_pu8((((_309 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _296, (((uint8_t*)(&llvm_cbe_shadow)))));
  _311 = ((llvm_cbe_out_2e_32)&1);
  _312 = *_111;
  _313 = ((llvm_cbe_out_2e_32)&1);
  llvm_cbe_out_2e_33 = (((((_313 & (((((llvm_ashr_u32(_312, (((int32_t)(int8_t)_310)))) & 1) != 0u)&1)))&1))) & 1);
  _314 = ((llvm_cbe_out_2e_33)&1);
  _315 = *_112;
  _316 = ((llvm_cbe_out_2e_33)&1);
  _317 = *_112;
  *_112 = (llvm_select_u32(_316, (_315 | -32768), _317));
  _318 = ((llvm_cbe_out_2e_32)&1);
  _319 = ((llvm_cbe_out_2e_33)&1);
  llvm_cbe_out_2e_34 = ((((((((_318 & (((~((((((llvm_ashr_u32(_312, (((int32_t)(int8_t)_310)))) & 1) != 0u)&1))))&1)))&1)) | _319)&1))) & 1);
  _320 = (&_308[((int32_t)1)]);
  _321 = ((llvm_cbe_out_2e_34)&1);
  _322 = *(llvm_select_pu8((((_321 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _308, (((uint8_t*)(&llvm_cbe_shadow)))));
  _323 = ((llvm_cbe_out_2e_34)&1);
  _324 = *_111;
  _325 = ((llvm_cbe_out_2e_34)&1);
  llvm_cbe_out_2e_35 = (((((_325 & (((((llvm_ashr_u32(_324, (((int32_t)(int8_t)_322)))) & 1) != 0u)&1)))&1))) & 1);
  _326 = ((llvm_cbe_out_2e_35)&1);
  _327 = *_112;
  _328 = ((llvm_cbe_out_2e_35)&1);
  _329 = *_112;
  *_112 = (llvm_select_u32(_328, (_327 | -16384), _329));
  _330 = ((llvm_cbe_out_2e_34)&1);
  _331 = ((llvm_cbe_out_2e_35)&1);
  llvm_cbe_out_2e_36 = ((((((((_330 & (((~((((((llvm_ashr_u32(_324, (((int32_t)(int8_t)_322)))) & 1) != 0u)&1))))&1)))&1)) | _331)&1))) & 1);
  _332 = (&_320[((int32_t)1)]);
  _333 = ((llvm_cbe_out_2e_36)&1);
  _334 = *(llvm_select_pu8((((_333 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _320, (((uint8_t*)(&llvm_cbe_shadow)))));
  _335 = ((llvm_cbe_out_2e_36)&1);
  _336 = *_111;
  _337 = ((llvm_cbe_out_2e_36)&1);
  llvm_cbe_out_2e_37 = (((((_337 & (((((llvm_ashr_u32(_336, (((int32_t)(int8_t)_334)))) & 1) != 0u)&1)))&1))) & 1);
  _338 = ((llvm_cbe_out_2e_37)&1);
  _339 = *_112;
  _340 = ((llvm_cbe_out_2e_37)&1);
  _341 = *_112;
  *_112 = (llvm_select_u32(_340, (_339 | -8192), _341));
  _342 = ((llvm_cbe_out_2e_36)&1);
  _343 = ((llvm_cbe_out_2e_37)&1);
  llvm_cbe_out_2e_38 = ((((((((_342 & (((~((((((llvm_ashr_u32(_336, (((int32_t)(int8_t)_334)))) & 1) != 0u)&1))))&1)))&1)) | _343)&1))) & 1);
  _344 = (&_332[((int32_t)1)]);
  _345 = ((llvm_cbe_out_2e_38)&1);
  _346 = *(llvm_select_pu8((((_345 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _332, (((uint8_t*)(&llvm_cbe_shadow)))));
  _347 = ((llvm_cbe_out_2e_38)&1);
  _348 = *_111;
  _349 = ((llvm_cbe_out_2e_38)&1);
  llvm_cbe_out_2e_39 = (((((_349 & (((((llvm_ashr_u32(_348, (((int32_t)(int8_t)_346)))) & 1) != 0u)&1)))&1))) & 1);
  _350 = ((llvm_cbe_out_2e_39)&1);
  _351 = *_112;
  _352 = ((llvm_cbe_out_2e_39)&1);
  _353 = *_112;
  *_112 = (llvm_select_u32(_352, (_351 | -4096), _353));
  _354 = ((llvm_cbe_out_2e_38)&1);
  _355 = ((llvm_cbe_out_2e_39)&1);
  llvm_cbe_out_2e_40 = ((((((((_354 & (((~((((((llvm_ashr_u32(_348, (((int32_t)(int8_t)_346)))) & 1) != 0u)&1))))&1)))&1)) | _355)&1))) & 1);
  _356 = (&_344[((int32_t)1)]);
  _357 = ((llvm_cbe_out_2e_40)&1);
  _358 = *(llvm_select_pu8((((_357 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _344, (((uint8_t*)(&llvm_cbe_shadow)))));
  _359 = ((llvm_cbe_out_2e_40)&1);
  _360 = *_111;
  _361 = ((llvm_cbe_out_2e_40)&1);
  llvm_cbe_out_2e_41 = (((((_361 & (((((llvm_ashr_u32(_360, (((int32_t)(int8_t)_358)))) & 1) != 0u)&1)))&1))) & 1);
  _362 = ((llvm_cbe_out_2e_41)&1);
  _363 = *_112;
  _364 = ((llvm_cbe_out_2e_41)&1);
  _365 = *_112;
  *_112 = (llvm_select_u32(_364, (_363 | -2048), _365));
  _366 = ((llvm_cbe_out_2e_40)&1);
  _367 = ((llvm_cbe_out_2e_41)&1);
  llvm_cbe_out_2e_42 = ((((((((_366 & (((~((((((llvm_ashr_u32(_360, (((int32_t)(int8_t)_358)))) & 1) != 0u)&1))))&1)))&1)) | _367)&1))) & 1);
  _368 = (&_356[((int32_t)1)]);
  _369 = ((llvm_cbe_out_2e_42)&1);
  _370 = *(llvm_select_pu8((((_369 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _356, (((uint8_t*)(&llvm_cbe_shadow)))));
  _371 = ((llvm_cbe_out_2e_42)&1);
  _372 = *_111;
  _373 = ((llvm_cbe_out_2e_42)&1);
  llvm_cbe_out_2e_43 = (((((_373 & (((((llvm_ashr_u32(_372, (((int32_t)(int8_t)_370)))) & 1) != 0u)&1)))&1))) & 1);
  _374 = ((llvm_cbe_out_2e_43)&1);
  _375 = *_112;
  _376 = ((llvm_cbe_out_2e_43)&1);
  _377 = *_112;
  *_112 = (llvm_select_u32(_376, (_375 | -1024), _377));
  _378 = ((llvm_cbe_out_2e_42)&1);
  _379 = ((llvm_cbe_out_2e_43)&1);
  llvm_cbe_out_2e_44 = ((((((((_378 & (((~((((((llvm_ashr_u32(_372, (((int32_t)(int8_t)_370)))) & 1) != 0u)&1))))&1)))&1)) | _379)&1))) & 1);
  _380 = (&_368[((int32_t)1)]);
  _381 = ((llvm_cbe_out_2e_44)&1);
  _382 = *(llvm_select_pu8((((_381 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _368, (((uint8_t*)(&llvm_cbe_shadow)))));
  _383 = ((llvm_cbe_out_2e_44)&1);
  _384 = *_111;
  _385 = ((llvm_cbe_out_2e_44)&1);
  llvm_cbe_out_2e_45 = (((((_385 & (((((llvm_ashr_u32(_384, (((int32_t)(int8_t)_382)))) & 1) != 0u)&1)))&1))) & 1);
  _386 = ((llvm_cbe_out_2e_45)&1);
  _387 = *_112;
  _388 = ((llvm_cbe_out_2e_45)&1);
  _389 = *_112;
  *_112 = (llvm_select_u32(_388, (_387 | -512), _389));
  _390 = ((llvm_cbe_out_2e_44)&1);
  _391 = ((llvm_cbe_out_2e_45)&1);
  llvm_cbe_out_2e_46 = ((((((((_390 & (((~((((((llvm_ashr_u32(_384, (((int32_t)(int8_t)_382)))) & 1) != 0u)&1))))&1)))&1)) | _391)&1))) & 1);
  _392 = (&_380[((int32_t)1)]);
  _393 = ((llvm_cbe_out_2e_46)&1);
  _394 = *(llvm_select_pu8((((_393 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _380, (((uint8_t*)(&llvm_cbe_shadow)))));
  _395 = ((llvm_cbe_out_2e_46)&1);
  _396 = *_111;
  _397 = ((llvm_cbe_out_2e_46)&1);
  llvm_cbe_out_2e_47 = (((((_397 & (((((llvm_ashr_u32(_396, (((int32_t)(int8_t)_394)))) & 1) != 0u)&1)))&1))) & 1);
  _398 = ((llvm_cbe_out_2e_47)&1);
  _399 = *_112;
  _400 = ((llvm_cbe_out_2e_47)&1);
  _401 = *_112;
  *_112 = (llvm_select_u32(_400, (_399 | -256), _401));
  _402 = ((llvm_cbe_out_2e_46)&1);
  _403 = ((llvm_cbe_out_2e_47)&1);
  llvm_cbe_out_2e_48 = ((((((((_402 & (((~((((((llvm_ashr_u32(_396, (((int32_t)(int8_t)_394)))) & 1) != 0u)&1))))&1)))&1)) | _403)&1))) & 1);
  _404 = (&_392[((int32_t)1)]);
  _405 = ((llvm_cbe_out_2e_48)&1);
  _406 = *(llvm_select_pu8((((_405 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _392, (((uint8_t*)(&llvm_cbe_shadow)))));
  _407 = ((llvm_cbe_out_2e_48)&1);
  _408 = *_111;
  _409 = ((llvm_cbe_out_2e_48)&1);
  llvm_cbe_out_2e_49 = (((((_409 & (((((llvm_ashr_u32(_408, (((int32_t)(int8_t)_406)))) & 1) != 0u)&1)))&1))) & 1);
  _410 = ((llvm_cbe_out_2e_49)&1);
  _411 = *_112;
  _412 = ((llvm_cbe_out_2e_49)&1);
  _413 = *_112;
  *_112 = (llvm_select_u32(_412, (_411 | -128), _413));
  _414 = ((llvm_cbe_out_2e_48)&1);
  _415 = ((llvm_cbe_out_2e_49)&1);
  llvm_cbe_out_2e_50 = ((((((((_414 & (((~((((((llvm_ashr_u32(_408, (((int32_t)(int8_t)_406)))) & 1) != 0u)&1))))&1)))&1)) | _415)&1))) & 1);
  _416 = (&_404[((int32_t)1)]);
  _417 = ((llvm_cbe_out_2e_50)&1);
  _418 = *(llvm_select_pu8((((_417 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _404, (((uint8_t*)(&llvm_cbe_shadow)))));
  _419 = ((llvm_cbe_out_2e_50)&1);
  _420 = *_111;
  _421 = ((llvm_cbe_out_2e_50)&1);
  llvm_cbe_out_2e_51 = (((((_421 & (((((llvm_ashr_u32(_420, (((int32_t)(int8_t)_418)))) & 1) != 0u)&1)))&1))) & 1);
  _422 = ((llvm_cbe_out_2e_51)&1);
  _423 = *_112;
  _424 = ((llvm_cbe_out_2e_51)&1);
  _425 = *_112;
  *_112 = (llvm_select_u32(_424, (_423 | -64), _425));
  _426 = ((llvm_cbe_out_2e_50)&1);
  _427 = ((llvm_cbe_out_2e_51)&1);
  llvm_cbe_out_2e_52 = ((((((((_426 & (((~((((((llvm_ashr_u32(_420, (((int32_t)(int8_t)_418)))) & 1) != 0u)&1))))&1)))&1)) | _427)&1))) & 1);
  _428 = (&_416[((int32_t)1)]);
  _429 = ((llvm_cbe_out_2e_52)&1);
  _430 = *(llvm_select_pu8((((_429 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _416, (((uint8_t*)(&llvm_cbe_shadow)))));
  _431 = ((llvm_cbe_out_2e_52)&1);
  _432 = *_111;
  _433 = ((llvm_cbe_out_2e_52)&1);
  llvm_cbe_out_2e_53 = (((((_433 & (((((llvm_ashr_u32(_432, (((int32_t)(int8_t)_430)))) & 1) != 0u)&1)))&1))) & 1);
  _434 = ((llvm_cbe_out_2e_53)&1);
  _435 = *_112;
  _436 = ((llvm_cbe_out_2e_53)&1);
  _437 = *_112;
  *_112 = (llvm_select_u32(_436, (_435 | -32), _437));
  _438 = ((llvm_cbe_out_2e_52)&1);
  _439 = ((llvm_cbe_out_2e_53)&1);
  llvm_cbe_out_2e_54 = ((((((((_438 & (((~((((((llvm_ashr_u32(_432, (((int32_t)(int8_t)_430)))) & 1) != 0u)&1))))&1)))&1)) | _439)&1))) & 1);
  _440 = (&_428[((int32_t)1)]);
  _441 = ((llvm_cbe_out_2e_54)&1);
  _442 = *(llvm_select_pu8((((_441 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _428, (((uint8_t*)(&llvm_cbe_shadow)))));
  _443 = ((llvm_cbe_out_2e_54)&1);
  _444 = *_111;
  _445 = ((llvm_cbe_out_2e_54)&1);
  llvm_cbe_out_2e_55 = (((((_445 & (((((llvm_ashr_u32(_444, (((int32_t)(int8_t)_442)))) & 1) != 0u)&1)))&1))) & 1);
  _446 = ((llvm_cbe_out_2e_55)&1);
  _447 = *_112;
  _448 = ((llvm_cbe_out_2e_55)&1);
  _449 = *_112;
  *_112 = (llvm_select_u32(_448, (_447 | -16), _449));
  _450 = ((llvm_cbe_out_2e_54)&1);
  _451 = ((llvm_cbe_out_2e_55)&1);
  llvm_cbe_out_2e_56 = ((((((((_450 & (((~((((((llvm_ashr_u32(_444, (((int32_t)(int8_t)_442)))) & 1) != 0u)&1))))&1)))&1)) | _451)&1))) & 1);
  _452 = (&_440[((int32_t)1)]);
  _453 = ((llvm_cbe_out_2e_56)&1);
  _454 = *(llvm_select_pu8((((_453 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _440, (((uint8_t*)(&llvm_cbe_shadow)))));
  _455 = ((llvm_cbe_out_2e_56)&1);
  _456 = *_111;
  _457 = ((llvm_cbe_out_2e_56)&1);
  llvm_cbe_out_2e_57 = (((((_457 & (((((llvm_ashr_u32(_456, (((int32_t)(int8_t)_454)))) & 1) != 0u)&1)))&1))) & 1);
  _458 = ((llvm_cbe_out_2e_57)&1);
  _459 = *_112;
  _460 = ((llvm_cbe_out_2e_57)&1);
  _461 = *_112;
  *_112 = (llvm_select_u32(_460, (_459 | -8), _461));
  _462 = ((llvm_cbe_out_2e_56)&1);
  _463 = ((llvm_cbe_out_2e_57)&1);
  llvm_cbe_out_2e_58 = ((((((((_462 & (((~((((((llvm_ashr_u32(_456, (((int32_t)(int8_t)_454)))) & 1) != 0u)&1))))&1)))&1)) | _463)&1))) & 1);
  _464 = (&_452[((int32_t)1)]);
  _465 = ((llvm_cbe_out_2e_58)&1);
  _466 = *(llvm_select_pu8((((_465 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _452, (((uint8_t*)(&llvm_cbe_shadow)))));
  _467 = ((llvm_cbe_out_2e_58)&1);
  _468 = *_111;
  _469 = ((llvm_cbe_out_2e_58)&1);
  llvm_cbe_out_2e_59 = (((((_469 & (((((llvm_ashr_u32(_468, (((int32_t)(int8_t)_466)))) & 1) != 0u)&1)))&1))) & 1);
  _470 = ((llvm_cbe_out_2e_59)&1);
  _471 = *_112;
  _472 = ((llvm_cbe_out_2e_59)&1);
  _473 = *_112;
  *_112 = (llvm_select_u32(_472, (_471 | -4), _473));
  _474 = ((llvm_cbe_out_2e_58)&1);
  _475 = ((llvm_cbe_out_2e_59)&1);
  llvm_cbe_out_2e_60 = ((((((((_474 & (((~((((((llvm_ashr_u32(_468, (((int32_t)(int8_t)_466)))) & 1) != 0u)&1))))&1)))&1)) | _475)&1))) & 1);
  _476 = ((llvm_cbe_out_2e_60)&1);
  _477 = *(llvm_select_pu8((((_476 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), _464, (((uint8_t*)(&llvm_cbe_shadow)))));
  _478 = ((llvm_cbe_out_2e_60)&1);
  _479 = *_111;
  _480 = ((llvm_cbe_out_2e_60)&1);
  llvm_cbe_out_2e_61 = (((((_480 & (((((llvm_ashr_u32(_479, (((int32_t)(int8_t)_477)))) & 1) != 0u)&1)))&1))) & 1);
  _481 = ((llvm_cbe_out_2e_61)&1);
  _482 = *_112;
  _483 = ((llvm_cbe_out_2e_61)&1);
  _484 = *_112;
  *_112 = (llvm_select_u32(_483, (_482 | -2), _484));
  _485 = ((llvm_cbe_out_2e_60)&1);
  _486 = ((llvm_cbe_out_2e_61)&1);
  llvm_cbe_out_2e_62 = ((((((((_485 & (((~((((((llvm_ashr_u32(_479, (((int32_t)(int8_t)_477)))) & 1) != 0u)&1))))&1)))&1)) | _486)&1))) & 1);
  _487 = ((llvm_cbe_out_2e_62)&1);
  _488 = *(llvm_select_pu8((((_487 | (((((int64_t)(((int64_t)(int32_t)1))) < ((int64_t)llvm_cbe_N2))&1)))&1)), ((&_464[((int32_t)1)])), (((uint8_t*)(&llvm_cbe_shadow)))));
  _489 = ((llvm_cbe_out_2e_62)&1);
  _490 = *_111;
  _491 = ((llvm_cbe_out_2e_62)&1);
  llvm_cbe_out_2e_63 = (((((_491 & (((((llvm_ashr_u32(_490, (((int32_t)(int8_t)_488)))) & 1) != 0u)&1)))&1))) & 1);
  _492 = ((llvm_cbe_out_2e_63)&1);
  _493 = *_112;
  _494 = ((llvm_cbe_out_2e_63)&1);
  _495 = *_112;
  *_112 = (llvm_select_u32(_494, -1, _495));
  _496 = ((llvm_cbe_out_2e_62)&1);
  _497 = ((llvm_cbe_out_2e_63)&1);
  llvm_cbe_out_2e_64 = ((((((((_496 & (((~((((((llvm_ashr_u32(_490, (((int32_t)(int8_t)_488)))) & 1) != 0u)&1))))&1)))&1)) | _497)&1))) & 1);
}


int16_t exp8(int16_t _498, int16_t _499, int16_t _500, bool llvm_cbe__2e_cond) {
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  bool llvm_cbe_out_2e_1;    /* Address-exposed local */
  bool llvm_cbe_out_2e_2;    /* Address-exposed local */
  bool llvm_cbe_out_2e_3;    /* Address-exposed local */
  bool llvm_cbe_out_2e_4;    /* Address-exposed local */
  bool llvm_cbe_out_2e_5;    /* Address-exposed local */
  bool llvm_cbe_out_2e_6;    /* Address-exposed local */
  bool llvm_cbe_out_2e_7;    /* Address-exposed local */
  bool llvm_cbe_out_2e_8;    /* Address-exposed local */
  bool llvm_cbe_out_2e_9;    /* Address-exposed local */
  bool llvm_cbe_out_2e_10;    /* Address-exposed local */
  bool llvm_cbe_out_2e_11;    /* Address-exposed local */
  bool llvm_cbe_out_2e_12;    /* Address-exposed local */
  bool llvm_cbe_out_2e_13;    /* Address-exposed local */
  bool llvm_cbe_out_2e_14;    /* Address-exposed local */
  bool llvm_cbe_out_2e_15;    /* Address-exposed local */
  bool llvm_cbe_out_2e_16;    /* Address-exposed local */
  bool llvm_cbe_out_2e_17;    /* Address-exposed local */
  bool llvm_cbe_out_2e_18;    /* Address-exposed local */
  bool llvm_cbe_out_2e_19;    /* Address-exposed local */
  bool llvm_cbe_out_2e_20;    /* Address-exposed local */
  bool llvm_cbe_out_2e_21;    /* Address-exposed local */
  bool llvm_cbe_out_2e_22;    /* Address-exposed local */
  bool llvm_cbe_out_2e_23;    /* Address-exposed local */
  bool llvm_cbe_out_2e_24;    /* Address-exposed local */
  bool llvm_cbe_out_2e_25;    /* Address-exposed local */
  bool llvm_cbe_out_2e_26;    /* Address-exposed local */
  bool llvm_cbe_out_2e_27;    /* Address-exposed local */
  bool llvm_cbe_out_2e_28;    /* Address-exposed local */
  bool llvm_cbe_out_2e_29;    /* Address-exposed local */
  bool llvm_cbe_out_2e_30;    /* Address-exposed local */
  bool llvm_cbe_out_2e_31;    /* Address-exposed local */
  bool llvm_cbe_out_2e_32;    /* Address-exposed local */
  bool llvm_cbe_out_2e_33;    /* Address-exposed local */
  bool llvm_cbe_out_2e_34;    /* Address-exposed local */
  bool _501;
  bool _502;
  bool llvm_cbe_in_2e_35;
  uint16_t _503;
  bool _504;
  bool llvm_cbe_in_2e_36;
  bool _505;
  uint16_t llvm_cbe_select_2e_phi_2e_;
  uint16_t _506;
  uint16_t _507;
  bool _508;
  bool llvm_cbe_in_2e_38;
  uint16_t _509;
  bool _510;
  bool llvm_cbe_in_2e_39;
  bool _511;
  uint16_t llvm_cbe_select_2e_phi_2e_2;
  uint16_t _512;
  uint16_t _513;
  bool _514;
  bool llvm_cbe_in_2e_40;
  uint16_t _515;
  bool _516;
  bool llvm_cbe_in_2e_41;
  bool _517;
  uint16_t llvm_cbe_select_2e_phi_2e_3;
  uint16_t _518;
  uint16_t _519;
  bool _520;
  bool llvm_cbe_in_2e_42;
  uint16_t _521;
  bool _522;
  bool llvm_cbe_in_2e_43;
  bool _523;
  uint16_t llvm_cbe_select_2e_phi_2e_4;
  uint16_t _524;
  uint16_t _525;
  bool _526;
  bool llvm_cbe_in_2e_44;
  uint16_t _527;
  bool _528;
  bool llvm_cbe_in_2e_45;
  bool _529;
  uint16_t llvm_cbe_select_2e_phi_2e_5;
  uint16_t _530;
  uint16_t _531;
  bool _532;
  bool llvm_cbe_in_2e_46;
  uint16_t _533;
  bool _534;
  bool llvm_cbe_in_2e_47;
  bool _535;
  uint16_t llvm_cbe_select_2e_phi_2e_6;
  uint16_t _536;
  uint16_t _537;
  bool _538;
  bool llvm_cbe_in_2e_48;
  uint16_t _539;
  bool _540;
  bool llvm_cbe_in_2e_49;
  bool _541;
  uint16_t llvm_cbe_select_2e_phi_2e_7;
  uint16_t _542;
  uint16_t _543;
  bool _544;
  bool llvm_cbe_in_2e_50;
  uint16_t _545;
  bool _546;
  bool llvm_cbe_in_2e_51;
  bool _547;
  uint16_t llvm_cbe_select_2e_phi_2e_8;
  uint16_t _548;
  uint16_t _549;
  bool _550;
  bool llvm_cbe_in_2e_52;
  uint16_t _551;
  bool _552;
  bool llvm_cbe_in_2e_53;
  bool _553;
  uint16_t llvm_cbe_select_2e_phi_2e_9;
  uint16_t _554;
  uint16_t _555;
  bool _556;
  bool llvm_cbe_in_2e_54;
  uint16_t _557;
  bool _558;
  bool llvm_cbe_in_2e_55;
  bool _559;
  uint16_t llvm_cbe_select_2e_phi_2e_10;
  uint16_t _560;
  uint16_t _561;
  bool _562;
  bool llvm_cbe_in_2e_56;
  uint16_t _563;
  bool _564;
  bool llvm_cbe_in_2e_57;
  bool _565;
  uint16_t llvm_cbe_select_2e_phi_2e_11;
  uint16_t _566;
  uint16_t _567;
  bool _568;
  bool llvm_cbe_in_2e_58;
  uint16_t _569;
  bool _570;
  bool llvm_cbe_in_2e_59;
  bool _571;
  uint16_t llvm_cbe_select_2e_phi_2e_12;
  uint16_t _572;
  uint16_t _573;
  bool _574;
  bool llvm_cbe_in_2e_60;
  uint16_t _575;
  bool _576;
  bool llvm_cbe_in_2e_61;
  bool _577;
  uint16_t llvm_cbe_select_2e_phi_2e_13;
  uint16_t _578;
  uint16_t _579;
  bool _580;
  bool llvm_cbe_in_2e_62;
  uint16_t _581;
  bool _582;
  bool llvm_cbe_in_2e_63;
  bool _583;
  uint16_t llvm_cbe_select_2e_phi_2e_14;
  uint16_t _584;
  uint16_t _585;
  bool _586;
  bool llvm_cbe_in_2e_64;
  uint16_t _587;
  bool _588;
  bool llvm_cbe_in_2e_65;
  bool _589;
  uint16_t llvm_cbe_select_2e_phi_2e_15;
  uint16_t _590;
  uint16_t _591;
  bool _592;
  bool llvm_cbe_in_2e_66;
  uint16_t _593;
  bool _594;
  bool llvm_cbe_in_2e_67;
  bool _595;
  uint32_t _596;
  uint16_t _597;
  bool _598;
  bool llvm_cbe_in_2e_37;
  bool _599;

  llvm_cbe_out_2e_ = ((llvm_cbe__2e_cond) & 1);
  _501 = ((llvm_cbe_out_2e_)&1);
  llvm_cbe_out_2e_1 = (((((_501 & (((~(((((((int32_t)(int16_t)_498)) == 0u)&1))))&1)))&1))) & 1);
  _502 = ((llvm_cbe_out_2e_1)&1);
  llvm_cbe_in_2e_35 = ((_502 & (((((((int32_t)(int16_t)_499)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_2 = ((llvm_cbe_in_2e_35) & 1);
  _503 = mult8(1, _498, _500, llvm_cbe_in_2e_35);
  _504 = ((llvm_cbe_out_2e_1)&1);
  llvm_cbe_in_2e_36 = ((_504 & (((~((((((((int32_t)(int16_t)_499)) & 1) == 1u)&1))))&1)))&1);
  _505 = ((llvm_cbe_out_2e_2)&1);
  llvm_cbe_select_2e_phi_2e_ = llvm_select_u16(llvm_cbe_in_2e_36, 1, _503);
  llvm_cbe_out_2e_3 = (((((llvm_cbe_in_2e_36 | _505)&1))) & 1);
  _506 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_499)), 1)));
  _507 = mult8(_498, _498, _500, (((llvm_cbe_in_2e_36 | _505)&1)));
  _508 = ((llvm_cbe_out_2e_3)&1);
  llvm_cbe_in_2e_38 = ((_508 & (((((((int32_t)(int16_t)_506)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_5 = ((llvm_cbe_in_2e_38) & 1);
  _509 = mult8(llvm_cbe_select_2e_phi_2e_, _507, _500, llvm_cbe_in_2e_38);
  _510 = ((llvm_cbe_out_2e_3)&1);
  llvm_cbe_in_2e_39 = ((_510 & (((~((((((((int32_t)(int16_t)_506)) & 1) == 1u)&1))))&1)))&1);
  _511 = ((llvm_cbe_out_2e_5)&1);
  llvm_cbe_select_2e_phi_2e_2 = llvm_select_u16(llvm_cbe_in_2e_39, llvm_cbe_select_2e_phi_2e_, _509);
  llvm_cbe_out_2e_6 = (((((llvm_cbe_in_2e_39 | _511)&1))) & 1);
  _512 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_506)), 1)));
  _513 = mult8(_507, _507, _500, (((llvm_cbe_in_2e_39 | _511)&1)));
  _514 = ((llvm_cbe_out_2e_6)&1);
  llvm_cbe_in_2e_40 = ((_514 & (((((((int32_t)(int16_t)_512)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_7 = ((llvm_cbe_in_2e_40) & 1);
  _515 = mult8(llvm_cbe_select_2e_phi_2e_2, _513, _500, llvm_cbe_in_2e_40);
  _516 = ((llvm_cbe_out_2e_6)&1);
  llvm_cbe_in_2e_41 = ((_516 & (((~((((((((int32_t)(int16_t)_512)) & 1) == 1u)&1))))&1)))&1);
  _517 = ((llvm_cbe_out_2e_7)&1);
  llvm_cbe_select_2e_phi_2e_3 = llvm_select_u16(llvm_cbe_in_2e_41, llvm_cbe_select_2e_phi_2e_2, _515);
  llvm_cbe_out_2e_8 = (((((llvm_cbe_in_2e_41 | _517)&1))) & 1);
  _518 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_512)), 1)));
  _519 = mult8(_513, _513, _500, (((llvm_cbe_in_2e_41 | _517)&1)));
  _520 = ((llvm_cbe_out_2e_8)&1);
  llvm_cbe_in_2e_42 = ((_520 & (((((((int32_t)(int16_t)_518)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_9 = ((llvm_cbe_in_2e_42) & 1);
  _521 = mult8(llvm_cbe_select_2e_phi_2e_3, _519, _500, llvm_cbe_in_2e_42);
  _522 = ((llvm_cbe_out_2e_8)&1);
  llvm_cbe_in_2e_43 = ((_522 & (((~((((((((int32_t)(int16_t)_518)) & 1) == 1u)&1))))&1)))&1);
  _523 = ((llvm_cbe_out_2e_9)&1);
  llvm_cbe_select_2e_phi_2e_4 = llvm_select_u16(llvm_cbe_in_2e_43, llvm_cbe_select_2e_phi_2e_3, _521);
  llvm_cbe_out_2e_10 = (((((llvm_cbe_in_2e_43 | _523)&1))) & 1);
  _524 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_518)), 1)));
  _525 = mult8(_519, _519, _500, (((llvm_cbe_in_2e_43 | _523)&1)));
  _526 = ((llvm_cbe_out_2e_10)&1);
  llvm_cbe_in_2e_44 = ((_526 & (((((((int32_t)(int16_t)_524)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_11 = ((llvm_cbe_in_2e_44) & 1);
  _527 = mult8(llvm_cbe_select_2e_phi_2e_4, _525, _500, llvm_cbe_in_2e_44);
  _528 = ((llvm_cbe_out_2e_10)&1);
  llvm_cbe_in_2e_45 = ((_528 & (((~((((((((int32_t)(int16_t)_524)) & 1) == 1u)&1))))&1)))&1);
  _529 = ((llvm_cbe_out_2e_11)&1);
  llvm_cbe_select_2e_phi_2e_5 = llvm_select_u16(llvm_cbe_in_2e_45, llvm_cbe_select_2e_phi_2e_4, _527);
  llvm_cbe_out_2e_12 = (((((llvm_cbe_in_2e_45 | _529)&1))) & 1);
  _530 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_524)), 1)));
  _531 = mult8(_525, _525, _500, (((llvm_cbe_in_2e_45 | _529)&1)));
  _532 = ((llvm_cbe_out_2e_12)&1);
  llvm_cbe_in_2e_46 = ((_532 & (((((((int32_t)(int16_t)_530)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_13 = ((llvm_cbe_in_2e_46) & 1);
  _533 = mult8(llvm_cbe_select_2e_phi_2e_5, _531, _500, llvm_cbe_in_2e_46);
  _534 = ((llvm_cbe_out_2e_12)&1);
  llvm_cbe_in_2e_47 = ((_534 & (((~((((((((int32_t)(int16_t)_530)) & 1) == 1u)&1))))&1)))&1);
  _535 = ((llvm_cbe_out_2e_13)&1);
  llvm_cbe_select_2e_phi_2e_6 = llvm_select_u16(llvm_cbe_in_2e_47, llvm_cbe_select_2e_phi_2e_5, _533);
  llvm_cbe_out_2e_14 = (((((llvm_cbe_in_2e_47 | _535)&1))) & 1);
  _536 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_530)), 1)));
  _537 = mult8(_531, _531, _500, (((llvm_cbe_in_2e_47 | _535)&1)));
  _538 = ((llvm_cbe_out_2e_14)&1);
  llvm_cbe_in_2e_48 = ((_538 & (((((((int32_t)(int16_t)_536)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_15 = ((llvm_cbe_in_2e_48) & 1);
  _539 = mult8(llvm_cbe_select_2e_phi_2e_6, _537, _500, llvm_cbe_in_2e_48);
  _540 = ((llvm_cbe_out_2e_14)&1);
  llvm_cbe_in_2e_49 = ((_540 & (((~((((((((int32_t)(int16_t)_536)) & 1) == 1u)&1))))&1)))&1);
  _541 = ((llvm_cbe_out_2e_15)&1);
  llvm_cbe_select_2e_phi_2e_7 = llvm_select_u16(llvm_cbe_in_2e_49, llvm_cbe_select_2e_phi_2e_6, _539);
  llvm_cbe_out_2e_16 = (((((llvm_cbe_in_2e_49 | _541)&1))) & 1);
  _542 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_536)), 1)));
  _543 = mult8(_537, _537, _500, (((llvm_cbe_in_2e_49 | _541)&1)));
  _544 = ((llvm_cbe_out_2e_16)&1);
  llvm_cbe_in_2e_50 = ((_544 & (((((((int32_t)(int16_t)_542)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_17 = ((llvm_cbe_in_2e_50) & 1);
  _545 = mult8(llvm_cbe_select_2e_phi_2e_7, _543, _500, llvm_cbe_in_2e_50);
  _546 = ((llvm_cbe_out_2e_16)&1);
  llvm_cbe_in_2e_51 = ((_546 & (((~((((((((int32_t)(int16_t)_542)) & 1) == 1u)&1))))&1)))&1);
  _547 = ((llvm_cbe_out_2e_17)&1);
  llvm_cbe_select_2e_phi_2e_8 = llvm_select_u16(llvm_cbe_in_2e_51, llvm_cbe_select_2e_phi_2e_7, _545);
  llvm_cbe_out_2e_18 = (((((llvm_cbe_in_2e_51 | _547)&1))) & 1);
  _548 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_542)), 1)));
  _549 = mult8(_543, _543, _500, (((llvm_cbe_in_2e_51 | _547)&1)));
  _550 = ((llvm_cbe_out_2e_18)&1);
  llvm_cbe_in_2e_52 = ((_550 & (((((((int32_t)(int16_t)_548)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_19 = ((llvm_cbe_in_2e_52) & 1);
  _551 = mult8(llvm_cbe_select_2e_phi_2e_8, _549, _500, llvm_cbe_in_2e_52);
  _552 = ((llvm_cbe_out_2e_18)&1);
  llvm_cbe_in_2e_53 = ((_552 & (((~((((((((int32_t)(int16_t)_548)) & 1) == 1u)&1))))&1)))&1);
  _553 = ((llvm_cbe_out_2e_19)&1);
  llvm_cbe_select_2e_phi_2e_9 = llvm_select_u16(llvm_cbe_in_2e_53, llvm_cbe_select_2e_phi_2e_8, _551);
  llvm_cbe_out_2e_20 = (((((llvm_cbe_in_2e_53 | _553)&1))) & 1);
  _554 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_548)), 1)));
  _555 = mult8(_549, _549, _500, (((llvm_cbe_in_2e_53 | _553)&1)));
  _556 = ((llvm_cbe_out_2e_20)&1);
  llvm_cbe_in_2e_54 = ((_556 & (((((((int32_t)(int16_t)_554)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_21 = ((llvm_cbe_in_2e_54) & 1);
  _557 = mult8(llvm_cbe_select_2e_phi_2e_9, _555, _500, llvm_cbe_in_2e_54);
  _558 = ((llvm_cbe_out_2e_20)&1);
  llvm_cbe_in_2e_55 = ((_558 & (((~((((((((int32_t)(int16_t)_554)) & 1) == 1u)&1))))&1)))&1);
  _559 = ((llvm_cbe_out_2e_21)&1);
  llvm_cbe_select_2e_phi_2e_10 = llvm_select_u16(llvm_cbe_in_2e_55, llvm_cbe_select_2e_phi_2e_9, _557);
  llvm_cbe_out_2e_22 = (((((llvm_cbe_in_2e_55 | _559)&1))) & 1);
  _560 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_554)), 1)));
  _561 = mult8(_555, _555, _500, (((llvm_cbe_in_2e_55 | _559)&1)));
  _562 = ((llvm_cbe_out_2e_22)&1);
  llvm_cbe_in_2e_56 = ((_562 & (((((((int32_t)(int16_t)_560)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_23 = ((llvm_cbe_in_2e_56) & 1);
  _563 = mult8(llvm_cbe_select_2e_phi_2e_10, _561, _500, llvm_cbe_in_2e_56);
  _564 = ((llvm_cbe_out_2e_22)&1);
  llvm_cbe_in_2e_57 = ((_564 & (((~((((((((int32_t)(int16_t)_560)) & 1) == 1u)&1))))&1)))&1);
  _565 = ((llvm_cbe_out_2e_23)&1);
  llvm_cbe_select_2e_phi_2e_11 = llvm_select_u16(llvm_cbe_in_2e_57, llvm_cbe_select_2e_phi_2e_10, _563);
  llvm_cbe_out_2e_24 = (((((llvm_cbe_in_2e_57 | _565)&1))) & 1);
  _566 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_560)), 1)));
  _567 = mult8(_561, _561, _500, (((llvm_cbe_in_2e_57 | _565)&1)));
  _568 = ((llvm_cbe_out_2e_24)&1);
  llvm_cbe_in_2e_58 = ((_568 & (((((((int32_t)(int16_t)_566)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_25 = ((llvm_cbe_in_2e_58) & 1);
  _569 = mult8(llvm_cbe_select_2e_phi_2e_11, _567, _500, llvm_cbe_in_2e_58);
  _570 = ((llvm_cbe_out_2e_24)&1);
  llvm_cbe_in_2e_59 = ((_570 & (((~((((((((int32_t)(int16_t)_566)) & 1) == 1u)&1))))&1)))&1);
  _571 = ((llvm_cbe_out_2e_25)&1);
  llvm_cbe_select_2e_phi_2e_12 = llvm_select_u16(llvm_cbe_in_2e_59, llvm_cbe_select_2e_phi_2e_11, _569);
  llvm_cbe_out_2e_26 = (((((llvm_cbe_in_2e_59 | _571)&1))) & 1);
  _572 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_566)), 1)));
  _573 = mult8(_567, _567, _500, (((llvm_cbe_in_2e_59 | _571)&1)));
  _574 = ((llvm_cbe_out_2e_26)&1);
  llvm_cbe_in_2e_60 = ((_574 & (((((((int32_t)(int16_t)_572)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_27 = ((llvm_cbe_in_2e_60) & 1);
  _575 = mult8(llvm_cbe_select_2e_phi_2e_12, _573, _500, llvm_cbe_in_2e_60);
  _576 = ((llvm_cbe_out_2e_26)&1);
  llvm_cbe_in_2e_61 = ((_576 & (((~((((((((int32_t)(int16_t)_572)) & 1) == 1u)&1))))&1)))&1);
  _577 = ((llvm_cbe_out_2e_27)&1);
  llvm_cbe_select_2e_phi_2e_13 = llvm_select_u16(llvm_cbe_in_2e_61, llvm_cbe_select_2e_phi_2e_12, _575);
  llvm_cbe_out_2e_28 = (((((llvm_cbe_in_2e_61 | _577)&1))) & 1);
  _578 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_572)), 1)));
  _579 = mult8(_573, _573, _500, (((llvm_cbe_in_2e_61 | _577)&1)));
  _580 = ((llvm_cbe_out_2e_28)&1);
  llvm_cbe_in_2e_62 = ((_580 & (((((((int32_t)(int16_t)_578)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_29 = ((llvm_cbe_in_2e_62) & 1);
  _581 = mult8(llvm_cbe_select_2e_phi_2e_13, _579, _500, llvm_cbe_in_2e_62);
  _582 = ((llvm_cbe_out_2e_28)&1);
  llvm_cbe_in_2e_63 = ((_582 & (((~((((((((int32_t)(int16_t)_578)) & 1) == 1u)&1))))&1)))&1);
  _583 = ((llvm_cbe_out_2e_29)&1);
  llvm_cbe_select_2e_phi_2e_14 = llvm_select_u16(llvm_cbe_in_2e_63, llvm_cbe_select_2e_phi_2e_13, _581);
  llvm_cbe_out_2e_30 = (((((llvm_cbe_in_2e_63 | _583)&1))) & 1);
  _584 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_578)), 1)));
  _585 = mult8(_579, _579, _500, (((llvm_cbe_in_2e_63 | _583)&1)));
  _586 = ((llvm_cbe_out_2e_30)&1);
  llvm_cbe_in_2e_64 = ((_586 & (((((((int32_t)(int16_t)_584)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_31 = ((llvm_cbe_in_2e_64) & 1);
  _587 = mult8(llvm_cbe_select_2e_phi_2e_14, _585, _500, llvm_cbe_in_2e_64);
  _588 = ((llvm_cbe_out_2e_30)&1);
  llvm_cbe_in_2e_65 = ((_588 & (((~((((((((int32_t)(int16_t)_584)) & 1) == 1u)&1))))&1)))&1);
  _589 = ((llvm_cbe_out_2e_31)&1);
  llvm_cbe_select_2e_phi_2e_15 = llvm_select_u16(llvm_cbe_in_2e_65, llvm_cbe_select_2e_phi_2e_14, _587);
  llvm_cbe_out_2e_32 = (((((llvm_cbe_in_2e_65 | _589)&1))) & 1);
  _590 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_584)), 1)));
  _591 = mult8(_585, _585, _500, (((llvm_cbe_in_2e_65 | _589)&1)));
  _592 = ((llvm_cbe_out_2e_32)&1);
  llvm_cbe_in_2e_66 = ((_592 & (((((((int32_t)(int16_t)_590)) & 1) == 1u)&1)))&1);
  llvm_cbe_out_2e_33 = ((llvm_cbe_in_2e_66) & 1);
  _593 = mult8(llvm_cbe_select_2e_phi_2e_15, _591, _500, llvm_cbe_in_2e_66);
  _594 = ((llvm_cbe_out_2e_32)&1);
  llvm_cbe_in_2e_67 = ((_594 & (((~((((((((int32_t)(int16_t)_590)) & 1) == 1u)&1))))&1)))&1);
  _595 = ((llvm_cbe_out_2e_33)&1);
  llvm_cbe_out_2e_34 = (((((llvm_cbe_in_2e_67 | _595)&1))) & 1);
  _596 = llvm_ashr_u32((((int32_t)(int16_t)_590)), 1);
  _597 = mult8(_591, _591, _500, (((llvm_cbe_in_2e_67 | _595)&1)));
  _598 = ((llvm_cbe_out_2e_)&1);
  llvm_cbe_in_2e_37 = ((_598 & ((((((int32_t)(int16_t)_498)) == 0u)&1)))&1);
  _599 = ((llvm_cbe_out_2e_34)&1);
  llvm_cbe_out_2e_4 = (((((llvm_cbe_in_2e_37 | _599)&1))) & 1);
  return (llvm_select_u16(llvm_cbe_in_2e_37, 0, (llvm_select_u16(llvm_cbe_in_2e_67, llvm_cbe_select_2e_phi_2e_15, _593))));
}


int16_t mult8(int16_t _600, int16_t _601, int16_t _602, bool llvm_cbe__2e_cond) {
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint32_t _603;
  uint16_t llvm_cbe__2e_14;
  uint16_t _604;
  uint16_t llvm_cbe__2e_1;
  uint16_t _605;
  uint16_t llvm_cbe__2e_14_2e_1;
  uint16_t _606;
  uint16_t llvm_cbe__2e_1_2e_1;
  uint16_t _607;
  uint16_t llvm_cbe__2e_14_2e_2;
  uint16_t _608;
  uint16_t llvm_cbe__2e_1_2e_2;
  uint16_t _609;
  uint16_t llvm_cbe__2e_14_2e_3;
  uint16_t _610;
  uint16_t llvm_cbe__2e_1_2e_3;
  uint16_t _611;
  uint16_t llvm_cbe__2e_14_2e_4;
  uint16_t _612;
  uint16_t llvm_cbe__2e_1_2e_4;
  uint16_t _613;
  uint16_t llvm_cbe__2e_14_2e_5;
  uint16_t _614;
  uint16_t llvm_cbe__2e_1_2e_5;
  uint16_t _615;
  uint16_t llvm_cbe__2e_14_2e_6;
  uint16_t _616;
  uint16_t llvm_cbe__2e_1_2e_6;
  uint16_t _617;
  uint16_t llvm_cbe__2e_14_2e_7;
  uint16_t _618;
  uint16_t llvm_cbe__2e_1_2e_7;
  uint16_t _619;
  uint16_t llvm_cbe__2e_14_2e_8;
  uint16_t _620;
  uint16_t llvm_cbe__2e_1_2e_8;
  uint16_t _621;
  uint16_t llvm_cbe__2e_14_2e_9;
  uint16_t _622;
  uint16_t llvm_cbe__2e_1_2e_9;
  uint16_t _623;
  uint16_t llvm_cbe__2e_14_2e_10;
  uint16_t _624;
  uint16_t llvm_cbe__2e_1_2e_10;
  uint16_t _625;
  uint16_t llvm_cbe__2e_14_2e_11;
  uint16_t _626;
  uint16_t llvm_cbe__2e_1_2e_11;
  uint16_t _627;
  uint16_t llvm_cbe__2e_14_2e_12;
  uint16_t _628;
  uint16_t llvm_cbe__2e_1_2e_12;
  uint16_t _629;
  uint16_t llvm_cbe__2e_14_2e_13;
  uint16_t _630;
  uint16_t llvm_cbe__2e_1_2e_13;
  uint16_t _631;
  uint16_t llvm_cbe__2e_14_2e_14;
  uint16_t _632;
  uint16_t llvm_cbe__2e_1_2e_14;
  uint16_t _633;
  uint16_t _634;
  uint16_t _635;
  uint32_t _636;

  llvm_cbe_out_2e_ = ((llvm_cbe__2e_cond) & 1);
  _603 = ((int32_t)(int16_t)_600);
  llvm_cbe__2e_14 = llvm_select_u16((((((((int32_t)(int16_t)_601)) & 1) != 0u)&1)), _600, 0);
  _604 = ((uint16_t)((((int32_t)(int16_t)_600)) << 1));
  llvm_cbe__2e_1 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_604))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_604)) ^ (((int32_t)(int16_t)_602))))), _604);
  _605 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_601)), 1)));
  llvm_cbe__2e_14_2e_1 = llvm_select_u16((((((((int32_t)(int16_t)_605)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1))))), llvm_cbe__2e_14);
  _606 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1)) << 1));
  llvm_cbe__2e_1_2e_1 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_606))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_606)) ^ (((int32_t)(int16_t)_602))))), _606);
  _607 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_605)), 1)));
  llvm_cbe__2e_14_2e_2 = llvm_select_u16((((((((int32_t)(int16_t)_607)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_1)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_1))))), llvm_cbe__2e_14_2e_1);
  _608 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_1)) << 1));
  llvm_cbe__2e_1_2e_2 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_608))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_608)) ^ (((int32_t)(int16_t)_602))))), _608);
  _609 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_607)), 1)));
  llvm_cbe__2e_14_2e_3 = llvm_select_u16((((((((int32_t)(int16_t)_609)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_2)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_2))))), llvm_cbe__2e_14_2e_2);
  _610 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_2)) << 1));
  llvm_cbe__2e_1_2e_3 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_610))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_610)) ^ (((int32_t)(int16_t)_602))))), _610);
  _611 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_609)), 1)));
  llvm_cbe__2e_14_2e_4 = llvm_select_u16((((((((int32_t)(int16_t)_611)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_3)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_3))))), llvm_cbe__2e_14_2e_3);
  _612 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_3)) << 1));
  llvm_cbe__2e_1_2e_4 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_612))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_612)) ^ (((int32_t)(int16_t)_602))))), _612);
  _613 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_611)), 1)));
  llvm_cbe__2e_14_2e_5 = llvm_select_u16((((((((int32_t)(int16_t)_613)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_4)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_4))))), llvm_cbe__2e_14_2e_4);
  _614 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_4)) << 1));
  llvm_cbe__2e_1_2e_5 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_614))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_614)) ^ (((int32_t)(int16_t)_602))))), _614);
  _615 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_613)), 1)));
  llvm_cbe__2e_14_2e_6 = llvm_select_u16((((((((int32_t)(int16_t)_615)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_5)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_5))))), llvm_cbe__2e_14_2e_5);
  _616 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_5)) << 1));
  llvm_cbe__2e_1_2e_6 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_616))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_616)) ^ (((int32_t)(int16_t)_602))))), _616);
  _617 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_615)), 1)));
  llvm_cbe__2e_14_2e_7 = llvm_select_u16((((((((int32_t)(int16_t)_617)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_6)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_6))))), llvm_cbe__2e_14_2e_6);
  _618 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_6)) << 1));
  llvm_cbe__2e_1_2e_7 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_618))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_618)) ^ (((int32_t)(int16_t)_602))))), _618);
  _619 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_617)), 1)));
  llvm_cbe__2e_14_2e_8 = llvm_select_u16((((((((int32_t)(int16_t)_619)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_7)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_7))))), llvm_cbe__2e_14_2e_7);
  _620 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_7)) << 1));
  llvm_cbe__2e_1_2e_8 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_620))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_620)) ^ (((int32_t)(int16_t)_602))))), _620);
  _621 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_619)), 1)));
  llvm_cbe__2e_14_2e_9 = llvm_select_u16((((((((int32_t)(int16_t)_621)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_8)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_8))))), llvm_cbe__2e_14_2e_8);
  _622 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_8)) << 1));
  llvm_cbe__2e_1_2e_9 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_622))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_622)) ^ (((int32_t)(int16_t)_602))))), _622);
  _623 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_621)), 1)));
  llvm_cbe__2e_14_2e_10 = llvm_select_u16((((((((int32_t)(int16_t)_623)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_9)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_9))))), llvm_cbe__2e_14_2e_9);
  _624 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_9)) << 1));
  llvm_cbe__2e_1_2e_10 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_624))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_624)) ^ (((int32_t)(int16_t)_602))))), _624);
  _625 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_623)), 1)));
  llvm_cbe__2e_14_2e_11 = llvm_select_u16((((((((int32_t)(int16_t)_625)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_10)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_10))))), llvm_cbe__2e_14_2e_10);
  _626 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_10)) << 1));
  llvm_cbe__2e_1_2e_11 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_626))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_626)) ^ (((int32_t)(int16_t)_602))))), _626);
  _627 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_625)), 1)));
  llvm_cbe__2e_14_2e_12 = llvm_select_u16((((((((int32_t)(int16_t)_627)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_11)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_11))))), llvm_cbe__2e_14_2e_11);
  _628 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_11)) << 1));
  llvm_cbe__2e_1_2e_12 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_628))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_628)) ^ (((int32_t)(int16_t)_602))))), _628);
  _629 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_627)), 1)));
  llvm_cbe__2e_14_2e_13 = llvm_select_u16((((((((int32_t)(int16_t)_629)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_12)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_12))))), llvm_cbe__2e_14_2e_12);
  _630 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_12)) << 1));
  llvm_cbe__2e_1_2e_13 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_630))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_630)) ^ (((int32_t)(int16_t)_602))))), _630);
  _631 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_629)), 1)));
  llvm_cbe__2e_14_2e_14 = llvm_select_u16((((((((int32_t)(int16_t)_631)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_13)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_13))))), llvm_cbe__2e_14_2e_13);
  _632 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_13)) << 1));
  llvm_cbe__2e_1_2e_14 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_632))) >= ((int32_t)256u))&1)), (((uint16_t)((((int32_t)(int16_t)_632)) ^ (((int32_t)(int16_t)_602))))), _632);
  _633 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_631)), 1)));
  _634 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_1_2e_14)) << 1));
  _635 = ((uint16_t)((((int32_t)(int16_t)_634)) ^ (((int32_t)(int16_t)_602))));
  _636 = llvm_ashr_u32((((int32_t)(int16_t)_633)), 1);
  return (llvm_select_u16((((((((int32_t)(int16_t)_633)) & 1) != 0u)&1)), (((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_14_2e_14)) ^ (((int32_t)(int16_t)llvm_cbe__2e_1_2e_14))))), llvm_cbe__2e_14_2e_14));
}


void deloki(struct l_struct_struct_OC_loki_ctx* _637, uint64_t llvm_cbe_N, uint8_t* _638, uint64_t llvm_cbe_N1) {
  uint32_t _639;
  uint32_t _640;
  uint32_t _641;
  uint32_t _642;
  uint32_t _643;
  uint32_t _644;
  uint32_t _645;
  uint32_t _646;
  uint32_t _647;
  uint32_t _648;
  uint32_t _649;
  uint32_t _650;
  uint32_t _651;
  uint32_t _652;
  uint32_t _653;
  uint32_t _654;
  uint32_t _655;
  uint32_t _656;
  uint32_t _657;
  uint32_t _658;
  uint32_t _659;
  uint32_t _660;
  uint32_t _661;
  uint32_t _662;
  uint32_t _663;
  uint32_t _664;
  uint32_t _665;
  uint32_t _666;
  uint32_t _667;
  uint32_t _668;
  uint32_t _669;
  uint32_t _670;
  uint32_t _671;
  uint32_t _672;
  uint32_t _673;
  uint32_t _674;
  uint32_t _675;
  uint32_t _676;
  uint32_t _677;
  uint32_t _678;
  uint32_t _679;
  uint32_t _680;
  uint32_t _681;
  uint32_t _682;
  uint32_t _683;
  uint32_t _684;
  uint32_t _685;
  uint32_t _686;
  uint32_t _687;

  _639 = *((&(*(((uint32_t*)_638)))));
  _640 = *((&(((uint32_t*)_638))[((int64_t)1)]));
  _641 = *((&(*((&_637->field0))).array[((int64_t)15)]));
  _642 = f(_640, _641, 1);
  _643 = _639 ^ _642;
  _644 = *((&(*((&_637->field0))).array[((int64_t)14)]));
  _645 = f(_643, _644, 1);
  _646 = _640 ^ _645;
  _647 = *((&(*((&_637->field0))).array[((int64_t)13)]));
  _648 = f(_646, _647, 1);
  _649 = _643 ^ _648;
  _650 = *((&(*((&_637->field0))).array[((int64_t)12)]));
  _651 = f(_649, _650, 1);
  _652 = _646 ^ _651;
  _653 = *((&(*((&_637->field0))).array[((int64_t)11)]));
  _654 = f(_652, _653, 1);
  _655 = _649 ^ _654;
  _656 = *((&(*((&_637->field0))).array[((int64_t)10)]));
  _657 = f(_655, _656, 1);
  _658 = _652 ^ _657;
  _659 = *((&(*((&_637->field0))).array[((int64_t)9)]));
  _660 = f(_658, _659, 1);
  _661 = _655 ^ _660;
  _662 = *((&(*((&_637->field0))).array[((int64_t)8)]));
  _663 = f(_661, _662, 1);
  _664 = _658 ^ _663;
  _665 = *((&(*((&_637->field0))).array[((int64_t)7)]));
  _666 = f(_664, _665, 1);
  _667 = _661 ^ _666;
  _668 = *((&(*((&_637->field0))).array[((int64_t)6)]));
  _669 = f(_667, _668, 1);
  _670 = _664 ^ _669;
  _671 = *((&(*((&_637->field0))).array[((int64_t)5)]));
  _672 = f(_670, _671, 1);
  _673 = _667 ^ _672;
  _674 = *((&(*((&_637->field0))).array[((int64_t)4)]));
  _675 = f(_673, _674, 1);
  _676 = _670 ^ _675;
  _677 = *((&(*((&_637->field0))).array[((int64_t)3)]));
  _678 = f(_676, _677, 1);
  _679 = _673 ^ _678;
  _680 = *((&(*((&_637->field0))).array[((int64_t)2)]));
  _681 = f(_679, _680, 1);
  _682 = _676 ^ _681;
  _683 = *((&(*((&_637->field0))).array[((int64_t)1)]));
  _684 = f(_682, _683, 1);
  _685 = _679 ^ _684;
  _686 = *((&(*((&_637->field0))).array[((int64_t)0)]));
  _687 = f(_685, _686, 1);
  *(((uint32_t*)_638)) = (_682 ^ _687);
  *((&(((uint32_t*)_638))[((int64_t)1)])) = _685;
}

