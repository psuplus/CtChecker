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
struct l_array_24_uint8_t;
struct l_array_4_uint8_t;
struct l_array_32_uint8_t;
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc;

/* Function definitions */
typedef uint32_t l_fptr_1(void);

typedef void l_fptr_2(uint8_t*, uint8_t*, uint64_t, bool);

typedef uint32_t l_fptr_6(uint32_t, uint32_t, bool);

typedef uint16_t l_fptr_7(uint32_t, bool);

typedef uint16_t l_fptr_9(uint16_t, uint16_t, uint16_t, bool);

typedef uint32_t l_fptr_3(uint8_t*, ...);

typedef void l_fptr_8(uint32_t*, uint64_t, uint32_t*, uint64_t, uint8_t*, uint64_t, bool);

typedef uint32_t l_fptr_10(uint32_t);

typedef void l_fptr_4(uint8_t*, uint64_t, struct l_struct_struct_OC_loki_ctx*, uint64_t);

typedef uint8_t* l_fptr_11(uint8_t*, uint8_t*, uint64_t);

typedef void l_fptr_5(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t);


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
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
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
uint32_t printf(uint8_t*, ...) __ATTRIBUTELIST__((nothrow));
void setlokikey(uint8_t*, uint64_t, struct l_struct_struct_OC_loki_ctx*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
void enloki(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t f(uint32_t, uint32_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
int16_t s(uint32_t, bool) __ATTRIBUTELIST__((noinline, nothrow, pure));
void perm32(uint32_t*, uint64_t, uint32_t*, uint64_t, uint8_t*, uint64_t, bool) __ATTRIBUTELIST__((noinline, nothrow));
int16_t exp8(int16_t, int16_t, int16_t, bool) __ATTRIBUTELIST__((noinline, nothrow, const));
int16_t mult8(int16_t, int16_t, int16_t, bool) __ATTRIBUTELIST__((noinline, nothrow, const));
void deloki(struct l_struct_struct_OC_loki_ctx*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t putchar(uint32_t) __ATTRIBUTELIST__((nothrow));
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);


/* Global Variable Definitions and Initialization */
static const __MSALIGN__(16) struct l_array_24_uint8_t __const_OC_main_OC_data __attribute__((aligned(16))) = { "\xEA\x0EuZ\\.\x82\x10$*\x08\xE7\a\x8F\x7F\x89\x38^\xB0\x94#UQ\x82" };
static const struct l_array_4_uint8_t _OC_str = { "%d " };
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
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint16_t llvm_shl_u16(uint16_t a, uint16_t b) {
  uint16_t r = a << b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint16_t llvm_and_u16(uint16_t a, uint16_t b) {
  uint16_t r = a & b;
  return r;
}
static __forceinline uint16_t llvm_xor_u16(uint16_t a, uint16_t b) {
  uint16_t r = a ^ b;
  return r;
}


/* Function Bodies */

int main(void) {
  uint64_t _1;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_24_uint8_t _2 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_struct_OC_loki_ctx _3;    /* Address-exposed local */
  uint8_t* _4;
  uint8_t* _5;
  uint8_t _6;
  uint32_t _7;
  uint8_t _8;
  uint32_t _9;
  uint8_t _10;
  uint32_t _11;
  uint8_t _12;
  uint32_t _13;
  uint8_t _14;
  uint32_t _15;
  uint8_t _16;
  uint32_t _17;
  uint8_t _18;
  uint32_t _19;
  uint8_t _20;
  uint32_t _21;
  uint8_t _22;
  uint32_t _23;
  uint8_t _24;
  uint32_t _25;
  uint8_t _26;
  uint32_t _27;
  uint8_t _28;
  uint32_t _29;
  uint8_t _30;
  uint32_t _31;
  uint8_t _32;
  uint32_t _33;
  uint8_t _34;
  uint32_t _35;
  uint8_t _36;
  uint32_t _37;
  uint8_t _38;
  uint32_t _39;
  uint8_t _40;
  uint32_t _41;
  uint8_t _42;
  uint32_t _43;
  uint8_t _44;
  uint32_t _45;
  uint8_t _46;
  uint32_t _47;
  uint8_t _48;
  uint32_t _49;
  uint8_t _50;
  uint32_t _51;
  uint8_t _52;
  uint32_t _53;
  uint32_t llvm_cbe_putchar;

  _1 = INT64_C(-1743548874091060479);
  _4 = (&_2.array[((int64_t)0)]);
  _5 = memcpy(_4, ((&__const_OC_main_OC_data.array[((int64_t)0)])), 24);
  setlokikey((((uint8_t*)(&_1))), /*UNDEF*/0, (&_3), /*UNDEF*/0);
  enloki((&_3), /*UNDEF*/0, _4, /*UNDEF*/0);
  _6 = *((&_2.array[((int64_t)0)]));
  _7 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_6)));
  _8 = *((&_2.array[((int64_t)1)]));
  _9 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_8)));
  _10 = *((&_2.array[((int64_t)2)]));
  _11 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_10)));
  _12 = *((&_2.array[((int64_t)3)]));
  _13 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_12)));
  _14 = *((&_2.array[((int64_t)4)]));
  _15 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_14)));
  _16 = *((&_2.array[((int64_t)5)]));
  _17 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_16)));
  _18 = *((&_2.array[((int64_t)6)]));
  _19 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_18)));
  _20 = *((&_2.array[((int64_t)7)]));
  _21 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_20)));
  _22 = *((&_2.array[((int64_t)8)]));
  _23 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_22)));
  _24 = *((&_2.array[((int64_t)9)]));
  _25 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_24)));
  _26 = *((&_2.array[((int64_t)10)]));
  _27 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_26)));
  _28 = *((&_2.array[((int64_t)11)]));
  _29 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_28)));
  _30 = *((&_2.array[((int64_t)12)]));
  _31 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_30)));
  _32 = *((&_2.array[((int64_t)13)]));
  _33 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_32)));
  _34 = *((&_2.array[((int64_t)14)]));
  _35 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_34)));
  _36 = *((&_2.array[((int64_t)15)]));
  _37 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_36)));
  _38 = *((&_2.array[((int64_t)16)]));
  _39 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_38)));
  _40 = *((&_2.array[((int64_t)17)]));
  _41 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_40)));
  _42 = *((&_2.array[((int64_t)18)]));
  _43 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_42)));
  _44 = *((&_2.array[((int64_t)19)]));
  _45 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_44)));
  _46 = *((&_2.array[((int64_t)20)]));
  _47 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_46)));
  _48 = *((&_2.array[((int64_t)21)]));
  _49 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_48)));
  _50 = *((&_2.array[((int64_t)22)]));
  _51 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_50)));
  _52 = *((&_2.array[((int64_t)23)]));
  _53 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_52)));
  llvm_cbe_putchar = putchar(10);
  return 0;
}


void setlokikey(uint8_t* _54, uint64_t llvm_cbe_N, struct l_struct_struct_OC_loki_ctx* _55, uint64_t llvm_cbe_N1) {
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

  _56 = *(((uint32_t*)_54));
  _57 = *(((uint32_t*)((&_54[((int64_t)4)]))));
  *((&_55->field0.array[((int64_t)0)])) = _56;
  _58 = (_56 << 12) | (llvm_ashr_u32(_56, 20));
  *((&_55->field0.array[((int64_t)1)])) = _58;
  _59 = (_58 << 13) | (llvm_ashr_u32(_58, 19));
  *((&_55->field0.array[((int64_t)2)])) = _57;
  _60 = (_57 << 12) | (llvm_ashr_u32(_57, 20));
  *((&_55->field0.array[((int64_t)3)])) = _60;
  _61 = (_60 << 13) | (llvm_ashr_u32(_60, 19));
  *((&_55->field0.array[((int64_t)4)])) = _59;
  _62 = (_59 << 12) | (llvm_ashr_u32(_59, 20));
  *((&_55->field0.array[((int64_t)5)])) = _62;
  _63 = (_62 << 13) | (llvm_ashr_u32(_62, 19));
  *((&_55->field0.array[((int64_t)6)])) = _61;
  _64 = (_61 << 12) | (llvm_ashr_u32(_61, 20));
  *((&_55->field0.array[((int64_t)7)])) = _64;
  _65 = (_64 << 13) | (llvm_ashr_u32(_64, 19));
  *((&_55->field0.array[((int64_t)8)])) = _63;
  _66 = (_63 << 12) | (llvm_ashr_u32(_63, 20));
  *((&_55->field0.array[((int64_t)9)])) = _66;
  _67 = (_66 << 13) | (llvm_ashr_u32(_66, 19));
  *((&_55->field0.array[((int64_t)10)])) = _65;
  _68 = (_65 << 12) | (llvm_ashr_u32(_65, 20));
  *((&_55->field0.array[((int64_t)11)])) = _68;
  _69 = (_68 << 13) | (llvm_ashr_u32(_68, 19));
  *((&_55->field0.array[((int64_t)12)])) = _67;
  *((&_55->field0.array[((int64_t)13)])) = ((_67 << 12) | (llvm_ashr_u32(_67, 20)));
  *((&_55->field0.array[((int64_t)14)])) = _69;
  *((&_55->field0.array[((int64_t)15)])) = ((_69 << 12) | (llvm_ashr_u32(_69, 20)));
}


void enloki(struct l_struct_struct_OC_loki_ctx* _70, uint64_t llvm_cbe_N, uint8_t* _71, uint64_t llvm_cbe_N1) {
  uint32_t* _72;
  uint32_t _73;
  uint32_t* _74;
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
  uint32_t _91;
  uint32_t _92;
  uint32_t _93;
  uint32_t _94;
  uint32_t _95;
  uint32_t _96;
  uint32_t _97;
  uint32_t _98;
  uint32_t _99;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;
  uint32_t _105;
  uint32_t _106;
  uint32_t _107;
  uint32_t _108;
  uint32_t _109;
  uint32_t _110;
  uint32_t _111;
  uint32_t _112;
  uint32_t _113;
  uint32_t _114;
  uint32_t _115;
  uint32_t _116;
  uint32_t _117;
  uint32_t _118;
  uint32_t _119;
  uint32_t _120;
  uint32_t _121;
  uint32_t _122;

  _72 = ((uint32_t*)_71);
  _73 = *_72;
  _74 = ((uint32_t*)((&_71[((int64_t)4)])));
  _75 = *_74;
  _76 = *((&_70->field0.array[((int64_t)0)]));
  _77 = f(_75, _76, 1);
  _78 = _77 ^ _73;
  _79 = *((&_70->field0.array[((int64_t)1)]));
  _80 = f(_78, _79, 1);
  _81 = _80 ^ _75;
  _82 = *((&_70->field0.array[((int64_t)2)]));
  _83 = f(_81, _82, 1);
  _84 = _83 ^ _78;
  _85 = *((&_70->field0.array[((int64_t)3)]));
  _86 = f(_84, _85, 1);
  _87 = _86 ^ _81;
  _88 = *((&_70->field0.array[((int64_t)4)]));
  _89 = f(_87, _88, 1);
  _90 = _89 ^ _84;
  _91 = *((&_70->field0.array[((int64_t)5)]));
  _92 = f(_90, _91, 1);
  _93 = _92 ^ _87;
  _94 = *((&_70->field0.array[((int64_t)6)]));
  _95 = f(_93, _94, 1);
  _96 = _95 ^ _90;
  _97 = *((&_70->field0.array[((int64_t)7)]));
  _98 = f(_96, _97, 1);
  _99 = _98 ^ _93;
  _100 = *((&_70->field0.array[((int64_t)8)]));
  _101 = f(_99, _100, 1);
  _102 = _101 ^ _96;
  _103 = *((&_70->field0.array[((int64_t)9)]));
  _104 = f(_102, _103, 1);
  _105 = _104 ^ _99;
  _106 = *((&_70->field0.array[((int64_t)10)]));
  _107 = f(_105, _106, 1);
  _108 = _107 ^ _102;
  _109 = *((&_70->field0.array[((int64_t)11)]));
  _110 = f(_108, _109, 1);
  _111 = _110 ^ _105;
  _112 = *((&_70->field0.array[((int64_t)12)]));
  _113 = f(_111, _112, 1);
  _114 = _113 ^ _108;
  _115 = *((&_70->field0.array[((int64_t)13)]));
  _116 = f(_114, _115, 1);
  _117 = _116 ^ _111;
  _118 = *((&_70->field0.array[((int64_t)14)]));
  _119 = f(_117, _118, 1);
  _120 = _119 ^ _114;
  _121 = *((&_70->field0.array[((int64_t)15)]));
  _122 = f(_120, _121, 1);
  *_72 = (_122 ^ _117);
  *_74 = _120;
}


uint32_t f(uint32_t _123, uint32_t _124, bool llvm_cbe__2e_cond) {
  uint32_t _125;    /* Address-exposed local */
  uint32_t _126;    /* Address-exposed local */
  uint32_t _127;
  uint16_t _128;
  uint16_t _129;
  uint16_t _130;
  uint16_t _131;
  uint32_t _132;
  uint32_t _133;

  _127 = _124 ^ _123;
  _128 = s((_127 & 4095), llvm_cbe__2e_cond);
  _129 = s(((llvm_lshr_u32(_127, 8)) & 4095), llvm_cbe__2e_cond);
  _130 = s(((llvm_lshr_u32(_127, 16)) & 4095), llvm_cbe__2e_cond);
  _131 = s((((llvm_ashr_u32(_127, 24)) | (_127 << 8)) & 4095), llvm_cbe__2e_cond);
  _132 = _125;
  _125 = (llvm_select_u32(llvm_cbe__2e_cond, (((((((int32_t)(int16_t)_129)) << 8) | (((int32_t)(int16_t)_128))) | ((((uint32_t)(uint16_t)_130)) << 16)) | ((((uint32_t)(uint16_t)_131)) << 24)), _132));
  perm32((&_125), /*UNDEF*/0, (&_126), /*UNDEF*/0, ((&P.array[((int64_t)0)])), 32, llvm_cbe__2e_cond);
  _133 = _126;
  return _133;
}


int16_t s(uint32_t _134, bool llvm_cbe__2e_cond) {
  uint32_t _135;
  uint64_t _136;
  uint16_t _137;
  uint16_t _138;
  uint16_t _139;

  _135 = ((llvm_lshr_u32(_134, 8)) & 12) | (_134 & 3);
  _136 = ((uint64_t)(uint32_t)_135);
  _137 = *((&sfn.array[((int64_t)_136)].field1));
  _138 = *((&sfn.array[((int64_t)_136)].field0));
  _139 = exp8((llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(_135, 17)) ^ 255), (llvm_lshr_u32(_134, 2)))))), 255)), _137, _138, llvm_cbe__2e_cond);
  return _139;
}


void perm32(uint32_t* _140, uint64_t llvm_cbe_N, uint32_t* _141, uint64_t llvm_cbe_N1, uint8_t* _142, uint64_t llvm_cbe_N2, bool llvm_cbe__2e_cond) {
  __MSALIGN__(8) uint8_t llvm_cbe_shadow_2e_sroa_2e_0 __attribute__((aligned(8)));    /* Address-exposed local */
  uint32_t _143;
  uint32_t llvm_cbe_select_2e_val_2e_;
  uint8_t _144;
  uint32_t _145;
  uint32_t llvm_cbe_select_2e_val_2e_3;
  bool llvm_cbe_safe_2e_;
  uint8_t _146;
  uint32_t _147;
  uint32_t llvm_cbe_select_2e_val_2e_4;
  uint8_t _148;
  uint32_t _149;
  uint32_t llvm_cbe_select_2e_val_2e_7;
  uint8_t _150;
  uint32_t _151;
  uint32_t llvm_cbe_select_2e_val_2e_10;
  uint8_t _152;
  uint32_t _153;
  uint32_t llvm_cbe_select_2e_val_2e_13;
  uint8_t _154;
  uint32_t _155;
  uint32_t llvm_cbe_select_2e_val_2e_16;
  uint8_t _156;
  uint32_t _157;
  uint32_t llvm_cbe_select_2e_val_2e_19;
  uint8_t _158;
  uint32_t _159;
  uint32_t llvm_cbe_select_2e_val_2e_22;
  uint8_t _160;
  uint32_t _161;
  uint32_t llvm_cbe_select_2e_val_2e_25;
  uint8_t _162;
  uint32_t _163;
  uint32_t llvm_cbe_select_2e_val_2e_28;
  uint8_t _164;
  uint32_t _165;
  uint32_t llvm_cbe_select_2e_val_2e_31;
  uint8_t _166;
  uint32_t _167;
  uint32_t llvm_cbe_select_2e_val_2e_34;
  uint8_t _168;
  uint32_t _169;
  uint32_t llvm_cbe_select_2e_val_2e_37;
  uint8_t _170;
  uint32_t _171;
  uint32_t llvm_cbe_select_2e_val_2e_40;
  uint8_t _172;
  uint32_t _173;
  uint32_t llvm_cbe_select_2e_val_2e_43;
  uint8_t _174;
  uint32_t _175;
  uint32_t llvm_cbe_select_2e_val_2e_46;
  uint8_t _176;
  uint32_t _177;
  uint32_t llvm_cbe_select_2e_val_2e_49;
  uint8_t _178;
  uint32_t _179;
  uint32_t llvm_cbe_select_2e_val_2e_52;
  uint8_t _180;
  uint32_t _181;
  uint32_t llvm_cbe_select_2e_val_2e_55;
  uint8_t _182;
  uint32_t _183;
  uint32_t llvm_cbe_select_2e_val_2e_58;
  uint8_t _184;
  uint32_t _185;
  uint32_t llvm_cbe_select_2e_val_2e_61;
  uint8_t _186;
  uint32_t _187;
  uint32_t llvm_cbe_select_2e_val_2e_64;
  uint8_t _188;
  uint32_t _189;
  uint32_t llvm_cbe_select_2e_val_2e_67;
  uint8_t _190;
  uint32_t _191;
  uint32_t llvm_cbe_select_2e_val_2e_70;
  uint8_t _192;
  uint32_t _193;
  uint32_t llvm_cbe_select_2e_val_2e_73;
  uint8_t _194;
  uint32_t _195;
  uint32_t llvm_cbe_select_2e_val_2e_76;
  uint8_t _196;
  uint32_t _197;
  uint32_t llvm_cbe_select_2e_val_2e_79;
  uint8_t _198;
  uint32_t _199;
  uint32_t llvm_cbe_select_2e_val_2e_82;
  uint8_t _200;
  uint32_t _201;
  uint32_t llvm_cbe_select_2e_val_2e_85;
  uint8_t _202;
  uint32_t _203;
  uint32_t llvm_cbe_select_2e_val_2e_88;
  uint8_t _204;
  uint32_t _205;
  uint32_t llvm_cbe_select_2e_val_2e_91;
  uint8_t _206;
  uint32_t _207;

  _143 = *_141;
  llvm_cbe_select_2e_val_2e_ = llvm_select_u32(llvm_cbe__2e_cond, 0, _143);
  *_141 = llvm_cbe_select_2e_val_2e_;
  _144 = *_142;
  _145 = *_140;
  llvm_cbe_select_2e_val_2e_3 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_144))) & _145) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_ | 2147483648u), llvm_cbe_select_2e_val_2e_);
  *_141 = llvm_cbe_select_2e_val_2e_3;
  llvm_cbe_safe_2e_ = (((((((int64_t)llvm_cbe_N2) > ((int64_t)UINT64_C(1)))&1)) | llvm_cbe__2e_cond)&1);
  _146 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)1)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _147 = *_140;
  llvm_cbe_select_2e_val_2e_4 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_146))) & _147) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_3 | -1073741824), llvm_cbe_select_2e_val_2e_3);
  *_141 = llvm_cbe_select_2e_val_2e_4;
  _148 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)2)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _149 = *_140;
  llvm_cbe_select_2e_val_2e_7 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_148))) & _149) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_4 | -536870912), llvm_cbe_select_2e_val_2e_4);
  *_141 = llvm_cbe_select_2e_val_2e_7;
  _150 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)3)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _151 = *_140;
  llvm_cbe_select_2e_val_2e_10 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_150))) & _151) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_7 | -268435456), llvm_cbe_select_2e_val_2e_7);
  *_141 = llvm_cbe_select_2e_val_2e_10;
  _152 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)4)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _153 = *_140;
  llvm_cbe_select_2e_val_2e_13 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_152))) & _153) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_10 | -134217728), llvm_cbe_select_2e_val_2e_10);
  *_141 = llvm_cbe_select_2e_val_2e_13;
  _154 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)5)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _155 = *_140;
  llvm_cbe_select_2e_val_2e_16 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_154))) & _155) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_13 | -67108864), llvm_cbe_select_2e_val_2e_13);
  *_141 = llvm_cbe_select_2e_val_2e_16;
  _156 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)6)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _157 = *_140;
  llvm_cbe_select_2e_val_2e_19 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_156))) & _157) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_16 | -33554432), llvm_cbe_select_2e_val_2e_16);
  *_141 = llvm_cbe_select_2e_val_2e_19;
  _158 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)7)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _159 = *_140;
  llvm_cbe_select_2e_val_2e_22 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_158))) & _159) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_19 | -16777216), llvm_cbe_select_2e_val_2e_19);
  *_141 = llvm_cbe_select_2e_val_2e_22;
  _160 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)8)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _161 = *_140;
  llvm_cbe_select_2e_val_2e_25 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_160))) & _161) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_22 | -8388608), llvm_cbe_select_2e_val_2e_22);
  *_141 = llvm_cbe_select_2e_val_2e_25;
  _162 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)9)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _163 = *_140;
  llvm_cbe_select_2e_val_2e_28 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_162))) & _163) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_25 | -4194304), llvm_cbe_select_2e_val_2e_25);
  *_141 = llvm_cbe_select_2e_val_2e_28;
  _164 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)10)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _165 = *_140;
  llvm_cbe_select_2e_val_2e_31 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_164))) & _165) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_28 | -2097152), llvm_cbe_select_2e_val_2e_28);
  *_141 = llvm_cbe_select_2e_val_2e_31;
  _166 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)11)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _167 = *_140;
  llvm_cbe_select_2e_val_2e_34 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_166))) & _167) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_31 | -1048576), llvm_cbe_select_2e_val_2e_31);
  *_141 = llvm_cbe_select_2e_val_2e_34;
  _168 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)12)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _169 = *_140;
  llvm_cbe_select_2e_val_2e_37 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_168))) & _169) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_34 | -524288), llvm_cbe_select_2e_val_2e_34);
  *_141 = llvm_cbe_select_2e_val_2e_37;
  _170 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)13)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _171 = *_140;
  llvm_cbe_select_2e_val_2e_40 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_170))) & _171) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_37 | -262144), llvm_cbe_select_2e_val_2e_37);
  *_141 = llvm_cbe_select_2e_val_2e_40;
  _172 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)14)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _173 = *_140;
  llvm_cbe_select_2e_val_2e_43 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_172))) & _173) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_40 | -131072), llvm_cbe_select_2e_val_2e_40);
  *_141 = llvm_cbe_select_2e_val_2e_43;
  _174 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)15)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _175 = *_140;
  llvm_cbe_select_2e_val_2e_46 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_174))) & _175) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_43 | -65536), llvm_cbe_select_2e_val_2e_43);
  *_141 = llvm_cbe_select_2e_val_2e_46;
  _176 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)16)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _177 = *_140;
  llvm_cbe_select_2e_val_2e_49 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_176))) & _177) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_46 | -32768), llvm_cbe_select_2e_val_2e_46);
  *_141 = llvm_cbe_select_2e_val_2e_49;
  _178 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)17)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _179 = *_140;
  llvm_cbe_select_2e_val_2e_52 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_178))) & _179) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_49 | -16384), llvm_cbe_select_2e_val_2e_49);
  *_141 = llvm_cbe_select_2e_val_2e_52;
  _180 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)18)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _181 = *_140;
  llvm_cbe_select_2e_val_2e_55 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_180))) & _181) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_52 | -8192), llvm_cbe_select_2e_val_2e_52);
  *_141 = llvm_cbe_select_2e_val_2e_55;
  _182 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)19)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _183 = *_140;
  llvm_cbe_select_2e_val_2e_58 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_182))) & _183) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_55 | -4096), llvm_cbe_select_2e_val_2e_55);
  *_141 = llvm_cbe_select_2e_val_2e_58;
  _184 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)20)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _185 = *_140;
  llvm_cbe_select_2e_val_2e_61 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_184))) & _185) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_58 | -2048), llvm_cbe_select_2e_val_2e_58);
  *_141 = llvm_cbe_select_2e_val_2e_61;
  _186 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)21)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _187 = *_140;
  llvm_cbe_select_2e_val_2e_64 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_186))) & _187) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_61 | -1024), llvm_cbe_select_2e_val_2e_61);
  *_141 = llvm_cbe_select_2e_val_2e_64;
  _188 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)22)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _189 = *_140;
  llvm_cbe_select_2e_val_2e_67 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_188))) & _189) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_64 | -512), llvm_cbe_select_2e_val_2e_64);
  *_141 = llvm_cbe_select_2e_val_2e_67;
  _190 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)23)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _191 = *_140;
  llvm_cbe_select_2e_val_2e_70 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_190))) & _191) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_67 | -256), llvm_cbe_select_2e_val_2e_67);
  *_141 = llvm_cbe_select_2e_val_2e_70;
  _192 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)24)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _193 = *_140;
  llvm_cbe_select_2e_val_2e_73 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_192))) & _193) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_70 | -128), llvm_cbe_select_2e_val_2e_70);
  *_141 = llvm_cbe_select_2e_val_2e_73;
  _194 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)25)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _195 = *_140;
  llvm_cbe_select_2e_val_2e_76 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_194))) & _195) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_73 | -64), llvm_cbe_select_2e_val_2e_73);
  *_141 = llvm_cbe_select_2e_val_2e_76;
  _196 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)26)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _197 = *_140;
  llvm_cbe_select_2e_val_2e_79 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_196))) & _197) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_76 | -32), llvm_cbe_select_2e_val_2e_76);
  *_141 = llvm_cbe_select_2e_val_2e_79;
  _198 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)27)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _199 = *_140;
  llvm_cbe_select_2e_val_2e_82 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_198))) & _199) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_79 | -16), llvm_cbe_select_2e_val_2e_79);
  *_141 = llvm_cbe_select_2e_val_2e_82;
  _200 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)28)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _201 = *_140;
  llvm_cbe_select_2e_val_2e_85 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_200))) & _201) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_82 | -8), llvm_cbe_select_2e_val_2e_82);
  *_141 = llvm_cbe_select_2e_val_2e_85;
  _202 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)29)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _203 = *_140;
  llvm_cbe_select_2e_val_2e_88 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_202))) & _203) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_85 | -4), llvm_cbe_select_2e_val_2e_85);
  *_141 = llvm_cbe_select_2e_val_2e_88;
  _204 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)30)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _205 = *_140;
  llvm_cbe_select_2e_val_2e_91 = llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_204))) & _205) != 0u)&1)) & llvm_cbe__2e_cond)&1)), (llvm_cbe_select_2e_val_2e_88 | -2), llvm_cbe_select_2e_val_2e_88);
  *_141 = llvm_cbe_select_2e_val_2e_91;
  _206 = *(llvm_select_pu8(llvm_cbe_safe_2e_, ((&_142[((int64_t)31)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _207 = *_140;
  *_141 = (llvm_select_u32(((((((((1 << (((uint32_t)(uint8_t)_206))) & _207) != 0u)&1)) & llvm_cbe__2e_cond)&1)), -1, llvm_cbe_select_2e_val_2e_91));
}


int16_t exp8(int16_t _208, int16_t _209, int16_t _210, bool llvm_cbe__2e_cond) {
  bool llvm_cbe_in_2e_;
  uint16_t _211;
  uint16_t llvm_cbe_select_2e_phi_2e_;
  uint16_t _212;
  uint16_t _213;
  uint16_t llvm_cbe_select_2e_phi_2e_2;
  uint16_t _214;
  uint16_t _215;
  uint16_t llvm_cbe_select_2e_phi_2e_3;
  uint16_t _216;
  uint16_t _217;
  uint16_t llvm_cbe_select_2e_phi_2e_4;
  uint16_t _218;
  uint16_t _219;
  uint16_t llvm_cbe_select_2e_phi_2e_5;
  uint16_t _220;
  uint16_t _221;
  uint16_t llvm_cbe_select_2e_phi_2e_6;
  uint16_t _222;
  uint16_t _223;
  uint16_t llvm_cbe_select_2e_phi_2e_7;
  uint16_t _224;
  uint16_t _225;
  uint16_t llvm_cbe_select_2e_phi_2e_8;
  uint16_t _226;
  uint16_t _227;
  uint16_t llvm_cbe_select_2e_phi_2e_9;
  uint16_t _228;
  uint16_t _229;
  uint16_t llvm_cbe_select_2e_phi_2e_10;
  uint16_t _230;
  uint16_t _231;
  uint16_t llvm_cbe_select_2e_phi_2e_11;
  uint16_t _232;
  uint16_t _233;
  uint16_t llvm_cbe_select_2e_phi_2e_12;
  uint16_t _234;
  uint16_t _235;
  uint16_t llvm_cbe_select_2e_phi_2e_13;
  uint16_t _236;
  uint16_t _237;
  uint16_t llvm_cbe_select_2e_phi_2e_14;
  uint16_t _238;
  uint16_t _239;
  uint16_t llvm_cbe_select_2e_phi_2e_15;
  uint16_t _240;
  uint16_t _241;

  llvm_cbe_in_2e_ = (((((~((((_208 == ((uint16_t)0))&1))))&1)) & llvm_cbe__2e_cond)&1);
  _211 = mult8(1, _208, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_ = llvm_select_u16((((((((llvm_and_u16(_209, 1)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), 1, _211);
  _212 = mult8(_208, _208, _210, /*UNDEF*/0);
  _213 = mult8(llvm_cbe_select_2e_phi_2e_, _212, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_2 = llvm_select_u16((((((((llvm_and_u16(_209, 2)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_, _213);
  _214 = mult8(_212, _212, _210, /*UNDEF*/0);
  _215 = mult8(llvm_cbe_select_2e_phi_2e_2, _214, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_3 = llvm_select_u16((((((((llvm_and_u16(_209, 4)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_2, _215);
  _216 = mult8(_214, _214, _210, /*UNDEF*/0);
  _217 = mult8(llvm_cbe_select_2e_phi_2e_3, _216, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_4 = llvm_select_u16((((((((llvm_and_u16(_209, 8)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_3, _217);
  _218 = mult8(_216, _216, _210, /*UNDEF*/0);
  _219 = mult8(llvm_cbe_select_2e_phi_2e_4, _218, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_5 = llvm_select_u16((((((((llvm_and_u16(_209, 16)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_4, _219);
  _220 = mult8(_218, _218, _210, /*UNDEF*/0);
  _221 = mult8(llvm_cbe_select_2e_phi_2e_5, _220, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_6 = llvm_select_u16((((((((llvm_and_u16(_209, 32)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_5, _221);
  _222 = mult8(_220, _220, _210, /*UNDEF*/0);
  _223 = mult8(llvm_cbe_select_2e_phi_2e_6, _222, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_7 = llvm_select_u16((((((((llvm_and_u16(_209, 64)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_6, _223);
  _224 = mult8(_222, _222, _210, /*UNDEF*/0);
  _225 = mult8(llvm_cbe_select_2e_phi_2e_7, _224, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_8 = llvm_select_u16(((((((((int8_t)(((uint8_t)_209))) > ((int8_t)((uint8_t)-1)))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_7, _225);
  _226 = mult8(_224, _224, _210, /*UNDEF*/0);
  _227 = mult8(llvm_cbe_select_2e_phi_2e_8, _226, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_9 = llvm_select_u16((((((((llvm_and_u16(_209, 256)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_8, _227);
  _228 = mult8(_226, _226, _210, /*UNDEF*/0);
  _229 = mult8(llvm_cbe_select_2e_phi_2e_9, _228, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_10 = llvm_select_u16((((((((llvm_and_u16(_209, 512)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_9, _229);
  _230 = mult8(_228, _228, _210, /*UNDEF*/0);
  _231 = mult8(llvm_cbe_select_2e_phi_2e_10, _230, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_11 = llvm_select_u16((((((((llvm_and_u16(_209, 1024)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_10, _231);
  _232 = mult8(_230, _230, _210, /*UNDEF*/0);
  _233 = mult8(llvm_cbe_select_2e_phi_2e_11, _232, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_12 = llvm_select_u16((((((((llvm_and_u16(_209, 2048)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_11, _233);
  _234 = mult8(_232, _232, _210, /*UNDEF*/0);
  _235 = mult8(llvm_cbe_select_2e_phi_2e_12, _234, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_13 = llvm_select_u16((((((((llvm_and_u16(_209, 4096)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_12, _235);
  _236 = mult8(_234, _234, _210, /*UNDEF*/0);
  _237 = mult8(llvm_cbe_select_2e_phi_2e_13, _236, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_14 = llvm_select_u16((((((((llvm_and_u16(_209, 8192)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_13, _237);
  _238 = mult8(_236, _236, _210, /*UNDEF*/0);
  _239 = mult8(llvm_cbe_select_2e_phi_2e_14, _238, _210, /*UNDEF*/0);
  llvm_cbe_select_2e_phi_2e_15 = llvm_select_u16((((((((llvm_and_u16(_209, 16384u)) == ((uint16_t)0))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_14, _239);
  _240 = mult8(_238, _238, _210, /*UNDEF*/0);
  _241 = mult8(llvm_cbe_select_2e_phi_2e_15, _240, _210, /*UNDEF*/0);
  return (llvm_select_u16(((((((_208 == ((uint16_t)0))&1)) & llvm_cbe__2e_cond)&1)), 0, (llvm_select_u16(((((((((int16_t)_209) > ((int16_t)((uint16_t)-1)))&1)) & llvm_cbe_in_2e_)&1)), llvm_cbe_select_2e_phi_2e_15, _241))));
}


int16_t mult8(int16_t _242, int16_t _243, int16_t _244, bool llvm_cbe__2e_cond) {
  uint16_t _245;
  uint16_t llvm_cbe__2e_1;
  uint16_t _246;
  uint16_t llvm_cbe__2e_1_2e_1;
  uint16_t _247;
  uint16_t llvm_cbe__2e_1_2e_2;
  uint16_t _248;
  uint16_t llvm_cbe__2e_1_2e_3;
  uint16_t _249;
  uint16_t llvm_cbe__2e_1_2e_4;
  uint16_t _250;
  uint16_t llvm_cbe__2e_1_2e_5;
  uint16_t _251;
  uint16_t llvm_cbe__2e_1_2e_6;
  uint16_t _252;
  uint16_t llvm_cbe__2e_1_2e_7;
  uint16_t _253;
  uint16_t llvm_cbe__2e_1_2e_8;
  uint16_t _254;
  uint16_t llvm_cbe__2e_1_2e_9;
  uint16_t _255;
  uint16_t llvm_cbe__2e_1_2e_10;
  uint16_t _256;
  uint16_t llvm_cbe__2e_1_2e_11;
  uint16_t _257;
  uint16_t llvm_cbe__2e_1_2e_12;
  uint16_t _258;
  uint16_t llvm_cbe__2e_1_2e_13;
  uint16_t _259;

  _245 = llvm_shl_u16(_242, 1);
  llvm_cbe__2e_1 = llvm_xor_u16((llvm_select_u16((((((int16_t)_245) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _245);
  _246 = llvm_shl_u16(llvm_cbe__2e_1, 1);
  llvm_cbe__2e_1_2e_1 = llvm_xor_u16((llvm_select_u16((((((int16_t)_246) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _246);
  _247 = llvm_shl_u16(llvm_cbe__2e_1_2e_1, 1);
  llvm_cbe__2e_1_2e_2 = llvm_xor_u16((llvm_select_u16((((((int16_t)_247) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _247);
  _248 = llvm_shl_u16(llvm_cbe__2e_1_2e_2, 1);
  llvm_cbe__2e_1_2e_3 = llvm_xor_u16((llvm_select_u16((((((int16_t)_248) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _248);
  _249 = llvm_shl_u16(llvm_cbe__2e_1_2e_3, 1);
  llvm_cbe__2e_1_2e_4 = llvm_xor_u16((llvm_select_u16((((((int16_t)_249) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _249);
  _250 = llvm_shl_u16(llvm_cbe__2e_1_2e_4, 1);
  llvm_cbe__2e_1_2e_5 = llvm_xor_u16((llvm_select_u16((((((int16_t)_250) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _250);
  _251 = llvm_shl_u16(llvm_cbe__2e_1_2e_5, 1);
  llvm_cbe__2e_1_2e_6 = llvm_xor_u16((llvm_select_u16((((((int16_t)_251) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _251);
  _252 = llvm_shl_u16(llvm_cbe__2e_1_2e_6, 1);
  llvm_cbe__2e_1_2e_7 = llvm_xor_u16((llvm_select_u16((((((int16_t)_252) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _252);
  _253 = llvm_shl_u16(llvm_cbe__2e_1_2e_7, 1);
  llvm_cbe__2e_1_2e_8 = llvm_xor_u16((llvm_select_u16((((((int16_t)_253) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _253);
  _254 = llvm_shl_u16(llvm_cbe__2e_1_2e_8, 1);
  llvm_cbe__2e_1_2e_9 = llvm_xor_u16((llvm_select_u16((((((int16_t)_254) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _254);
  _255 = llvm_shl_u16(llvm_cbe__2e_1_2e_9, 1);
  llvm_cbe__2e_1_2e_10 = llvm_xor_u16((llvm_select_u16((((((int16_t)_255) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _255);
  _256 = llvm_shl_u16(llvm_cbe__2e_1_2e_10, 1);
  llvm_cbe__2e_1_2e_11 = llvm_xor_u16((llvm_select_u16((((((int16_t)_256) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _256);
  _257 = llvm_shl_u16(llvm_cbe__2e_1_2e_11, 1);
  llvm_cbe__2e_1_2e_12 = llvm_xor_u16((llvm_select_u16((((((int16_t)_257) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _257);
  _258 = llvm_shl_u16(llvm_cbe__2e_1_2e_12, 1);
  llvm_cbe__2e_1_2e_13 = llvm_xor_u16((llvm_select_u16((((((int16_t)_258) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _258);
  _259 = llvm_shl_u16(llvm_cbe__2e_1_2e_13, 1);
  return (llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(_243, 2)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1)), (llvm_select_u16(((((llvm_and_u16(_243, 1)) == ((uint16_t)0))&1)), 0, _242)))), (llvm_select_u16(((((llvm_and_u16(_243, 4)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_1)))), (llvm_select_u16(((((llvm_and_u16(_243, 8)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_2)))), (llvm_select_u16(((((llvm_and_u16(_243, 16)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_3)))), (llvm_select_u16(((((llvm_and_u16(_243, 32)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_4)))), (llvm_select_u16(((((llvm_and_u16(_243, 64)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_5)))), (llvm_select_u16((((((int8_t)(((uint8_t)_243))) > ((int8_t)((uint8_t)-1)))&1)), 0, llvm_cbe__2e_1_2e_6)))), (llvm_select_u16(((((llvm_and_u16(_243, 256)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_7)))), (llvm_select_u16(((((llvm_and_u16(_243, 512)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_8)))), (llvm_select_u16(((((llvm_and_u16(_243, 1024)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_9)))), (llvm_select_u16(((((llvm_and_u16(_243, 2048)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_10)))), (llvm_select_u16(((((llvm_and_u16(_243, 4096)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_11)))), (llvm_select_u16(((((llvm_and_u16(_243, 8192)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_12)))), (llvm_select_u16(((((llvm_and_u16(_243, 16384u)) == ((uint16_t)0))&1)), 0, llvm_cbe__2e_1_2e_13)))), (llvm_select_u16((((((int16_t)_243) < ((int16_t)((uint16_t)0)))&1)), (llvm_xor_u16((llvm_select_u16((((((int16_t)_259) > ((int16_t)((uint16_t)255)))&1)), _244, 0)), _259)), 0))));
}


void deloki(struct l_struct_struct_OC_loki_ctx* _260, uint64_t llvm_cbe_N, uint8_t* _261, uint64_t llvm_cbe_N1) {
  uint32_t* _262;
  uint32_t _263;
  uint32_t* _264;
  uint32_t _265;
  uint32_t _266;
  uint32_t _267;
  uint32_t _268;
  uint32_t _269;
  uint32_t _270;
  uint32_t _271;
  uint32_t _272;
  uint32_t _273;
  uint32_t _274;
  uint32_t _275;
  uint32_t _276;
  uint32_t _277;
  uint32_t _278;
  uint32_t _279;
  uint32_t _280;
  uint32_t _281;
  uint32_t _282;
  uint32_t _283;
  uint32_t _284;
  uint32_t _285;
  uint32_t _286;
  uint32_t _287;
  uint32_t _288;
  uint32_t _289;
  uint32_t _290;
  uint32_t _291;
  uint32_t _292;
  uint32_t _293;
  uint32_t _294;
  uint32_t _295;
  uint32_t _296;
  uint32_t _297;
  uint32_t _298;
  uint32_t _299;
  uint32_t _300;
  uint32_t _301;
  uint32_t _302;
  uint32_t _303;
  uint32_t _304;
  uint32_t _305;
  uint32_t _306;
  uint32_t _307;
  uint32_t _308;
  uint32_t _309;
  uint32_t _310;
  uint32_t _311;
  uint32_t _312;

  _262 = ((uint32_t*)_261);
  _263 = *_262;
  _264 = ((uint32_t*)((&_261[((int64_t)4)])));
  _265 = *_264;
  _266 = *((&_260->field0.array[((int64_t)15)]));
  _267 = f(_265, _266, 1);
  _268 = _267 ^ _263;
  _269 = *((&_260->field0.array[((int64_t)14)]));
  _270 = f(_268, _269, 1);
  _271 = _270 ^ _265;
  _272 = *((&_260->field0.array[((int64_t)13)]));
  _273 = f(_271, _272, 1);
  _274 = _273 ^ _268;
  _275 = *((&_260->field0.array[((int64_t)12)]));
  _276 = f(_274, _275, 1);
  _277 = _276 ^ _271;
  _278 = *((&_260->field0.array[((int64_t)11)]));
  _279 = f(_277, _278, 1);
  _280 = _279 ^ _274;
  _281 = *((&_260->field0.array[((int64_t)10)]));
  _282 = f(_280, _281, 1);
  _283 = _282 ^ _277;
  _284 = *((&_260->field0.array[((int64_t)9)]));
  _285 = f(_283, _284, 1);
  _286 = _285 ^ _280;
  _287 = *((&_260->field0.array[((int64_t)8)]));
  _288 = f(_286, _287, 1);
  _289 = _288 ^ _283;
  _290 = *((&_260->field0.array[((int64_t)7)]));
  _291 = f(_289, _290, 1);
  _292 = _291 ^ _286;
  _293 = *((&_260->field0.array[((int64_t)6)]));
  _294 = f(_292, _293, 1);
  _295 = _294 ^ _289;
  _296 = *((&_260->field0.array[((int64_t)5)]));
  _297 = f(_295, _296, 1);
  _298 = _297 ^ _292;
  _299 = *((&_260->field0.array[((int64_t)4)]));
  _300 = f(_298, _299, 1);
  _301 = _300 ^ _295;
  _302 = *((&_260->field0.array[((int64_t)3)]));
  _303 = f(_301, _302, 1);
  _304 = _303 ^ _298;
  _305 = *((&_260->field0.array[((int64_t)2)]));
  _306 = f(_304, _305, 1);
  _307 = _306 ^ _301;
  _308 = *((&_260->field0.array[((int64_t)1)]));
  _309 = f(_307, _308, 1);
  _310 = _309 ^ _304;
  _311 = *((&_260->field0.array[((int64_t)0)]));
  _312 = f(_310, _311, 1);
  *_262 = (_312 ^ _307);
  *_264 = _310;
}

