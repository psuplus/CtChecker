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
struct l_array_3_uint32_t;
struct l_array_12_uint32_t;
struct l_struct_struct_OC_twy_ctx;

/* Function definitions */
typedef void l_fptr_3(struct l_struct_struct_OC_twy_ctx*, uint32_t*);

typedef void l_fptr_2(uint32_t, uint32_t*);

typedef void l_fptr_4(uint32_t*, struct l_struct_struct_OC_twy_ctx*);

typedef void l_fptr_6(void);

typedef void l_fptr_1(uint32_t*);

typedef void l_fptr_5(struct l_struct_struct_OC_twy_ctx*, uint32_t*, uint32_t);


/* Types Definitions */
struct l_array_3_uint32_t {
  uint32_t array[3];
};
struct l_array_12_uint32_t {
  uint32_t array[12];
};
struct l_struct_struct_OC_twy_ctx {
  struct l_array_3_uint32_t field0;
  struct l_array_3_uint32_t field1;
  struct l_array_12_uint32_t field2;
  struct l_array_12_uint32_t field3;
};

/* External Global Variable Declarations */

/* Function Declarations */
void mu(uint32_t*) __ATTRIBUTELIST__((nothrow));
void gamma(uint32_t*) __ATTRIBUTELIST__((nothrow));
void theta(uint32_t*) __ATTRIBUTELIST__((nothrow));
void pi_1(uint32_t*) __ATTRIBUTELIST__((nothrow));
void pi_2(uint32_t*) __ATTRIBUTELIST__((nothrow));
void rho(uint32_t*) __ATTRIBUTELIST__((nothrow));
void rndcon_gen(uint32_t, uint32_t*) __ATTRIBUTELIST__((nothrow));
void encrypt(struct l_struct_struct_OC_twy_ctx*, uint32_t*) __ATTRIBUTELIST__((nothrow));
void decrypt(struct l_struct_struct_OC_twy_ctx*, uint32_t*) __ATTRIBUTELIST__((nothrow));
void twy_key(uint32_t*, struct l_struct_struct_OC_twy_ctx*) __ATTRIBUTELIST__((nothrow));
void twy_enc(struct l_struct_struct_OC_twy_ctx*, uint32_t*, uint32_t) __ATTRIBUTELIST__((nothrow));
void twy_dec(struct l_struct_struct_OC_twy_ctx*, uint32_t*, uint32_t) __ATTRIBUTELIST__((nothrow));
void main(void) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_3_uint32_t key __attribute__((aligned(64))) = { { 0, 0, 1 } };
static __MSALIGN__(64) struct l_array_3_uint32_t in __attribute__((aligned(64)));


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint8_t llvm_add_u8(uint8_t a, uint8_t b) {
  uint8_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

void mu(uint32_t* _1) {
  struct l_array_3_uint32_t _2;    /* Address-exposed local */
  uint32_t* _3;
  uint32_t _4;
  uint32_t _5;
  uint32_t _5__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_01;
  uint32_t llvm_cbe__2e_01__PHI_TEMPORARY;
  uint32_t* _6;
  uint32_t _7;
  uint32_t* _8;
  uint32_t _9;
  uint32_t _10;
  uint32_t* _11;
  uint32_t _12;
  uint32_t _13;
  uint32_t _14;
  uint32_t* _15;
  uint32_t _16;
  uint32_t _17;
  uint32_t _18;
  uint32_t* _19;
  uint32_t _20;
  uint32_t _21;
  uint32_t* _22;
  uint32_t _23;
  uint32_t* _24;
  uint32_t _25;
  uint32_t* _26;
  uint32_t _27;
  uint32_t _28;
  uint32_t _29;
  uint32_t llvm_cbe__2e_lcssa;
  uint32_t llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  uint32_t _30;
  uint32_t _31;

  *((&_2.array[((int64_t)2)])) = 0;
  *((&_2.array[((int64_t)1)])) = 0;
  *((&_2.array[((int64_t)0)])) = 0;
  _3 = (&_2.array[((int64_t)0)]);
  _4 = *_3;
  _5__PHI_TEMPORARY = _4;   /* for PHI node */
  llvm_cbe__2e_01__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _32;

  do {     /* Syntactic loop '' to make GCC happy */
_32:
  _5 = _5__PHI_TEMPORARY;
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  *_3 = (_5 << 1);
  _6 = (&_2.array[((int64_t)1)]);
  _7 = *_6;
  *_6 = (_7 << 1);
  _8 = (&_2.array[((int64_t)2)]);
  _9 = *_8;
  *_8 = (_9 << 1);
  _10 = *((&(*_1)));
  goto _33;

_33:
  _11 = (&_2.array[((int64_t)2)]);
  _12 = *_11;
  _13 = *_11;
  *_11 = (llvm_select_u32(((((_10 & 1) != 0u)&1)), (_12 | 1), _13));
  goto _34;

_34:
  _14 = *((&_1[((int64_t)1)]));
  goto _35;

_35:
  _15 = (&_2.array[((int64_t)1)]);
  _16 = *_15;
  _17 = *_15;
  *_15 = (llvm_select_u32(((((_14 & 1) != 0u)&1)), (_16 | 1), _17));
  goto _36;

_36:
  _18 = *((&_1[((int64_t)2)]));
  goto _37;

_37:
  _19 = (&_2.array[((int64_t)0)]);
  _20 = *_19;
  _21 = *_19;
  *_19 = (llvm_select_u32(((((_18 & 1) != 0u)&1)), (_20 | 1), _21));
  goto _38;

_38:
  _22 = (&(*_1));
  _23 = *_22;
  *_22 = (llvm_ashr_u32(_23, 1));
  _24 = (&_1[((int64_t)1)]);
  _25 = *_24;
  *_24 = (llvm_ashr_u32(_25, 1));
  _26 = (&_1[((int64_t)2)]);
  _27 = *_26;
  *_26 = (llvm_ashr_u32(_27, 1));
  _28 = llvm_add_u32(llvm_cbe__2e_01, 1);
  _29 = *_3;
  if ((((((int32_t)_28) < ((int32_t)32u))&1))) {
    _5__PHI_TEMPORARY = _29;   /* for PHI node */
    llvm_cbe__2e_01__PHI_TEMPORARY = _28;   /* for PHI node */
    goto _32;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = _29;   /* for PHI node */
    goto _39;
  }

  } while (1); /* end of syntactic loop '' */
_39:
  llvm_cbe__2e_lcssa = llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  *((&(*_1))) = llvm_cbe__2e_lcssa;
  _30 = *((&_2.array[((int64_t)1)]));
  *((&_1[((int64_t)1)])) = _30;
  _31 = *((&_2.array[((int64_t)2)]));
  *((&_1[((int64_t)2)])) = _31;
}


void gamma(uint32_t* _40) {
  struct l_array_3_uint32_t _41;    /* Address-exposed local */
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

  _42 = *((&(*_40)));
  _43 = *((&_40[((int64_t)1)]));
  _44 = *((&_40[((int64_t)2)]));
  *((&_41.array[((int64_t)0)])) = (_42 ^ (_43 | (~(_44))));
  _45 = *((&_40[((int64_t)1)]));
  _46 = *((&_40[((int64_t)2)]));
  _47 = *((&(*_40)));
  *((&_41.array[((int64_t)1)])) = (_45 ^ (_46 | (~(_47))));
  _48 = *((&_40[((int64_t)2)]));
  _49 = *((&(*_40)));
  _50 = *((&_40[((int64_t)1)]));
  *((&_41.array[((int64_t)2)])) = (_48 ^ (_49 | (~(_50))));
  _51 = *((&_41.array[((int64_t)0)]));
  *((&(*_40))) = _51;
  _52 = *((&_41.array[((int64_t)1)]));
  *((&_40[((int64_t)1)])) = _52;
  _53 = *((&_41.array[((int64_t)2)]));
  *((&_40[((int64_t)2)])) = _53;
}


void theta(uint32_t* _54) {
  struct l_array_3_uint32_t _55;    /* Address-exposed local */
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
  uint32_t _91;
  uint32_t _92;
  uint32_t _93;
  uint32_t _94;
  uint32_t _95;
  uint32_t _96;
  uint32_t _97;

  _56 = *((&(*_54)));
  _57 = *((&(*_54)));
  _58 = *((&_54[((int64_t)1)]));
  _59 = *((&_54[((int64_t)1)]));
  _60 = *((&_54[((int64_t)2)]));
  _61 = *((&_54[((int64_t)1)]));
  _62 = *((&_54[((int64_t)2)]));
  _63 = *((&_54[((int64_t)2)]));
  _64 = *((&(*_54)));
  _65 = *((&_54[((int64_t)2)]));
  _66 = *((&(*_54)));
  _67 = *((&_54[((int64_t)2)]));
  _68 = *((&(*_54)));
  *((&_55.array[((int64_t)0)])) = ((((((((((((_56 ^ (llvm_ashr_u32(_57, 16))) ^ (_58 << 16)) ^ (llvm_ashr_u32(_59, 16))) ^ (_60 << 16)) ^ (llvm_ashr_u32(_61, 24))) ^ (_62 << 8)) ^ (llvm_ashr_u32(_63, 8))) ^ (_64 << 24)) ^ (llvm_ashr_u32(_65, 16))) ^ (_66 << 16)) ^ (llvm_ashr_u32(_67, 24))) ^ (_68 << 8));
  _69 = *((&_54[((int64_t)1)]));
  _70 = *((&_54[((int64_t)1)]));
  _71 = *((&_54[((int64_t)2)]));
  _72 = *((&_54[((int64_t)2)]));
  _73 = *((&(*_54)));
  _74 = *((&_54[((int64_t)2)]));
  _75 = *((&(*_54)));
  _76 = *((&(*_54)));
  _77 = *((&_54[((int64_t)1)]));
  _78 = *((&(*_54)));
  _79 = *((&_54[((int64_t)1)]));
  _80 = *((&(*_54)));
  _81 = *((&_54[((int64_t)1)]));
  *((&_55.array[((int64_t)1)])) = ((((((((((((_69 ^ (llvm_ashr_u32(_70, 16))) ^ (_71 << 16)) ^ (llvm_ashr_u32(_72, 16))) ^ (_73 << 16)) ^ (llvm_ashr_u32(_74, 24))) ^ (_75 << 8)) ^ (llvm_ashr_u32(_76, 8))) ^ (_77 << 24)) ^ (llvm_ashr_u32(_78, 16))) ^ (_79 << 16)) ^ (llvm_ashr_u32(_80, 24))) ^ (_81 << 8));
  _82 = *((&_54[((int64_t)2)]));
  _83 = *((&_54[((int64_t)2)]));
  _84 = *((&(*_54)));
  _85 = *((&(*_54)));
  _86 = *((&_54[((int64_t)1)]));
  _87 = *((&(*_54)));
  _88 = *((&_54[((int64_t)1)]));
  _89 = *((&_54[((int64_t)1)]));
  _90 = *((&_54[((int64_t)2)]));
  _91 = *((&_54[((int64_t)1)]));
  _92 = *((&_54[((int64_t)2)]));
  _93 = *((&_54[((int64_t)1)]));
  _94 = *((&_54[((int64_t)2)]));
  *((&_55.array[((int64_t)2)])) = ((((((((((((_82 ^ (llvm_ashr_u32(_83, 16))) ^ (_84 << 16)) ^ (llvm_ashr_u32(_85, 16))) ^ (_86 << 16)) ^ (llvm_ashr_u32(_87, 24))) ^ (_88 << 8)) ^ (llvm_ashr_u32(_89, 8))) ^ (_90 << 24)) ^ (llvm_ashr_u32(_91, 16))) ^ (_92 << 16)) ^ (llvm_ashr_u32(_93, 24))) ^ (_94 << 8));
  _95 = *((&_55.array[((int64_t)0)]));
  *((&(*_54))) = _95;
  _96 = *((&_55.array[((int64_t)1)]));
  *((&_54[((int64_t)1)])) = _96;
  _97 = *((&_55.array[((int64_t)2)]));
  *((&_54[((int64_t)2)])) = _97;
}


void pi_1(uint32_t* _98) {
  uint32_t _99;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;

  _99 = *((&(*_98)));
  _100 = *((&(*_98)));
  *((&(*_98))) = ((llvm_ashr_u32(_99, 10)) ^ (_100 << 22));
  _101 = *((&_98[((int64_t)2)]));
  _102 = *((&_98[((int64_t)2)]));
  *((&_98[((int64_t)2)])) = ((_101 << 1) ^ (llvm_ashr_u32(_102, 31)));
}


void pi_2(uint32_t* _103) {
  uint32_t _104;
  uint32_t _105;
  uint32_t _106;
  uint32_t _107;

  _104 = *((&(*_103)));
  _105 = *((&(*_103)));
  *((&(*_103))) = ((_104 << 1) ^ (llvm_ashr_u32(_105, 31)));
  _106 = *((&_103[((int64_t)2)]));
  _107 = *((&_103[((int64_t)2)]));
  *((&_103[((int64_t)2)])) = ((llvm_ashr_u32(_106, 10)) ^ (_107 << 22));
}


void rho(uint32_t* _108) {
  theta(_108);
  pi_1(_108);
  gamma(_108);
  pi_2(_108);
}


void rndcon_gen(uint32_t _109, uint32_t* _110) {
  uint32_t _111;
  uint32_t llvm_cbe__2e_;
  uint32_t _112;
  uint32_t llvm_cbe__2e__2e_1;
  uint32_t _113;
  uint32_t llvm_cbe__2e__2e_2;
  uint32_t _114;
  uint32_t llvm_cbe__2e__2e_3;
  uint32_t _115;
  uint32_t llvm_cbe__2e__2e_4;
  uint32_t _116;
  uint32_t llvm_cbe__2e__2e_5;
  uint32_t _117;
  uint32_t llvm_cbe__2e__2e_6;
  uint32_t _118;
  uint32_t llvm_cbe__2e__2e_7;
  uint32_t _119;
  uint32_t llvm_cbe__2e__2e_8;
  uint32_t _120;
  uint32_t llvm_cbe__2e__2e_9;
  uint32_t _121;
  uint32_t llvm_cbe__2e__2e_10;
  uint32_t _122;
  uint32_t _123;

  goto _124;

_124:
  *_110 = _109;
  _111 = _109 << 1;
  llvm_cbe__2e_ = llvm_select_u32(((((_111 & 65536) != 0u)&1)), (_111 ^ 69649), _111);
  *((&_110[((int64_t)1)])) = llvm_cbe__2e_;
  _112 = llvm_cbe__2e_ << 1;
  llvm_cbe__2e__2e_1 = llvm_select_u32(((((_112 & 65536) != 0u)&1)), (_112 ^ 69649), _112);
  *((&_110[((int64_t)2)])) = llvm_cbe__2e__2e_1;
  _113 = llvm_cbe__2e__2e_1 << 1;
  llvm_cbe__2e__2e_2 = llvm_select_u32(((((_113 & 65536) != 0u)&1)), (_113 ^ 69649), _113);
  *((&_110[((int64_t)3)])) = llvm_cbe__2e__2e_2;
  _114 = llvm_cbe__2e__2e_2 << 1;
  llvm_cbe__2e__2e_3 = llvm_select_u32(((((_114 & 65536) != 0u)&1)), (_114 ^ 69649), _114);
  *((&_110[((int64_t)4)])) = llvm_cbe__2e__2e_3;
  _115 = llvm_cbe__2e__2e_3 << 1;
  llvm_cbe__2e__2e_4 = llvm_select_u32(((((_115 & 65536) != 0u)&1)), (_115 ^ 69649), _115);
  *((&_110[((int64_t)5)])) = llvm_cbe__2e__2e_4;
  _116 = llvm_cbe__2e__2e_4 << 1;
  llvm_cbe__2e__2e_5 = llvm_select_u32(((((_116 & 65536) != 0u)&1)), (_116 ^ 69649), _116);
  *((&_110[((int64_t)6)])) = llvm_cbe__2e__2e_5;
  _117 = llvm_cbe__2e__2e_5 << 1;
  llvm_cbe__2e__2e_6 = llvm_select_u32(((((_117 & 65536) != 0u)&1)), (_117 ^ 69649), _117);
  *((&_110[((int64_t)7)])) = llvm_cbe__2e__2e_6;
  _118 = llvm_cbe__2e__2e_6 << 1;
  llvm_cbe__2e__2e_7 = llvm_select_u32(((((_118 & 65536) != 0u)&1)), (_118 ^ 69649), _118);
  *((&_110[((int64_t)8)])) = llvm_cbe__2e__2e_7;
  _119 = llvm_cbe__2e__2e_7 << 1;
  llvm_cbe__2e__2e_8 = llvm_select_u32(((((_119 & 65536) != 0u)&1)), (_119 ^ 69649), _119);
  *((&_110[((int64_t)9)])) = llvm_cbe__2e__2e_8;
  _120 = llvm_cbe__2e__2e_8 << 1;
  llvm_cbe__2e__2e_9 = llvm_select_u32(((((_120 & 65536) != 0u)&1)), (_120 ^ 69649), _120);
  *((&_110[((int64_t)10)])) = llvm_cbe__2e__2e_9;
  _121 = llvm_cbe__2e__2e_9 << 1;
  llvm_cbe__2e__2e_10 = llvm_select_u32(((((_121 & 65536) != 0u)&1)), (_121 ^ 69649), _121);
  *((&_110[((int64_t)11)])) = llvm_cbe__2e__2e_10;
  _122 = llvm_cbe__2e__2e_10 << 1;
  _123 = _122 ^ 69649;
}


void encrypt(struct l_struct_struct_OC_twy_ctx* _125, uint32_t* _126) {
  uint32_t* _127;
  uint32_t _128;
  uint32_t _129;
  uint32_t _129__PHI_TEMPORARY;
  uint8_t llvm_cbe__2e_01;
  uint8_t llvm_cbe__2e_01__PHI_TEMPORARY;
  uint32_t _130;
  uint32_t* _131;
  uint32_t _132;
  uint32_t _133;
  uint32_t* _134;
  uint32_t _135;
  uint32_t _136;
  uint32_t _137;
  uint32_t* _138;
  uint32_t _139;
  uint8_t _140;
  uint32_t _141;
  uint32_t llvm_cbe__2e_lcssa;
  uint32_t llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  uint32_t _142;
  uint32_t* _143;
  uint32_t _144;
  uint32_t _145;
  uint32_t* _146;
  uint32_t _147;
  uint32_t _148;
  uint32_t _149;
  uint32_t* _150;
  uint32_t _151;

  _127 = (&(*((&_125->field0))).array[((int64_t)0)]);
  _128 = *_127;
  _129__PHI_TEMPORARY = _128;   /* for PHI node */
  llvm_cbe__2e_01__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _152;

  do {     /* Syntactic loop '' to make GCC happy */
_152:
  _129 = _129__PHI_TEMPORARY;
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  _130 = *((&(*((&_125->field2))).array[((int64_t)(((int64_t)(int8_t)llvm_cbe__2e_01)))]));
  _131 = (&(*_126));
  _132 = *_131;
  *_131 = (_132 ^ (_129 ^ (_130 << 16)));
  _133 = *((&(*((&_125->field0))).array[((int64_t)1)]));
  _134 = (&_126[((int64_t)1)]);
  _135 = *_134;
  *_134 = (_135 ^ _133);
  _136 = *((&(*((&_125->field0))).array[((int64_t)2)]));
  _137 = *((&(*((&_125->field2))).array[((int64_t)(((int64_t)(int8_t)llvm_cbe__2e_01)))]));
  _138 = (&_126[((int64_t)2)]);
  _139 = *_138;
  *_138 = (_139 ^ (_136 ^ _137));
  rho(_126);
  _140 = llvm_add_u8(llvm_cbe__2e_01, 1);
  _141 = *_127;
  if ((((((int32_t)(((int32_t)(int8_t)_140))) < ((int32_t)11u))&1))) {
    _129__PHI_TEMPORARY = _141;   /* for PHI node */
    llvm_cbe__2e_01__PHI_TEMPORARY = _140;   /* for PHI node */
    goto _152;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = _141;   /* for PHI node */
    goto _153;
  }

  } while (1); /* end of syntactic loop '' */
_153:
  llvm_cbe__2e_lcssa = llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  _142 = *((&(*((&_125->field2))).array[((int64_t)11)]));
  _143 = (&(*_126));
  _144 = *_143;
  *_143 = (_144 ^ (llvm_cbe__2e_lcssa ^ (_142 << 16)));
  _145 = *((&(*((&_125->field0))).array[((int64_t)1)]));
  _146 = (&_126[((int64_t)1)]);
  _147 = *_146;
  *_146 = (_147 ^ _145);
  _148 = *((&(*((&_125->field0))).array[((int64_t)2)]));
  _149 = *((&(*((&_125->field2))).array[((int64_t)11)]));
  _150 = (&_126[((int64_t)2)]);
  _151 = *_150;
  *_150 = (_151 ^ (_148 ^ _149));
  theta(_126);
}


void decrypt(struct l_struct_struct_OC_twy_ctx* _154, uint32_t* _155) {
  uint32_t* _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _158__PHI_TEMPORARY;
  uint8_t llvm_cbe__2e_01;
  uint8_t llvm_cbe__2e_01__PHI_TEMPORARY;
  uint32_t _159;
  uint32_t* _160;
  uint32_t _161;
  uint32_t _162;
  uint32_t* _163;
  uint32_t _164;
  uint32_t _165;
  uint32_t _166;
  uint32_t* _167;
  uint32_t _168;
  uint8_t _169;
  uint32_t _170;
  uint32_t llvm_cbe__2e_lcssa;
  uint32_t llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  uint32_t _171;
  uint32_t* _172;
  uint32_t _173;
  uint32_t _174;
  uint32_t* _175;
  uint32_t _176;
  uint32_t _177;
  uint32_t _178;
  uint32_t* _179;
  uint32_t _180;

  mu(_155);
  _156 = (&(*((&_154->field1))).array[((int64_t)0)]);
  _157 = *_156;
  _158__PHI_TEMPORARY = _157;   /* for PHI node */
  llvm_cbe__2e_01__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _181;

  do {     /* Syntactic loop '' to make GCC happy */
_181:
  _158 = _158__PHI_TEMPORARY;
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  _159 = *((&(*((&_154->field3))).array[((int64_t)(((int64_t)(int8_t)llvm_cbe__2e_01)))]));
  _160 = (&(*_155));
  _161 = *_160;
  *_160 = (_161 ^ (_158 ^ (_159 << 16)));
  _162 = *((&(*((&_154->field1))).array[((int64_t)1)]));
  _163 = (&_155[((int64_t)1)]);
  _164 = *_163;
  *_163 = (_164 ^ _162);
  _165 = *((&(*((&_154->field1))).array[((int64_t)2)]));
  _166 = *((&(*((&_154->field3))).array[((int64_t)(((int64_t)(int8_t)llvm_cbe__2e_01)))]));
  _167 = (&_155[((int64_t)2)]);
  _168 = *_167;
  *_167 = (_168 ^ (_165 ^ _166));
  rho(_155);
  _169 = llvm_add_u8(llvm_cbe__2e_01, 1);
  _170 = *_156;
  if ((((((int32_t)(((int32_t)(int8_t)_169))) < ((int32_t)11u))&1))) {
    _158__PHI_TEMPORARY = _170;   /* for PHI node */
    llvm_cbe__2e_01__PHI_TEMPORARY = _169;   /* for PHI node */
    goto _181;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = _170;   /* for PHI node */
    goto _182;
  }

  } while (1); /* end of syntactic loop '' */
_182:
  llvm_cbe__2e_lcssa = llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  _171 = *((&(*((&_154->field3))).array[((int64_t)11)]));
  _172 = (&(*_155));
  _173 = *_172;
  *_172 = (_173 ^ (llvm_cbe__2e_lcssa ^ (_171 << 16)));
  _174 = *((&(*((&_154->field1))).array[((int64_t)1)]));
  _175 = (&_155[((int64_t)1)]);
  _176 = *_175;
  *_175 = (_176 ^ _174);
  _177 = *((&(*((&_154->field1))).array[((int64_t)2)]));
  _178 = *((&(*((&_154->field3))).array[((int64_t)11)]));
  _179 = (&_155[((int64_t)2)]);
  _180 = *_179;
  *_179 = (_180 ^ (_177 ^ _178));
  theta(_155);
  mu(_155);
}


void twy_key(uint32_t* _183, struct l_struct_struct_OC_twy_ctx* _184) {
  uint32_t _185;
  uint32_t _186;
  uint32_t _187;

  _185 = *((&(*_183)));
  *((&(*((&_184->field0))).array[((int64_t)0)])) = _185;
  *((&(*((&_184->field1))).array[((int64_t)0)])) = _185;
  _186 = *((&_183[((int64_t)1)]));
  *((&(*((&_184->field0))).array[((int64_t)1)])) = _186;
  *((&(*((&_184->field1))).array[((int64_t)1)])) = _186;
  _187 = *((&_183[((int64_t)2)]));
  *((&(*((&_184->field0))).array[((int64_t)2)])) = _187;
  *((&(*((&_184->field1))).array[((int64_t)2)])) = _187;
  theta(((&(*((&_184->field1))).array[((int32_t)0)])));
  mu(((&(*((&_184->field1))).array[((int32_t)0)])));
  rndcon_gen(2827, ((&(*((&_184->field2))).array[((int32_t)0)])));
  rndcon_gen(45489, ((&(*((&_184->field3))).array[((int32_t)0)])));
}


void twy_enc(struct l_struct_struct_OC_twy_ctx* _188, uint32_t* _189, uint32_t _190) {
  uint32_t llvm_cbe__2e_03;
  uint32_t llvm_cbe__2e_03__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_012;
  uint32_t* llvm_cbe__2e_012__PHI_TEMPORARY;
  uint32_t _191;

  if ((((((int32_t)0u) < ((int32_t)_190))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _192;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe__2e_03__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = _189;   /* for PHI node */
  goto _193;

  do {     /* Syntactic loop '' to make GCC happy */
_193:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  encrypt(_188, llvm_cbe__2e_012);
  _191 = llvm_add_u32(llvm_cbe__2e_03, 1);
  if ((((((int32_t)_191) < ((int32_t)_190))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = _191;   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = ((&llvm_cbe__2e_012[((int64_t)3)]));   /* for PHI node */
    goto _193;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  goto _192;

_192:
  return;
}


void twy_dec(struct l_struct_struct_OC_twy_ctx* _194, uint32_t* _195, uint32_t _196) {
  uint32_t llvm_cbe__2e_03;
  uint32_t llvm_cbe__2e_03__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_012;
  uint32_t* llvm_cbe__2e_012__PHI_TEMPORARY;
  uint32_t _197;

  if ((((((int32_t)0u) < ((int32_t)_196))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _198;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe__2e_03__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = _195;   /* for PHI node */
  goto _199;

  do {     /* Syntactic loop '' to make GCC happy */
_199:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  decrypt(_194, llvm_cbe__2e_012);
  _197 = llvm_add_u32(llvm_cbe__2e_03, 1);
  if ((((((int32_t)_197) < ((int32_t)_196))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = _197;   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = ((&llvm_cbe__2e_012[((int64_t)3)]));   /* for PHI node */
    goto _199;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  goto _198;

_198:
  return;
}


void main(void) {
  struct l_struct_struct_OC_twy_ctx _200;    /* Address-exposed local */

  twy_key(((&key.array[((int32_t)0)])), (&_200));
  encrypt((&_200), ((&in.array[((int32_t)0)])));
}

