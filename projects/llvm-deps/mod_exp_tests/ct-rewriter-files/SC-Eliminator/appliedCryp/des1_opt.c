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
struct l_array_32_uint32_t;
struct l_struct_struct_OC_des_ctx;
struct l_array_56_uint8_t;
struct l_array_8_uint16_t;
struct l_array_16_uint8_t;
struct l_array_48_uint8_t;
struct l_array_24_uint32_t;
struct l_array_32_uint8_t;
struct l_array_8_uint8_t;
struct l_array_64_uint32_t;
struct l_array_2_uint32_t;

/* Function definitions */
typedef void l_fptr_6(struct l_struct_struct_OC_des_ctx*, uint8_t*, uint32_t);

typedef void l_fptr_4(uint8_t*, uint8_t*);

typedef void l_fptr_2(uint32_t*);

typedef uint8_t* l_fptr_9(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_3(uint32_t*, uint8_t*);

typedef void l_fptr_5(uint32_t*, uint32_t*);

typedef void l_fptr_8(uint8_t*, uint8_t, uint64_t, bool);

typedef uint32_t l_fptr_7(void);

typedef void l_fptr_1(uint8_t*, uint16_t);


/* Types Definitions */
struct l_array_32_uint32_t {
  uint32_t array[32];
};
struct l_struct_struct_OC_des_ctx {
  struct l_array_32_uint32_t field0;
  struct l_array_32_uint32_t field1;
};
struct l_array_56_uint8_t {
  uint8_t array[56];
};
struct l_array_8_uint16_t {
  uint16_t array[8];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_24_uint32_t {
  uint32_t array[24];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_64_uint32_t {
  uint32_t array[64];
};
struct l_array_2_uint32_t {
  uint32_t array[2];
};

/* External Global Variable Declarations */

/* Function Declarations */
void deskey(uint8_t*, int16_t) __ATTRIBUTELIST__((nothrow));
static void cookey(uint32_t*) __ATTRIBUTELIST__((nothrow));
void unscrun(uint32_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void des(uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
static void desfunc(uint32_t*, uint32_t*) __ATTRIBUTELIST__((nothrow));
void des_enc(struct l_struct_struct_OC_des_ctx*, uint8_t*, uint32_t) __ATTRIBUTELIST__((nothrow));
void des_dec(struct l_struct_struct_OC_des_ctx*, uint8_t*, uint32_t) __ATTRIBUTELIST__((nothrow));
int main(void) __ATTRIBUTELIST__((nothrow));
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_56_uint8_t pc1 __attribute__((aligned(64))) = { "80( \x18\x10\x08\x00\x39\x31)!\x19\x11\t\x01:2*\"\x1A\x12\n\x02;3+#>6.&\x1E\x16\x0E\x06=5-%\x1D\x15\r\x05<4,$\x1C\x14\x0C\x04\x1B\x13\v\x03" };
static __MSALIGN__(64) struct l_array_8_uint16_t bytebit __attribute__((aligned(64))) = { { 128, 64, 32, 16, 8, 4, 2, 1 } };
static __MSALIGN__(64) struct l_array_16_uint8_t totrot __attribute__((aligned(64))) = { "\x01\x02\x04\x06\x08\n\x0C\x0E\x0F\x11\x13\x15\x17\x19\x1B\x1C" };
static __MSALIGN__(64) struct l_array_48_uint8_t pc2 __attribute__((aligned(64))) = { "\r\x10\n\x17\x00\x04\x02\x1B\x0E\x05\x14\t\x16\x12\v\x03\x19\a\x0F\x06\x1A\x13\x0C\x01(3\x1E$.6\x1D'2, /+0&7!4-)1#\x1C\x1F" };
static __MSALIGN__(64) struct l_array_24_uint32_t bigbyte __attribute__((aligned(64))) = { { 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 } };
static __MSALIGN__(64) struct l_array_32_uint32_t KnL __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_array_32_uint8_t in_key __attribute__((aligned(64))) = { "\x15\x87\xB9in\x84\x92\xE7\xE1-\x92\x13\x8A\r\x1F*+\x87\xB8m\x1B\x45\x63\x44w\x03\x93g*\xA2\x36R" };
static __MSALIGN__(64) struct l_array_8_uint8_t in __attribute__((aligned(64))) = { "\x01#Eg\x89\xAB\xCD\xE7" };
static __MSALIGN__(64) struct l_array_8_uint8_t out __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_array_64_uint32_t SP7 __attribute__((aligned(64))) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP5 __attribute__((aligned(64))) = { { 256, 34078976, 34078720, 1107296512u, 524288, 256, 1073741824u, 34078720, 1074266368u, 524288, 33554688, 1074266368u, 1107296512u, 1107820544u, 524544, 1073741824u, 33554432, 1074266112u, 1074266112u, 0, 1073742080u, 1107820800u, 1107820800u, 33554688, 1107820544u, 1073742080u, 0, 1107296256u, 34078976, 33554432, 1107296256u, 524544, 524288, 1107296512u, 256, 33554432, 1073741824u, 34078720, 1107296512u, 1074266368u, 33554688, 1073741824u, 1107820544u, 34078976, 1074266368u, 256, 33554432, 1107820544u, 1107820800u, 524544, 1107296256u, 1107820800u, 34078720, 0, 1074266112u, 1107296256u, 524544, 33554688, 1073742080u, 524288, 0, 1074266112u, 34078976, 1073742080u } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP3 __attribute__((aligned(64))) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP1 __attribute__((aligned(64))) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP8 __attribute__((aligned(64))) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP6 __attribute__((aligned(64))) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP4 __attribute__((aligned(64))) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static __MSALIGN__(64) struct l_array_64_uint32_t SP2 __attribute__((aligned(64))) = { { 2148565024u, 2147516416u, 32768, 1081376, 1048576, 32, 2148532256u, 2147516448u, 2147483680u, 2148565024u, 2148564992u, 2147483648u, 2147516416u, 1048576, 32, 2148532256u, 1081344, 1048608, 2147516448u, 0, 2147483648u, 32768, 1081376, 2148532224u, 1048608, 2147483680u, 0, 1081344, 32800, 2148564992u, 2148532224u, 32800, 0, 1081376, 2148532256u, 1048576, 2147516448u, 2148532224u, 2148564992u, 32768, 2148532224u, 2147516416u, 32, 2148565024u, 1081376, 32, 32768, 2147483648u, 32800, 2148564992u, 1048576, 2147483680u, 1048608, 2147516448u, 2147483680u, 1048608, 1081344, 0, 2147516416u, 32800, 2147483648u, 2148532256u, 2148565024u, 1081344 } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
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
static __forceinline uint32_t llvm_sub_u32(uint32_t a, uint32_t b) {
  uint32_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_srem_u64(int64_t a, int64_t b) {
  uint64_t r = a % b;
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
static __forceinline uint64_t llvm_ashr_u64(int64_t a, int64_t b) {
  uint64_t r = a >> b;
  return r;
}


/* Function Bodies */

void deskey(uint8_t* _1, int16_t _2) {
  __MSALIGN__(16) struct l_array_56_uint8_t _3 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_56_uint8_t _4 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_32_uint32_t _5 __attribute__((aligned(16)));    /* Address-exposed local */
  uint32_t llvm_cbe__2e_01_2e_ph;
  uint32_t llvm_cbe__2e_01_2e_ph__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_029;
  uint32_t llvm_cbe__2e_029__PHI_TEMPORARY;
  uint8_t _6;
  uint32_t _7;
  uint8_t _8;
  uint16_t _9;
  uint32_t _10;
  uint32_t llvm_cbe__2e_018;
  uint32_t llvm_cbe__2e_018__PHI_TEMPORARY;
  uint32_t _11;
  uint32_t _12;
  uint32_t llvm_cbe__2e_2_2e_ph;
  uint32_t llvm_cbe__2e_2_2e_ph__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_15;
  uint32_t llvm_cbe__2e_15__PHI_TEMPORARY;
  uint8_t _13;
  uint32_t _14;
  uint8_t _15;
  uint8_t _16;
  uint32_t _17;
  uint32_t llvm_cbe__2e_3_2e_ph;
  uint32_t llvm_cbe__2e_3_2e_ph__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_26;
  uint32_t llvm_cbe__2e_26__PHI_TEMPORARY;
  uint8_t _18;
  uint32_t _19;
  uint8_t _20;
  uint8_t _21;
  uint32_t _22;
  uint32_t llvm_cbe__2e_37;
  uint32_t llvm_cbe__2e_37__PHI_TEMPORARY;
  uint8_t _23;
  uint8_t _24;
  uint32_t _25;
  uint32_t* _26;
  uint32_t _27;
  uint32_t _28;
  uint8_t _29;
  uint8_t _30;
  uint32_t _31;
  uint32_t* _32;
  uint32_t _33;
  uint32_t _34;
  uint32_t _35;
  uint32_t _36;

  llvm_cbe__2e_029__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _37;

llvm_cbe__2e_preheader4:
  llvm_cbe__2e_01_2e_ph = llvm_cbe__2e_01_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_018__PHI_TEMPORARY = llvm_cbe__2e_01_2e_ph;   /* for PHI node */
  goto _38;

  do {     /* Syntactic loop '' to make GCC happy */
_37:
  llvm_cbe__2e_029 = llvm_cbe__2e_029__PHI_TEMPORARY;
  _6 = *((&pc1.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_029)))]));
  _7 = ((uint32_t)(uint8_t)_6);
  _8 = *((&_1[((int64_t)(((int64_t)(int32_t)(llvm_ashr_u32(_7, 3)))))]));
  _9 = *((&bytebit.array[((int64_t)(((int64_t)(int32_t)(_7 & 7))))]));
  *((&_3.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_029)))])) = (((uint8_t)(llvm_select_u32((((((((uint32_t)(uint8_t)_8)) & (((uint32_t)(uint16_t)_9))) != 0u)&1)), 1, 0))));
  _10 = llvm_add_u32(llvm_cbe__2e_029, 1);
  if ((((((int32_t)_10) < ((int32_t)56u))&1))) {
    llvm_cbe__2e_029__PHI_TEMPORARY = _10;   /* for PHI node */
    goto _37;
  } else {
    llvm_cbe__2e_01_2e_ph__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_38:
  llvm_cbe__2e_018 = llvm_cbe__2e_018__PHI_TEMPORARY;
  _11 = (llvm_select_u32(((((((int32_t)(int16_t)_2)) == 1u)&1)), (llvm_sub_u32(15, llvm_cbe__2e_018)), llvm_cbe__2e_018)) << 1;
  _12 = llvm_add_u32(_11, 1);
  *((&_5.array[((int64_t)(((int64_t)(int32_t)_12)))])) = 0;
  *((&_5.array[((int64_t)(((int64_t)(int32_t)_11)))])) = 0;
  llvm_cbe__2e_15__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _39;

  do {     /* Syntactic loop '' to make GCC happy */
_39:
  llvm_cbe__2e_15 = llvm_cbe__2e_15__PHI_TEMPORARY;
  _13 = *((&totrot.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_018)))]));
  _14 = llvm_add_u32(llvm_cbe__2e_15, (((uint32_t)(uint8_t)_13)));
  if ((((((int32_t)_14) < ((int32_t)28u))&1))) {
    goto _40;
  } else {
    goto _41;
  }

_41:
  _16 = *((&_3.array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_14, 28)))))]));
  *((&_4.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_15)))])) = _16;
  goto _42;

_40:
  _15 = *((&_3.array[((int64_t)(((int64_t)(int32_t)_14)))]));
  *((&_4.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_15)))])) = _15;
  goto _42;

_42:
  _17 = llvm_add_u32(llvm_cbe__2e_15, 1);
  if ((((((int32_t)_17) < ((int32_t)28u))&1))) {
    llvm_cbe__2e_15__PHI_TEMPORARY = _17;   /* for PHI node */
    goto _39;
  } else {
    llvm_cbe__2e_2_2e_ph__PHI_TEMPORARY = 28;   /* for PHI node */
    goto llvm_cbe__2e_preheader3;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader3:
  llvm_cbe__2e_2_2e_ph = llvm_cbe__2e_2_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_26__PHI_TEMPORARY = llvm_cbe__2e_2_2e_ph;   /* for PHI node */
  goto _43;

  do {     /* Syntactic loop '' to make GCC happy */
_43:
  llvm_cbe__2e_26 = llvm_cbe__2e_26__PHI_TEMPORARY;
  _18 = *((&totrot.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_018)))]));
  _19 = llvm_add_u32(llvm_cbe__2e_26, (((uint32_t)(uint8_t)_18)));
  if ((((((int32_t)_19) < ((int32_t)56u))&1))) {
    goto _44;
  } else {
    goto _45;
  }

_45:
  _21 = *((&_3.array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_19, 28)))))]));
  *((&_4.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_26)))])) = _21;
  goto _46;

_44:
  _20 = *((&_3.array[((int64_t)(((int64_t)(int32_t)_19)))]));
  *((&_4.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_26)))])) = _20;
  goto _46;

_46:
  _22 = llvm_add_u32(llvm_cbe__2e_26, 1);
  if ((((((int32_t)_22) < ((int32_t)56u))&1))) {
    llvm_cbe__2e_26__PHI_TEMPORARY = _22;   /* for PHI node */
    goto _43;
  } else {
    llvm_cbe__2e_3_2e_ph__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader:
  llvm_cbe__2e_3_2e_ph = llvm_cbe__2e_3_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_37__PHI_TEMPORARY = llvm_cbe__2e_3_2e_ph;   /* for PHI node */
  goto _47;

  do {     /* Syntactic loop '' to make GCC happy */
_47:
  llvm_cbe__2e_37 = llvm_cbe__2e_37__PHI_TEMPORARY;
  _23 = *((&pc2.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_37)))]));
  _24 = *((&_4.array[((int64_t)(((uint64_t)(uint8_t)_23)))]));
  goto _48;

_48:
  _25 = *((&bigbyte.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_37)))]));
  _26 = (&_5.array[((int64_t)(((int64_t)(int32_t)_11)))]);
  _27 = *_26;
  _28 = *_26;
  *_26 = (llvm_select_u32((((_24 != ((uint8_t)0))&1)), (_27 | _25), _28));
  goto _49;

_49:
  _29 = *((&pc2.array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(llvm_cbe__2e_37, 24)))))]));
  _30 = *((&_4.array[((int64_t)(((uint64_t)(uint8_t)_29)))]));
  goto _50;

_50:
  _31 = *((&bigbyte.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_37)))]));
  _32 = (&_5.array[((int64_t)(((int64_t)(int32_t)_12)))]);
  _33 = *_32;
  _34 = *_32;
  *_32 = (llvm_select_u32((((_30 != ((uint8_t)0))&1)), (_33 | _31), _34));
  goto _51;

_51:
  _35 = llvm_add_u32(llvm_cbe__2e_37, 1);
  if ((((((int32_t)_35) < ((int32_t)24u))&1))) {
    llvm_cbe__2e_37__PHI_TEMPORARY = _35;   /* for PHI node */
    goto _47;
  } else {
    goto _52;
  }

  } while (1); /* end of syntactic loop '' */
_52:
  _36 = llvm_add_u32(llvm_cbe__2e_018, 1);
  if ((((((int32_t)_36) < ((int32_t)16u))&1))) {
    llvm_cbe__2e_018__PHI_TEMPORARY = _36;   /* for PHI node */
    goto _38;
  } else {
    goto _53;
  }

  } while (1); /* end of syntactic loop '' */
_53:
  cookey(((&_5.array[((int32_t)0)])));
}


static void cookey(uint32_t* _54) {
  __MSALIGN__(16) struct l_array_32_uint32_t _55 __attribute__((aligned(16)));    /* Address-exposed local */
  uint32_t* _56;
  uint32_t llvm_cbe__2e_07;
  uint32_t llvm_cbe__2e_07__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_026;
  uint32_t* llvm_cbe__2e_026__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_035;
  uint32_t* llvm_cbe__2e_035__PHI_TEMPORARY;
  uint32_t* _57;
  uint32_t _58;
  uint32_t _59;
  uint32_t _60;
  uint32_t _61;
  uint32_t _62;
  uint32_t _63;
  uint32_t* _64;
  uint32_t _65;
  uint32_t _66;
  uint32_t _67;
  uint32_t _68;
  uint32_t _69;
  uint32_t _70;
  uint32_t _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t* _74;
  uint32_t llvm_cbe__2e_014;
  uint32_t llvm_cbe__2e_014__PHI_TEMPORARY;
  uint32_t _75;
  uint32_t _76;
  uint32_t _77;
  uint32_t _78;
  uint32_t _79;
  uint32_t _80;
  uint32_t _81;
  uint32_t _82;

  _56 = (&_55.array[((int32_t)0)]);
  llvm_cbe__2e_07__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_026__PHI_TEMPORARY = _54;   /* for PHI node */
  llvm_cbe__2e_035__PHI_TEMPORARY = _56;   /* for PHI node */
  goto _83;

  do {     /* Syntactic loop '' to make GCC happy */
_83:
  llvm_cbe__2e_07 = llvm_cbe__2e_07__PHI_TEMPORARY;
  llvm_cbe__2e_026 = llvm_cbe__2e_026__PHI_TEMPORARY;
  llvm_cbe__2e_035 = llvm_cbe__2e_035__PHI_TEMPORARY;
  _57 = (&llvm_cbe__2e_026[((int32_t)1)]);
  _58 = *llvm_cbe__2e_026;
  *llvm_cbe__2e_035 = (((uint32_t)(((((uint64_t)(uint32_t)_58)) & 16515072) << 6)));
  _59 = *llvm_cbe__2e_026;
  _60 = *llvm_cbe__2e_035;
  *llvm_cbe__2e_035 = (((uint32_t)((((uint64_t)(uint32_t)_60)) | (((((uint64_t)(uint32_t)_59)) & 4032) << 10))));
  _61 = *_57;
  _62 = *llvm_cbe__2e_035;
  *llvm_cbe__2e_035 = (((uint32_t)((((uint64_t)(uint32_t)_62)) | (llvm_ashr_u64(((((uint64_t)(uint32_t)_61)) & 16515072), 10)))));
  _63 = *_57;
  _64 = (&llvm_cbe__2e_035[((int32_t)1)]);
  _65 = *llvm_cbe__2e_035;
  *llvm_cbe__2e_035 = (((uint32_t)((((uint64_t)(uint32_t)_65)) | (llvm_ashr_u64(((((uint64_t)(uint32_t)_63)) & 4032), 6)))));
  _66 = *llvm_cbe__2e_026;
  *_64 = (((uint32_t)(((((uint64_t)(uint32_t)_66)) & 258048) << 12)));
  _67 = *llvm_cbe__2e_026;
  _68 = *_64;
  *_64 = (((uint32_t)((((uint64_t)(uint32_t)_68)) | (((((uint64_t)(uint32_t)_67)) & 63) << 16))));
  _69 = *_57;
  _70 = *_64;
  *_64 = (((uint32_t)((((uint64_t)(uint32_t)_70)) | (llvm_ashr_u64(((((uint64_t)(uint32_t)_69)) & 258048), 4)))));
  _71 = *_57;
  _72 = *_64;
  *_64 = (((uint32_t)((((uint64_t)(uint32_t)_72)) | ((((uint64_t)(uint32_t)_71)) & 63))));
  _73 = llvm_add_u32(llvm_cbe__2e_07, 1);
  if ((((((int32_t)_73) < ((int32_t)16u))&1))) {
    llvm_cbe__2e_07__PHI_TEMPORARY = _73;   /* for PHI node */
    llvm_cbe__2e_026__PHI_TEMPORARY = ((&_57[((int32_t)1)]));   /* for PHI node */
    llvm_cbe__2e_035__PHI_TEMPORARY = ((&_64[((int32_t)1)]));   /* for PHI node */
    goto _83;
  } else {
    goto _84;
  }

  } while (1); /* end of syntactic loop '' */
_84:
  _74 = (&_55.array[((int32_t)0)]);
  llvm_cbe__2e_014__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _85;

  do {     /* Syntactic loop '' to make GCC happy */
_85:
  llvm_cbe__2e_014 = llvm_cbe__2e_014__PHI_TEMPORARY;
  _75 = *((&_74[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_014)))]));
  *((&KnL.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_014)))])) = _75;
  _76 = llvm_add_u32(llvm_cbe__2e_014, 1);
  _77 = *((&_74[((int64_t)(((int64_t)(int32_t)_76)))]));
  *((&KnL.array[((int64_t)(((int64_t)(int32_t)_76)))])) = _77;
  _78 = llvm_add_u32(_76, 1);
  _79 = *((&_74[((int64_t)(((int64_t)(int32_t)_78)))]));
  *((&KnL.array[((int64_t)(((int64_t)(int32_t)_78)))])) = _79;
  _80 = llvm_add_u32(_78, 1);
  _81 = *((&_74[((int64_t)(((int64_t)(int32_t)_80)))]));
  *((&KnL.array[((int64_t)(((int64_t)(int32_t)_80)))])) = _81;
  _82 = llvm_add_u32(_80, 1);
  if ((((((int32_t)_82) < ((int32_t)32u))&1))) {
    llvm_cbe__2e_014__PHI_TEMPORARY = _82;   /* for PHI node */
    goto _85;
  } else {
    goto _86;
  }

  } while (1); /* end of syntactic loop '' */
_86:
  return;
}


void unscrun(uint32_t* _87, uint8_t* _88) {
  uint32_t _89;
  uint8_t* _90;
  uint32_t _91;
  uint8_t* _92;
  uint32_t _93;
  uint8_t* _94;
  uint32_t* _95;
  uint32_t _96;
  uint8_t* _97;
  uint32_t _98;
  uint8_t* _99;
  uint32_t _100;
  uint8_t* _101;
  uint32_t _102;
  uint32_t _103;

  _89 = *_87;
  _90 = (&_88[((int32_t)1)]);
  *_88 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_89, 24)))) & 255)));
  _91 = *_87;
  _92 = (&_90[((int32_t)1)]);
  *_90 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_91, 16)))) & 255)));
  _93 = *_87;
  _94 = (&_92[((int32_t)1)]);
  *_92 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_93, 8)))) & 255)));
  _95 = (&_87[((int32_t)1)]);
  _96 = *_87;
  _97 = (&_94[((int32_t)1)]);
  *_94 = (((uint8_t)((((uint64_t)(uint32_t)_96)) & 255)));
  _98 = *_95;
  _99 = (&_97[((int32_t)1)]);
  *_97 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_98, 24)))) & 255)));
  _100 = *_95;
  _101 = (&_99[((int32_t)1)]);
  *_99 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_100, 16)))) & 255)));
  _102 = *_95;
  *_101 = (((uint8_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_102, 8)))) & 255)));
  _103 = *_95;
  *((&_101[((int32_t)1)])) = (((uint8_t)((((uint64_t)(uint32_t)_103)) & 255)));
}


void des(uint8_t* _104, uint8_t* _105) {
  struct l_array_2_uint32_t _106;    /* Address-exposed local */
  uint32_t* _107;
  uint8_t* _108;
  uint8_t _109;
  uint8_t* _110;
  uint8_t _111;
  uint32_t _112;
  uint8_t* _113;
  uint8_t _114;
  uint32_t _115;
  uint8_t* _116;
  uint8_t _117;
  uint32_t* _118;
  uint32_t _119;
  uint8_t* _120;
  uint8_t _121;
  uint8_t* _122;
  uint8_t _123;
  uint32_t _124;
  uint8_t _125;
  uint32_t _126;
  uint8_t _127;
  uint32_t _128;

  _107 = (&_106.array[((int32_t)0)]);
  _108 = (&_104[((int32_t)1)]);
  _109 = *_104;
  *_107 = (((uint32_t)(((((uint64_t)(uint8_t)_109)) & 255) << 24)));
  _110 = (&_108[((int32_t)1)]);
  _111 = *_108;
  _112 = *_107;
  *_107 = (((uint32_t)((((uint64_t)(uint32_t)_112)) | (((((uint64_t)(uint8_t)_111)) & 255) << 16))));
  _113 = (&_110[((int32_t)1)]);
  _114 = *_110;
  _115 = *_107;
  *_107 = (((uint32_t)((((uint64_t)(uint32_t)_115)) | (((((uint64_t)(uint8_t)_114)) & 255) << 8))));
  _116 = (&_113[((int32_t)1)]);
  _117 = *_113;
  _118 = (&_107[((int32_t)1)]);
  _119 = *_107;
  *_107 = (((uint32_t)((((uint64_t)(uint32_t)_119)) | ((((uint64_t)(uint8_t)_117)) & 255))));
  _120 = (&_116[((int32_t)1)]);
  _121 = *_116;
  *_118 = (((uint32_t)(((((uint64_t)(uint8_t)_121)) & 255) << 24)));
  _122 = (&_120[((int32_t)1)]);
  _123 = *_120;
  _124 = *_118;
  *_118 = (((uint32_t)((((uint64_t)(uint32_t)_124)) | (((((uint64_t)(uint8_t)_123)) & 255) << 16))));
  _125 = *_122;
  _126 = *_118;
  *_118 = (((uint32_t)((((uint64_t)(uint32_t)_126)) | (((((uint64_t)(uint8_t)_125)) & 255) << 8))));
  _127 = *((&_122[((int32_t)1)]));
  _128 = *_118;
  *_118 = (((uint32_t)((((uint64_t)(uint32_t)_128)) | ((((uint64_t)(uint8_t)_127)) & 255))));
  desfunc(((&KnL.array[((int32_t)0)])), ((&_106.array[((int32_t)0)])));
  unscrun(((&_106.array[((int32_t)0)])), _105);
}


static void desfunc(uint32_t* _129, uint32_t* _130) {
  uint32_t _131;
  uint32_t _132;
  uint32_t _133;
  uint32_t _134;
  uint32_t _135;
  uint32_t _136;
  uint32_t _137;
  uint32_t _138;
  uint32_t _139;
  uint32_t _140;
  uint32_t _141;
  uint32_t _142;
  uint32_t _143;
  uint32_t _144;
  uint32_t _145;
  uint32_t _146;
  uint32_t _147;
  uint32_t _148;
  uint32_t _149;
  uint32_t* _150;
  uint32_t _151;
  uint32_t _152;
  uint64_t _153;
  uint64_t _154;
  uint32_t _155;
  uint64_t _156;
  uint32_t _157;
  uint64_t _158;
  uint32_t _159;
  uint64_t _160;
  uint32_t _161;
  uint64_t _162;
  uint64_t _163;
  uint32_t _164;
  uint64_t _165;
  uint32_t _166;
  uint64_t _167;
  uint32_t _168;
  uint64_t _169;
  uint32_t _170;
  uint64_t _171;
  uint64_t _172;
  uint32_t _173;
  uint64_t _174;
  uint32_t _175;
  uint64_t _176;
  uint32_t _177;
  uint64_t _178;
  uint32_t _179;
  uint64_t _180;
  uint64_t _181;
  uint32_t _182;
  uint64_t _183;
  uint32_t _184;
  uint64_t _185;
  uint32_t _186;
  uint64_t _187;
  uint32_t _188;
  uint32_t* _189;
  uint32_t _190;
  uint32_t _191;
  uint64_t _192;
  uint64_t _193;
  uint32_t _194;
  uint64_t _195;
  uint32_t _196;
  uint64_t _197;
  uint32_t _198;
  uint64_t _199;
  uint32_t _200;
  uint64_t _201;
  uint64_t _202;
  uint32_t _203;
  uint64_t _204;
  uint32_t _205;
  uint64_t _206;
  uint32_t _207;
  uint64_t _208;
  uint32_t _209;
  uint64_t _210;
  uint64_t _211;
  uint32_t _212;
  uint64_t _213;
  uint32_t _214;
  uint64_t _215;
  uint32_t _216;
  uint64_t _217;
  uint32_t _218;
  uint64_t _219;
  uint64_t _220;
  uint32_t _221;
  uint64_t _222;
  uint32_t _223;
  uint64_t _224;
  uint32_t _225;
  uint64_t _226;
  uint32_t _227;
  uint32_t _228;
  uint32_t* _229;
  uint32_t _230;
  uint32_t _231;
  uint32_t _232;
  uint32_t _233;
  uint32_t _234;
  uint32_t _235;
  uint32_t* _236;
  uint32_t _237;
  uint32_t _238;
  uint32_t _239;
  uint32_t _240;
  uint32_t _241;
  uint32_t _242;
  uint32_t _243;
  uint32_t* _244;
  uint32_t _245;
  uint32_t _246;
  uint32_t _247;
  uint32_t _248;
  uint32_t _249;
  uint32_t _250;
  uint32_t* _251;
  uint32_t _252;
  uint32_t _253;
  uint32_t _254;
  uint32_t _255;
  uint32_t _256;
  uint32_t _257;
  uint32_t _258;
  uint32_t* _259;
  uint32_t _260;
  uint32_t _261;
  uint32_t _262;
  uint32_t _263;
  uint32_t _264;
  uint32_t _265;
  uint32_t* _266;
  uint32_t _267;
  uint32_t _268;
  uint32_t _269;
  uint32_t _270;
  uint32_t _271;
  uint32_t _272;
  uint32_t _273;
  uint32_t* _274;
  uint32_t _275;
  uint32_t _276;
  uint32_t _277;
  uint32_t _278;
  uint32_t _279;
  uint32_t _280;
  uint32_t* _281;
  uint32_t _282;
  uint32_t _283;
  uint32_t _284;
  uint32_t _285;
  uint32_t _286;
  uint32_t _287;
  uint32_t _288;
  uint32_t* _289;
  uint32_t _290;
  uint32_t _291;
  uint32_t _292;
  uint32_t _293;
  uint32_t _294;
  uint32_t _295;
  uint32_t* _296;
  uint32_t _297;
  uint32_t _298;
  uint32_t _299;
  uint32_t _300;
  uint32_t _301;
  uint32_t _302;
  uint32_t _303;
  uint32_t* _304;
  uint32_t _305;
  uint32_t _306;
  uint32_t _307;
  uint32_t _308;
  uint32_t _309;
  uint32_t _310;
  uint32_t* _311;
  uint32_t _312;
  uint32_t _313;
  uint32_t _314;
  uint32_t _315;
  uint32_t _316;
  uint32_t _317;
  uint32_t _318;
  uint32_t* _319;
  uint32_t _320;
  uint32_t _321;
  uint32_t _322;
  uint32_t _323;
  uint32_t _324;
  uint32_t _325;
  uint32_t* _326;
  uint32_t _327;
  uint32_t _328;
  uint32_t _329;
  uint32_t _330;
  uint32_t _331;
  uint32_t _332;
  uint32_t _333;
  uint32_t* _334;
  uint32_t _335;
  uint32_t _336;
  uint32_t _337;
  uint32_t _338;
  uint32_t _339;
  uint32_t _340;
  uint32_t* _341;
  uint32_t _342;
  uint32_t _343;
  uint32_t _344;
  uint32_t _345;
  uint32_t _346;
  uint32_t _347;
  uint32_t _348;
  uint32_t* _349;
  uint32_t _350;
  uint32_t _351;
  uint32_t _352;
  uint32_t _353;
  uint32_t _354;
  uint32_t _355;
  uint32_t* _356;
  uint32_t _357;
  uint32_t _358;
  uint32_t _359;
  uint32_t _360;
  uint32_t _361;
  uint32_t _362;
  uint32_t _363;
  uint32_t* _364;
  uint32_t _365;
  uint32_t _366;
  uint32_t _367;
  uint32_t _368;
  uint32_t _369;
  uint32_t _370;
  uint32_t* _371;
  uint32_t _372;
  uint32_t _373;
  uint32_t _374;
  uint32_t _375;
  uint32_t _376;
  uint32_t _377;
  uint32_t _378;
  uint32_t* _379;
  uint32_t _380;
  uint32_t _381;
  uint32_t _382;
  uint32_t _383;
  uint32_t _384;
  uint32_t _385;
  uint32_t* _386;
  uint32_t _387;
  uint32_t _388;
  uint32_t _389;
  uint32_t _390;
  uint32_t _391;
  uint32_t _392;
  uint32_t _393;
  uint32_t* _394;
  uint32_t _395;
  uint32_t _396;
  uint32_t _397;
  uint32_t _398;
  uint32_t _399;
  uint32_t _400;
  uint32_t* _401;
  uint32_t _402;
  uint32_t _403;
  uint32_t _404;
  uint32_t _405;
  uint32_t _406;
  uint32_t _407;
  uint32_t _408;
  uint32_t* _409;
  uint32_t _410;
  uint32_t _411;
  uint32_t _412;
  uint32_t _413;
  uint32_t _414;
  uint32_t _415;
  uint32_t* _416;
  uint32_t _417;
  uint32_t _418;
  uint32_t _419;
  uint32_t _420;
  uint32_t _421;
  uint32_t _422;
  uint32_t _423;
  uint32_t* _424;
  uint32_t _425;
  uint32_t _426;
  uint32_t _427;
  uint32_t _428;
  uint32_t _429;
  uint32_t _430;
  uint32_t* _431;
  uint32_t _432;
  uint32_t _433;
  uint32_t _434;
  uint32_t _435;
  uint32_t _436;
  uint32_t _437;
  uint32_t _438;
  uint32_t _439;
  uint32_t _440;
  uint32_t _441;
  uint32_t _442;
  uint32_t _443;
  uint32_t _444;
  uint32_t _445;
  uint32_t _446;
  uint32_t _447;
  uint32_t _448;
  uint32_t _449;
  uint32_t _450;
  uint32_t _451;
  uint32_t _452;
  uint32_t _453;
  uint32_t _454;
  uint32_t _455;
  uint32_t _456;
  uint32_t _457;
  uint32_t _458;
  uint32_t _459;
  uint32_t _460;
  uint32_t _461;
  uint32_t _462;
  uint32_t _463;
  uint32_t _464;
  uint32_t _465;
  uint32_t _466;

  _131 = *((&(*_130)));
  _132 = *((&_130[((int64_t)1)]));
  _133 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_131, 4)) ^ _132))) & 252645135));
  _134 = _132 ^ _133;
  _135 = _131 ^ (_133 << 4);
  _136 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_135, 16)) ^ _134))) & 65535));
  _137 = _134 ^ _136;
  _138 = _135 ^ (_136 << 16);
  _139 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_137, 2)) ^ _138))) & 858993459));
  _140 = _138 ^ _139;
  _141 = _137 ^ (_139 << 2);
  _142 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_141, 8)) ^ _140))) & 16711935));
  _143 = _140 ^ _142;
  _144 = _141 ^ (_142 << 8);
  _145 = ((uint32_t)(((((uint64_t)(uint32_t)(_144 << 1))) | ((((uint64_t)(uint32_t)(llvm_lshr_u32(_144, 31)))) & 1)) & INT64_C(4294967295)));
  _146 = ((uint32_t)((((uint64_t)(uint32_t)(_143 ^ _145))) & INT64_C(2863311530)));
  _147 = _143 ^ _146;
  _148 = _145 ^ _146;
  _149 = ((uint32_t)(((((uint64_t)(uint32_t)(_147 << 1))) | ((((uint64_t)(uint32_t)(llvm_lshr_u32(_147, 31)))) & 1)) & INT64_C(4294967295)));
  goto _467;

_467:
  _150 = (&_129[((int32_t)1)]);
  _151 = *_129;
  _152 = ((_148 << 28) | (llvm_lshr_u32(_148, 4))) ^ _151;
  _153 = (((uint64_t)(uint32_t)_152)) & 63;
  _154 = llvm_srem_u64(_153, 16);
  _155 = *((&SP7.array[((int64_t)_154)]));
  _156 = llvm_add_u64(_154, 16);
  _157 = *((&SP7.array[((int64_t)_156)]));
  _158 = llvm_add_u64(_156, 16);
  _159 = *((&SP7.array[((int64_t)_158)]));
  _160 = llvm_add_u64(_158, 16);
  _161 = *((&SP7.array[((int64_t)_160)]));
  _162 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_152, 8)))) & 63;
  _163 = llvm_srem_u64(_162, 16);
  _164 = *((&SP5.array[((int64_t)_163)]));
  _165 = llvm_add_u64(_163, 16);
  _166 = *((&SP5.array[((int64_t)_165)]));
  _167 = llvm_add_u64(_165, 16);
  _168 = *((&SP5.array[((int64_t)_167)]));
  _169 = llvm_add_u64(_167, 16);
  _170 = *((&SP5.array[((int64_t)_169)]));
  _171 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_152, 16)))) & 63;
  _172 = llvm_srem_u64(_171, 16);
  _173 = *((&SP3.array[((int64_t)_172)]));
  _174 = llvm_add_u64(_172, 16);
  _175 = *((&SP3.array[((int64_t)_174)]));
  _176 = llvm_add_u64(_174, 16);
  _177 = *((&SP3.array[((int64_t)_176)]));
  _178 = llvm_add_u64(_176, 16);
  _179 = *((&SP3.array[((int64_t)_178)]));
  _180 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_152, 24)))) & 63;
  _181 = llvm_srem_u64(_180, 16);
  _182 = *((&SP1.array[((int64_t)_181)]));
  _183 = llvm_add_u64(_181, 16);
  _184 = *((&SP1.array[((int64_t)_183)]));
  _185 = llvm_add_u64(_183, 16);
  _186 = *((&SP1.array[((int64_t)_185)]));
  _187 = llvm_add_u64(_185, 16);
  _188 = *((&SP1.array[((int64_t)_187)]));
  _189 = (&_150[((int32_t)1)]);
  _190 = *_150;
  _191 = _148 ^ _190;
  _192 = (((uint64_t)(uint32_t)_191)) & 63;
  _193 = llvm_srem_u64(_192, 16);
  _194 = *((&SP8.array[((int64_t)_193)]));
  _195 = llvm_add_u64(_193, 16);
  _196 = *((&SP8.array[((int64_t)_195)]));
  _197 = llvm_add_u64(_195, 16);
  _198 = *((&SP8.array[((int64_t)_197)]));
  _199 = llvm_add_u64(_197, 16);
  _200 = *((&SP8.array[((int64_t)_199)]));
  _201 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_191, 8)))) & 63;
  _202 = llvm_srem_u64(_201, 16);
  _203 = *((&SP6.array[((int64_t)_202)]));
  _204 = llvm_add_u64(_202, 16);
  _205 = *((&SP6.array[((int64_t)_204)]));
  _206 = llvm_add_u64(_204, 16);
  _207 = *((&SP6.array[((int64_t)_206)]));
  _208 = llvm_add_u64(_206, 16);
  _209 = *((&SP6.array[((int64_t)_208)]));
  _210 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_191, 16)))) & 63;
  _211 = llvm_srem_u64(_210, 16);
  _212 = *((&SP4.array[((int64_t)_211)]));
  _213 = llvm_add_u64(_211, 16);
  _214 = *((&SP4.array[((int64_t)_213)]));
  _215 = llvm_add_u64(_213, 16);
  _216 = *((&SP4.array[((int64_t)_215)]));
  _217 = llvm_add_u64(_215, 16);
  _218 = *((&SP4.array[((int64_t)_217)]));
  _219 = (((uint64_t)(uint32_t)(llvm_lshr_u32(_191, 24)))) & 63;
  _220 = llvm_srem_u64(_219, 16);
  _221 = *((&SP2.array[((int64_t)_220)]));
  _222 = llvm_add_u64(_220, 16);
  _223 = *((&SP2.array[((int64_t)_222)]));
  _224 = llvm_add_u64(_222, 16);
  _225 = *((&SP2.array[((int64_t)_224)]));
  _226 = llvm_add_u64(_224, 16);
  _227 = *((&SP2.array[((int64_t)_226)]));
  _228 = _149 ^ ((((((((llvm_select_u32((((_153 == _160)&1)), _161, (llvm_select_u32((((_153 == _158)&1)), _159, (llvm_select_u32((((_153 == _156)&1)), _157, (llvm_select_u32((((_153 == _154)&1)), _155, 0)))))))) | (llvm_select_u32((((_162 == _169)&1)), _170, (llvm_select_u32((((_162 == _167)&1)), _168, (llvm_select_u32((((_162 == _165)&1)), _166, (llvm_select_u32((((_162 == _163)&1)), _164, 0))))))))) | (llvm_select_u32((((_171 == _178)&1)), _179, (llvm_select_u32((((_171 == _176)&1)), _177, (llvm_select_u32((((_171 == _174)&1)), _175, (llvm_select_u32((((_171 == _172)&1)), _173, 0))))))))) | (llvm_select_u32((((_180 == _187)&1)), _188, (llvm_select_u32((((_180 == _185)&1)), _186, (llvm_select_u32((((_180 == _183)&1)), _184, (llvm_select_u32((((_180 == _181)&1)), _182, 0))))))))) | (llvm_select_u32((((_192 == _199)&1)), _200, (llvm_select_u32((((_192 == _197)&1)), _198, (llvm_select_u32((((_192 == _195)&1)), _196, (llvm_select_u32((((_192 == _193)&1)), _194, 0))))))))) | (llvm_select_u32((((_201 == _208)&1)), _209, (llvm_select_u32((((_201 == _206)&1)), _207, (llvm_select_u32((((_201 == _204)&1)), _205, (llvm_select_u32((((_201 == _202)&1)), _203, 0))))))))) | (llvm_select_u32((((_210 == _217)&1)), _218, (llvm_select_u32((((_210 == _215)&1)), _216, (llvm_select_u32((((_210 == _213)&1)), _214, (llvm_select_u32((((_210 == _211)&1)), _212, 0))))))))) | (llvm_select_u32((((_219 == _226)&1)), _227, (llvm_select_u32((((_219 == _224)&1)), _225, (llvm_select_u32((((_219 == _222)&1)), _223, (llvm_select_u32((((_219 == _220)&1)), _221, 0)))))))));
  _229 = (&_189[((int32_t)1)]);
  _230 = *_189;
  _231 = ((_228 << 28) | (llvm_lshr_u32(_228, 4))) ^ _230;
  _232 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_231)) & 63))]));
  _233 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_231, 8)))) & 63))]));
  _234 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_231, 16)))) & 63))]));
  _235 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_231, 24)))) & 63))]));
  _236 = (&_229[((int32_t)1)]);
  _237 = *_229;
  _238 = _228 ^ _237;
  _239 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_238)) & 63))]));
  _240 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_238, 8)))) & 63))]));
  _241 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_238, 16)))) & 63))]));
  _242 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_238, 24)))) & 63))]));
  _243 = _148 ^ (((((((_232 | _233) | _234) | _235) | _239) | _240) | _241) | _242);
  _244 = (&_236[((int32_t)1)]);
  _245 = *_236;
  _246 = ((_243 << 28) | (llvm_lshr_u32(_243, 4))) ^ _245;
  _247 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_246)) & 63))]));
  _248 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_246, 8)))) & 63))]));
  _249 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_246, 16)))) & 63))]));
  _250 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_246, 24)))) & 63))]));
  _251 = (&_244[((int32_t)1)]);
  _252 = *_244;
  _253 = _243 ^ _252;
  _254 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_253)) & 63))]));
  _255 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_253, 8)))) & 63))]));
  _256 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_253, 16)))) & 63))]));
  _257 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_253, 24)))) & 63))]));
  _258 = _228 ^ (((((((_247 | _248) | _249) | _250) | _254) | _255) | _256) | _257);
  _259 = (&_251[((int32_t)1)]);
  _260 = *_251;
  _261 = ((_258 << 28) | (llvm_lshr_u32(_258, 4))) ^ _260;
  _262 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_261)) & 63))]));
  _263 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_261, 8)))) & 63))]));
  _264 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_261, 16)))) & 63))]));
  _265 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_261, 24)))) & 63))]));
  _266 = (&_259[((int32_t)1)]);
  _267 = *_259;
  _268 = _258 ^ _267;
  _269 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_268)) & 63))]));
  _270 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_268, 8)))) & 63))]));
  _271 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_268, 16)))) & 63))]));
  _272 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_268, 24)))) & 63))]));
  _273 = _243 ^ (((((((_262 | _263) | _264) | _265) | _269) | _270) | _271) | _272);
  _274 = (&_266[((int32_t)1)]);
  _275 = *_266;
  _276 = ((_273 << 28) | (llvm_lshr_u32(_273, 4))) ^ _275;
  _277 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_276)) & 63))]));
  _278 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_276, 8)))) & 63))]));
  _279 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_276, 16)))) & 63))]));
  _280 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_276, 24)))) & 63))]));
  _281 = (&_274[((int32_t)1)]);
  _282 = *_274;
  _283 = _273 ^ _282;
  _284 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_283)) & 63))]));
  _285 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_283, 8)))) & 63))]));
  _286 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_283, 16)))) & 63))]));
  _287 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_283, 24)))) & 63))]));
  _288 = _258 ^ (((((((_277 | _278) | _279) | _280) | _284) | _285) | _286) | _287);
  _289 = (&_281[((int32_t)1)]);
  _290 = *_281;
  _291 = ((_288 << 28) | (llvm_lshr_u32(_288, 4))) ^ _290;
  _292 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_291)) & 63))]));
  _293 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_291, 8)))) & 63))]));
  _294 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_291, 16)))) & 63))]));
  _295 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_291, 24)))) & 63))]));
  _296 = (&_289[((int32_t)1)]);
  _297 = *_289;
  _298 = _288 ^ _297;
  _299 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_298)) & 63))]));
  _300 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_298, 8)))) & 63))]));
  _301 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_298, 16)))) & 63))]));
  _302 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_298, 24)))) & 63))]));
  _303 = _273 ^ (((((((_292 | _293) | _294) | _295) | _299) | _300) | _301) | _302);
  _304 = (&_296[((int32_t)1)]);
  _305 = *_296;
  _306 = ((_303 << 28) | (llvm_lshr_u32(_303, 4))) ^ _305;
  _307 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_306)) & 63))]));
  _308 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_306, 8)))) & 63))]));
  _309 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_306, 16)))) & 63))]));
  _310 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_306, 24)))) & 63))]));
  _311 = (&_304[((int32_t)1)]);
  _312 = *_304;
  _313 = _303 ^ _312;
  _314 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_313)) & 63))]));
  _315 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_313, 8)))) & 63))]));
  _316 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_313, 16)))) & 63))]));
  _317 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_313, 24)))) & 63))]));
  _318 = _288 ^ (((((((_307 | _308) | _309) | _310) | _314) | _315) | _316) | _317);
  _319 = (&_311[((int32_t)1)]);
  _320 = *_311;
  _321 = ((_318 << 28) | (llvm_lshr_u32(_318, 4))) ^ _320;
  _322 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_321)) & 63))]));
  _323 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_321, 8)))) & 63))]));
  _324 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_321, 16)))) & 63))]));
  _325 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_321, 24)))) & 63))]));
  _326 = (&_319[((int32_t)1)]);
  _327 = *_319;
  _328 = _318 ^ _327;
  _329 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_328)) & 63))]));
  _330 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_328, 8)))) & 63))]));
  _331 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_328, 16)))) & 63))]));
  _332 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_328, 24)))) & 63))]));
  _333 = _303 ^ (((((((_322 | _323) | _324) | _325) | _329) | _330) | _331) | _332);
  _334 = (&_326[((int32_t)1)]);
  _335 = *_326;
  _336 = ((_333 << 28) | (llvm_lshr_u32(_333, 4))) ^ _335;
  _337 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_336)) & 63))]));
  _338 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_336, 8)))) & 63))]));
  _339 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_336, 16)))) & 63))]));
  _340 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_336, 24)))) & 63))]));
  _341 = (&_334[((int32_t)1)]);
  _342 = *_334;
  _343 = _333 ^ _342;
  _344 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_343)) & 63))]));
  _345 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_343, 8)))) & 63))]));
  _346 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_343, 16)))) & 63))]));
  _347 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_343, 24)))) & 63))]));
  _348 = _318 ^ (((((((_337 | _338) | _339) | _340) | _344) | _345) | _346) | _347);
  _349 = (&_341[((int32_t)1)]);
  _350 = *_341;
  _351 = ((_348 << 28) | (llvm_lshr_u32(_348, 4))) ^ _350;
  _352 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_351)) & 63))]));
  _353 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_351, 8)))) & 63))]));
  _354 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_351, 16)))) & 63))]));
  _355 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_351, 24)))) & 63))]));
  _356 = (&_349[((int32_t)1)]);
  _357 = *_349;
  _358 = _348 ^ _357;
  _359 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_358)) & 63))]));
  _360 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_358, 8)))) & 63))]));
  _361 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_358, 16)))) & 63))]));
  _362 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_358, 24)))) & 63))]));
  _363 = _333 ^ (((((((_352 | _353) | _354) | _355) | _359) | _360) | _361) | _362);
  _364 = (&_356[((int32_t)1)]);
  _365 = *_356;
  _366 = ((_363 << 28) | (llvm_lshr_u32(_363, 4))) ^ _365;
  _367 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_366)) & 63))]));
  _368 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_366, 8)))) & 63))]));
  _369 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_366, 16)))) & 63))]));
  _370 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_366, 24)))) & 63))]));
  _371 = (&_364[((int32_t)1)]);
  _372 = *_364;
  _373 = _363 ^ _372;
  _374 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_373)) & 63))]));
  _375 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_373, 8)))) & 63))]));
  _376 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_373, 16)))) & 63))]));
  _377 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_373, 24)))) & 63))]));
  _378 = _348 ^ (((((((_367 | _368) | _369) | _370) | _374) | _375) | _376) | _377);
  _379 = (&_371[((int32_t)1)]);
  _380 = *_371;
  _381 = ((_378 << 28) | (llvm_lshr_u32(_378, 4))) ^ _380;
  _382 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_381)) & 63))]));
  _383 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_381, 8)))) & 63))]));
  _384 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_381, 16)))) & 63))]));
  _385 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_381, 24)))) & 63))]));
  _386 = (&_379[((int32_t)1)]);
  _387 = *_379;
  _388 = _378 ^ _387;
  _389 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_388)) & 63))]));
  _390 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_388, 8)))) & 63))]));
  _391 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_388, 16)))) & 63))]));
  _392 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_388, 24)))) & 63))]));
  _393 = _363 ^ (((((((_382 | _383) | _384) | _385) | _389) | _390) | _391) | _392);
  _394 = (&_386[((int32_t)1)]);
  _395 = *_386;
  _396 = ((_393 << 28) | (llvm_lshr_u32(_393, 4))) ^ _395;
  _397 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_396)) & 63))]));
  _398 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_396, 8)))) & 63))]));
  _399 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_396, 16)))) & 63))]));
  _400 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_396, 24)))) & 63))]));
  _401 = (&_394[((int32_t)1)]);
  _402 = *_394;
  _403 = _393 ^ _402;
  _404 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_403)) & 63))]));
  _405 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_403, 8)))) & 63))]));
  _406 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_403, 16)))) & 63))]));
  _407 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_403, 24)))) & 63))]));
  _408 = _378 ^ (((((((_397 | _398) | _399) | _400) | _404) | _405) | _406) | _407);
  _409 = (&_401[((int32_t)1)]);
  _410 = *_401;
  _411 = ((_408 << 28) | (llvm_lshr_u32(_408, 4))) ^ _410;
  _412 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_411)) & 63))]));
  _413 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_411, 8)))) & 63))]));
  _414 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_411, 16)))) & 63))]));
  _415 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_411, 24)))) & 63))]));
  _416 = (&_409[((int32_t)1)]);
  _417 = *_409;
  _418 = _408 ^ _417;
  _419 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_418)) & 63))]));
  _420 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_418, 8)))) & 63))]));
  _421 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_418, 16)))) & 63))]));
  _422 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_418, 24)))) & 63))]));
  _423 = _393 ^ (((((((_412 | _413) | _414) | _415) | _419) | _420) | _421) | _422);
  _424 = (&_416[((int32_t)1)]);
  _425 = *_416;
  _426 = ((_423 << 28) | (llvm_lshr_u32(_423, 4))) ^ _425;
  _427 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_426)) & 63))]));
  _428 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_426, 8)))) & 63))]));
  _429 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_426, 16)))) & 63))]));
  _430 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_426, 24)))) & 63))]));
  _431 = (&_424[((int32_t)1)]);
  _432 = *_424;
  _433 = _423 ^ _432;
  _434 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_433)) & 63))]));
  _435 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_433, 8)))) & 63))]));
  _436 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_433, 16)))) & 63))]));
  _437 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_433, 24)))) & 63))]));
  _438 = _408 ^ (((((((_427 | _428) | _429) | _430) | _434) | _435) | _436) | _437);
  _439 = *_431;
  _440 = ((_438 << 28) | (llvm_lshr_u32(_438, 4))) ^ _439;
  _441 = *((&SP7.array[((int64_t)((((uint64_t)(uint32_t)_440)) & 63))]));
  _442 = *((&SP5.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_440, 8)))) & 63))]));
  _443 = *((&SP3.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_440, 16)))) & 63))]));
  _444 = *((&SP1.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_440, 24)))) & 63))]));
  _445 = *((&_431[((int32_t)1)]));
  _446 = _438 ^ _445;
  _447 = *((&SP8.array[((int64_t)((((uint64_t)(uint32_t)_446)) & 63))]));
  _448 = *((&SP6.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_446, 8)))) & 63))]));
  _449 = *((&SP4.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_446, 16)))) & 63))]));
  _450 = *((&SP2.array[((int64_t)((((uint64_t)(uint32_t)(llvm_lshr_u32(_446, 24)))) & 63))]));
  _451 = _423 ^ (((((((_441 | _442) | _443) | _444) | _447) | _448) | _449) | _450);
  _452 = (_451 << 31) | (llvm_lshr_u32(_451, 1));
  _453 = ((uint32_t)((((uint64_t)(uint32_t)(_438 ^ _452))) & INT64_C(2863311530)));
  _454 = _438 ^ _453;
  _455 = _452 ^ _453;
  _456 = (_454 << 31) | (llvm_lshr_u32(_454, 1));
  _457 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_456, 8)) ^ _455))) & 16711935));
  _458 = _455 ^ _457;
  _459 = _456 ^ (_457 << 8);
  _460 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_459, 2)) ^ _458))) & 858993459));
  _461 = _458 ^ _460;
  _462 = _459 ^ (_460 << 2);
  _463 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_461, 16)) ^ _462))) & 65535));
  _464 = _462 ^ _463;
  _465 = _461 ^ (_463 << 16);
  _466 = ((uint32_t)((((uint64_t)(uint32_t)((llvm_lshr_u32(_465, 4)) ^ _464))) & 252645135));
  *_130 = (_465 ^ (_466 << 4));
  *((&_130[((int32_t)1)])) = (_464 ^ _466);
}


void des_enc(struct l_struct_struct_OC_des_ctx* _468, uint8_t* _469, uint32_t _470) {
  struct l_array_2_uint32_t _471;    /* Address-exposed local */
  uint8_t* llvm_cbe__2e_03;
  uint8_t* llvm_cbe__2e_03__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_012;
  uint32_t llvm_cbe__2e_012__PHI_TEMPORARY;
  uint32_t* _472;
  uint8_t* _473;
  uint8_t _474;
  uint8_t* _475;
  uint8_t _476;
  uint32_t _477;
  uint8_t* _478;
  uint8_t _479;
  uint32_t _480;
  uint8_t* _481;
  uint8_t _482;
  uint32_t* _483;
  uint32_t _484;
  uint8_t* _485;
  uint8_t _486;
  uint8_t* _487;
  uint8_t _488;
  uint32_t _489;
  uint8_t _490;
  uint32_t _491;
  uint8_t _492;
  uint32_t _493;
  uint32_t _494;

  if ((((((int32_t)0u) < ((int32_t)_470))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _495;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe__2e_03__PHI_TEMPORARY = _469;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _496;

  do {     /* Syntactic loop '' to make GCC happy */
_496:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  _472 = (&_471.array[((int32_t)0)]);
  _473 = (&llvm_cbe__2e_03[((int32_t)1)]);
  _474 = *llvm_cbe__2e_03;
  *_472 = (((uint32_t)(((((uint64_t)(uint8_t)_474)) & 255) << 24)));
  _475 = (&_473[((int32_t)1)]);
  _476 = *_473;
  _477 = *_472;
  *_472 = (((uint32_t)((((uint64_t)(uint32_t)_477)) | (((((uint64_t)(uint8_t)_476)) & 255) << 16))));
  _478 = (&_475[((int32_t)1)]);
  _479 = *_475;
  _480 = *_472;
  *_472 = (((uint32_t)((((uint64_t)(uint32_t)_480)) | (((((uint64_t)(uint8_t)_479)) & 255) << 8))));
  _481 = (&_478[((int32_t)1)]);
  _482 = *_478;
  _483 = (&_472[((int32_t)1)]);
  _484 = *_472;
  *_472 = (((uint32_t)((((uint64_t)(uint32_t)_484)) | ((((uint64_t)(uint8_t)_482)) & 255))));
  _485 = (&_481[((int32_t)1)]);
  _486 = *_481;
  *_483 = (((uint32_t)(((((uint64_t)(uint8_t)_486)) & 255) << 24)));
  _487 = (&_485[((int32_t)1)]);
  _488 = *_485;
  _489 = *_483;
  *_483 = (((uint32_t)((((uint64_t)(uint32_t)_489)) | (((((uint64_t)(uint8_t)_488)) & 255) << 16))));
  _490 = *_487;
  _491 = *_483;
  *_483 = (((uint32_t)((((uint64_t)(uint32_t)_491)) | (((((uint64_t)(uint8_t)_490)) & 255) << 8))));
  _492 = *((&_487[((int32_t)1)]));
  _493 = *_483;
  *_483 = (((uint32_t)((((uint64_t)(uint32_t)_493)) | ((((uint64_t)(uint8_t)_492)) & 255))));
  desfunc(((&(*((&_468->field0))).array[((int32_t)0)])), ((&_471.array[((int32_t)0)])));
  unscrun(((&_471.array[((int32_t)0)])), llvm_cbe__2e_03);
  _494 = llvm_add_u32(llvm_cbe__2e_012, 1);
  if ((((((int32_t)_494) < ((int32_t)_470))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = ((&llvm_cbe__2e_03[((int64_t)8)]));   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = _494;   /* for PHI node */
    goto _496;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  goto _495;

_495:
  return;
}


void des_dec(struct l_struct_struct_OC_des_ctx* _497, uint8_t* _498, uint32_t _499) {
  struct l_array_2_uint32_t _500;    /* Address-exposed local */
  uint8_t* llvm_cbe__2e_03;
  uint8_t* llvm_cbe__2e_03__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_012;
  uint32_t llvm_cbe__2e_012__PHI_TEMPORARY;
  uint32_t* _501;
  uint8_t* _502;
  uint8_t _503;
  uint8_t* _504;
  uint8_t _505;
  uint32_t _506;
  uint8_t* _507;
  uint8_t _508;
  uint32_t _509;
  uint8_t* _510;
  uint8_t _511;
  uint32_t* _512;
  uint32_t _513;
  uint8_t* _514;
  uint8_t _515;
  uint8_t* _516;
  uint8_t _517;
  uint32_t _518;
  uint8_t _519;
  uint32_t _520;
  uint8_t _521;
  uint32_t _522;
  uint32_t _523;

  if ((((((int32_t)0u) < ((int32_t)_499))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _524;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe__2e_03__PHI_TEMPORARY = _498;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _525;

  do {     /* Syntactic loop '' to make GCC happy */
_525:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  _501 = (&_500.array[((int32_t)0)]);
  _502 = (&llvm_cbe__2e_03[((int32_t)1)]);
  _503 = *llvm_cbe__2e_03;
  *_501 = (((uint32_t)(((((uint64_t)(uint8_t)_503)) & 255) << 24)));
  _504 = (&_502[((int32_t)1)]);
  _505 = *_502;
  _506 = *_501;
  *_501 = (((uint32_t)((((uint64_t)(uint32_t)_506)) | (((((uint64_t)(uint8_t)_505)) & 255) << 16))));
  _507 = (&_504[((int32_t)1)]);
  _508 = *_504;
  _509 = *_501;
  *_501 = (((uint32_t)((((uint64_t)(uint32_t)_509)) | (((((uint64_t)(uint8_t)_508)) & 255) << 8))));
  _510 = (&_507[((int32_t)1)]);
  _511 = *_507;
  _512 = (&_501[((int32_t)1)]);
  _513 = *_501;
  *_501 = (((uint32_t)((((uint64_t)(uint32_t)_513)) | ((((uint64_t)(uint8_t)_511)) & 255))));
  _514 = (&_510[((int32_t)1)]);
  _515 = *_510;
  *_512 = (((uint32_t)(((((uint64_t)(uint8_t)_515)) & 255) << 24)));
  _516 = (&_514[((int32_t)1)]);
  _517 = *_514;
  _518 = *_512;
  *_512 = (((uint32_t)((((uint64_t)(uint32_t)_518)) | (((((uint64_t)(uint8_t)_517)) & 255) << 16))));
  _519 = *_516;
  _520 = *_512;
  *_512 = (((uint32_t)((((uint64_t)(uint32_t)_520)) | (((((uint64_t)(uint8_t)_519)) & 255) << 8))));
  _521 = *((&_516[((int32_t)1)]));
  _522 = *_512;
  *_512 = (((uint32_t)((((uint64_t)(uint32_t)_522)) | ((((uint64_t)(uint8_t)_521)) & 255))));
  desfunc(((&(*((&_497->field1))).array[((int32_t)0)])), ((&_500.array[((int32_t)0)])));
  unscrun(((&_500.array[((int32_t)0)])), llvm_cbe__2e_03);
  _523 = llvm_add_u32(llvm_cbe__2e_012, 1);
  if ((((((int32_t)_523) < ((int32_t)_499))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = ((&llvm_cbe__2e_03[((int64_t)8)]));   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = _523;   /* for PHI node */
    goto _525;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  goto _524;

_524:
  return;
}


int main(void) {
  struct l_struct_struct_OC_des_ctx _526;    /* Address-exposed local */
  struct l_array_2_uint32_t _527;    /* Address-exposed local */
  uint8_t* _528;
  uint32_t* _529;
  uint32_t llvm_cbe__2e_01;
  uint32_t llvm_cbe__2e_01__PHI_TEMPORARY;
  uint32_t _530;
  uint32_t _531;
  uint32_t _532;
  uint32_t _533;
  uint32_t _534;
  uint32_t _535;
  uint32_t _536;
  uint32_t _537;
  uint32_t* _538;
  uint8_t* _539;
  uint8_t _540;
  uint8_t* _541;
  uint8_t _542;
  uint32_t _543;
  uint8_t* _544;
  uint8_t _545;
  uint32_t _546;
  uint8_t* _547;
  uint8_t _548;
  uint32_t* _549;
  uint32_t _550;
  uint8_t* _551;
  uint8_t _552;
  uint8_t* _553;
  uint8_t _554;
  uint32_t _555;
  uint8_t _556;
  uint32_t _557;
  uint8_t _558;
  uint32_t _559;

  _528 = memset((((uint8_t*)(&_527))), 0, 8);
  deskey(((&in_key.array[((int32_t)0)])), 0);
  _529 = (&(*((&_526.field0))).array[((int32_t)0)]);
  llvm_cbe__2e_01__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _560;

  do {     /* Syntactic loop '' to make GCC happy */
_560:
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  _530 = *((&KnL.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_01)))]));
  *((&_529[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_01)))])) = _530;
  _531 = llvm_add_u32(llvm_cbe__2e_01, 1);
  _532 = *((&KnL.array[((int64_t)(((int64_t)(int32_t)_531)))]));
  *((&_529[((int64_t)(((int64_t)(int32_t)_531)))])) = _532;
  _533 = llvm_add_u32(_531, 1);
  _534 = *((&KnL.array[((int64_t)(((int64_t)(int32_t)_533)))]));
  *((&_529[((int64_t)(((int64_t)(int32_t)_533)))])) = _534;
  _535 = llvm_add_u32(_533, 1);
  _536 = *((&KnL.array[((int64_t)(((int64_t)(int32_t)_535)))]));
  *((&_529[((int64_t)(((int64_t)(int32_t)_535)))])) = _536;
  _537 = llvm_add_u32(_535, 1);
  if ((((((int32_t)_537) < ((int32_t)32u))&1))) {
    llvm_cbe__2e_01__PHI_TEMPORARY = _537;   /* for PHI node */
    goto _560;
  } else {
    goto _561;
  }

  } while (1); /* end of syntactic loop '' */
_561:
  _538 = (&_527.array[((int32_t)0)]);
  _539 = (&((&in.array[((int32_t)0)]))[((int32_t)1)]);
  _540 = *((&in.array[((int32_t)0)]));
  *_538 = (((uint32_t)(((((uint64_t)(uint8_t)_540)) & 255) << 24)));
  _541 = (&_539[((int32_t)1)]);
  _542 = *_539;
  _543 = *_538;
  *_538 = (((uint32_t)((((uint64_t)(uint32_t)_543)) | (((((uint64_t)(uint8_t)_542)) & 255) << 16))));
  _544 = (&_541[((int32_t)1)]);
  _545 = *_541;
  _546 = *_538;
  *_538 = (((uint32_t)((((uint64_t)(uint32_t)_546)) | (((((uint64_t)(uint8_t)_545)) & 255) << 8))));
  _547 = (&_544[((int32_t)1)]);
  _548 = *_544;
  _549 = (&_538[((int32_t)1)]);
  _550 = *_538;
  *_538 = (((uint32_t)((((uint64_t)(uint32_t)_550)) | ((((uint64_t)(uint8_t)_548)) & 255))));
  _551 = (&_547[((int32_t)1)]);
  _552 = *_547;
  *_549 = (((uint32_t)(((((uint64_t)(uint8_t)_552)) & 255) << 24)));
  _553 = (&_551[((int32_t)1)]);
  _554 = *_551;
  _555 = *_549;
  *_549 = (((uint32_t)((((uint64_t)(uint32_t)_555)) | (((((uint64_t)(uint8_t)_554)) & 255) << 16))));
  _556 = *_553;
  _557 = *_549;
  *_549 = (((uint32_t)((((uint64_t)(uint32_t)_557)) | (((((uint64_t)(uint8_t)_556)) & 255) << 8))));
  _558 = *((&_553[((int32_t)1)]));
  _559 = *_549;
  *_549 = (((uint32_t)((((uint64_t)(uint32_t)_559)) | ((((uint64_t)(uint8_t)_558)) & 255))));
  desfunc(((&(*((&_526.field0))).array[((int32_t)0)])), ((&_527.array[((int32_t)0)])));
  unscrun(((&_527.array[((int32_t)0)])), ((&out.array[((int32_t)0)])));
  return 0;
}

