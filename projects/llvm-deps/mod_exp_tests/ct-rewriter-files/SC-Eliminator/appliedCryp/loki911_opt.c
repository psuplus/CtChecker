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
struct l_array_32_uint8_t;
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc;
struct l_array_24_uint8_t;
struct l_array_8_uint8_t;

/* Function definitions */
typedef uint16_t l_fptr_7(uint32_t);

typedef uint16_t l_fptr_4(uint16_t, uint16_t, uint16_t);

typedef void l_fptr_2(struct l_struct_struct_OC_loki_ctx*, uint8_t*);

typedef void l_fptr_1(uint8_t*, struct l_struct_struct_OC_loki_ctx*);

typedef void l_fptr_3(uint32_t*, uint32_t*, uint8_t*);

typedef void l_fptr_5(void);

typedef uint32_t l_fptr_6(uint32_t, uint32_t);


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
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc {
  struct l_struct_struct_OC_sfn_desc array[17];
};
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};

/* External Global Variable Declarations */

/* Function Declarations */
void setlokikey(uint8_t*, struct l_struct_struct_OC_loki_ctx*) __ATTRIBUTELIST__((nothrow));
void enloki(struct l_struct_struct_OC_loki_ctx*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void deloki(struct l_struct_struct_OC_loki_ctx*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void perm32(uint32_t*, uint32_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
int16_t mult8(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((nothrow));
int16_t exp8(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((nothrow));
void main(void) __ATTRIBUTELIST__((nothrow));
static uint32_t f(uint32_t, uint32_t) __ATTRIBUTELIST__((nothrow));
static int16_t s(uint32_t) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
__MSALIGN__(64) struct l_array_32_uint8_t P __attribute__((aligned(64))) = { "\x1F\x17\x0F\a\x1E\x16\x0E\x06\x1D\x15\r\x05\x1C\x14\x0C\x04\x1B\x13\v\x03\x1A\x12\n\x02\x19\x11\t\x01\x18\x10\x08" };
__MSALIGN__(64) struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc sfn __attribute__((aligned(64))) = { { { 375, 31 }, { 379, 31 }, { 391, 31 }, { 395, 31 }, { 397, 31 }, { 415, 31 }, { 419, 31 }, { 425, 31 }, { 433, 31 }, { 445, 31 }, { 451, 31 }, { 463, 31 }, { 471, 31 }, { 477, 31 }, { 487, 31 }, { 499, 31 }, { 0, 0 } } };
static __MSALIGN__(64) struct l_array_24_uint8_t in_key __attribute__((aligned(64))) = { "\x01#Eg\x89\xAB\xCD\xEF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" };
static struct l_array_8_uint8_t in = { "\x01#Eg\x89\xAB\xCD\xE7" };


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
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
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

void setlokikey(uint8_t* _1, struct l_struct_struct_OC_loki_ctx* _2) {
  uint32_t _3;
  uint32_t _4;
  uint32_t _5;
  uint32_t _6;
  uint32_t _7;
  uint32_t _8;
  uint32_t _9;
  uint32_t _10;
  uint32_t _11;
  uint32_t _12;
  uint32_t _13;
  uint32_t _14;
  uint32_t _15;
  uint32_t _16;
  uint32_t _17;
  uint32_t _18;
  uint32_t _19;
  uint32_t _20;
  uint32_t _21;
  uint32_t _22;

  _3 = *((&(*(((uint32_t*)_1)))));
  _4 = *((&(((uint32_t*)_1))[((int64_t)1)]));
  goto _23;

_23:
  *((&(*((&_2->field0))).array[((int64_t)0)])) = _3;
  _5 = (_3 << 12) | (llvm_ashr_u32(_3, 20));
  *((&(*((&_2->field0))).array[((int64_t)1)])) = _5;
  _6 = (_5 << 13) | (llvm_ashr_u32(_5, 19));
  *((&(*((&_2->field0))).array[((int64_t)2)])) = _4;
  _7 = (_4 << 12) | (llvm_ashr_u32(_4, 20));
  *((&(*((&_2->field0))).array[((int64_t)3)])) = _7;
  _8 = (_7 << 13) | (llvm_ashr_u32(_7, 19));
  *((&(*((&_2->field0))).array[((int64_t)4)])) = _6;
  _9 = (_6 << 12) | (llvm_ashr_u32(_6, 20));
  *((&(*((&_2->field0))).array[((int64_t)5)])) = _9;
  _10 = (_9 << 13) | (llvm_ashr_u32(_9, 19));
  *((&(*((&_2->field0))).array[((int64_t)6)])) = _8;
  _11 = (_8 << 12) | (llvm_ashr_u32(_8, 20));
  *((&(*((&_2->field0))).array[((int64_t)7)])) = _11;
  _12 = (_11 << 13) | (llvm_ashr_u32(_11, 19));
  *((&(*((&_2->field0))).array[((int64_t)8)])) = _10;
  _13 = (_10 << 12) | (llvm_ashr_u32(_10, 20));
  *((&(*((&_2->field0))).array[((int64_t)9)])) = _13;
  _14 = (_13 << 13) | (llvm_ashr_u32(_13, 19));
  *((&(*((&_2->field0))).array[((int64_t)10)])) = _12;
  _15 = (_12 << 12) | (llvm_ashr_u32(_12, 20));
  *((&(*((&_2->field0))).array[((int64_t)11)])) = _15;
  _16 = (_15 << 13) | (llvm_ashr_u32(_15, 19));
  *((&(*((&_2->field0))).array[((int64_t)12)])) = _14;
  _17 = (_14 << 12) | (llvm_ashr_u32(_14, 20));
  *((&(*((&_2->field0))).array[((int64_t)13)])) = _17;
  _18 = _17 << 13;
  _19 = llvm_ashr_u32(_17, 19);
  *((&(*((&_2->field0))).array[((int64_t)14)])) = _16;
  _20 = (_16 << 12) | (llvm_ashr_u32(_16, 20));
  *((&(*((&_2->field0))).array[((int64_t)15)])) = _20;
  _21 = _20 << 13;
  _22 = llvm_ashr_u32(_20, 19);
}


void enloki(struct l_struct_struct_OC_loki_ctx* _24, uint8_t* _25) {
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
  uint32_t _40;
  uint32_t _41;
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

  _26 = *((&(*(((uint32_t*)_25)))));
  _27 = *((&(((uint32_t*)_25))[((int64_t)1)]));
  goto _75;

_75:
  _28 = *((&(*((&_24->field0))).array[((int64_t)0)]));
  _29 = f(_27, _28);
  _30 = _26 ^ _29;
  _31 = *((&(*((&_24->field0))).array[((int64_t)1)]));
  _32 = f(_30, _31);
  _33 = _27 ^ _32;
  _34 = *((&(*((&_24->field0))).array[((int64_t)2)]));
  _35 = f(_33, _34);
  _36 = _30 ^ _35;
  _37 = *((&(*((&_24->field0))).array[((int64_t)3)]));
  _38 = f(_36, _37);
  _39 = _33 ^ _38;
  _40 = *((&(*((&_24->field0))).array[((int64_t)4)]));
  _41 = f(_39, _40);
  _42 = _36 ^ _41;
  _43 = *((&(*((&_24->field0))).array[((int64_t)5)]));
  _44 = f(_42, _43);
  _45 = _39 ^ _44;
  _46 = *((&(*((&_24->field0))).array[((int64_t)6)]));
  _47 = f(_45, _46);
  _48 = _42 ^ _47;
  _49 = *((&(*((&_24->field0))).array[((int64_t)7)]));
  _50 = f(_48, _49);
  _51 = _45 ^ _50;
  _52 = *((&(*((&_24->field0))).array[((int64_t)8)]));
  _53 = f(_51, _52);
  _54 = _48 ^ _53;
  _55 = *((&(*((&_24->field0))).array[((int64_t)9)]));
  _56 = f(_54, _55);
  _57 = _51 ^ _56;
  _58 = *((&(*((&_24->field0))).array[((int64_t)10)]));
  _59 = f(_57, _58);
  _60 = _54 ^ _59;
  _61 = *((&(*((&_24->field0))).array[((int64_t)11)]));
  _62 = f(_60, _61);
  _63 = _57 ^ _62;
  _64 = *((&(*((&_24->field0))).array[((int64_t)12)]));
  _65 = f(_63, _64);
  _66 = _60 ^ _65;
  _67 = *((&(*((&_24->field0))).array[((int64_t)13)]));
  _68 = f(_66, _67);
  _69 = _63 ^ _68;
  _70 = *((&(*((&_24->field0))).array[((int64_t)14)]));
  _71 = f(_69, _70);
  _72 = _66 ^ _71;
  _73 = *((&(*((&_24->field0))).array[((int64_t)15)]));
  _74 = f(_72, _73);
  *(((uint32_t*)_25)) = (_69 ^ _74);
  *((&(((uint32_t*)_25))[((int64_t)1)])) = _72;
}


void deloki(struct l_struct_struct_OC_loki_ctx* _76, uint8_t* _77) {
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
  uint32_t _123;
  uint32_t _124;
  uint32_t _125;
  uint32_t _126;

  _78 = *((&(*(((uint32_t*)_77)))));
  _79 = *((&(((uint32_t*)_77))[((int64_t)1)]));
  goto _127;

_127:
  _80 = *((&(*((&_76->field0))).array[((int64_t)15)]));
  _81 = f(_79, _80);
  _82 = _78 ^ _81;
  _83 = *((&(*((&_76->field0))).array[((int64_t)14)]));
  _84 = f(_82, _83);
  _85 = _79 ^ _84;
  _86 = *((&(*((&_76->field0))).array[((int64_t)13)]));
  _87 = f(_85, _86);
  _88 = _82 ^ _87;
  _89 = *((&(*((&_76->field0))).array[((int64_t)12)]));
  _90 = f(_88, _89);
  _91 = _85 ^ _90;
  _92 = *((&(*((&_76->field0))).array[((int64_t)11)]));
  _93 = f(_91, _92);
  _94 = _88 ^ _93;
  _95 = *((&(*((&_76->field0))).array[((int64_t)10)]));
  _96 = f(_94, _95);
  _97 = _91 ^ _96;
  _98 = *((&(*((&_76->field0))).array[((int64_t)9)]));
  _99 = f(_97, _98);
  _100 = _94 ^ _99;
  _101 = *((&(*((&_76->field0))).array[((int64_t)8)]));
  _102 = f(_100, _101);
  _103 = _97 ^ _102;
  _104 = *((&(*((&_76->field0))).array[((int64_t)7)]));
  _105 = f(_103, _104);
  _106 = _100 ^ _105;
  _107 = *((&(*((&_76->field0))).array[((int64_t)6)]));
  _108 = f(_106, _107);
  _109 = _103 ^ _108;
  _110 = *((&(*((&_76->field0))).array[((int64_t)5)]));
  _111 = f(_109, _110);
  _112 = _106 ^ _111;
  _113 = *((&(*((&_76->field0))).array[((int64_t)4)]));
  _114 = f(_112, _113);
  _115 = _109 ^ _114;
  _116 = *((&(*((&_76->field0))).array[((int64_t)3)]));
  _117 = f(_115, _116);
  _118 = _112 ^ _117;
  _119 = *((&(*((&_76->field0))).array[((int64_t)2)]));
  _120 = f(_118, _119);
  _121 = _115 ^ _120;
  _122 = *((&(*((&_76->field0))).array[((int64_t)1)]));
  _123 = f(_121, _122);
  _124 = _118 ^ _123;
  _125 = *((&(*((&_76->field0))).array[((int64_t)0)]));
  _126 = f(_124, _125);
  *(((uint32_t*)_77)) = (_121 ^ _126);
  *((&(((uint32_t*)_77))[((int64_t)1)])) = _124;
}


void perm32(uint32_t* _128, uint32_t* _129, uint8_t* _130) {
  uint8_t* llvm_cbe__2e_05;
  uint8_t* llvm_cbe__2e_05__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_014;
  uint32_t llvm_cbe__2e_014__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_023;
  uint32_t llvm_cbe__2e_023__PHI_TEMPORARY;
  uint8_t* _131;
  uint8_t _132;
  uint32_t _133;
  uint32_t _134;
  uint32_t _135;
  uint32_t _136;
  uint32_t _137;
  uint8_t* _138;
  uint8_t _139;
  uint32_t _140;
  uint32_t _141;
  uint32_t _142;
  uint32_t _143;
  uint32_t _144;

  *_129 = 0;
  llvm_cbe__2e_05__PHI_TEMPORARY = _130;   /* for PHI node */
  llvm_cbe__2e_014__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_023__PHI_TEMPORARY = 2147483648u;   /* for PHI node */
  goto _145;

  do {     /* Syntactic loop '' to make GCC happy */
_145:
  llvm_cbe__2e_05 = llvm_cbe__2e_05__PHI_TEMPORARY;
  llvm_cbe__2e_014 = llvm_cbe__2e_014__PHI_TEMPORARY;
  llvm_cbe__2e_023 = llvm_cbe__2e_023__PHI_TEMPORARY;
  _131 = (&llvm_cbe__2e_05[((int32_t)1)]);
  _132 = *llvm_cbe__2e_05;
  _133 = *_128;
  goto _146;

_146:
  _134 = *_129;
  _135 = *_129;
  *_129 = (llvm_select_u32((((((llvm_ashr_u32(_133, (((int32_t)(int8_t)_132)))) & 1) != 0u)&1)), (_134 | llvm_cbe__2e_023), _135));
  goto _147;

_147:
  _136 = llvm_ashr_u32(llvm_cbe__2e_023, 1);
  _137 = llvm_add_u32(llvm_cbe__2e_014, 1);
  _138 = (&_131[((int32_t)1)]);
  _139 = *_131;
  _140 = *_128;
  goto _148;

_148:
  _141 = *_129;
  _142 = *_129;
  *_129 = (llvm_select_u32((((((llvm_ashr_u32(_140, (((int32_t)(int8_t)_139)))) & 1) != 0u)&1)), (_141 | _136), _142));
  goto _149;

_149:
  _143 = llvm_ashr_u32(_136, 1);
  _144 = llvm_add_u32(_137, 1);
  if ((((((int32_t)_144) < ((int32_t)32u))&1))) {
    llvm_cbe__2e_05__PHI_TEMPORARY = _138;   /* for PHI node */
    llvm_cbe__2e_014__PHI_TEMPORARY = _144;   /* for PHI node */
    llvm_cbe__2e_023__PHI_TEMPORARY = _143;   /* for PHI node */
    goto _145;
  } else {
    goto _150;
  }

  } while (1); /* end of syntactic loop '' */
_150:
  return;
}


int16_t mult8(int16_t _151, int16_t _152, int16_t _153) {
  uint16_t llvm_cbe__2e_08;
  uint16_t llvm_cbe__2e_08__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_017;
  uint16_t llvm_cbe__2e_017__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_026;
  uint32_t llvm_cbe__2e_026__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_035;
  uint16_t llvm_cbe__2e_035__PHI_TEMPORARY;
  uint16_t _154;
  uint16_t llvm_cbe__2e_14;
  uint16_t llvm_cbe__2e_14__PHI_TEMPORARY;
  uint16_t _155;
  uint16_t _156;
  uint16_t _157;
  uint16_t llvm_cbe__2e_1;
  uint16_t llvm_cbe__2e_1__PHI_TEMPORARY;
  uint16_t _158;
  uint16_t _159;
  uint32_t _160;
  uint16_t llvm_cbe__2e_03_2e_lcssa;
  uint16_t llvm_cbe__2e_03_2e_lcssa__PHI_TEMPORARY;

  llvm_cbe__2e_08__PHI_TEMPORARY = _151;   /* for PHI node */
  llvm_cbe__2e_017__PHI_TEMPORARY = _152;   /* for PHI node */
  llvm_cbe__2e_026__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_035__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _161;

  do {     /* Syntactic loop '' to make GCC happy */
_161:
  llvm_cbe__2e_08 = llvm_cbe__2e_08__PHI_TEMPORARY;
  llvm_cbe__2e_017 = llvm_cbe__2e_017__PHI_TEMPORARY;
  llvm_cbe__2e_026 = llvm_cbe__2e_026__PHI_TEMPORARY;
  llvm_cbe__2e_035 = llvm_cbe__2e_035__PHI_TEMPORARY;
  goto _162;

_162:
  _154 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_035)) ^ (((int32_t)(int16_t)llvm_cbe__2e_08))));
  llvm_cbe__2e_14__PHI_TEMPORARY = _154;   /* for PHI node */
  goto _163;

_163:
  llvm_cbe__2e_14 = llvm_cbe__2e_14__PHI_TEMPORARY;
  _155 = llvm_select_u16((((((((int32_t)(int16_t)llvm_cbe__2e_017)) & 1) != 0u)&1)), llvm_cbe__2e_14, llvm_cbe__2e_035);
  _156 = ((uint16_t)((((int32_t)(int16_t)llvm_cbe__2e_08)) << 1));
  goto _164;

_164:
  _157 = ((uint16_t)((((int32_t)(int16_t)_156)) ^ (((int32_t)(int16_t)_153))));
  llvm_cbe__2e_1__PHI_TEMPORARY = _157;   /* for PHI node */
  goto _165;

_165:
  llvm_cbe__2e_1 = llvm_cbe__2e_1__PHI_TEMPORARY;
  _158 = llvm_select_u16((((((int32_t)(((int32_t)(int16_t)_156))) >= ((int32_t)256u))&1)), llvm_cbe__2e_1, _156);
  _159 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)llvm_cbe__2e_017)), 1)));
  _160 = llvm_add_u32(llvm_cbe__2e_026, 1);
  if ((((((int32_t)_160) < ((int32_t)16u))&1))) {
    llvm_cbe__2e_08__PHI_TEMPORARY = _158;   /* for PHI node */
    llvm_cbe__2e_017__PHI_TEMPORARY = _159;   /* for PHI node */
    llvm_cbe__2e_026__PHI_TEMPORARY = _160;   /* for PHI node */
    llvm_cbe__2e_035__PHI_TEMPORARY = llvm_cbe__2e_14;   /* for PHI node */
    goto _161;
  } else {
    llvm_cbe__2e_03_2e_lcssa__PHI_TEMPORARY = _155;   /* for PHI node */
    goto _166;
  }

  } while (1); /* end of syntactic loop '' */
_166:
  llvm_cbe__2e_03_2e_lcssa = llvm_cbe__2e_03_2e_lcssa__PHI_TEMPORARY;
  return llvm_cbe__2e_03_2e_lcssa;
}


int16_t exp8(int16_t _167, int16_t _168, int16_t _169) {
  uint32_t llvm_cbe__2e_018;
  uint32_t llvm_cbe__2e_018__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_027;
  uint16_t llvm_cbe__2e_027__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_036;
  uint16_t llvm_cbe__2e_036__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_045;
  uint16_t llvm_cbe__2e_045__PHI_TEMPORARY;
  uint16_t _170;
  uint16_t llvm_cbe__2e_1;
  uint16_t llvm_cbe__2e_1__PHI_TEMPORARY;
  uint16_t _171;
  uint16_t _172;
  uint16_t _173;
  uint32_t _174;
  uint16_t llvm_cbe__2e_0_2e_ph;
  uint16_t llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY;
  uint16_t llvm_cbe__2e_0;
  uint16_t llvm_cbe__2e_0__PHI_TEMPORARY;

  goto llvm_cbe__2e_preheader;

llvm_cbe__2e_preheader:
  llvm_cbe__2e_018__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_027__PHI_TEMPORARY = _168;   /* for PHI node */
  llvm_cbe__2e_036__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe__2e_045__PHI_TEMPORARY = _167;   /* for PHI node */
  goto _175;

  do {     /* Syntactic loop '' to make GCC happy */
_175:
  llvm_cbe__2e_018 = llvm_cbe__2e_018__PHI_TEMPORARY;
  llvm_cbe__2e_027 = llvm_cbe__2e_027__PHI_TEMPORARY;
  llvm_cbe__2e_036 = llvm_cbe__2e_036__PHI_TEMPORARY;
  llvm_cbe__2e_045 = llvm_cbe__2e_045__PHI_TEMPORARY;
  goto _176;

_176:
  _170 = mult8(llvm_cbe__2e_036, llvm_cbe__2e_045, _169);
  llvm_cbe__2e_1__PHI_TEMPORARY = _170;   /* for PHI node */
  goto _177;

_177:
  llvm_cbe__2e_1 = llvm_cbe__2e_1__PHI_TEMPORARY;
  _171 = llvm_select_u16((((((((int32_t)(int16_t)llvm_cbe__2e_027)) & 1) == 1u)&1)), llvm_cbe__2e_1, llvm_cbe__2e_036);
  _172 = ((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)llvm_cbe__2e_027)), 1)));
  _173 = mult8(llvm_cbe__2e_045, llvm_cbe__2e_045, _169);
  _174 = llvm_add_u32(llvm_cbe__2e_018, 1);
  if ((((((int32_t)_174) < ((int32_t)16u))&1))) {
    llvm_cbe__2e_018__PHI_TEMPORARY = _174;   /* for PHI node */
    llvm_cbe__2e_027__PHI_TEMPORARY = _172;   /* for PHI node */
    llvm_cbe__2e_036__PHI_TEMPORARY = llvm_cbe__2e_1;   /* for PHI node */
    llvm_cbe__2e_045__PHI_TEMPORARY = _173;   /* for PHI node */
    goto _175;
  } else {
    llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY = _171;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_loopexit:
  llvm_cbe__2e_0_2e_ph = llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_0__PHI_TEMPORARY = llvm_cbe__2e_0_2e_ph;   /* for PHI node */
  goto _178;

_178:
  llvm_cbe__2e_0 = llvm_cbe__2e_0__PHI_TEMPORARY;
  return (llvm_select_u16(((((((int32_t)(int16_t)_167)) == 0u)&1)), llvm_cbe__2e_0, 0));
}


void main(void) {
  struct l_struct_struct_OC_loki_ctx _179;    /* Address-exposed local */

  setlokikey(((&in_key.array[((int32_t)0)])), (&_179));
  enloki((&_179), ((&in.array[((int32_t)0)])));
}


static uint32_t f(uint32_t _180, uint32_t _181) {
  uint32_t _182;    /* Address-exposed local */
  uint32_t _183;    /* Address-exposed local */
  uint32_t _184;
  uint16_t _185;
  uint16_t _186;
  uint16_t _187;
  uint16_t _188;
  uint32_t _189;

  _184 = _180 ^ _181;
  _185 = s((_184 & 4095));
  _186 = s(((llvm_ashr_u32(_184, 8)) & 4095));
  _187 = s(((llvm_ashr_u32(_184, 16)) & 4095));
  _188 = s((((llvm_ashr_u32(_184, 24)) | (_184 << 8)) & 4095));
  _182 = ((((((int32_t)(int16_t)_185)) | ((((int32_t)(int16_t)_186)) << 8)) | ((((int32_t)(int16_t)_187)) << 16)) | ((((int32_t)(int16_t)_188)) << 24));
  perm32((&_182), (&_183), ((&P.array[((int32_t)0)])));
  _189 = _183;
  return _189;
}


static int16_t s(uint32_t _190) {
  uint16_t _191;
  uint16_t _192;
  uint16_t _193;
  uint16_t _194;

  _191 = ((uint16_t)(((llvm_ashr_u32(_190, 8)) & 12) | (_190 & 3)));
  _192 = *((&((&sfn.array[((int64_t)(((int64_t)(int16_t)_191)))]))->field1));
  _193 = *((&((&sfn.array[((int64_t)(((int64_t)(int16_t)_191)))]))->field0));
  _194 = exp8((((uint16_t)((llvm_add_u32((((int32_t)(int16_t)(((uint16_t)((llvm_ashr_u32(_190, 2)) & 255))))), ((llvm_mul_u32((((int32_t)(int16_t)_191)), 17)) ^ 255))) & 255))), _192, _193);
  return _194;
}

