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
struct l_struct_struct_OC__des_ctx;
struct l_array_32_uint8_t;
struct l_array_64_uint8_t;
struct l_array_16_uint32_t;
struct l_array_16_uint8_t;
struct l_array_64_uint32_t;
struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx;

/* Function definitions */
typedef uint32_t l_fptr_3(struct l_struct_struct_OC__des_ctx*, uint8_t*, uint8_t*, uint32_t);

typedef uint32_t l_fptr_1(void);

typedef uint32_t l_fptr_2(uint8_t*, struct l_struct_struct_OC__des_ctx*);


/* Types Definitions */
struct l_array_32_uint32_t {
  uint32_t array[32];
};
struct l_struct_struct_OC__des_ctx {
  struct l_array_32_uint32_t field0;
  struct l_array_32_uint32_t field1;
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
struct l_array_64_uint32_t {
  uint32_t array[64];
};
struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx {
  struct l_struct_struct_OC__des_ctx array[1];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void) __ATTRIBUTELIST__((nothrow));
static uint32_t des_setkey(uint8_t*, struct l_struct_struct_OC__des_ctx*) __ATTRIBUTELIST__((nothrow));
static uint32_t des_ecb_crypt(struct l_struct_struct_OC__des_ctx*, uint8_t*, uint8_t*, uint32_t) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_32_uint8_t in_key __attribute__((aligned(64))) = { "\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" };
static __MSALIGN__(16) struct l_array_64_uint8_t in __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_64_uint8_t out __attribute__((aligned(16)));
static uint8_t* des_setkey_OC_selftest_failed;
static __MSALIGN__(64) struct l_array_16_uint32_t leftkey_swap __attribute__((aligned(64))) = { { 0, 1, 256, 257, 65536, 65537, 65792, 65793, 16777216, 16777217, 16777472, 16777473, 16842752, 16842753, 16843008, 16843009 } };
static __MSALIGN__(64) struct l_array_16_uint32_t rightkey_swap __attribute__((aligned(64))) = { { 0, 16777216, 65536, 16842752, 256, 16777472, 65792, 16843008, 1, 16777217, 65537, 16842753, 257, 16777473, 65793, 16843009 } };
static __MSALIGN__(64) struct l_array_16_uint8_t encrypt_rotate_tab __attribute__((aligned(64))) = { "\x01\x01\x02\x02\x02\x02\x02\x02\x01\x02\x02\x02\x02\x02\x02\x01" };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox8 __attribute__((aligned(64))) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox6 __attribute__((aligned(64))) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox4 __attribute__((aligned(64))) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox2 __attribute__((aligned(64))) = { { 2148565024u, 2147516416u, 32768, 1081376, 1048576, 32, 2148532256u, 2147516448u, 2147483680u, 2148565024u, 2148564992u, 2147483648u, 2147516416u, 1048576, 32, 2148532256u, 1081344, 1048608, 2147516448u, 0, 2147483648u, 32768, 1081376, 2148532224u, 1048608, 2147483680u, 0, 1081344, 32800, 2148564992u, 2148532224u, 32800, 0, 1081376, 2148532256u, 1048576, 2147516448u, 2148532224u, 2148564992u, 32768, 2148532224u, 2147516416u, 32, 2148565024u, 1081376, 32, 32768, 2147483648u, 32800, 2148564992u, 1048576, 2147483680u, 1048608, 2147516448u, 2147483680u, 1048608, 1081344, 0, 2147516416u, 32800, 2147483648u, 2148532256u, 2148565024u, 1081344 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox7 __attribute__((aligned(64))) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox5 __attribute__((aligned(64))) = { { 256, 34078976, 34078720, 1107296512u, 524288, 256, 1073741824u, 34078720, 1074266368u, 524288, 33554688, 1074266368u, 1107296512u, 1107820544u, 524544, 1073741824u, 33554432, 1074266112u, 1074266112u, 0, 1073742080u, 1107820800u, 1107820800u, 33554688, 1107820544u, 1073742080u, 0, 1107296256u, 34078976, 33554432, 1107296256u, 524544, 524288, 1107296512u, 256, 33554432, 1073741824u, 34078720, 1107296512u, 1074266368u, 33554688, 1073741824u, 1107820544u, 34078976, 1074266368u, 256, 33554432, 1107820544u, 1107820800u, 524544, 1107296256u, 1107820800u, 34078720, 0, 1074266112u, 1107296256u, 524544, 33554688, 1073742080u, 524288, 0, 1074266112u, 34078976, 1073742080u } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox3 __attribute__((aligned(64))) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static __MSALIGN__(64) struct l_array_64_uint32_t sbox1 __attribute__((aligned(64))) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline struct l_array_32_uint32_t* llvm_select_pu32a32(bool condition, struct l_array_32_uint32_t* iftrue, struct l_array_32_uint32_t* ifnot) {
  struct l_array_32_uint32_t* r;
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


/* Function Bodies */

int main(void) {
  __MSALIGN__(16) struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx _1 __attribute__((aligned(16)));    /* Address-exposed local */
  uint32_t _2;
  uint32_t _3;

  _2 = des_setkey(((&in_key.array[((int32_t)0)])), ((&_1.array[((int32_t)0)])));
  _3 = des_ecb_crypt(((&_1.array[((int32_t)0)])), ((&in.array[((int32_t)0)])), ((&out.array[((int32_t)0)])), 0);
  return 0;
}


static uint32_t des_setkey(uint8_t* _4, struct l_struct_struct_OC__des_ctx* _5) {
  uint32_t* _6;
  uint8_t _7;
  uint8_t _8;
  uint8_t _9;
  uint8_t _10;
  uint32_t _11;
  uint8_t* _12;
  uint8_t _13;
  uint8_t _14;
  uint8_t _15;
  uint8_t _16;
  uint32_t _17;
  uint32_t _18;
  uint32_t _19;
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
  uint32_t _40;
  uint32_t _41;
  uint32_t llvm_cbe__2e_0_2e_ph;
  uint32_t llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_019;
  uint32_t llvm_cbe__2e_019__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_028;
  uint32_t llvm_cbe__2e_028__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e_037;
  uint32_t llvm_cbe__2e_037__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_046;
  uint32_t* llvm_cbe__2e_046__PHI_TEMPORARY;
  uint8_t _42;
  uint8_t _43;
  uint32_t _44;
  uint8_t _45;
  uint8_t _46;
  uint32_t _47;
  uint32_t* _48;
  uint32_t _49;
  uint32_t llvm_cbe__2e_05;
  uint32_t llvm_cbe__2e_05__PHI_TEMPORARY;
  uint32_t _50;
  uint32_t _51;
  uint32_t _52;
  uint32_t _53;
  uint32_t _54;
  uint32_t _55;

  _6 = (&(*((&_5->field0))).array[((int32_t)0)]);
  _7 = *_4;
  _8 = *((&_4[((int64_t)1)]));
  _9 = *((&_4[((int64_t)2)]));
  _10 = *((&_4[((int64_t)3)]));
  _11 = ((((((uint32_t)(uint8_t)_7)) << 24) | ((((uint32_t)(uint8_t)_8)) << 16)) | ((((uint32_t)(uint8_t)_9)) << 8)) | (((uint32_t)(uint8_t)_10));
  _12 = (&_4[((int64_t)4)]);
  _13 = *_12;
  _14 = *((&_12[((int64_t)1)]));
  _15 = *((&_12[((int64_t)2)]));
  _16 = *((&_12[((int64_t)3)]));
  _17 = ((((((uint32_t)(uint8_t)_13)) << 24) | ((((uint32_t)(uint8_t)_14)) << 16)) | ((((uint32_t)(uint8_t)_15)) << 8)) | (((uint32_t)(uint8_t)_16));
  _18 = ((llvm_lshr_u32(_17, 4)) ^ _11) & 252645135;
  _19 = _11 ^ _18;
  _20 = _17 ^ (_18 << 4);
  _21 = (_20 ^ _19) & 269488144;
  _22 = _19 ^ _21;
  _23 = _20 ^ _21;
  _24 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)(_22 & 15))))]));
  _25 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 8)) & 15))))]));
  _26 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 16)) & 15))))]));
  _27 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 24)) & 15))))]));
  _28 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 5)) & 15))))]));
  _29 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 13)) & 15))))]));
  _30 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 21)) & 15))))]));
  _31 = *((&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_22, 29)) & 15))))]));
  _32 = ((((((((_24 << 3) | (_25 << 2)) | (_26 << 1)) | _27) | (_28 << 7)) | (_29 << 6)) | (_30 << 5)) | (_31 << 4)) & 268435455;
  _33 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 1)) & 15))))]));
  _34 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 9)) & 15))))]));
  _35 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 17)) & 15))))]));
  _36 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 25)) & 15))))]));
  _37 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 4)) & 15))))]));
  _38 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 12)) & 15))))]));
  _39 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 20)) & 15))))]));
  _40 = *((&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 28)) & 15))))]));
  _41 = ((((((((_33 << 3) | (_34 << 2)) | (_35 << 1)) | _36) | (_37 << 7)) | (_38 << 6)) | (_39 << 5)) | (_40 << 4)) & 268435455;
  llvm_cbe__2e_019__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__2e_028__PHI_TEMPORARY = _41;   /* for PHI node */
  llvm_cbe__2e_037__PHI_TEMPORARY = _32;   /* for PHI node */
  llvm_cbe__2e_046__PHI_TEMPORARY = _6;   /* for PHI node */
  goto _56;

llvm_cbe__2e_preheader:
  llvm_cbe__2e_0_2e_ph = llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_05__PHI_TEMPORARY = llvm_cbe__2e_0_2e_ph;   /* for PHI node */
  goto _57;

  do {     /* Syntactic loop '' to make GCC happy */
_56:
  llvm_cbe__2e_019 = llvm_cbe__2e_019__PHI_TEMPORARY;
  llvm_cbe__2e_028 = llvm_cbe__2e_028__PHI_TEMPORARY;
  llvm_cbe__2e_037 = llvm_cbe__2e_037__PHI_TEMPORARY;
  llvm_cbe__2e_046 = llvm_cbe__2e_046__PHI_TEMPORARY;
  _42 = *((&encrypt_rotate_tab.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_019)))]));
  _43 = *((&encrypt_rotate_tab.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_019)))]));
  _44 = ((llvm_cbe__2e_037 << (((uint32_t)(uint8_t)_42))) | (llvm_lshr_u32(llvm_cbe__2e_037, (llvm_sub_u32(28, (((uint32_t)(uint8_t)_43))))))) & 268435455;
  _45 = *((&encrypt_rotate_tab.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_019)))]));
  _46 = *((&encrypt_rotate_tab.array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_019)))]));
  _47 = ((llvm_cbe__2e_028 << (((uint32_t)(uint8_t)_45))) | (llvm_lshr_u32(llvm_cbe__2e_028, (llvm_sub_u32(28, (((uint32_t)(uint8_t)_46))))))) & 268435455;
  _48 = (&llvm_cbe__2e_046[((int32_t)1)]);
  *llvm_cbe__2e_046 = (((((((((((((((((((((((_44 << 4) & 603979776) | ((_44 << 28) & 268435456)) | ((_44 << 14) & 134217728)) | ((_44 << 18) & 34078720)) | ((_44 << 6) & 16777216)) | ((_44 << 9) & 2097152)) | ((llvm_lshr_u32(_44, 1)) & 1048576)) | ((_44 << 10) & 262144)) | ((_44 << 2) & 131072)) | ((llvm_lshr_u32(_44, 10)) & 65536)) | ((llvm_lshr_u32(_47, 13)) & 8192)) | ((llvm_lshr_u32(_47, 4)) & 4096)) | ((_47 << 6) & 2048)) | ((llvm_lshr_u32(_47, 1)) & 1024)) | ((llvm_lshr_u32(_47, 14)) & 512)) | (_47 & 256)) | ((llvm_lshr_u32(_47, 5)) & 32)) | ((llvm_lshr_u32(_47, 10)) & 16)) | ((llvm_lshr_u32(_47, 3)) & 8)) | ((llvm_lshr_u32(_47, 18)) & 4)) | ((llvm_lshr_u32(_47, 26)) & 2)) | ((llvm_lshr_u32(_47, 24)) & 1));
  *_48 = (((((((((((((((((((((((_44 << 15) & 536870912) | ((_44 << 17) & 268435456)) | ((_44 << 10) & 134217728)) | ((_44 << 22) & 67108864)) | ((llvm_lshr_u32(_44, 2)) & 33554432)) | ((_44 << 1) & 16777216)) | ((_44 << 16) & 2097152)) | ((_44 << 11) & 1048576)) | ((_44 << 3) & 524288)) | ((llvm_lshr_u32(_44, 6)) & 262144)) | ((_44 << 15) & 131072)) | ((llvm_lshr_u32(_44, 4)) & 65536)) | ((llvm_lshr_u32(_47, 2)) & 8192)) | ((_47 << 8) & 4096)) | ((llvm_lshr_u32(_47, 14)) & 2056)) | ((llvm_lshr_u32(_47, 9)) & 1024)) | (_47 & 512)) | ((_47 << 7) & 256)) | ((llvm_lshr_u32(_47, 7)) & 32)) | ((llvm_lshr_u32(_47, 3)) & 17)) | ((_47 << 2) & 4)) | ((llvm_lshr_u32(_47, 21)) & 2));
  _49 = llvm_add_u32(llvm_cbe__2e_019, 1);
  if ((((((int32_t)_49) < ((int32_t)16u))&1))) {
    llvm_cbe__2e_019__PHI_TEMPORARY = _49;   /* for PHI node */
    llvm_cbe__2e_028__PHI_TEMPORARY = _47;   /* for PHI node */
    llvm_cbe__2e_037__PHI_TEMPORARY = _44;   /* for PHI node */
    llvm_cbe__2e_046__PHI_TEMPORARY = ((&_48[((int32_t)1)]));   /* for PHI node */
    goto _56;
  } else {
    llvm_cbe__2e_0_2e_ph__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_57:
  llvm_cbe__2e_05 = llvm_cbe__2e_05__PHI_TEMPORARY;
  _50 = *((&(*((&_5->field0))).array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(30, llvm_cbe__2e_05)))))]));
  *((&(*((&_5->field1))).array[((int64_t)(((int64_t)(int32_t)llvm_cbe__2e_05)))])) = _50;
  _51 = *((&(*((&_5->field0))).array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(31, llvm_cbe__2e_05)))))]));
  *((&(*((&_5->field1))).array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(llvm_cbe__2e_05, 1)))))])) = _51;
  _52 = llvm_add_u32(llvm_cbe__2e_05, 2);
  _53 = *((&(*((&_5->field0))).array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(30, _52)))))]));
  *((&(*((&_5->field1))).array[((int64_t)(((int64_t)(int32_t)_52)))])) = _53;
  _54 = *((&(*((&_5->field0))).array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(31, _52)))))]));
  *((&(*((&_5->field1))).array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_52, 1)))))])) = _54;
  _55 = llvm_add_u32(_52, 2);
  if ((((((int32_t)_55) < ((int32_t)32u))&1))) {
    llvm_cbe__2e_05__PHI_TEMPORARY = _55;   /* for PHI node */
    goto _57;
  } else {
    goto _58;
  }

  } while (1); /* end of syntactic loop '' */
_58:
  return 0;
}


static uint32_t des_ecb_crypt(struct l_struct_struct_OC__des_ctx* _59, uint8_t* _60, uint8_t* _61, uint32_t _62) {
  uint32_t* _63;
  uint8_t* _64;
  uint8_t _65;
  uint8_t _66;
  uint8_t _67;
  uint8_t _68;
  uint32_t _69;
  uint8_t* _70;
  uint8_t _71;
  uint8_t _72;
  uint8_t _73;
  uint8_t _74;
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
  uint32_t* _92;
  uint32_t _93;
  uint32_t _94;
  uint64_t _95;
  uint64_t _96;
  uint32_t _97;
  uint64_t _98;
  uint32_t _99;
  uint64_t _100;
  uint32_t _101;
  uint64_t _102;
  uint32_t _103;
  uint64_t _104;
  uint64_t _105;
  uint32_t _106;
  uint64_t _107;
  uint32_t _108;
  uint64_t _109;
  uint32_t _110;
  uint64_t _111;
  uint32_t _112;
  uint64_t _113;
  uint64_t _114;
  uint32_t _115;
  uint64_t _116;
  uint32_t _117;
  uint64_t _118;
  uint32_t _119;
  uint64_t _120;
  uint32_t _121;
  uint64_t _122;
  uint64_t _123;
  uint32_t _124;
  uint64_t _125;
  uint32_t _126;
  uint64_t _127;
  uint32_t _128;
  uint64_t _129;
  uint32_t _130;
  uint32_t* _131;
  uint32_t _132;
  uint32_t _133;
  uint64_t _134;
  uint64_t _135;
  uint32_t _136;
  uint64_t _137;
  uint32_t _138;
  uint64_t _139;
  uint32_t _140;
  uint64_t _141;
  uint32_t _142;
  uint64_t _143;
  uint64_t _144;
  uint32_t _145;
  uint64_t _146;
  uint32_t _147;
  uint64_t _148;
  uint32_t _149;
  uint64_t _150;
  uint32_t _151;
  uint64_t _152;
  uint64_t _153;
  uint32_t _154;
  uint64_t _155;
  uint32_t _156;
  uint64_t _157;
  uint32_t _158;
  uint64_t _159;
  uint32_t _160;
  uint64_t _161;
  uint64_t _162;
  uint32_t _163;
  uint64_t _164;
  uint32_t _165;
  uint64_t _166;
  uint32_t _167;
  uint64_t _168;
  uint32_t _169;
  uint32_t _170;
  uint32_t* _171;
  uint32_t _172;
  uint32_t _173;
  uint32_t _174;
  uint32_t _175;
  uint32_t _176;
  uint32_t _177;
  uint32_t* _178;
  uint32_t _179;
  uint32_t _180;
  uint32_t _181;
  uint32_t _182;
  uint32_t _183;
  uint32_t _184;
  uint32_t _185;
  uint32_t* _186;
  uint32_t _187;
  uint32_t _188;
  uint32_t _189;
  uint32_t _190;
  uint32_t _191;
  uint32_t _192;
  uint32_t* _193;
  uint32_t _194;
  uint32_t _195;
  uint32_t _196;
  uint32_t _197;
  uint32_t _198;
  uint32_t _199;
  uint32_t _200;
  uint32_t* _201;
  uint32_t _202;
  uint32_t _203;
  uint32_t _204;
  uint32_t _205;
  uint32_t _206;
  uint32_t _207;
  uint32_t* _208;
  uint32_t _209;
  uint32_t _210;
  uint32_t _211;
  uint32_t _212;
  uint32_t _213;
  uint32_t _214;
  uint32_t _215;
  uint32_t* _216;
  uint32_t _217;
  uint32_t _218;
  uint32_t _219;
  uint32_t _220;
  uint32_t _221;
  uint32_t _222;
  uint32_t* _223;
  uint32_t _224;
  uint32_t _225;
  uint32_t _226;
  uint32_t _227;
  uint32_t _228;
  uint32_t _229;
  uint32_t _230;
  uint32_t* _231;
  uint32_t _232;
  uint32_t _233;
  uint32_t _234;
  uint32_t _235;
  uint32_t _236;
  uint32_t _237;
  uint32_t* _238;
  uint32_t _239;
  uint32_t _240;
  uint32_t _241;
  uint32_t _242;
  uint32_t _243;
  uint32_t _244;
  uint32_t _245;
  uint32_t* _246;
  uint32_t _247;
  uint32_t _248;
  uint32_t _249;
  uint32_t _250;
  uint32_t _251;
  uint32_t _252;
  uint32_t* _253;
  uint32_t _254;
  uint32_t _255;
  uint32_t _256;
  uint32_t _257;
  uint32_t _258;
  uint32_t _259;
  uint32_t _260;
  uint32_t* _261;
  uint32_t _262;
  uint32_t _263;
  uint32_t _264;
  uint32_t _265;
  uint32_t _266;
  uint32_t _267;
  uint32_t* _268;
  uint32_t _269;
  uint32_t _270;
  uint32_t _271;
  uint32_t _272;
  uint32_t _273;
  uint32_t _274;
  uint32_t _275;
  uint32_t* _276;
  uint32_t _277;
  uint32_t _278;
  uint32_t _279;
  uint32_t _280;
  uint32_t _281;
  uint32_t _282;
  uint32_t* _283;
  uint32_t _284;
  uint32_t _285;
  uint32_t _286;
  uint32_t _287;
  uint32_t _288;
  uint32_t _289;
  uint32_t _290;
  uint32_t* _291;
  uint32_t _292;
  uint32_t _293;
  uint32_t _294;
  uint32_t _295;
  uint32_t _296;
  uint32_t _297;
  uint32_t* _298;
  uint32_t _299;
  uint32_t _300;
  uint32_t _301;
  uint32_t _302;
  uint32_t _303;
  uint32_t _304;
  uint32_t _305;
  uint32_t* _306;
  uint32_t _307;
  uint32_t _308;
  uint32_t _309;
  uint32_t _310;
  uint32_t _311;
  uint32_t _312;
  uint32_t* _313;
  uint32_t _314;
  uint32_t _315;
  uint32_t _316;
  uint32_t _317;
  uint32_t _318;
  uint32_t _319;
  uint32_t _320;
  uint32_t* _321;
  uint32_t _322;
  uint32_t _323;
  uint32_t _324;
  uint32_t _325;
  uint32_t _326;
  uint32_t _327;
  uint32_t* _328;
  uint32_t _329;
  uint32_t _330;
  uint32_t _331;
  uint32_t _332;
  uint32_t _333;
  uint32_t _334;
  uint32_t _335;
  uint32_t* _336;
  uint32_t _337;
  uint32_t _338;
  uint32_t _339;
  uint32_t _340;
  uint32_t _341;
  uint32_t _342;
  uint32_t* _343;
  uint32_t _344;
  uint32_t _345;
  uint32_t _346;
  uint32_t _347;
  uint32_t _348;
  uint32_t _349;
  uint32_t _350;
  uint32_t* _351;
  uint32_t _352;
  uint32_t _353;
  uint32_t _354;
  uint32_t _355;
  uint32_t _356;
  uint32_t _357;
  uint32_t* _358;
  uint32_t _359;
  uint32_t _360;
  uint32_t _361;
  uint32_t _362;
  uint32_t _363;
  uint32_t _364;
  uint32_t _365;
  uint32_t* _366;
  uint32_t _367;
  uint32_t _368;
  uint32_t _369;
  uint32_t _370;
  uint32_t _371;
  uint32_t _372;
  uint32_t* _373;
  uint32_t _374;
  uint32_t _375;
  uint32_t _376;
  uint32_t _377;
  uint32_t _378;
  uint32_t _379;
  uint32_t _380;
  uint32_t* _381;
  uint32_t _382;
  uint32_t _383;
  uint32_t _384;
  uint32_t _385;
  uint32_t _386;
  uint32_t _387;
  uint32_t* _388;
  uint32_t _389;
  uint32_t _390;
  uint32_t _391;
  uint32_t _392;
  uint32_t _393;
  uint32_t _394;
  uint32_t _395;
  uint32_t _396;
  uint32_t _397;
  uint32_t _398;
  uint32_t _399;
  uint32_t _400;
  uint32_t _401;
  uint32_t _402;
  uint32_t _403;
  uint32_t _404;
  uint32_t _405;
  uint32_t _406;
  uint32_t _407;
  uint32_t _408;
  uint32_t _409;
  uint32_t _410;
  uint32_t _411;
  uint32_t _412;
  uint8_t* _413;
  uint8_t* _414;

  _63 = (&(*(llvm_select_pu32a32((((_62 != 0u)&1)), ((&_59->field1)), ((&_59->field0))))).array[((int32_t)0)]);
  _64 = (&(*_60));
  _65 = *_64;
  _66 = *((&_64[((int64_t)1)]));
  _67 = *((&_64[((int64_t)2)]));
  _68 = *((&_64[((int64_t)3)]));
  _69 = ((((((uint32_t)(uint8_t)_65)) << 24) | ((((uint32_t)(uint8_t)_66)) << 16)) | ((((uint32_t)(uint8_t)_67)) << 8)) | (((uint32_t)(uint8_t)_68));
  _70 = (&_60[((int64_t)4)]);
  _71 = *_70;
  _72 = *((&_70[((int64_t)1)]));
  _73 = *((&_70[((int64_t)2)]));
  _74 = *((&_70[((int64_t)3)]));
  _75 = ((((((uint32_t)(uint8_t)_71)) << 24) | ((((uint32_t)(uint8_t)_72)) << 16)) | ((((uint32_t)(uint8_t)_73)) << 8)) | (((uint32_t)(uint8_t)_74));
  _76 = ((llvm_lshr_u32(_69, 4)) ^ _75) & 252645135;
  _77 = _75 ^ _76;
  _78 = _69 ^ (_76 << 4);
  _79 = ((llvm_lshr_u32(_78, 16)) ^ _77) & 65535;
  _80 = _77 ^ _79;
  _81 = _78 ^ (_79 << 16);
  _82 = ((llvm_lshr_u32(_80, 2)) ^ _81) & 858993459;
  _83 = _81 ^ _82;
  _84 = _80 ^ (_82 << 2);
  _85 = ((llvm_lshr_u32(_84, 8)) ^ _83) & 16711935;
  _86 = _83 ^ _85;
  _87 = _84 ^ (_85 << 8);
  _88 = (_87 << 1) | (llvm_lshr_u32(_87, 31));
  _89 = (_86 ^ _88) & 2863311530u;
  _90 = _88 ^ _89;
  _91 = _86 ^ _89;
  _92 = (&_63[((int32_t)1)]);
  _93 = *_63;
  _94 = _90 ^ _93;
  _95 = ((uint64_t)(uint32_t)(_94 & 63));
  _96 = llvm_srem_u64(_95, 16);
  _97 = *((&sbox8.array[((int64_t)_96)]));
  _98 = llvm_add_u64(_96, 16);
  _99 = *((&sbox8.array[((int64_t)_98)]));
  _100 = llvm_add_u64(_98, 16);
  _101 = *((&sbox8.array[((int64_t)_100)]));
  _102 = llvm_add_u64(_100, 16);
  _103 = *((&sbox8.array[((int64_t)_102)]));
  _104 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_94, 8)) & 63));
  _105 = llvm_srem_u64(_104, 16);
  _106 = *((&sbox6.array[((int64_t)_105)]));
  _107 = llvm_add_u64(_105, 16);
  _108 = *((&sbox6.array[((int64_t)_107)]));
  _109 = llvm_add_u64(_107, 16);
  _110 = *((&sbox6.array[((int64_t)_109)]));
  _111 = llvm_add_u64(_109, 16);
  _112 = *((&sbox6.array[((int64_t)_111)]));
  _113 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_94, 16)) & 63));
  _114 = llvm_srem_u64(_113, 16);
  _115 = *((&sbox4.array[((int64_t)_114)]));
  _116 = llvm_add_u64(_114, 16);
  _117 = *((&sbox4.array[((int64_t)_116)]));
  _118 = llvm_add_u64(_116, 16);
  _119 = *((&sbox4.array[((int64_t)_118)]));
  _120 = llvm_add_u64(_118, 16);
  _121 = *((&sbox4.array[((int64_t)_120)]));
  _122 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_94, 24)) & 63));
  _123 = llvm_srem_u64(_122, 16);
  _124 = *((&sbox2.array[((int64_t)_123)]));
  _125 = llvm_add_u64(_123, 16);
  _126 = *((&sbox2.array[((int64_t)_125)]));
  _127 = llvm_add_u64(_125, 16);
  _128 = *((&sbox2.array[((int64_t)_127)]));
  _129 = llvm_add_u64(_127, 16);
  _130 = *((&sbox2.array[((int64_t)_129)]));
  _131 = (&_92[((int32_t)1)]);
  _132 = *_92;
  _133 = ((_90 << 28) | (llvm_lshr_u32(_90, 4))) ^ _132;
  _134 = ((uint64_t)(uint32_t)(_133 & 63));
  _135 = llvm_srem_u64(_134, 16);
  _136 = *((&sbox7.array[((int64_t)_135)]));
  _137 = llvm_add_u64(_135, 16);
  _138 = *((&sbox7.array[((int64_t)_137)]));
  _139 = llvm_add_u64(_137, 16);
  _140 = *((&sbox7.array[((int64_t)_139)]));
  _141 = llvm_add_u64(_139, 16);
  _142 = *((&sbox7.array[((int64_t)_141)]));
  _143 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_133, 8)) & 63));
  _144 = llvm_srem_u64(_143, 16);
  _145 = *((&sbox5.array[((int64_t)_144)]));
  _146 = llvm_add_u64(_144, 16);
  _147 = *((&sbox5.array[((int64_t)_146)]));
  _148 = llvm_add_u64(_146, 16);
  _149 = *((&sbox5.array[((int64_t)_148)]));
  _150 = llvm_add_u64(_148, 16);
  _151 = *((&sbox5.array[((int64_t)_150)]));
  _152 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_133, 16)) & 63));
  _153 = llvm_srem_u64(_152, 16);
  _154 = *((&sbox3.array[((int64_t)_153)]));
  _155 = llvm_add_u64(_153, 16);
  _156 = *((&sbox3.array[((int64_t)_155)]));
  _157 = llvm_add_u64(_155, 16);
  _158 = *((&sbox3.array[((int64_t)_157)]));
  _159 = llvm_add_u64(_157, 16);
  _160 = *((&sbox3.array[((int64_t)_159)]));
  _161 = ((uint64_t)(uint32_t)((llvm_lshr_u32(_133, 24)) & 63));
  _162 = llvm_srem_u64(_161, 16);
  _163 = *((&sbox1.array[((int64_t)_162)]));
  _164 = llvm_add_u64(_162, 16);
  _165 = *((&sbox1.array[((int64_t)_164)]));
  _166 = llvm_add_u64(_164, 16);
  _167 = *((&sbox1.array[((int64_t)_166)]));
  _168 = llvm_add_u64(_166, 16);
  _169 = *((&sbox1.array[((int64_t)_168)]));
  _170 = (((((((((_91 << 1) | (llvm_lshr_u32(_91, 31))) ^ (llvm_select_u32((((_95 == _102)&1)), _103, (llvm_select_u32((((_95 == _100)&1)), _101, (llvm_select_u32((((_95 == _98)&1)), _99, (llvm_select_u32((((_95 == _96)&1)), _97, 0))))))))) ^ (llvm_select_u32((((_104 == _111)&1)), _112, (llvm_select_u32((((_104 == _109)&1)), _110, (llvm_select_u32((((_104 == _107)&1)), _108, (llvm_select_u32((((_104 == _105)&1)), _106, 0))))))))) ^ (llvm_select_u32((((_113 == _120)&1)), _121, (llvm_select_u32((((_113 == _118)&1)), _119, (llvm_select_u32((((_113 == _116)&1)), _117, (llvm_select_u32((((_113 == _114)&1)), _115, 0))))))))) ^ (llvm_select_u32((((_122 == _129)&1)), _130, (llvm_select_u32((((_122 == _127)&1)), _128, (llvm_select_u32((((_122 == _125)&1)), _126, (llvm_select_u32((((_122 == _123)&1)), _124, 0))))))))) ^ (llvm_select_u32((((_134 == _141)&1)), _142, (llvm_select_u32((((_134 == _139)&1)), _140, (llvm_select_u32((((_134 == _137)&1)), _138, (llvm_select_u32((((_134 == _135)&1)), _136, 0))))))))) ^ (llvm_select_u32((((_143 == _150)&1)), _151, (llvm_select_u32((((_143 == _148)&1)), _149, (llvm_select_u32((((_143 == _146)&1)), _147, (llvm_select_u32((((_143 == _144)&1)), _145, 0))))))))) ^ (llvm_select_u32((((_152 == _159)&1)), _160, (llvm_select_u32((((_152 == _157)&1)), _158, (llvm_select_u32((((_152 == _155)&1)), _156, (llvm_select_u32((((_152 == _153)&1)), _154, 0))))))))) ^ (llvm_select_u32((((_161 == _168)&1)), _169, (llvm_select_u32((((_161 == _166)&1)), _167, (llvm_select_u32((((_161 == _164)&1)), _165, (llvm_select_u32((((_161 == _162)&1)), _163, 0))))))));
  _171 = (&_131[((int32_t)1)]);
  _172 = *_131;
  _173 = _170 ^ _172;
  _174 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_173 & 63))))]));
  _175 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_173, 8)) & 63))))]));
  _176 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_173, 16)) & 63))))]));
  _177 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_173, 24)) & 63))))]));
  _178 = (&_171[((int32_t)1)]);
  _179 = *_171;
  _180 = ((_170 << 28) | (llvm_lshr_u32(_170, 4))) ^ _179;
  _181 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_180 & 63))))]));
  _182 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_180, 8)) & 63))))]));
  _183 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_180, 16)) & 63))))]));
  _184 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_180, 24)) & 63))))]));
  _185 = (((((((_90 ^ _174) ^ _175) ^ _176) ^ _177) ^ _181) ^ _182) ^ _183) ^ _184;
  _186 = (&_178[((int32_t)1)]);
  _187 = *_178;
  _188 = _185 ^ _187;
  _189 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_188 & 63))))]));
  _190 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_188, 8)) & 63))))]));
  _191 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_188, 16)) & 63))))]));
  _192 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_188, 24)) & 63))))]));
  _193 = (&_186[((int32_t)1)]);
  _194 = *_186;
  _195 = ((_185 << 28) | (llvm_lshr_u32(_185, 4))) ^ _194;
  _196 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_195 & 63))))]));
  _197 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_195, 8)) & 63))))]));
  _198 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_195, 16)) & 63))))]));
  _199 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_195, 24)) & 63))))]));
  _200 = (((((((_170 ^ _189) ^ _190) ^ _191) ^ _192) ^ _196) ^ _197) ^ _198) ^ _199;
  _201 = (&_193[((int32_t)1)]);
  _202 = *_193;
  _203 = _200 ^ _202;
  _204 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_203 & 63))))]));
  _205 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_203, 8)) & 63))))]));
  _206 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_203, 16)) & 63))))]));
  _207 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_203, 24)) & 63))))]));
  _208 = (&_201[((int32_t)1)]);
  _209 = *_201;
  _210 = ((_200 << 28) | (llvm_lshr_u32(_200, 4))) ^ _209;
  _211 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_210 & 63))))]));
  _212 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_210, 8)) & 63))))]));
  _213 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_210, 16)) & 63))))]));
  _214 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_210, 24)) & 63))))]));
  _215 = (((((((_185 ^ _204) ^ _205) ^ _206) ^ _207) ^ _211) ^ _212) ^ _213) ^ _214;
  _216 = (&_208[((int32_t)1)]);
  _217 = *_208;
  _218 = _215 ^ _217;
  _219 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_218 & 63))))]));
  _220 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_218, 8)) & 63))))]));
  _221 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_218, 16)) & 63))))]));
  _222 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_218, 24)) & 63))))]));
  _223 = (&_216[((int32_t)1)]);
  _224 = *_216;
  _225 = ((_215 << 28) | (llvm_lshr_u32(_215, 4))) ^ _224;
  _226 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_225 & 63))))]));
  _227 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_225, 8)) & 63))))]));
  _228 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_225, 16)) & 63))))]));
  _229 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_225, 24)) & 63))))]));
  _230 = (((((((_200 ^ _219) ^ _220) ^ _221) ^ _222) ^ _226) ^ _227) ^ _228) ^ _229;
  _231 = (&_223[((int32_t)1)]);
  _232 = *_223;
  _233 = _230 ^ _232;
  _234 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_233 & 63))))]));
  _235 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_233, 8)) & 63))))]));
  _236 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_233, 16)) & 63))))]));
  _237 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_233, 24)) & 63))))]));
  _238 = (&_231[((int32_t)1)]);
  _239 = *_231;
  _240 = ((_230 << 28) | (llvm_lshr_u32(_230, 4))) ^ _239;
  _241 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_240 & 63))))]));
  _242 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_240, 8)) & 63))))]));
  _243 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_240, 16)) & 63))))]));
  _244 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_240, 24)) & 63))))]));
  _245 = (((((((_215 ^ _234) ^ _235) ^ _236) ^ _237) ^ _241) ^ _242) ^ _243) ^ _244;
  _246 = (&_238[((int32_t)1)]);
  _247 = *_238;
  _248 = _245 ^ _247;
  _249 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_248 & 63))))]));
  _250 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_248, 8)) & 63))))]));
  _251 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_248, 16)) & 63))))]));
  _252 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_248, 24)) & 63))))]));
  _253 = (&_246[((int32_t)1)]);
  _254 = *_246;
  _255 = ((_245 << 28) | (llvm_lshr_u32(_245, 4))) ^ _254;
  _256 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_255 & 63))))]));
  _257 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_255, 8)) & 63))))]));
  _258 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_255, 16)) & 63))))]));
  _259 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_255, 24)) & 63))))]));
  _260 = (((((((_230 ^ _249) ^ _250) ^ _251) ^ _252) ^ _256) ^ _257) ^ _258) ^ _259;
  _261 = (&_253[((int32_t)1)]);
  _262 = *_253;
  _263 = _260 ^ _262;
  _264 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_263 & 63))))]));
  _265 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_263, 8)) & 63))))]));
  _266 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_263, 16)) & 63))))]));
  _267 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_263, 24)) & 63))))]));
  _268 = (&_261[((int32_t)1)]);
  _269 = *_261;
  _270 = ((_260 << 28) | (llvm_lshr_u32(_260, 4))) ^ _269;
  _271 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_270 & 63))))]));
  _272 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_270, 8)) & 63))))]));
  _273 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_270, 16)) & 63))))]));
  _274 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_270, 24)) & 63))))]));
  _275 = (((((((_245 ^ _264) ^ _265) ^ _266) ^ _267) ^ _271) ^ _272) ^ _273) ^ _274;
  _276 = (&_268[((int32_t)1)]);
  _277 = *_268;
  _278 = _275 ^ _277;
  _279 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_278 & 63))))]));
  _280 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_278, 8)) & 63))))]));
  _281 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_278, 16)) & 63))))]));
  _282 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_278, 24)) & 63))))]));
  _283 = (&_276[((int32_t)1)]);
  _284 = *_276;
  _285 = ((_275 << 28) | (llvm_lshr_u32(_275, 4))) ^ _284;
  _286 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_285 & 63))))]));
  _287 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_285, 8)) & 63))))]));
  _288 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_285, 16)) & 63))))]));
  _289 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_285, 24)) & 63))))]));
  _290 = (((((((_260 ^ _279) ^ _280) ^ _281) ^ _282) ^ _286) ^ _287) ^ _288) ^ _289;
  _291 = (&_283[((int32_t)1)]);
  _292 = *_283;
  _293 = _290 ^ _292;
  _294 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_293 & 63))))]));
  _295 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_293, 8)) & 63))))]));
  _296 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_293, 16)) & 63))))]));
  _297 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_293, 24)) & 63))))]));
  _298 = (&_291[((int32_t)1)]);
  _299 = *_291;
  _300 = ((_290 << 28) | (llvm_lshr_u32(_290, 4))) ^ _299;
  _301 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_300 & 63))))]));
  _302 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_300, 8)) & 63))))]));
  _303 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_300, 16)) & 63))))]));
  _304 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_300, 24)) & 63))))]));
  _305 = (((((((_275 ^ _294) ^ _295) ^ _296) ^ _297) ^ _301) ^ _302) ^ _303) ^ _304;
  _306 = (&_298[((int32_t)1)]);
  _307 = *_298;
  _308 = _305 ^ _307;
  _309 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_308 & 63))))]));
  _310 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_308, 8)) & 63))))]));
  _311 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_308, 16)) & 63))))]));
  _312 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_308, 24)) & 63))))]));
  _313 = (&_306[((int32_t)1)]);
  _314 = *_306;
  _315 = ((_305 << 28) | (llvm_lshr_u32(_305, 4))) ^ _314;
  _316 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_315 & 63))))]));
  _317 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_315, 8)) & 63))))]));
  _318 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_315, 16)) & 63))))]));
  _319 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_315, 24)) & 63))))]));
  _320 = (((((((_290 ^ _309) ^ _310) ^ _311) ^ _312) ^ _316) ^ _317) ^ _318) ^ _319;
  _321 = (&_313[((int32_t)1)]);
  _322 = *_313;
  _323 = _320 ^ _322;
  _324 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_323 & 63))))]));
  _325 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_323, 8)) & 63))))]));
  _326 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_323, 16)) & 63))))]));
  _327 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_323, 24)) & 63))))]));
  _328 = (&_321[((int32_t)1)]);
  _329 = *_321;
  _330 = ((_320 << 28) | (llvm_lshr_u32(_320, 4))) ^ _329;
  _331 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_330 & 63))))]));
  _332 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_330, 8)) & 63))))]));
  _333 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_330, 16)) & 63))))]));
  _334 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_330, 24)) & 63))))]));
  _335 = (((((((_305 ^ _324) ^ _325) ^ _326) ^ _327) ^ _331) ^ _332) ^ _333) ^ _334;
  _336 = (&_328[((int32_t)1)]);
  _337 = *_328;
  _338 = _335 ^ _337;
  _339 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_338 & 63))))]));
  _340 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_338, 8)) & 63))))]));
  _341 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_338, 16)) & 63))))]));
  _342 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_338, 24)) & 63))))]));
  _343 = (&_336[((int32_t)1)]);
  _344 = *_336;
  _345 = ((_335 << 28) | (llvm_lshr_u32(_335, 4))) ^ _344;
  _346 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_345 & 63))))]));
  _347 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_345, 8)) & 63))))]));
  _348 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_345, 16)) & 63))))]));
  _349 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_345, 24)) & 63))))]));
  _350 = (((((((_320 ^ _339) ^ _340) ^ _341) ^ _342) ^ _346) ^ _347) ^ _348) ^ _349;
  _351 = (&_343[((int32_t)1)]);
  _352 = *_343;
  _353 = _350 ^ _352;
  _354 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_353 & 63))))]));
  _355 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_353, 8)) & 63))))]));
  _356 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_353, 16)) & 63))))]));
  _357 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_353, 24)) & 63))))]));
  _358 = (&_351[((int32_t)1)]);
  _359 = *_351;
  _360 = ((_350 << 28) | (llvm_lshr_u32(_350, 4))) ^ _359;
  _361 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_360 & 63))))]));
  _362 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_360, 8)) & 63))))]));
  _363 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_360, 16)) & 63))))]));
  _364 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_360, 24)) & 63))))]));
  _365 = (((((((_335 ^ _354) ^ _355) ^ _356) ^ _357) ^ _361) ^ _362) ^ _363) ^ _364;
  _366 = (&_358[((int32_t)1)]);
  _367 = *_358;
  _368 = _365 ^ _367;
  _369 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_368 & 63))))]));
  _370 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_368, 8)) & 63))))]));
  _371 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_368, 16)) & 63))))]));
  _372 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_368, 24)) & 63))))]));
  _373 = (&_366[((int32_t)1)]);
  _374 = *_366;
  _375 = ((_365 << 28) | (llvm_lshr_u32(_365, 4))) ^ _374;
  _376 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_375 & 63))))]));
  _377 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_375, 8)) & 63))))]));
  _378 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_375, 16)) & 63))))]));
  _379 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_375, 24)) & 63))))]));
  _380 = (((((((_350 ^ _369) ^ _370) ^ _371) ^ _372) ^ _376) ^ _377) ^ _378) ^ _379;
  _381 = (&_373[((int32_t)1)]);
  _382 = *_373;
  _383 = _380 ^ _382;
  _384 = *((&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(_383 & 63))))]));
  _385 = *((&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_383, 8)) & 63))))]));
  _386 = *((&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_383, 16)) & 63))))]));
  _387 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_383, 24)) & 63))))]));
  _388 = (&_381[((int32_t)1)]);
  _389 = *_381;
  _390 = ((_380 << 28) | (llvm_lshr_u32(_380, 4))) ^ _389;
  _391 = *((&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(_390 & 63))))]));
  _392 = *((&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_390, 8)) & 63))))]));
  _393 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_390, 16)) & 63))))]));
  _394 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_390, 24)) & 63))))]));
  _395 = (((((((_365 ^ _384) ^ _385) ^ _386) ^ _387) ^ _391) ^ _392) ^ _393) ^ _394;
  _396 = (_395 << 31) | (llvm_lshr_u32(_395, 1));
  _397 = (_396 ^ _380) & 2863311530u;
  _398 = _396 ^ _397;
  _399 = _380 ^ _397;
  _400 = (_399 << 31) | (llvm_lshr_u32(_399, 1));
  _401 = ((llvm_lshr_u32(_400, 8)) ^ _398) & 16711935;
  _402 = _398 ^ _401;
  _403 = _400 ^ (_401 << 8);
  _404 = ((llvm_lshr_u32(_403, 2)) ^ _402) & 858993459;
  _405 = _402 ^ _404;
  _406 = _403 ^ (_404 << 2);
  _407 = ((llvm_lshr_u32(_405, 16)) ^ _406) & 65535;
  _408 = _406 ^ _407;
  _409 = _405 ^ (_407 << 16);
  _410 = ((llvm_lshr_u32(_409, 4)) ^ _408) & 252645135;
  _411 = _408 ^ _410;
  _412 = _409 ^ (_410 << 4);
  _413 = (&(*_61));
  *_413 = (((uint8_t)(llvm_lshr_u32(_412, 24))));
  *((&_413[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32(_412, 16))));
  *((&_413[((int64_t)2)])) = (((uint8_t)(llvm_lshr_u32(_412, 8))));
  *((&_413[((int64_t)3)])) = (((uint8_t)_412));
  _414 = (&_61[((int64_t)4)]);
  *_414 = (((uint8_t)(llvm_lshr_u32(_411, 24))));
  *((&_414[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32(_411, 16))));
  *((&_414[((int64_t)2)])) = (((uint8_t)(llvm_lshr_u32(_411, 8))));
  *((&_414[((int64_t)3)])) = (((uint8_t)_411));
  return 0;
}

