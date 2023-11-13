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
#define __UNALIGNED_LOAD__(type, align, op) *((type __unaligned*)op)
#else
#define __UNALIGNED_LOAD__(type, align, op) ((struct { type data __attribute__((packed, aligned(align))); }*)op)->data
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
struct l_array_24_uint8_t;
struct l_array_64_uint8_t;
struct l_array_64_uint32_t;
struct l_array_16_uint32_t;
struct l_array_16_uint8_t;
struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx;

/* Function definitions */
typedef void l_fptr_2(void);

typedef void l_fptr_5(uint64_t, uint64_t);

typedef void l_fptr_4(struct l_struct_struct_OC__des_ctx*);

typedef uint32_t l_fptr_6(uint32_t, uint8_t**);

typedef void l_fptr_1(void);

typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);


/* Types Definitions */
struct l_array_32_uint32_t {
  uint32_t array[32];
};
struct l_struct_struct_OC__des_ctx {
  struct l_array_32_uint32_t field0;
  struct l_array_32_uint32_t field1;
};
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};
struct l_array_64_uint32_t {
  uint32_t array[64];
};
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx {
  struct l_struct_struct_OC__des_ctx array[1];
};
struct l_vector_4_uint32_t {
  uint32_t vector[4];
} __attribute__((aligned(16)));

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static void des_setkey_OC_1(struct l_struct_struct_OC__des_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
static void des_ecb_crypt_OC_2(struct l_struct_struct_OC__des_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_24_uint8_t in_key __attribute__((aligned(64))) = { "\x8F\xE1\x13;P\xE3T\a3\xAA\xF6\xBD\xAAL~j\xBC\x91\xEF\xB9\xFA\xF1\xFF~" };
static __MSALIGN__(16) struct l_array_64_uint8_t in __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_64_uint8_t out __attribute__((aligned(16)));
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox8 __attribute__((aligned(64))) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox6 __attribute__((aligned(64))) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox4 __attribute__((aligned(64))) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox2 __attribute__((aligned(64))) = { { 2148565024u, 2147516416u, 32768, 1081376, 1048576, 32, 2148532256u, 2147516448u, 2147483680u, 2148565024u, 2148564992u, 2147483648u, 2147516416u, 1048576, 32, 2148532256u, 1081344, 1048608, 2147516448u, 0, 2147483648u, 32768, 1081376, 2148532224u, 1048608, 2147483680u, 0, 1081344, 32800, 2148564992u, 2148532224u, 32800, 0, 1081376, 2148532256u, 1048576, 2147516448u, 2148532224u, 2148564992u, 32768, 2148532224u, 2147516416u, 32, 2148565024u, 1081376, 32, 32768, 2147483648u, 32800, 2148564992u, 1048576, 2147483680u, 1048608, 2147516448u, 2147483680u, 1048608, 1081344, 0, 2147516416u, 32800, 2147483648u, 2148532256u, 2148565024u, 1081344 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox7 __attribute__((aligned(64))) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox5 __attribute__((aligned(64))) = { { 256, 34078976, 34078720, 1107296512u, 524288, 256, 1073741824u, 34078720, 1074266368u, 524288, 33554688, 1074266368u, 1107296512u, 1107820544u, 524544, 1073741824u, 33554432, 1074266112u, 1074266112u, 0, 1073742080u, 1107820800u, 1107820800u, 33554688, 1107820544u, 1073742080u, 0, 1107296256u, 34078976, 33554432, 1107296256u, 524544, 524288, 1107296512u, 256, 33554432, 1073741824u, 34078720, 1107296512u, 1074266368u, 33554688, 1073741824u, 1107820544u, 34078976, 1074266368u, 256, 33554432, 1107820544u, 1107820800u, 524544, 1107296256u, 1107820800u, 34078720, 0, 1074266112u, 1107296256u, 524544, 33554688, 1073742080u, 524288, 0, 1074266112u, 34078976, 1073742080u } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox3 __attribute__((aligned(64))) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t sbox1 __attribute__((aligned(64))) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };
static const __MSALIGN__(64) struct l_array_16_uint32_t leftkey_swap __attribute__((aligned(64))) = { { 0, 1, 256, 257, 65536, 65537, 65792, 65793, 16777216, 16777217, 16777472, 16777473, 16842752, 16842753, 16843008, 16843009 } };
static const __MSALIGN__(64) struct l_array_16_uint32_t rightkey_swap __attribute__((aligned(64))) = { { 0, 16777216, 65536, 16842752, 256, 16777472, 65792, 16843008, 1, 16777217, 65537, 16842753, 257, 16777473, 65793, 16843009 } };
static const __MSALIGN__(64) struct l_array_16_uint8_t encrypt_rotate_tab __attribute__((aligned(64))) = { "\x01\x01\x02\x02\x02\x02\x02\x02\x01\x02\x02\x02\x02\x02\x02\x01" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = iftrue + ifnot; //r = condition ? iftrue : ifnot;
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
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline __MSALIGN__(16) struct l_vector_4_uint32_t llvm_ctor_u32x4(uint32_t x0, uint32_t x1, uint32_t x2, uint32_t x3) {
  __MSALIGN__(16) struct l_vector_4_uint32_t r;
  r.vector[0] = x0;
  r.vector[1] = x1;
  r.vector[2] = x2;
  r.vector[3] = x3;
  return r;
}


/* Function Bodies */

static void __main(void) {
  __MSALIGN__(16) struct l_array_1_struct_AC_l_struct_struct_OC__des_ctx llvm_cbe_ctx __attribute__((aligned(16)));    /* Address-exposed local */
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call1;
  struct l_struct_struct_OC__des_ctx* llvm_cbe_arraydecay;
  uint64_t llvm_cbe_call5;

  ;
  ;
#line 1483 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 1484 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_call =  /*tail*/ read(0, ((&in_key.array[((int64_t)0)])), 24);
#line 1485 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_call1 =  /*tail*/ read(0, ((&in.array[((int64_t)0)])), 64);
#line 1486 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arraydecay = (&llvm_cbe_ctx.array[((int64_t)0)]);
  des_setkey_OC_1(llvm_cbe_arraydecay);
#line 1487 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  des_ecb_crypt_OC_2(llvm_cbe_arraydecay);
#line 1488 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_call5 = write(1, ((&out.array[((int64_t)0)])), 64);
}


static void des_setkey_OC_1(struct l_struct_struct_OC__des_ctx* llvm_cbe_ctx) {
  uint32_t* llvm_cbe_arraydecay;
  uint8_t _1;
  uint32_t llvm_cbe_conv_2e_i_2e_i;
  uint8_t _2;
  uint8_t _3;
  uint8_t _4;
  uint32_t llvm_cbe_or10_2e_i_2e_i;
  uint8_t _5;
  uint8_t _6;
  uint8_t _7;
  uint8_t _8;
  uint32_t llvm_cbe_or10_2e_i265_2e_i;
  uint32_t llvm_cbe_and_2e_i;
  uint32_t llvm_cbe_xor3_2e_i;
  uint32_t llvm_cbe_xor10_2e_i;
  uint32_t* llvm_cbe_arrayidx_2e_i;
  uint8_t* _9;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY;
  uint32_t _10;
  uint32_t llvm_cbe_cond_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_shl13_2e_i;
  uint32_t* llvm_cbe_arrayidx17_2e_i;
  uint8_t* _11;
  uint64_t llvm_cbe_and_2e_i186;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i188;
  uint32_t llvm_cbe_res_2e_028_2e_i191;
  uint32_t llvm_cbe_res_2e_028_2e_i191__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i192;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i192__PHI_TEMPORARY;
  uint32_t _12;
  uint32_t llvm_cbe_cond_2e_i194;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i195;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i190;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i190__PHI_TEMPORARY;
  uint32_t llvm_cbe_or_2e_i;
  uint32_t* llvm_cbe_arrayidx22_2e_i;
  uint8_t* _13;
  uint64_t llvm_cbe_and_2e_i173;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i175;
  uint32_t llvm_cbe_res_2e_028_2e_i178;
  uint32_t llvm_cbe_res_2e_028_2e_i178__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i179;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i179__PHI_TEMPORARY;
  uint32_t _14;
  uint32_t llvm_cbe_cond_2e_i181;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i182;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i177;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i177__PHI_TEMPORARY;
  uint32_t llvm_cbe_or24_2e_i;
  uint32_t* llvm_cbe_arrayidx28_2e_i;
  uint8_t* _15;
  uint64_t llvm_cbe_and_2e_i160;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i162;
  uint32_t llvm_cbe_res_2e_028_2e_i165;
  uint32_t llvm_cbe_res_2e_028_2e_i165__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i166;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i166__PHI_TEMPORARY;
  uint32_t _16;
  uint32_t llvm_cbe_cond_2e_i168;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i169;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i164;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i164__PHI_TEMPORARY;
  uint32_t llvm_cbe_or29_2e_i;
  uint32_t* llvm_cbe_arrayidx33_2e_i;
  uint8_t* _17;
  uint64_t llvm_cbe_and_2e_i147;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i149;
  uint32_t llvm_cbe_res_2e_028_2e_i152;
  uint32_t llvm_cbe_res_2e_028_2e_i152__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i153;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i153__PHI_TEMPORARY;
  uint32_t _18;
  uint32_t llvm_cbe_cond_2e_i155;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i156;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i151;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i151__PHI_TEMPORARY;
  uint32_t llvm_cbe_or35_2e_i;
  uint32_t* llvm_cbe_arrayidx39_2e_i;
  uint8_t* _19;
  uint64_t llvm_cbe_and_2e_i134;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i136;
  uint32_t llvm_cbe_res_2e_028_2e_i139;
  uint32_t llvm_cbe_res_2e_028_2e_i139__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i140;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i140__PHI_TEMPORARY;
  uint32_t _20;
  uint32_t llvm_cbe_cond_2e_i142;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i143;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i138;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i138__PHI_TEMPORARY;
  uint32_t llvm_cbe_or41_2e_i;
  uint32_t* llvm_cbe_arrayidx45_2e_i;
  uint8_t* _21;
  uint64_t llvm_cbe_and_2e_i121;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i123;
  uint32_t llvm_cbe_res_2e_028_2e_i126;
  uint32_t llvm_cbe_res_2e_028_2e_i126__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i127;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i127__PHI_TEMPORARY;
  uint32_t _22;
  uint32_t llvm_cbe_cond_2e_i129;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i130;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i125;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i125__PHI_TEMPORARY;
  uint32_t llvm_cbe_or47_2e_i;
  uint32_t* llvm_cbe_arrayidx51_2e_i;
  uint8_t* _23;
  uint64_t llvm_cbe_and_2e_i108;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i110;
  uint32_t llvm_cbe_res_2e_028_2e_i113;
  uint32_t llvm_cbe_res_2e_028_2e_i113__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i114;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i114__PHI_TEMPORARY;
  uint32_t _24;
  uint32_t llvm_cbe_cond_2e_i116;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i117;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i112;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i112__PHI_TEMPORARY;
  uint32_t llvm_cbe_and54_2e_i;
  uint32_t* llvm_cbe_arrayidx58_2e_i;
  uint8_t* _25;
  uint64_t llvm_cbe_and_2e_i95;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i97;
  uint32_t llvm_cbe_res_2e_028_2e_i100;
  uint32_t llvm_cbe_res_2e_028_2e_i100__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i101;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i101__PHI_TEMPORARY;
  uint32_t _26;
  uint32_t llvm_cbe_cond_2e_i103;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i104;
  uint32_t llvm_cbe_phitmp;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i99;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i99__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx63_2e_i;
  uint8_t* _27;
  uint64_t llvm_cbe_and_2e_i82;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i84;
  uint32_t llvm_cbe_res_2e_028_2e_i87;
  uint32_t llvm_cbe_res_2e_028_2e_i87__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i88;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i88__PHI_TEMPORARY;
  uint32_t _28;
  uint32_t llvm_cbe_cond_2e_i90;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i91;
  uint32_t llvm_cbe_phitmp199;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i86;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i86__PHI_TEMPORARY;
  uint32_t llvm_cbe_or65_2e_i;
  uint32_t* llvm_cbe_arrayidx69_2e_i;
  uint8_t* _29;
  uint64_t llvm_cbe_and_2e_i69;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i71;
  uint32_t llvm_cbe_res_2e_028_2e_i74;
  uint32_t llvm_cbe_res_2e_028_2e_i74__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i75;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i75__PHI_TEMPORARY;
  uint32_t _30;
  uint32_t llvm_cbe_cond_2e_i77;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i78;
  uint32_t llvm_cbe_phitmp200;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i73;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i73__PHI_TEMPORARY;
  uint32_t llvm_cbe_or71_2e_i;
  uint32_t* llvm_cbe_arrayidx75_2e_i;
  uint8_t* _31;
  uint64_t llvm_cbe_and_2e_i56;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i58;
  uint32_t llvm_cbe_res_2e_028_2e_i61;
  uint32_t llvm_cbe_res_2e_028_2e_i61__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i62;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i62__PHI_TEMPORARY;
  uint32_t _32;
  uint32_t llvm_cbe_cond_2e_i64;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i65;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i60;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i60__PHI_TEMPORARY;
  uint32_t llvm_cbe_or76_2e_i;
  uint32_t* llvm_cbe_arrayidx80_2e_i;
  uint8_t* _33;
  uint64_t llvm_cbe_and_2e_i43;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i45;
  uint32_t llvm_cbe_res_2e_028_2e_i48;
  uint32_t llvm_cbe_res_2e_028_2e_i48__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i49;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i49__PHI_TEMPORARY;
  uint32_t _34;
  uint32_t llvm_cbe_cond_2e_i51;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i52;
  uint32_t llvm_cbe_phitmp201;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i47;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i47__PHI_TEMPORARY;
  uint32_t llvm_cbe_or82_2e_i;
  uint32_t* llvm_cbe_arrayidx86_2e_i;
  uint8_t* _35;
  uint64_t llvm_cbe_and_2e_i30;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i32;
  uint32_t llvm_cbe_res_2e_028_2e_i35;
  uint32_t llvm_cbe_res_2e_028_2e_i35__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i36;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i36__PHI_TEMPORARY;
  uint32_t _36;
  uint32_t llvm_cbe_cond_2e_i38;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i39;
  uint32_t llvm_cbe_phitmp202;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i34;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i34__PHI_TEMPORARY;
  uint32_t llvm_cbe_or88_2e_i;
  uint32_t* llvm_cbe_arrayidx92_2e_i;
  uint8_t* _37;
  uint64_t llvm_cbe_and_2e_i17;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i19;
  uint32_t llvm_cbe_res_2e_028_2e_i22;
  uint32_t llvm_cbe_res_2e_028_2e_i22__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i23;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i23__PHI_TEMPORARY;
  uint32_t _38;
  uint32_t llvm_cbe_cond_2e_i25;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i26;
  uint32_t llvm_cbe_phitmp203;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i21;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i21__PHI_TEMPORARY;
  uint32_t llvm_cbe_or94_2e_i;
  uint32_t* llvm_cbe_arrayidx98_2e_i;
  uint8_t* _39;
  uint64_t llvm_cbe_and_2e_i4;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i6;
  uint32_t llvm_cbe_res_2e_028_2e_i9;
  uint32_t llvm_cbe_res_2e_028_2e_i9__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i10;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i10__PHI_TEMPORARY;
  uint32_t _40;
  uint32_t llvm_cbe_cond_2e_i12;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i13;
  uint32_t llvm_cbe_phitmp204;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i8;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i8__PHI_TEMPORARY;
  uint32_t llvm_cbe_and101_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv9_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv9_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_right_2e_i_2e_04_2e_i_2e_i;
  uint32_t llvm_cbe_right_2e_i_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_left_2e_i_2e_03_2e_i_2e_i;
  uint32_t llvm_cbe_left_2e_i_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i;
  uint32_t* llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_index_2e_i_2e_i;
  uint64_t llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _41;
  uint32_t llvm_cbe_conv_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_sub_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or109_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and110_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or120_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and121_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_shl142_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_shr163_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_shr174_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_shl186_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next10_2e_i_2e_i;
  __MSALIGN__(16) struct l_vector_4_uint32_t _42;
  __MSALIGN__(16) struct l_vector_4_uint32_t _43;
  __MSALIGN__(16) struct l_vector_4_uint32_t _44;
  __MSALIGN__(16) struct l_vector_4_uint32_t _45;
  __MSALIGN__(16) struct l_vector_4_uint32_t _46;
  __MSALIGN__(16) struct l_vector_4_uint32_t _47;
  __MSALIGN__(16) struct l_vector_4_uint32_t _48;
  __MSALIGN__(16) struct l_vector_4_uint32_t _49;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
#line 645 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arraydecay = (&llvm_cbe_ctx->field0.array[((int64_t)0)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
  ;
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _1 = *((&in_key.array[((int64_t)0)]));
  llvm_cbe_conv_2e_i_2e_i = ((uint32_t)(uint8_t)_1);
  _2 = *((&in_key.array[((int64_t)1)]));
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _3 = *((&in_key.array[((int64_t)2)]));
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _4 = *((&in_key.array[((int64_t)3)]));
  llvm_cbe_or10_2e_i_2e_i = ((((((uint32_t)(uint8_t)_2)) << 16) | (llvm_cbe_conv_2e_i_2e_i << 24)) | ((((uint32_t)(uint8_t)_3)) << 8)) | (((uint32_t)(uint8_t)_4));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _5 = *((&in_key.array[((int64_t)4)]));
  _6 = *((&in_key.array[((int64_t)5)]));
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _7 = *((&in_key.array[((int64_t)6)]));
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _8 = *((&in_key.array[((int64_t)7)]));
  llvm_cbe_or10_2e_i265_2e_i = ((((((uint32_t)(uint8_t)_6)) << 16) | ((((uint32_t)(uint8_t)_5)) << 24)) | ((((uint32_t)(uint8_t)_7)) << 8)) | (((uint32_t)(uint8_t)_8));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 543 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and_2e_i = ((llvm_lshr_u32(llvm_cbe_or10_2e_i265_2e_i, 4)) ^ llvm_cbe_or10_2e_i_2e_i) & 252645135;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 543 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor3_2e_i = llvm_cbe_and_2e_i ^ llvm_cbe_or10_2e_i_2e_i;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 543 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
#line 544 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor10_2e_i = (((llvm_cbe_and_2e_i << 4) ^ llvm_cbe_or10_2e_i265_2e_i) & -269488145) | (llvm_cbe_or10_2e_i_2e_i & 269488144);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 546 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor3_2e_i & 15))))]);
  _9 = ((uint8_t*)llvm_cbe_arrayidx_2e_i);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_028_2e_i = llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i = llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY;
  _10 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i));
  llvm_cbe_cond_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i == _9)&1)), _10, llvm_cbe_res_2e_028_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i = (&llvm_cbe__ptr_2e_027_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_shl13_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i << 3;
#line 547 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx17_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 8)) & 15))))]);
  _11 = ((uint8_t*)llvm_cbe_arrayidx17_2e_i);
  llvm_cbe_and_2e_i186 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx17_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i186) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i189;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i190__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit198;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i189:
  llvm_cbe_add_2e_ptr6_2e_i188 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i186)]);
  llvm_cbe_res_2e_028_2e_i191__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i192__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i188;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i197;

  do {     /* Syntactic loop 'for.body.i197' to make GCC happy */
llvm_cbe_for_2e_body_2e_i197:
  llvm_cbe_res_2e_028_2e_i191 = llvm_cbe_res_2e_028_2e_i191__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i192 = llvm_cbe__ptr_2e_027_2e_i192__PHI_TEMPORARY;
  _12 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i192));
  llvm_cbe_cond_2e_i194 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i192 == _11)&1)), _12, llvm_cbe_res_2e_028_2e_i191);
  llvm_cbe_add_2e_ptr8_2e_i195 = (&llvm_cbe__ptr_2e_027_2e_i192[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i195) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i191__PHI_TEMPORARY = llvm_cbe_cond_2e_i194;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i192__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i195;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i197;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i190__PHI_TEMPORARY = llvm_cbe_cond_2e_i194;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit198;
  }

  } while (1); /* end of syntactic loop 'for.body.i197' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit198:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i190 = llvm_cbe_res_2e_0_2e_lcssa_2e_i190__PHI_TEMPORARY;
  llvm_cbe_or_2e_i = (llvm_cbe_res_2e_0_2e_lcssa_2e_i190 << 2) | llvm_cbe_shl13_2e_i;
#line 548 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx22_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 16)) & 15))))]);
  _13 = ((uint8_t*)llvm_cbe_arrayidx22_2e_i);
  llvm_cbe_and_2e_i173 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx22_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i173) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i176;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i177__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit185;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i176:
  llvm_cbe_add_2e_ptr6_2e_i175 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i173)]);
  llvm_cbe_res_2e_028_2e_i178__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i179__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i175;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i184;

  do {     /* Syntactic loop 'for.body.i184' to make GCC happy */
llvm_cbe_for_2e_body_2e_i184:
  llvm_cbe_res_2e_028_2e_i178 = llvm_cbe_res_2e_028_2e_i178__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i179 = llvm_cbe__ptr_2e_027_2e_i179__PHI_TEMPORARY;
  _14 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i179));
  llvm_cbe_cond_2e_i181 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i179 == _13)&1)), _14, llvm_cbe_res_2e_028_2e_i178);
  llvm_cbe_add_2e_ptr8_2e_i182 = (&llvm_cbe__ptr_2e_027_2e_i179[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i182) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i178__PHI_TEMPORARY = llvm_cbe_cond_2e_i181;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i179__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i182;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i184;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i177__PHI_TEMPORARY = llvm_cbe_cond_2e_i181;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit185;
  }

  } while (1); /* end of syntactic loop 'for.body.i184' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit185:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i177 = llvm_cbe_res_2e_0_2e_lcssa_2e_i177__PHI_TEMPORARY;
  llvm_cbe_or24_2e_i = llvm_cbe_or_2e_i | (llvm_cbe_res_2e_0_2e_lcssa_2e_i177 << 1);
#line 549 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx28_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 24)) & 15))))]);
  _15 = ((uint8_t*)llvm_cbe_arrayidx28_2e_i);
  llvm_cbe_and_2e_i160 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx28_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i160) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i163;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i164__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit172;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i163:
  llvm_cbe_add_2e_ptr6_2e_i162 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i160)]);
  llvm_cbe_res_2e_028_2e_i165__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i166__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i162;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i171;

  do {     /* Syntactic loop 'for.body.i171' to make GCC happy */
llvm_cbe_for_2e_body_2e_i171:
  llvm_cbe_res_2e_028_2e_i165 = llvm_cbe_res_2e_028_2e_i165__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i166 = llvm_cbe__ptr_2e_027_2e_i166__PHI_TEMPORARY;
  _16 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i166));
  llvm_cbe_cond_2e_i168 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i166 == _15)&1)), _16, llvm_cbe_res_2e_028_2e_i165);
  llvm_cbe_add_2e_ptr8_2e_i169 = (&llvm_cbe__ptr_2e_027_2e_i166[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i169) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i165__PHI_TEMPORARY = llvm_cbe_cond_2e_i168;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i166__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i169;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i171;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i164__PHI_TEMPORARY = llvm_cbe_cond_2e_i168;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit172;
  }

  } while (1); /* end of syntactic loop 'for.body.i171' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit172:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i164 = llvm_cbe_res_2e_0_2e_lcssa_2e_i164__PHI_TEMPORARY;
  llvm_cbe_or29_2e_i = llvm_cbe_or24_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i164;
#line 550 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx33_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 5)) & 15))))]);
  _17 = ((uint8_t*)llvm_cbe_arrayidx33_2e_i);
  llvm_cbe_and_2e_i147 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx33_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i147) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i150;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i151__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit159;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i150:
  llvm_cbe_add_2e_ptr6_2e_i149 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i147)]);
  llvm_cbe_res_2e_028_2e_i152__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i153__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i149;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i158;

  do {     /* Syntactic loop 'for.body.i158' to make GCC happy */
llvm_cbe_for_2e_body_2e_i158:
  llvm_cbe_res_2e_028_2e_i152 = llvm_cbe_res_2e_028_2e_i152__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i153 = llvm_cbe__ptr_2e_027_2e_i153__PHI_TEMPORARY;
  _18 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i153));
  llvm_cbe_cond_2e_i155 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i153 == _17)&1)), _18, llvm_cbe_res_2e_028_2e_i152);
  llvm_cbe_add_2e_ptr8_2e_i156 = (&llvm_cbe__ptr_2e_027_2e_i153[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i156) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i152__PHI_TEMPORARY = llvm_cbe_cond_2e_i155;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i153__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i156;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i158;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i151__PHI_TEMPORARY = llvm_cbe_cond_2e_i155;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit159;
  }

  } while (1); /* end of syntactic loop 'for.body.i158' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit159:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i151 = llvm_cbe_res_2e_0_2e_lcssa_2e_i151__PHI_TEMPORARY;
  llvm_cbe_or35_2e_i = llvm_cbe_or29_2e_i | (llvm_cbe_res_2e_0_2e_lcssa_2e_i151 << 7);
#line 551 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx39_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 13)) & 15))))]);
  _19 = ((uint8_t*)llvm_cbe_arrayidx39_2e_i);
  llvm_cbe_and_2e_i134 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx39_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i134) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i137;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i138__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit146;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i137:
  llvm_cbe_add_2e_ptr6_2e_i136 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i134)]);
  llvm_cbe_res_2e_028_2e_i139__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i140__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i136;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i145;

  do {     /* Syntactic loop 'for.body.i145' to make GCC happy */
llvm_cbe_for_2e_body_2e_i145:
  llvm_cbe_res_2e_028_2e_i139 = llvm_cbe_res_2e_028_2e_i139__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i140 = llvm_cbe__ptr_2e_027_2e_i140__PHI_TEMPORARY;
  _20 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i140));
  llvm_cbe_cond_2e_i142 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i140 == _19)&1)), _20, llvm_cbe_res_2e_028_2e_i139);
  llvm_cbe_add_2e_ptr8_2e_i143 = (&llvm_cbe__ptr_2e_027_2e_i140[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i143) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i139__PHI_TEMPORARY = llvm_cbe_cond_2e_i142;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i140__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i143;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i145;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i138__PHI_TEMPORARY = llvm_cbe_cond_2e_i142;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit146;
  }

  } while (1); /* end of syntactic loop 'for.body.i145' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit146:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i138 = llvm_cbe_res_2e_0_2e_lcssa_2e_i138__PHI_TEMPORARY;
  llvm_cbe_or41_2e_i = llvm_cbe_or35_2e_i | (llvm_cbe_res_2e_0_2e_lcssa_2e_i138 << 6);
#line 552 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx45_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor3_2e_i, 21)) & 15))))]);
  _21 = ((uint8_t*)llvm_cbe_arrayidx45_2e_i);
  llvm_cbe_and_2e_i121 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx45_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i121) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i124;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i125__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit133;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i124:
  llvm_cbe_add_2e_ptr6_2e_i123 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i121)]);
  llvm_cbe_res_2e_028_2e_i126__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i127__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i123;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i132;

  do {     /* Syntactic loop 'for.body.i132' to make GCC happy */
llvm_cbe_for_2e_body_2e_i132:
  llvm_cbe_res_2e_028_2e_i126 = llvm_cbe_res_2e_028_2e_i126__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i127 = llvm_cbe__ptr_2e_027_2e_i127__PHI_TEMPORARY;
  _22 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i127));
  llvm_cbe_cond_2e_i129 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i127 == _21)&1)), _22, llvm_cbe_res_2e_028_2e_i126);
  llvm_cbe_add_2e_ptr8_2e_i130 = (&llvm_cbe__ptr_2e_027_2e_i127[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i130) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i126__PHI_TEMPORARY = llvm_cbe_cond_2e_i129;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i127__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i130;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i132;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i125__PHI_TEMPORARY = llvm_cbe_cond_2e_i129;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit133;
  }

  } while (1); /* end of syntactic loop 'for.body.i132' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit133:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i125 = llvm_cbe_res_2e_0_2e_lcssa_2e_i125__PHI_TEMPORARY;
  llvm_cbe_or47_2e_i = llvm_cbe_or41_2e_i | (llvm_cbe_res_2e_0_2e_lcssa_2e_i125 << 5);
#line 553 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx51_2e_i = (&leftkey_swap.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(llvm_cbe_conv_2e_i_2e_i, 5)))))]);
  _23 = ((uint8_t*)llvm_cbe_arrayidx51_2e_i);
  llvm_cbe_and_2e_i108 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx51_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i108) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i111;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i112__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit120;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i111:
  llvm_cbe_add_2e_ptr6_2e_i110 = (&((uint8_t*)(&leftkey_swap))[((int64_t)llvm_cbe_and_2e_i108)]);
  llvm_cbe_res_2e_028_2e_i113__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i114__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i110;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i119;

  do {     /* Syntactic loop 'for.body.i119' to make GCC happy */
llvm_cbe_for_2e_body_2e_i119:
  llvm_cbe_res_2e_028_2e_i113 = llvm_cbe_res_2e_028_2e_i113__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i114 = llvm_cbe__ptr_2e_027_2e_i114__PHI_TEMPORARY;
  _24 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i114));
  llvm_cbe_cond_2e_i116 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i114 == _23)&1)), _24, llvm_cbe_res_2e_028_2e_i113);
  llvm_cbe_add_2e_ptr8_2e_i117 = (&llvm_cbe__ptr_2e_027_2e_i114[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i117) < ((uint64_t)((&((uint8_t*)(&leftkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&leftkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i113__PHI_TEMPORARY = llvm_cbe_cond_2e_i116;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i114__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i117;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i119;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i112__PHI_TEMPORARY = llvm_cbe_cond_2e_i116;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit120;
  }

  } while (1); /* end of syntactic loop 'for.body.i119' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit120:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i112 = llvm_cbe_res_2e_0_2e_lcssa_2e_i112__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 555 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and54_2e_i = (llvm_cbe_or47_2e_i | (llvm_cbe_res_2e_0_2e_lcssa_2e_i112 << 4)) & 268435455;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 557 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx58_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 1)) & 15))))]);
  _25 = ((uint8_t*)llvm_cbe_arrayidx58_2e_i);
  llvm_cbe_and_2e_i95 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx58_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i95) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i98;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i99__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit107;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i98:
  llvm_cbe_add_2e_ptr6_2e_i97 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i95)]);
  llvm_cbe_res_2e_028_2e_i100__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i101__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i97;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i106;

  do {     /* Syntactic loop 'for.body.i106' to make GCC happy */
llvm_cbe_for_2e_body_2e_i106:
  llvm_cbe_res_2e_028_2e_i100 = llvm_cbe_res_2e_028_2e_i100__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i101 = llvm_cbe__ptr_2e_027_2e_i101__PHI_TEMPORARY;
  _26 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i101));
  llvm_cbe_cond_2e_i103 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i101 == _25)&1)), _26, llvm_cbe_res_2e_028_2e_i100);
  llvm_cbe_add_2e_ptr8_2e_i104 = (&llvm_cbe__ptr_2e_027_2e_i101[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i104) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i100__PHI_TEMPORARY = llvm_cbe_cond_2e_i103;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i101__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i104;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i106;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit107_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i106' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit107_2e_loopexit:
  llvm_cbe_phitmp = llvm_cbe_cond_2e_i103 << 3;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i99__PHI_TEMPORARY = llvm_cbe_phitmp;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit107;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit107:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i99 = llvm_cbe_res_2e_0_2e_lcssa_2e_i99__PHI_TEMPORARY;
#line 558 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx63_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 9)) & 15))))]);
  _27 = ((uint8_t*)llvm_cbe_arrayidx63_2e_i);
  llvm_cbe_and_2e_i82 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx63_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i82) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i85;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i86__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit94;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i85:
  llvm_cbe_add_2e_ptr6_2e_i84 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i82)]);
  llvm_cbe_res_2e_028_2e_i87__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i88__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i84;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i93;

  do {     /* Syntactic loop 'for.body.i93' to make GCC happy */
llvm_cbe_for_2e_body_2e_i93:
  llvm_cbe_res_2e_028_2e_i87 = llvm_cbe_res_2e_028_2e_i87__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i88 = llvm_cbe__ptr_2e_027_2e_i88__PHI_TEMPORARY;
  _28 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i88));
  llvm_cbe_cond_2e_i90 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i88 == _27)&1)), _28, llvm_cbe_res_2e_028_2e_i87);
  llvm_cbe_add_2e_ptr8_2e_i91 = (&llvm_cbe__ptr_2e_027_2e_i88[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i91) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i87__PHI_TEMPORARY = llvm_cbe_cond_2e_i90;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i88__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i91;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i93;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit94_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i93' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit94_2e_loopexit:
  llvm_cbe_phitmp199 = llvm_cbe_cond_2e_i90 << 2;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i86__PHI_TEMPORARY = llvm_cbe_phitmp199;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit94;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit94:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i86 = llvm_cbe_res_2e_0_2e_lcssa_2e_i86__PHI_TEMPORARY;
  llvm_cbe_or65_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i86 | llvm_cbe_res_2e_0_2e_lcssa_2e_i99;
#line 559 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx69_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 17)) & 15))))]);
  _29 = ((uint8_t*)llvm_cbe_arrayidx69_2e_i);
  llvm_cbe_and_2e_i69 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx69_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i69) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i72;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i73__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit81;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i72:
  llvm_cbe_add_2e_ptr6_2e_i71 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i69)]);
  llvm_cbe_res_2e_028_2e_i74__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i75__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i71;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i80;

  do {     /* Syntactic loop 'for.body.i80' to make GCC happy */
llvm_cbe_for_2e_body_2e_i80:
  llvm_cbe_res_2e_028_2e_i74 = llvm_cbe_res_2e_028_2e_i74__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i75 = llvm_cbe__ptr_2e_027_2e_i75__PHI_TEMPORARY;
  _30 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i75));
  llvm_cbe_cond_2e_i77 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i75 == _29)&1)), _30, llvm_cbe_res_2e_028_2e_i74);
  llvm_cbe_add_2e_ptr8_2e_i78 = (&llvm_cbe__ptr_2e_027_2e_i75[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i78) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i74__PHI_TEMPORARY = llvm_cbe_cond_2e_i77;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i75__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i78;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i80;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit81_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i80' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit81_2e_loopexit:
  llvm_cbe_phitmp200 = llvm_cbe_cond_2e_i77 << 1;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i73__PHI_TEMPORARY = llvm_cbe_phitmp200;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit81;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit81:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i73 = llvm_cbe_res_2e_0_2e_lcssa_2e_i73__PHI_TEMPORARY;
  llvm_cbe_or71_2e_i = llvm_cbe_or65_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i73;
#line 560 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx75_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 25)) & 15))))]);
  _31 = ((uint8_t*)llvm_cbe_arrayidx75_2e_i);
  llvm_cbe_and_2e_i56 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx75_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i56) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i59;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i60__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit68;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i59:
  llvm_cbe_add_2e_ptr6_2e_i58 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i56)]);
  llvm_cbe_res_2e_028_2e_i61__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i62__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i58;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i67;

  do {     /* Syntactic loop 'for.body.i67' to make GCC happy */
llvm_cbe_for_2e_body_2e_i67:
  llvm_cbe_res_2e_028_2e_i61 = llvm_cbe_res_2e_028_2e_i61__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i62 = llvm_cbe__ptr_2e_027_2e_i62__PHI_TEMPORARY;
  _32 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i62));
  llvm_cbe_cond_2e_i64 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i62 == _31)&1)), _32, llvm_cbe_res_2e_028_2e_i61);
  llvm_cbe_add_2e_ptr8_2e_i65 = (&llvm_cbe__ptr_2e_027_2e_i62[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i65) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i61__PHI_TEMPORARY = llvm_cbe_cond_2e_i64;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i62__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i65;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i67;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i60__PHI_TEMPORARY = llvm_cbe_cond_2e_i64;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit68;
  }

  } while (1); /* end of syntactic loop 'for.body.i67' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit68:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i60 = llvm_cbe_res_2e_0_2e_lcssa_2e_i60__PHI_TEMPORARY;
  llvm_cbe_or76_2e_i = llvm_cbe_or71_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i60;
#line 561 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx80_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 4)) & 15))))]);
  _33 = ((uint8_t*)llvm_cbe_arrayidx80_2e_i);
  llvm_cbe_and_2e_i43 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx80_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i43) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i46;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i47__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit55;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i46:
  llvm_cbe_add_2e_ptr6_2e_i45 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i43)]);
  llvm_cbe_res_2e_028_2e_i48__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i49__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i45;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i54;

  do {     /* Syntactic loop 'for.body.i54' to make GCC happy */
llvm_cbe_for_2e_body_2e_i54:
  llvm_cbe_res_2e_028_2e_i48 = llvm_cbe_res_2e_028_2e_i48__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i49 = llvm_cbe__ptr_2e_027_2e_i49__PHI_TEMPORARY;
  _34 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i49));
  llvm_cbe_cond_2e_i51 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i49 == _33)&1)), _34, llvm_cbe_res_2e_028_2e_i48);
  llvm_cbe_add_2e_ptr8_2e_i52 = (&llvm_cbe__ptr_2e_027_2e_i49[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i52) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i48__PHI_TEMPORARY = llvm_cbe_cond_2e_i51;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i49__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i52;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i54;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit55_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i54' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit55_2e_loopexit:
  llvm_cbe_phitmp201 = llvm_cbe_cond_2e_i51 << 7;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i47__PHI_TEMPORARY = llvm_cbe_phitmp201;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit55;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit55:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i47 = llvm_cbe_res_2e_0_2e_lcssa_2e_i47__PHI_TEMPORARY;
  llvm_cbe_or82_2e_i = llvm_cbe_or76_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i47;
#line 562 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx86_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 12)) & 15))))]);
  _35 = ((uint8_t*)llvm_cbe_arrayidx86_2e_i);
  llvm_cbe_and_2e_i30 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx86_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i30) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i33;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i34__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit42;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i33:
  llvm_cbe_add_2e_ptr6_2e_i32 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i30)]);
  llvm_cbe_res_2e_028_2e_i35__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i36__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i32;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i41;

  do {     /* Syntactic loop 'for.body.i41' to make GCC happy */
llvm_cbe_for_2e_body_2e_i41:
  llvm_cbe_res_2e_028_2e_i35 = llvm_cbe_res_2e_028_2e_i35__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i36 = llvm_cbe__ptr_2e_027_2e_i36__PHI_TEMPORARY;
  _36 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i36));
  llvm_cbe_cond_2e_i38 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i36 == _35)&1)), _36, llvm_cbe_res_2e_028_2e_i35);
  llvm_cbe_add_2e_ptr8_2e_i39 = (&llvm_cbe__ptr_2e_027_2e_i36[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i39) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i35__PHI_TEMPORARY = llvm_cbe_cond_2e_i38;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i36__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i39;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i41;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit42_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i41' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit42_2e_loopexit:
  llvm_cbe_phitmp202 = llvm_cbe_cond_2e_i38 << 6;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i34__PHI_TEMPORARY = llvm_cbe_phitmp202;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit42;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit42:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i34 = llvm_cbe_res_2e_0_2e_lcssa_2e_i34__PHI_TEMPORARY;
  llvm_cbe_or88_2e_i = llvm_cbe_or82_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i34;
#line 563 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx92_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor10_2e_i, 20)) & 15))))]);
  _37 = ((uint8_t*)llvm_cbe_arrayidx92_2e_i);
  llvm_cbe_and_2e_i17 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx92_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i17) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i20;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i21__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit29;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i20:
  llvm_cbe_add_2e_ptr6_2e_i19 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i17)]);
  llvm_cbe_res_2e_028_2e_i22__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i23__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i19;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i28;

  do {     /* Syntactic loop 'for.body.i28' to make GCC happy */
llvm_cbe_for_2e_body_2e_i28:
  llvm_cbe_res_2e_028_2e_i22 = llvm_cbe_res_2e_028_2e_i22__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i23 = llvm_cbe__ptr_2e_027_2e_i23__PHI_TEMPORARY;
  _38 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i23));
  llvm_cbe_cond_2e_i25 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i23 == _37)&1)), _38, llvm_cbe_res_2e_028_2e_i22);
  llvm_cbe_add_2e_ptr8_2e_i26 = (&llvm_cbe__ptr_2e_027_2e_i23[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i26) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i22__PHI_TEMPORARY = llvm_cbe_cond_2e_i25;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i23__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i26;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i28;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit29_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i28' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit29_2e_loopexit:
  llvm_cbe_phitmp203 = llvm_cbe_cond_2e_i25 << 5;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i21__PHI_TEMPORARY = llvm_cbe_phitmp203;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit29;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit29:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i21 = llvm_cbe_res_2e_0_2e_lcssa_2e_i21__PHI_TEMPORARY;
  llvm_cbe_or94_2e_i = llvm_cbe_or88_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i21;
#line 564 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx98_2e_i = (&rightkey_swap.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(llvm_cbe_xor10_2e_i, 28)))))]);
  _39 = ((uint8_t*)llvm_cbe_arrayidx98_2e_i);
  llvm_cbe_and_2e_i4 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx98_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i4) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i7;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i8__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit16;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i7:
  llvm_cbe_add_2e_ptr6_2e_i6 = (&((uint8_t*)(&rightkey_swap))[((int64_t)llvm_cbe_and_2e_i4)]);
  llvm_cbe_res_2e_028_2e_i9__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i10__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i6;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i15;

  do {     /* Syntactic loop 'for.body.i15' to make GCC happy */
llvm_cbe_for_2e_body_2e_i15:
  llvm_cbe_res_2e_028_2e_i9 = llvm_cbe_res_2e_028_2e_i9__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i10 = llvm_cbe__ptr_2e_027_2e_i10__PHI_TEMPORARY;
  _40 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i10));
  llvm_cbe_cond_2e_i12 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i10 == _39)&1)), _40, llvm_cbe_res_2e_028_2e_i9);
  llvm_cbe_add_2e_ptr8_2e_i13 = (&llvm_cbe__ptr_2e_027_2e_i10[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i13) < ((uint64_t)((&((uint8_t*)(&rightkey_swap))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap))) + ((uint64_t)127))))) - ((uint64_t)((uint64_t)(uintptr_t)(&rightkey_swap)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i9__PHI_TEMPORARY = llvm_cbe_cond_2e_i12;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i10__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i13;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i15;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit16_2e_loopexit;
  }

  } while (1); /* end of syntactic loop 'for.body.i15' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit16_2e_loopexit:
  llvm_cbe_phitmp204 = llvm_cbe_cond_2e_i12 << 4;
  llvm_cbe_res_2e_0_2e_lcssa_2e_i8__PHI_TEMPORARY = llvm_cbe_phitmp204;   /* for PHI node */
  goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit16;

llvm_cbe_uint32_t_dfl_glob_load_2e_exit16:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i8 = llvm_cbe_res_2e_0_2e_lcssa_2e_i8__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 566 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and101_2e_i = (llvm_cbe_or94_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i8) & 268435455;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
  ;
  llvm_cbe_indvars_2e_iv9_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_right_2e_i_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and101_2e_i;   /* for PHI node */
  llvm_cbe_left_2e_i_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and54_2e_i;   /* for PHI node */
  llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_arraydecay;   /* for PHI node */
  llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i:
#line 568 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_indvars_2e_iv9_2e_i_2e_i = llvm_cbe_indvars_2e_iv9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_right_2e_i_2e_04_2e_i_2e_i = llvm_cbe_right_2e_i_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_left_2e_i_2e_03_2e_i_2e_i = llvm_cbe_left_2e_i_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i = llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_index_2e_i_2e_i = llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY;
#line 570 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _41 = *((&encrypt_rotate_tab.array[((int64_t)llvm_cbe_indvars_2e_iv9_2e_i_2e_i)]));
  llvm_cbe_conv_2e_i_2e_i_2e_i = ((uint32_t)(uint8_t)_41);
#line 571 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_sub_2e_i_2e_i_2e_i = llvm_sub_u32(28, llvm_cbe_conv_2e_i_2e_i_2e_i);
  llvm_cbe_or109_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_left_2e_i_2e_03_2e_i_2e_i, llvm_cbe_sub_2e_i_2e_i_2e_i)) | (llvm_cbe_left_2e_i_2e_03_2e_i_2e_i << llvm_cbe_conv_2e_i_2e_i_2e_i);
  llvm_cbe_and110_2e_i_2e_i_2e_i = llvm_cbe_or109_2e_i_2e_i_2e_i & 268435455;
#line 572 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 573 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_or120_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_right_2e_i_2e_04_2e_i_2e_i, llvm_cbe_sub_2e_i_2e_i_2e_i)) | (llvm_cbe_right_2e_i_2e_04_2e_i_2e_i << llvm_cbe_conv_2e_i_2e_i_2e_i);
  llvm_cbe_and121_2e_i_2e_i_2e_i = llvm_cbe_or120_2e_i_2e_i_2e_i & 268435455;
#line 575 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 576 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 577 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 578 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 579 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 580 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 581 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 582 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_shl142_2e_i_2e_i_2e_i = llvm_cbe_or109_2e_i_2e_i_2e_i << 10;
#line 583 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 584 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 585 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 586 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 587 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 588 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 589 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_shr163_2e_i_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_and121_2e_i_2e_i_2e_i, 14);
#line 590 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 591 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 592 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 593 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_shr174_2e_i_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_and121_2e_i_2e_i_2e_i, 3);
#line 594 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 595 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 596 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 576 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 577 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 578 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 579 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 580 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 581 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 582 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 583 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 584 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 585 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 586 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 587 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 588 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 589 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 590 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 591 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 592 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 593 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 594 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 595 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 596 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 575 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 645 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 575 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&llvm_cbe_ctx->field0.array[((int64_t)llvm_cbe_index_2e_i_2e_i)])) = (((((((((((((((((((((((llvm_cbe_or109_2e_i_2e_i_2e_i << 28) & 268435456) | (llvm_cbe_or120_2e_i_2e_i_2e_i & 256)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 4) & 603979776)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 14) & 134217728)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 18) & 34078720)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 6) & 16777216)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 9) & 2097152)) | ((llvm_lshr_u32(llvm_cbe_or109_2e_i_2e_i_2e_i, 1)) & 1048576)) | (llvm_cbe_shl142_2e_i_2e_i_2e_i & 262144)) | ((llvm_lshr_u32(llvm_cbe_or109_2e_i_2e_i_2e_i, 10)) & 65536)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 13)) & 8192)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 4)) & 4096)) | ((llvm_cbe_or120_2e_i_2e_i_2e_i << 6) & 2048)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 1)) & 1024)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 5)) & 32)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 10)) & 16)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 18)) & 4)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 26)) & 2)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 24)) & 1)) | ((llvm_cbe_and110_2e_i_2e_i_2e_i << 2) & 131072)) | (llvm_cbe_shr163_2e_i_2e_i_2e_i & 512)) | (llvm_cbe_shr174_2e_i_2e_i_2e_i & 8));
#line 598 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_shl186_2e_i_2e_i_2e_i = llvm_cbe_or109_2e_i_2e_i_2e_i << 15;
#line 599 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 600 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 601 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 602 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 603 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 604 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 605 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 606 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 607 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 608 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 609 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 610 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 611 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 612 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 613 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 614 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 615 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 616 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 617 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 618 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 619 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 599 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 600 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 601 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 602 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 603 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 604 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 605 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 606 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 607 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 608 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 609 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 610 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 611 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 612 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 613 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 614 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 615 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 616 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 617 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 618 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 619 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 598 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i[((int64_t)1)])) = (((((((((((((((((((((((llvm_cbe_or109_2e_i_2e_i_2e_i << 17) & 268435456) | (llvm_cbe_or120_2e_i_2e_i_2e_i & 512)) | (llvm_cbe_shl186_2e_i_2e_i_2e_i & 536870912)) | (llvm_cbe_shl142_2e_i_2e_i_2e_i & 134217728)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 22) & 67108864)) | ((llvm_lshr_u32(llvm_cbe_or109_2e_i_2e_i_2e_i, 2)) & 33554432)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 16) & 2097152)) | ((llvm_cbe_or109_2e_i_2e_i_2e_i << 11) & 1048576)) | ((llvm_lshr_u32(llvm_cbe_or109_2e_i_2e_i_2e_i, 6)) & 262144)) | (llvm_cbe_shl186_2e_i_2e_i_2e_i & 131072)) | ((llvm_lshr_u32(llvm_cbe_or109_2e_i_2e_i_2e_i, 4)) & 65536)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 2)) & 8192)) | ((llvm_cbe_or120_2e_i_2e_i_2e_i << 8) & 4096)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 9)) & 1024)) | ((llvm_cbe_or120_2e_i_2e_i_2e_i << 7) & 256)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 7)) & 32)) | ((llvm_lshr_u32(llvm_cbe_or120_2e_i_2e_i_2e_i, 21)) & 2)) | ((llvm_cbe_and110_2e_i_2e_i_2e_i << 1) & 16777216)) | ((llvm_cbe_and110_2e_i_2e_i_2e_i << 3) & 524288)) | (llvm_cbe_shr163_2e_i_2e_i_2e_i & 2056)) | (llvm_cbe_shr174_2e_i_2e_i_2e_i & 17)) | ((llvm_cbe_and121_2e_i_2e_i_2e_i << 2) & 4));
#line 568 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_indvars_2e_iv_2e_next10_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv9_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next10_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_loop_des_setkey_2e_1_2e_1_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv9_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next10_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_right_2e_i_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and121_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_left_2e_i_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and110_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i__PHI_TEMPORARY = ((&llvm_cbe_subkey_2e_addr_2e_i_2e_02_2e_i_2e_i[((int64_t)2)]));   /* for PHI node */
    llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY = (llvm_add_u64(llvm_cbe_index_2e_i_2e_i, 2));   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i' */
llvm_cbe_loop_des_setkey_2e_1_2e_1_2e_exit:
#line 650 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _42 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)28)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)0)]))))) = (llvm_ctor_u32x4((_42).vector[2], (_42).vector[3], (_42).vector[0], (_42).vector[1]));
  _43 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)24)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)4)]))))) = (llvm_ctor_u32x4((_43).vector[2], (_43).vector[3], (_43).vector[0], (_43).vector[1]));
  _44 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)20)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)8)]))))) = (llvm_ctor_u32x4((_44).vector[2], (_44).vector[3], (_44).vector[0], (_44).vector[1]));
  _45 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)16)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)12)]))))) = (llvm_ctor_u32x4((_45).vector[2], (_45).vector[3], (_45).vector[0], (_45).vector[1]));
  _46 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)12)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)16)]))))) = (llvm_ctor_u32x4((_46).vector[2], (_46).vector[3], (_46).vector[0], (_46).vector[1]));
  _47 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)8)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)20)]))))) = (llvm_ctor_u32x4((_47).vector[2], (_47).vector[3], (_47).vector[0], (_47).vector[1]));
  _48 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field0.array[((int64_t)4)])))));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)24)]))))) = (llvm_ctor_u32x4((_48).vector[2], (_48).vector[3], (_48).vector[0], (_48).vector[1]));
  _49 = __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)llvm_cbe_ctx)));
  __UNALIGNED_LOAD__(struct l_vector_4_uint32_t, 4, (((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&llvm_cbe_ctx->field1.array[((int64_t)28)]))))) = (llvm_ctor_u32x4((_49).vector[2], (_49).vector[3], (_49).vector[0], (_49).vector[1]));
}


static void des_ecb_crypt_OC_2(struct l_struct_struct_OC__des_ctx* llvm_cbe_ctx) {
  uint8_t _50;
  uint8_t _51;
  uint8_t _52;
  uint8_t _53;
  uint32_t llvm_cbe_or10_2e_i;
  uint8_t _54;
  uint8_t _55;
  uint8_t _56;
  uint8_t _57;
  uint32_t llvm_cbe_or10_2e_i818;
  uint32_t llvm_cbe_and;
  uint32_t llvm_cbe_xor4;
  uint32_t llvm_cbe_xor5;
  uint32_t llvm_cbe_and8;
  uint32_t llvm_cbe_xor9;
  uint32_t llvm_cbe_xor11;
  uint32_t llvm_cbe_and14;
  uint32_t llvm_cbe_xor15;
  uint32_t llvm_cbe_xor17;
  uint32_t llvm_cbe_and20;
  uint32_t llvm_cbe_xor21;
  uint32_t llvm_cbe_xor23;
  uint32_t llvm_cbe_shl24;
  uint32_t llvm_cbe_and27;
  uint32_t llvm_cbe_xor28;
  uint32_t llvm_cbe_xor29;
  uint32_t llvm_cbe_or32;
  uint32_t* llvm_cbe_incdec_2e_ptr;
  uint32_t _58;
  uint32_t llvm_cbe_xor33;
  uint32_t* llvm_cbe_arrayidx;
  uint8_t* _59;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY;
  uint32_t _60;
  uint32_t llvm_cbe_cond_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx39;
  uint8_t* _61;
  uint64_t llvm_cbe_and_2e_i1639;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1641;
  uint32_t llvm_cbe_res_2e_028_2e_i1644;
  uint32_t llvm_cbe_res_2e_028_2e_i1644__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1645;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1645__PHI_TEMPORARY;
  uint32_t _62;
  uint32_t llvm_cbe_cond_2e_i1647;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1648;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1643;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1643__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx44;
  uint8_t* _63;
  uint64_t llvm_cbe_and_2e_i1626;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1628;
  uint32_t llvm_cbe_res_2e_028_2e_i1631;
  uint32_t llvm_cbe_res_2e_028_2e_i1631__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1632;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1632__PHI_TEMPORARY;
  uint32_t _64;
  uint32_t llvm_cbe_cond_2e_i1634;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1635;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1630;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1630__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx49;
  uint8_t* _65;
  uint64_t llvm_cbe_and_2e_i1613;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1615;
  uint32_t llvm_cbe_res_2e_028_2e_i1618;
  uint32_t llvm_cbe_res_2e_028_2e_i1618__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1619;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1619__PHI_TEMPORARY;
  uint32_t _66;
  uint32_t llvm_cbe_cond_2e_i1621;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1622;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1617;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1617__PHI_TEMPORARY;
  uint32_t* llvm_cbe_incdec_2e_ptr54;
  uint32_t _67;
  uint32_t llvm_cbe_xor55;
  uint32_t* llvm_cbe_arrayidx58;
  uint8_t* _68;
  uint64_t llvm_cbe_and_2e_i1600;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1602;
  uint32_t llvm_cbe_res_2e_028_2e_i1605;
  uint32_t llvm_cbe_res_2e_028_2e_i1605__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1606;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1606__PHI_TEMPORARY;
  uint32_t _69;
  uint32_t llvm_cbe_cond_2e_i1608;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1609;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1604;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1604__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx63;
  uint8_t* _70;
  uint64_t llvm_cbe_and_2e_i1587;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1589;
  uint32_t llvm_cbe_res_2e_028_2e_i1592;
  uint32_t llvm_cbe_res_2e_028_2e_i1592__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1593;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1593__PHI_TEMPORARY;
  uint32_t _71;
  uint32_t llvm_cbe_cond_2e_i1595;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1596;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1591;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1591__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx68;
  uint8_t* _72;
  uint64_t llvm_cbe_and_2e_i1574;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1576;
  uint32_t llvm_cbe_res_2e_028_2e_i1579;
  uint32_t llvm_cbe_res_2e_028_2e_i1579__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1580;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1580__PHI_TEMPORARY;
  uint32_t _73;
  uint32_t llvm_cbe_cond_2e_i1582;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1583;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1578;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1578__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx73;
  uint8_t* _74;
  uint64_t llvm_cbe_and_2e_i1561;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1563;
  uint32_t llvm_cbe_res_2e_028_2e_i1566;
  uint32_t llvm_cbe_res_2e_028_2e_i1566__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1567;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1567__PHI_TEMPORARY;
  uint32_t _75;
  uint32_t llvm_cbe_cond_2e_i1569;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1570;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1565;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1565__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor74;
  uint32_t* llvm_cbe_incdec_2e_ptr75;
  uint32_t _76;
  uint32_t llvm_cbe_xor76;
  uint32_t* llvm_cbe_arrayidx79;
  uint8_t* _77;
  uint64_t llvm_cbe_and_2e_i1548;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1550;
  uint32_t llvm_cbe_res_2e_028_2e_i1553;
  uint32_t llvm_cbe_res_2e_028_2e_i1553__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1554;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1554__PHI_TEMPORARY;
  uint32_t _78;
  uint32_t llvm_cbe_cond_2e_i1556;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1557;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1552;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1552__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx84;
  uint8_t* _79;
  uint64_t llvm_cbe_and_2e_i1535;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1537;
  uint32_t llvm_cbe_res_2e_028_2e_i1540;
  uint32_t llvm_cbe_res_2e_028_2e_i1540__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1541;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1541__PHI_TEMPORARY;
  uint32_t _80;
  uint32_t llvm_cbe_cond_2e_i1543;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1544;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1539;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1539__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx89;
  uint8_t* _81;
  uint64_t llvm_cbe_and_2e_i1522;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1524;
  uint32_t llvm_cbe_res_2e_028_2e_i1527;
  uint32_t llvm_cbe_res_2e_028_2e_i1527__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1528;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1528__PHI_TEMPORARY;
  uint32_t _82;
  uint32_t llvm_cbe_cond_2e_i1530;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1531;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1526;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1526__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx94;
  uint8_t* _83;
  uint64_t llvm_cbe_and_2e_i1509;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1511;
  uint32_t llvm_cbe_res_2e_028_2e_i1514;
  uint32_t llvm_cbe_res_2e_028_2e_i1514__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1515;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1515__PHI_TEMPORARY;
  uint32_t _84;
  uint32_t llvm_cbe_cond_2e_i1517;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1518;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1513;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1513__PHI_TEMPORARY;
  uint32_t* llvm_cbe_incdec_2e_ptr99;
  uint32_t _85;
  uint32_t llvm_cbe_xor100;
  uint32_t* llvm_cbe_arrayidx103;
  uint8_t* _86;
  uint64_t llvm_cbe_and_2e_i1496;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1498;
  uint32_t llvm_cbe_res_2e_028_2e_i1501;
  uint32_t llvm_cbe_res_2e_028_2e_i1501__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1502;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1502__PHI_TEMPORARY;
  uint32_t _87;
  uint32_t llvm_cbe_cond_2e_i1504;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1505;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1500;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1500__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx108;
  uint8_t* _88;
  uint64_t llvm_cbe_and_2e_i1483;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1485;
  uint32_t llvm_cbe_res_2e_028_2e_i1488;
  uint32_t llvm_cbe_res_2e_028_2e_i1488__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1489;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1489__PHI_TEMPORARY;
  uint32_t _89;
  uint32_t llvm_cbe_cond_2e_i1491;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1492;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1487;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1487__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx113;
  uint8_t* _90;
  uint64_t llvm_cbe_and_2e_i1470;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1472;
  uint32_t llvm_cbe_res_2e_028_2e_i1475;
  uint32_t llvm_cbe_res_2e_028_2e_i1475__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1476;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1476__PHI_TEMPORARY;
  uint32_t _91;
  uint32_t llvm_cbe_cond_2e_i1478;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1479;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1474;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1474__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx118;
  uint8_t* _92;
  uint64_t llvm_cbe_and_2e_i1457;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1459;
  uint32_t llvm_cbe_res_2e_028_2e_i1462;
  uint32_t llvm_cbe_res_2e_028_2e_i1462__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1463;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1463__PHI_TEMPORARY;
  uint32_t _93;
  uint32_t llvm_cbe_cond_2e_i1465;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1466;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1461;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1461__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor119;
  uint32_t* llvm_cbe_incdec_2e_ptr120;
  uint32_t _94;
  uint32_t llvm_cbe_xor121;
  uint32_t* llvm_cbe_arrayidx124;
  uint8_t* _95;
  uint64_t llvm_cbe_and_2e_i1444;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1446;
  uint32_t llvm_cbe_res_2e_028_2e_i1449;
  uint32_t llvm_cbe_res_2e_028_2e_i1449__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1450;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1450__PHI_TEMPORARY;
  uint32_t _96;
  uint32_t llvm_cbe_cond_2e_i1452;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1453;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1448;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1448__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx129;
  uint8_t* _97;
  uint64_t llvm_cbe_and_2e_i1431;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1433;
  uint32_t llvm_cbe_res_2e_028_2e_i1436;
  uint32_t llvm_cbe_res_2e_028_2e_i1436__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1437;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1437__PHI_TEMPORARY;
  uint32_t _98;
  uint32_t llvm_cbe_cond_2e_i1439;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1440;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1435;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1435__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx134;
  uint8_t* _99;
  uint64_t llvm_cbe_and_2e_i1418;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1420;
  uint32_t llvm_cbe_res_2e_028_2e_i1423;
  uint32_t llvm_cbe_res_2e_028_2e_i1423__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1424;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1424__PHI_TEMPORARY;
  uint32_t _100;
  uint32_t llvm_cbe_cond_2e_i1426;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1427;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1422;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1422__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx139;
  uint8_t* _101;
  uint64_t llvm_cbe_and_2e_i1405;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1407;
  uint32_t llvm_cbe_res_2e_028_2e_i1410;
  uint32_t llvm_cbe_res_2e_028_2e_i1410__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1411;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1411__PHI_TEMPORARY;
  uint32_t _102;
  uint32_t llvm_cbe_cond_2e_i1413;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1414;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1409;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1409__PHI_TEMPORARY;
  uint32_t* llvm_cbe_incdec_2e_ptr144;
  uint32_t _103;
  uint32_t llvm_cbe_xor145;
  uint32_t* llvm_cbe_arrayidx148;
  uint8_t* _104;
  uint64_t llvm_cbe_and_2e_i1392;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1394;
  uint32_t llvm_cbe_res_2e_028_2e_i1397;
  uint32_t llvm_cbe_res_2e_028_2e_i1397__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1398;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1398__PHI_TEMPORARY;
  uint32_t _105;
  uint32_t llvm_cbe_cond_2e_i1400;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1401;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1396;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1396__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx153;
  uint8_t* _106;
  uint64_t llvm_cbe_and_2e_i1379;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1381;
  uint32_t llvm_cbe_res_2e_028_2e_i1384;
  uint32_t llvm_cbe_res_2e_028_2e_i1384__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1385;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1385__PHI_TEMPORARY;
  uint32_t _107;
  uint32_t llvm_cbe_cond_2e_i1387;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1388;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1383;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1383__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx158;
  uint8_t* _108;
  uint64_t llvm_cbe_and_2e_i1366;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1368;
  uint32_t llvm_cbe_res_2e_028_2e_i1371;
  uint32_t llvm_cbe_res_2e_028_2e_i1371__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1372;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1372__PHI_TEMPORARY;
  uint32_t _109;
  uint32_t llvm_cbe_cond_2e_i1374;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1375;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1370;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1370__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx163;
  uint8_t* _110;
  uint64_t llvm_cbe_and_2e_i1353;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1355;
  uint32_t llvm_cbe_res_2e_028_2e_i1358;
  uint32_t llvm_cbe_res_2e_028_2e_i1358__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1359;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1359__PHI_TEMPORARY;
  uint32_t _111;
  uint32_t llvm_cbe_cond_2e_i1361;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1362;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1357;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1357__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor164;
  uint32_t* llvm_cbe_incdec_2e_ptr165;
  uint32_t _112;
  uint32_t llvm_cbe_xor166;
  uint32_t* llvm_cbe_arrayidx169;
  uint8_t* _113;
  uint64_t llvm_cbe_and_2e_i1340;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1342;
  uint32_t llvm_cbe_res_2e_028_2e_i1345;
  uint32_t llvm_cbe_res_2e_028_2e_i1345__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1346;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1346__PHI_TEMPORARY;
  uint32_t _114;
  uint32_t llvm_cbe_cond_2e_i1348;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1349;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1344;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1344__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor170;
  uint32_t* llvm_cbe_arrayidx174;
  uint8_t* _115;
  uint64_t llvm_cbe_and_2e_i1327;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1329;
  uint32_t llvm_cbe_res_2e_028_2e_i1332;
  uint32_t llvm_cbe_res_2e_028_2e_i1332__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1333;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1333__PHI_TEMPORARY;
  uint32_t _116;
  uint32_t llvm_cbe_cond_2e_i1335;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1336;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1331;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1331__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor175;
  uint32_t* llvm_cbe_arrayidx179;
  uint8_t* _117;
  uint64_t llvm_cbe_and_2e_i1314;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1316;
  uint32_t llvm_cbe_res_2e_028_2e_i1319;
  uint32_t llvm_cbe_res_2e_028_2e_i1319__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1320;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1320__PHI_TEMPORARY;
  uint32_t _118;
  uint32_t llvm_cbe_cond_2e_i1322;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1323;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1318;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1318__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor180;
  uint32_t* llvm_cbe_arrayidx184;
  uint8_t* _119;
  uint64_t llvm_cbe_and_2e_i1301;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1303;
  uint32_t llvm_cbe_res_2e_028_2e_i1306;
  uint32_t llvm_cbe_res_2e_028_2e_i1306__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1307;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1307__PHI_TEMPORARY;
  uint32_t _120;
  uint32_t llvm_cbe_cond_2e_i1309;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1310;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1305;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1305__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor185;
  uint32_t* llvm_cbe_incdec_2e_ptr189;
  uint32_t _121;
  uint32_t llvm_cbe_xor190;
  uint32_t* llvm_cbe_arrayidx193;
  uint8_t* _122;
  uint64_t llvm_cbe_and_2e_i1288;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1290;
  uint32_t llvm_cbe_res_2e_028_2e_i1293;
  uint32_t llvm_cbe_res_2e_028_2e_i1293__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1294;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1294__PHI_TEMPORARY;
  uint32_t _123;
  uint32_t llvm_cbe_cond_2e_i1296;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1297;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1292;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1292__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor194;
  uint32_t* llvm_cbe_arrayidx198;
  uint8_t* _124;
  uint64_t llvm_cbe_and_2e_i1275;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1277;
  uint32_t llvm_cbe_res_2e_028_2e_i1280;
  uint32_t llvm_cbe_res_2e_028_2e_i1280__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1281;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1281__PHI_TEMPORARY;
  uint32_t _125;
  uint32_t llvm_cbe_cond_2e_i1283;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1284;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1279;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1279__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor199;
  uint32_t* llvm_cbe_arrayidx203;
  uint8_t* _126;
  uint64_t llvm_cbe_and_2e_i1262;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1264;
  uint32_t llvm_cbe_res_2e_028_2e_i1267;
  uint32_t llvm_cbe_res_2e_028_2e_i1267__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1268;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1268__PHI_TEMPORARY;
  uint32_t _127;
  uint32_t llvm_cbe_cond_2e_i1270;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1271;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1266;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1266__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor204;
  uint32_t* llvm_cbe_arrayidx208;
  uint8_t* _128;
  uint64_t llvm_cbe_and_2e_i1249;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1251;
  uint32_t llvm_cbe_res_2e_028_2e_i1254;
  uint32_t llvm_cbe_res_2e_028_2e_i1254__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1255;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1255__PHI_TEMPORARY;
  uint32_t _129;
  uint32_t llvm_cbe_cond_2e_i1257;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1258;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1253;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1253__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor209;
  uint32_t* llvm_cbe_incdec_2e_ptr210;
  uint32_t _130;
  uint32_t llvm_cbe_xor211;
  uint32_t* llvm_cbe_arrayidx214;
  uint8_t* _131;
  uint64_t llvm_cbe_and_2e_i1236;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1238;
  uint32_t llvm_cbe_res_2e_028_2e_i1241;
  uint32_t llvm_cbe_res_2e_028_2e_i1241__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1242;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1242__PHI_TEMPORARY;
  uint32_t _132;
  uint32_t llvm_cbe_cond_2e_i1244;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1245;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1240;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1240__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor215;
  uint32_t* llvm_cbe_arrayidx219;
  uint8_t* _133;
  uint64_t llvm_cbe_and_2e_i1223;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1225;
  uint32_t llvm_cbe_res_2e_028_2e_i1228;
  uint32_t llvm_cbe_res_2e_028_2e_i1228__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1229;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1229__PHI_TEMPORARY;
  uint32_t _134;
  uint32_t llvm_cbe_cond_2e_i1231;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1232;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1227;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1227__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor220;
  uint32_t* llvm_cbe_arrayidx224;
  uint8_t* _135;
  uint64_t llvm_cbe_and_2e_i1210;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1212;
  uint32_t llvm_cbe_res_2e_028_2e_i1215;
  uint32_t llvm_cbe_res_2e_028_2e_i1215__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1216;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1216__PHI_TEMPORARY;
  uint32_t _136;
  uint32_t llvm_cbe_cond_2e_i1218;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1219;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1214;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1214__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor225;
  uint32_t* llvm_cbe_arrayidx229;
  uint8_t* _137;
  uint64_t llvm_cbe_and_2e_i1197;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1199;
  uint32_t llvm_cbe_res_2e_028_2e_i1202;
  uint32_t llvm_cbe_res_2e_028_2e_i1202__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1203;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1203__PHI_TEMPORARY;
  uint32_t _138;
  uint32_t llvm_cbe_cond_2e_i1205;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1206;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1201;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1201__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor230;
  uint32_t* llvm_cbe_incdec_2e_ptr234;
  uint32_t _139;
  uint32_t llvm_cbe_xor235;
  uint32_t* llvm_cbe_arrayidx238;
  uint8_t* _140;
  uint64_t llvm_cbe_and_2e_i1184;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1186;
  uint32_t llvm_cbe_res_2e_028_2e_i1189;
  uint32_t llvm_cbe_res_2e_028_2e_i1189__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1190;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1190__PHI_TEMPORARY;
  uint32_t _141;
  uint32_t llvm_cbe_cond_2e_i1192;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1193;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1188;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1188__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor239;
  uint32_t* llvm_cbe_arrayidx243;
  uint8_t* _142;
  uint64_t llvm_cbe_and_2e_i1171;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1173;
  uint32_t llvm_cbe_res_2e_028_2e_i1176;
  uint32_t llvm_cbe_res_2e_028_2e_i1176__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1177;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1177__PHI_TEMPORARY;
  uint32_t _143;
  uint32_t llvm_cbe_cond_2e_i1179;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1180;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1175;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1175__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor244;
  uint32_t* llvm_cbe_arrayidx248;
  uint8_t* _144;
  uint64_t llvm_cbe_and_2e_i1158;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1160;
  uint32_t llvm_cbe_res_2e_028_2e_i1163;
  uint32_t llvm_cbe_res_2e_028_2e_i1163__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1164;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1164__PHI_TEMPORARY;
  uint32_t _145;
  uint32_t llvm_cbe_cond_2e_i1166;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1167;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1162;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1162__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor249;
  uint32_t* llvm_cbe_arrayidx253;
  uint8_t* _146;
  uint64_t llvm_cbe_and_2e_i1145;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1147;
  uint32_t llvm_cbe_res_2e_028_2e_i1150;
  uint32_t llvm_cbe_res_2e_028_2e_i1150__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1151;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1151__PHI_TEMPORARY;
  uint32_t _147;
  uint32_t llvm_cbe_cond_2e_i1153;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1154;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1149;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1149__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor254;
  uint32_t* llvm_cbe_incdec_2e_ptr255;
  uint32_t _148;
  uint32_t llvm_cbe_xor256;
  uint32_t* llvm_cbe_arrayidx259;
  uint8_t* _149;
  uint64_t llvm_cbe_and_2e_i1132;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1134;
  uint32_t llvm_cbe_res_2e_028_2e_i1137;
  uint32_t llvm_cbe_res_2e_028_2e_i1137__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1138;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1138__PHI_TEMPORARY;
  uint32_t _150;
  uint32_t llvm_cbe_cond_2e_i1140;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1141;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1136;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1136__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor260;
  uint32_t* llvm_cbe_arrayidx264;
  uint8_t* _151;
  uint64_t llvm_cbe_and_2e_i1119;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1121;
  uint32_t llvm_cbe_res_2e_028_2e_i1124;
  uint32_t llvm_cbe_res_2e_028_2e_i1124__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1125;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1125__PHI_TEMPORARY;
  uint32_t _152;
  uint32_t llvm_cbe_cond_2e_i1127;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1128;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1123;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1123__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor265;
  uint32_t* llvm_cbe_arrayidx269;
  uint8_t* _153;
  uint64_t llvm_cbe_and_2e_i1106;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1108;
  uint32_t llvm_cbe_res_2e_028_2e_i1111;
  uint32_t llvm_cbe_res_2e_028_2e_i1111__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1112;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1112__PHI_TEMPORARY;
  uint32_t _154;
  uint32_t llvm_cbe_cond_2e_i1114;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1115;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1110;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1110__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor270;
  uint32_t* llvm_cbe_arrayidx274;
  uint8_t* _155;
  uint64_t llvm_cbe_and_2e_i1093;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1095;
  uint32_t llvm_cbe_res_2e_028_2e_i1098;
  uint32_t llvm_cbe_res_2e_028_2e_i1098__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1099;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1099__PHI_TEMPORARY;
  uint32_t _156;
  uint32_t llvm_cbe_cond_2e_i1101;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1102;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1097;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1097__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor275;
  uint32_t* llvm_cbe_incdec_2e_ptr279;
  uint32_t _157;
  uint32_t llvm_cbe_xor280;
  uint32_t* llvm_cbe_arrayidx283;
  uint8_t* _158;
  uint64_t llvm_cbe_and_2e_i1080;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1082;
  uint32_t llvm_cbe_res_2e_028_2e_i1085;
  uint32_t llvm_cbe_res_2e_028_2e_i1085__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1086;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1086__PHI_TEMPORARY;
  uint32_t _159;
  uint32_t llvm_cbe_cond_2e_i1088;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1089;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1084;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1084__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor284;
  uint32_t* llvm_cbe_arrayidx288;
  uint8_t* _160;
  uint64_t llvm_cbe_and_2e_i1067;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1069;
  uint32_t llvm_cbe_res_2e_028_2e_i1072;
  uint32_t llvm_cbe_res_2e_028_2e_i1072__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1073;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1073__PHI_TEMPORARY;
  uint32_t _161;
  uint32_t llvm_cbe_cond_2e_i1075;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1076;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1071;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1071__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor289;
  uint32_t* llvm_cbe_arrayidx293;
  uint8_t* _162;
  uint64_t llvm_cbe_and_2e_i1054;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1056;
  uint32_t llvm_cbe_res_2e_028_2e_i1059;
  uint32_t llvm_cbe_res_2e_028_2e_i1059__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1060;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1060__PHI_TEMPORARY;
  uint32_t _163;
  uint32_t llvm_cbe_cond_2e_i1062;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1063;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1058;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1058__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor294;
  uint32_t* llvm_cbe_arrayidx298;
  uint8_t* _164;
  uint64_t llvm_cbe_and_2e_i1041;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1043;
  uint32_t llvm_cbe_res_2e_028_2e_i1046;
  uint32_t llvm_cbe_res_2e_028_2e_i1046__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1047;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1047__PHI_TEMPORARY;
  uint32_t _165;
  uint32_t llvm_cbe_cond_2e_i1049;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1050;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1045;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1045__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor299;
  uint32_t* llvm_cbe_incdec_2e_ptr300;
  uint32_t _166;
  uint32_t llvm_cbe_xor301;
  uint32_t* llvm_cbe_arrayidx304;
  uint8_t* _167;
  uint64_t llvm_cbe_and_2e_i1028;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1030;
  uint32_t llvm_cbe_res_2e_028_2e_i1033;
  uint32_t llvm_cbe_res_2e_028_2e_i1033__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1034;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1034__PHI_TEMPORARY;
  uint32_t _168;
  uint32_t llvm_cbe_cond_2e_i1036;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1037;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1032;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1032__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor305;
  uint32_t* llvm_cbe_arrayidx309;
  uint8_t* _169;
  uint64_t llvm_cbe_and_2e_i1015;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1017;
  uint32_t llvm_cbe_res_2e_028_2e_i1020;
  uint32_t llvm_cbe_res_2e_028_2e_i1020__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1021;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1021__PHI_TEMPORARY;
  uint32_t _170;
  uint32_t llvm_cbe_cond_2e_i1023;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1024;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1019;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1019__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor310;
  uint32_t* llvm_cbe_arrayidx314;
  uint8_t* _171;
  uint64_t llvm_cbe_and_2e_i1002;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i1004;
  uint32_t llvm_cbe_res_2e_028_2e_i1007;
  uint32_t llvm_cbe_res_2e_028_2e_i1007__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1008;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i1008__PHI_TEMPORARY;
  uint32_t _172;
  uint32_t llvm_cbe_cond_2e_i1010;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i1011;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1006;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i1006__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor315;
  uint32_t* llvm_cbe_arrayidx319;
  uint8_t* _173;
  uint64_t llvm_cbe_and_2e_i989;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i991;
  uint32_t llvm_cbe_res_2e_028_2e_i994;
  uint32_t llvm_cbe_res_2e_028_2e_i994__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i995;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i995__PHI_TEMPORARY;
  uint32_t _174;
  uint32_t llvm_cbe_cond_2e_i997;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i998;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i993;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i993__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor320;
  uint32_t* llvm_cbe_incdec_2e_ptr324;
  uint32_t _175;
  uint32_t llvm_cbe_xor325;
  uint32_t* llvm_cbe_arrayidx328;
  uint8_t* _176;
  uint64_t llvm_cbe_and_2e_i976;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i978;
  uint32_t llvm_cbe_res_2e_028_2e_i981;
  uint32_t llvm_cbe_res_2e_028_2e_i981__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i982;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i982__PHI_TEMPORARY;
  uint32_t _177;
  uint32_t llvm_cbe_cond_2e_i984;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i985;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i980;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i980__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor329;
  uint32_t* llvm_cbe_arrayidx333;
  uint8_t* _178;
  uint64_t llvm_cbe_and_2e_i963;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i965;
  uint32_t llvm_cbe_res_2e_028_2e_i968;
  uint32_t llvm_cbe_res_2e_028_2e_i968__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i969;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i969__PHI_TEMPORARY;
  uint32_t _179;
  uint32_t llvm_cbe_cond_2e_i971;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i972;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i967;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i967__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor334;
  uint32_t* llvm_cbe_arrayidx338;
  uint8_t* _180;
  uint64_t llvm_cbe_and_2e_i950;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i952;
  uint32_t llvm_cbe_res_2e_028_2e_i955;
  uint32_t llvm_cbe_res_2e_028_2e_i955__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i956;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i956__PHI_TEMPORARY;
  uint32_t _181;
  uint32_t llvm_cbe_cond_2e_i958;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i959;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i954;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i954__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor339;
  uint32_t* llvm_cbe_arrayidx343;
  uint8_t* _182;
  uint64_t llvm_cbe_and_2e_i937;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i939;
  uint32_t llvm_cbe_res_2e_028_2e_i942;
  uint32_t llvm_cbe_res_2e_028_2e_i942__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i943;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i943__PHI_TEMPORARY;
  uint32_t _183;
  uint32_t llvm_cbe_cond_2e_i945;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i946;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i941;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i941__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor344;
  uint32_t* llvm_cbe_incdec_2e_ptr345;
  uint32_t _184;
  uint32_t llvm_cbe_xor346;
  uint32_t* llvm_cbe_arrayidx349;
  uint8_t* _185;
  uint64_t llvm_cbe_and_2e_i924;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i926;
  uint32_t llvm_cbe_res_2e_028_2e_i929;
  uint32_t llvm_cbe_res_2e_028_2e_i929__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i930;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i930__PHI_TEMPORARY;
  uint32_t _186;
  uint32_t llvm_cbe_cond_2e_i932;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i933;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i928;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i928__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor350;
  uint32_t* llvm_cbe_arrayidx354;
  uint8_t* _187;
  uint64_t llvm_cbe_and_2e_i911;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i913;
  uint32_t llvm_cbe_res_2e_028_2e_i916;
  uint32_t llvm_cbe_res_2e_028_2e_i916__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i917;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i917__PHI_TEMPORARY;
  uint32_t _188;
  uint32_t llvm_cbe_cond_2e_i919;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i920;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i915;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i915__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor355;
  uint32_t* llvm_cbe_arrayidx359;
  uint8_t* _189;
  uint64_t llvm_cbe_and_2e_i898;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i900;
  uint32_t llvm_cbe_res_2e_028_2e_i903;
  uint32_t llvm_cbe_res_2e_028_2e_i903__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i904;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i904__PHI_TEMPORARY;
  uint32_t _190;
  uint32_t llvm_cbe_cond_2e_i906;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i907;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i902;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i902__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor360;
  uint32_t* llvm_cbe_arrayidx364;
  uint8_t* _191;
  uint64_t llvm_cbe_and_2e_i885;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i887;
  uint32_t llvm_cbe_res_2e_028_2e_i890;
  uint32_t llvm_cbe_res_2e_028_2e_i890__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i891;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i891__PHI_TEMPORARY;
  uint32_t _192;
  uint32_t llvm_cbe_cond_2e_i893;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i894;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i889;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i889__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor365;
  uint32_t* llvm_cbe_incdec_2e_ptr369;
  uint32_t _193;
  uint32_t llvm_cbe_xor370;
  uint32_t* llvm_cbe_arrayidx373;
  uint8_t* _194;
  uint64_t llvm_cbe_and_2e_i872;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i874;
  uint32_t llvm_cbe_res_2e_028_2e_i877;
  uint32_t llvm_cbe_res_2e_028_2e_i877__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i878;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i878__PHI_TEMPORARY;
  uint32_t _195;
  uint32_t llvm_cbe_cond_2e_i880;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i881;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i876;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i876__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor374;
  uint32_t* llvm_cbe_arrayidx378;
  uint8_t* _196;
  uint64_t llvm_cbe_and_2e_i859;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i861;
  uint32_t llvm_cbe_res_2e_028_2e_i864;
  uint32_t llvm_cbe_res_2e_028_2e_i864__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i865;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i865__PHI_TEMPORARY;
  uint32_t _197;
  uint32_t llvm_cbe_cond_2e_i867;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i868;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i863;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i863__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor379;
  uint32_t* llvm_cbe_arrayidx383;
  uint8_t* _198;
  uint64_t llvm_cbe_and_2e_i846;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i848;
  uint32_t llvm_cbe_res_2e_028_2e_i851;
  uint32_t llvm_cbe_res_2e_028_2e_i851__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i852;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i852__PHI_TEMPORARY;
  uint32_t _199;
  uint32_t llvm_cbe_cond_2e_i854;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i855;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i850;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i850__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor384;
  uint32_t* llvm_cbe_arrayidx388;
  uint8_t* _200;
  uint64_t llvm_cbe_and_2e_i833;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i835;
  uint32_t llvm_cbe_res_2e_028_2e_i838;
  uint32_t llvm_cbe_res_2e_028_2e_i838__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i839;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i839__PHI_TEMPORARY;
  uint32_t _201;
  uint32_t llvm_cbe_cond_2e_i841;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i842;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i837;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i837__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor389;
  uint32_t* llvm_cbe_incdec_2e_ptr390;
  uint32_t _202;
  uint32_t llvm_cbe_xor391;
  uint32_t* llvm_cbe_arrayidx394;
  uint8_t* _203;
  uint64_t llvm_cbe_and_2e_i820;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i822;
  uint32_t llvm_cbe_res_2e_028_2e_i825;
  uint32_t llvm_cbe_res_2e_028_2e_i825__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i826;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i826__PHI_TEMPORARY;
  uint32_t _204;
  uint32_t llvm_cbe_cond_2e_i828;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i829;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i824;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i824__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor395;
  uint32_t* llvm_cbe_arrayidx399;
  uint8_t* _205;
  uint64_t llvm_cbe_and_2e_i807;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i809;
  uint32_t llvm_cbe_res_2e_028_2e_i812;
  uint32_t llvm_cbe_res_2e_028_2e_i812__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i813;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i813__PHI_TEMPORARY;
  uint32_t _206;
  uint32_t llvm_cbe_cond_2e_i815;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i816;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i811;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i811__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor400;
  uint32_t* llvm_cbe_arrayidx404;
  uint8_t* _207;
  uint64_t llvm_cbe_and_2e_i794;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i796;
  uint32_t llvm_cbe_res_2e_028_2e_i799;
  uint32_t llvm_cbe_res_2e_028_2e_i799__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i800;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i800__PHI_TEMPORARY;
  uint32_t _208;
  uint32_t llvm_cbe_cond_2e_i802;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i803;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i798;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i798__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor405;
  uint32_t* llvm_cbe_arrayidx409;
  uint8_t* _209;
  uint64_t llvm_cbe_and_2e_i781;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i783;
  uint32_t llvm_cbe_res_2e_028_2e_i786;
  uint32_t llvm_cbe_res_2e_028_2e_i786__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i787;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i787__PHI_TEMPORARY;
  uint32_t _210;
  uint32_t llvm_cbe_cond_2e_i789;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i790;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i785;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i785__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor410;
  uint32_t* llvm_cbe_incdec_2e_ptr414;
  uint32_t _211;
  uint32_t llvm_cbe_xor415;
  uint32_t* llvm_cbe_arrayidx418;
  uint8_t* _212;
  uint64_t llvm_cbe_and_2e_i768;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i770;
  uint32_t llvm_cbe_res_2e_028_2e_i773;
  uint32_t llvm_cbe_res_2e_028_2e_i773__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i774;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i774__PHI_TEMPORARY;
  uint32_t _213;
  uint32_t llvm_cbe_cond_2e_i776;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i777;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i772;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i772__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor419;
  uint32_t* llvm_cbe_arrayidx423;
  uint8_t* _214;
  uint64_t llvm_cbe_and_2e_i755;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i757;
  uint32_t llvm_cbe_res_2e_028_2e_i760;
  uint32_t llvm_cbe_res_2e_028_2e_i760__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i761;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i761__PHI_TEMPORARY;
  uint32_t _215;
  uint32_t llvm_cbe_cond_2e_i763;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i764;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i759;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i759__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor424;
  uint32_t* llvm_cbe_arrayidx428;
  uint8_t* _216;
  uint64_t llvm_cbe_and_2e_i742;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i744;
  uint32_t llvm_cbe_res_2e_028_2e_i747;
  uint32_t llvm_cbe_res_2e_028_2e_i747__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i748;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i748__PHI_TEMPORARY;
  uint32_t _217;
  uint32_t llvm_cbe_cond_2e_i750;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i751;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i746;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i746__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor429;
  uint32_t* llvm_cbe_arrayidx433;
  uint8_t* _218;
  uint64_t llvm_cbe_and_2e_i729;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i731;
  uint32_t llvm_cbe_res_2e_028_2e_i734;
  uint32_t llvm_cbe_res_2e_028_2e_i734__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i735;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i735__PHI_TEMPORARY;
  uint32_t _219;
  uint32_t llvm_cbe_cond_2e_i737;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i738;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i733;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i733__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor434;
  uint32_t* llvm_cbe_incdec_2e_ptr435;
  uint32_t _220;
  uint32_t llvm_cbe_xor436;
  uint32_t* llvm_cbe_arrayidx439;
  uint8_t* _221;
  uint64_t llvm_cbe_and_2e_i716;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i718;
  uint32_t llvm_cbe_res_2e_028_2e_i721;
  uint32_t llvm_cbe_res_2e_028_2e_i721__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i722;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i722__PHI_TEMPORARY;
  uint32_t _222;
  uint32_t llvm_cbe_cond_2e_i724;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i725;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i720;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i720__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor440;
  uint32_t* llvm_cbe_arrayidx444;
  uint8_t* _223;
  uint64_t llvm_cbe_and_2e_i703;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i705;
  uint32_t llvm_cbe_res_2e_028_2e_i708;
  uint32_t llvm_cbe_res_2e_028_2e_i708__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i709;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i709__PHI_TEMPORARY;
  uint32_t _224;
  uint32_t llvm_cbe_cond_2e_i711;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i712;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i707;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i707__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor445;
  uint32_t* llvm_cbe_arrayidx449;
  uint8_t* _225;
  uint64_t llvm_cbe_and_2e_i690;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i692;
  uint32_t llvm_cbe_res_2e_028_2e_i695;
  uint32_t llvm_cbe_res_2e_028_2e_i695__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i696;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i696__PHI_TEMPORARY;
  uint32_t _226;
  uint32_t llvm_cbe_cond_2e_i698;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i699;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i694;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i694__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor450;
  uint32_t* llvm_cbe_arrayidx454;
  uint8_t* _227;
  uint64_t llvm_cbe_and_2e_i677;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i679;
  uint32_t llvm_cbe_res_2e_028_2e_i682;
  uint32_t llvm_cbe_res_2e_028_2e_i682__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i683;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i683__PHI_TEMPORARY;
  uint32_t _228;
  uint32_t llvm_cbe_cond_2e_i685;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i686;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i681;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i681__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor455;
  uint32_t* llvm_cbe_incdec_2e_ptr459;
  uint32_t _229;
  uint32_t llvm_cbe_xor460;
  uint32_t* llvm_cbe_arrayidx463;
  uint8_t* _230;
  uint64_t llvm_cbe_and_2e_i664;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i666;
  uint32_t llvm_cbe_res_2e_028_2e_i669;
  uint32_t llvm_cbe_res_2e_028_2e_i669__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i670;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i670__PHI_TEMPORARY;
  uint32_t _231;
  uint32_t llvm_cbe_cond_2e_i672;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i673;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i668;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i668__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor464;
  uint32_t* llvm_cbe_arrayidx468;
  uint8_t* _232;
  uint64_t llvm_cbe_and_2e_i651;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i653;
  uint32_t llvm_cbe_res_2e_028_2e_i656;
  uint32_t llvm_cbe_res_2e_028_2e_i656__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i657;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i657__PHI_TEMPORARY;
  uint32_t _233;
  uint32_t llvm_cbe_cond_2e_i659;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i660;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i655;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i655__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor469;
  uint32_t* llvm_cbe_arrayidx473;
  uint8_t* _234;
  uint64_t llvm_cbe_and_2e_i638;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i640;
  uint32_t llvm_cbe_res_2e_028_2e_i643;
  uint32_t llvm_cbe_res_2e_028_2e_i643__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i644;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i644__PHI_TEMPORARY;
  uint32_t _235;
  uint32_t llvm_cbe_cond_2e_i646;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i647;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i642;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i642__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor474;
  uint32_t* llvm_cbe_arrayidx478;
  uint8_t* _236;
  uint64_t llvm_cbe_and_2e_i625;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i627;
  uint32_t llvm_cbe_res_2e_028_2e_i630;
  uint32_t llvm_cbe_res_2e_028_2e_i630__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i631;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i631__PHI_TEMPORARY;
  uint32_t _237;
  uint32_t llvm_cbe_cond_2e_i633;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i634;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i629;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i629__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor479;
  uint32_t* llvm_cbe_incdec_2e_ptr480;
  uint32_t _238;
  uint32_t llvm_cbe_xor481;
  uint32_t* llvm_cbe_arrayidx484;
  uint8_t* _239;
  uint64_t llvm_cbe_and_2e_i612;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i614;
  uint32_t llvm_cbe_res_2e_028_2e_i617;
  uint32_t llvm_cbe_res_2e_028_2e_i617__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i618;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i618__PHI_TEMPORARY;
  uint32_t _240;
  uint32_t llvm_cbe_cond_2e_i620;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i621;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i616;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i616__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor485;
  uint32_t* llvm_cbe_arrayidx489;
  uint8_t* _241;
  uint64_t llvm_cbe_and_2e_i599;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i601;
  uint32_t llvm_cbe_res_2e_028_2e_i604;
  uint32_t llvm_cbe_res_2e_028_2e_i604__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i605;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i605__PHI_TEMPORARY;
  uint32_t _242;
  uint32_t llvm_cbe_cond_2e_i607;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i608;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i603;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i603__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor490;
  uint32_t* llvm_cbe_arrayidx494;
  uint8_t* _243;
  uint64_t llvm_cbe_and_2e_i586;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i588;
  uint32_t llvm_cbe_res_2e_028_2e_i591;
  uint32_t llvm_cbe_res_2e_028_2e_i591__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i592;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i592__PHI_TEMPORARY;
  uint32_t _244;
  uint32_t llvm_cbe_cond_2e_i594;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i595;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i590;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i590__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor495;
  uint32_t* llvm_cbe_arrayidx499;
  uint8_t* _245;
  uint64_t llvm_cbe_and_2e_i573;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i575;
  uint32_t llvm_cbe_res_2e_028_2e_i578;
  uint32_t llvm_cbe_res_2e_028_2e_i578__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i579;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i579__PHI_TEMPORARY;
  uint32_t _246;
  uint32_t llvm_cbe_cond_2e_i581;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i582;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i577;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i577__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor500;
  uint32_t* llvm_cbe_incdec_2e_ptr504;
  uint32_t _247;
  uint32_t llvm_cbe_xor505;
  uint32_t* llvm_cbe_arrayidx508;
  uint8_t* _248;
  uint64_t llvm_cbe_and_2e_i560;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i562;
  uint32_t llvm_cbe_res_2e_028_2e_i565;
  uint32_t llvm_cbe_res_2e_028_2e_i565__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i566;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i566__PHI_TEMPORARY;
  uint32_t _249;
  uint32_t llvm_cbe_cond_2e_i568;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i569;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i564;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i564__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor509;
  uint32_t* llvm_cbe_arrayidx513;
  uint8_t* _250;
  uint64_t llvm_cbe_and_2e_i547;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i549;
  uint32_t llvm_cbe_res_2e_028_2e_i552;
  uint32_t llvm_cbe_res_2e_028_2e_i552__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i553;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i553__PHI_TEMPORARY;
  uint32_t _251;
  uint32_t llvm_cbe_cond_2e_i555;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i556;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i551;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i551__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor514;
  uint32_t* llvm_cbe_arrayidx518;
  uint8_t* _252;
  uint64_t llvm_cbe_and_2e_i534;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i536;
  uint32_t llvm_cbe_res_2e_028_2e_i539;
  uint32_t llvm_cbe_res_2e_028_2e_i539__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i540;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i540__PHI_TEMPORARY;
  uint32_t _253;
  uint32_t llvm_cbe_cond_2e_i542;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i543;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i538;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i538__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor519;
  uint32_t* llvm_cbe_arrayidx523;
  uint8_t* _254;
  uint64_t llvm_cbe_and_2e_i521;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i523;
  uint32_t llvm_cbe_res_2e_028_2e_i526;
  uint32_t llvm_cbe_res_2e_028_2e_i526__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i527;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i527__PHI_TEMPORARY;
  uint32_t _255;
  uint32_t llvm_cbe_cond_2e_i529;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i530;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i525;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i525__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor524;
  uint32_t* llvm_cbe_incdec_2e_ptr525;
  uint32_t _256;
  uint32_t llvm_cbe_xor526;
  uint32_t* llvm_cbe_arrayidx529;
  uint8_t* _257;
  uint64_t llvm_cbe_and_2e_i508;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i510;
  uint32_t llvm_cbe_res_2e_028_2e_i513;
  uint32_t llvm_cbe_res_2e_028_2e_i513__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i514;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i514__PHI_TEMPORARY;
  uint32_t _258;
  uint32_t llvm_cbe_cond_2e_i516;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i517;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i512;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i512__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor530;
  uint32_t* llvm_cbe_arrayidx534;
  uint8_t* _259;
  uint64_t llvm_cbe_and_2e_i495;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i497;
  uint32_t llvm_cbe_res_2e_028_2e_i500;
  uint32_t llvm_cbe_res_2e_028_2e_i500__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i501;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i501__PHI_TEMPORARY;
  uint32_t _260;
  uint32_t llvm_cbe_cond_2e_i503;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i504;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i499;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i499__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor535;
  uint32_t* llvm_cbe_arrayidx539;
  uint8_t* _261;
  uint64_t llvm_cbe_and_2e_i482;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i484;
  uint32_t llvm_cbe_res_2e_028_2e_i487;
  uint32_t llvm_cbe_res_2e_028_2e_i487__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i488;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i488__PHI_TEMPORARY;
  uint32_t _262;
  uint32_t llvm_cbe_cond_2e_i490;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i491;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i486;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i486__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor540;
  uint32_t* llvm_cbe_arrayidx544;
  uint8_t* _263;
  uint64_t llvm_cbe_and_2e_i469;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i471;
  uint32_t llvm_cbe_res_2e_028_2e_i474;
  uint32_t llvm_cbe_res_2e_028_2e_i474__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i475;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i475__PHI_TEMPORARY;
  uint32_t _264;
  uint32_t llvm_cbe_cond_2e_i477;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i478;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i473;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i473__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor545;
  uint32_t* llvm_cbe_incdec_2e_ptr549;
  uint32_t _265;
  uint32_t llvm_cbe_xor550;
  uint32_t* llvm_cbe_arrayidx553;
  uint8_t* _266;
  uint64_t llvm_cbe_and_2e_i456;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i458;
  uint32_t llvm_cbe_res_2e_028_2e_i461;
  uint32_t llvm_cbe_res_2e_028_2e_i461__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i462;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i462__PHI_TEMPORARY;
  uint32_t _267;
  uint32_t llvm_cbe_cond_2e_i464;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i465;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i460;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i460__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor554;
  uint32_t* llvm_cbe_arrayidx558;
  uint8_t* _268;
  uint64_t llvm_cbe_and_2e_i443;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i445;
  uint32_t llvm_cbe_res_2e_028_2e_i448;
  uint32_t llvm_cbe_res_2e_028_2e_i448__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i449;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i449__PHI_TEMPORARY;
  uint32_t _269;
  uint32_t llvm_cbe_cond_2e_i451;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i452;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i447;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i447__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor559;
  uint32_t* llvm_cbe_arrayidx563;
  uint8_t* _270;
  uint64_t llvm_cbe_and_2e_i430;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i432;
  uint32_t llvm_cbe_res_2e_028_2e_i435;
  uint32_t llvm_cbe_res_2e_028_2e_i435__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i436;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i436__PHI_TEMPORARY;
  uint32_t _271;
  uint32_t llvm_cbe_cond_2e_i438;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i439;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i434;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i434__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor564;
  uint32_t* llvm_cbe_arrayidx568;
  uint8_t* _272;
  uint64_t llvm_cbe_and_2e_i417;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i419;
  uint32_t llvm_cbe_res_2e_028_2e_i422;
  uint32_t llvm_cbe_res_2e_028_2e_i422__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i423;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i423__PHI_TEMPORARY;
  uint32_t _273;
  uint32_t llvm_cbe_cond_2e_i425;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i426;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i421;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i421__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor569;
  uint32_t* llvm_cbe_incdec_2e_ptr570;
  uint32_t _274;
  uint32_t llvm_cbe_xor571;
  uint32_t* llvm_cbe_arrayidx574;
  uint8_t* _275;
  uint64_t llvm_cbe_and_2e_i404;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i406;
  uint32_t llvm_cbe_res_2e_028_2e_i409;
  uint32_t llvm_cbe_res_2e_028_2e_i409__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i410;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i410__PHI_TEMPORARY;
  uint32_t _276;
  uint32_t llvm_cbe_cond_2e_i412;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i413;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i408;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i408__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor575;
  uint32_t* llvm_cbe_arrayidx579;
  uint8_t* _277;
  uint64_t llvm_cbe_and_2e_i391;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i393;
  uint32_t llvm_cbe_res_2e_028_2e_i396;
  uint32_t llvm_cbe_res_2e_028_2e_i396__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i397;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i397__PHI_TEMPORARY;
  uint32_t _278;
  uint32_t llvm_cbe_cond_2e_i399;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i400;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i395;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i395__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor580;
  uint32_t* llvm_cbe_arrayidx584;
  uint8_t* _279;
  uint64_t llvm_cbe_and_2e_i378;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i380;
  uint32_t llvm_cbe_res_2e_028_2e_i383;
  uint32_t llvm_cbe_res_2e_028_2e_i383__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i384;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i384__PHI_TEMPORARY;
  uint32_t _280;
  uint32_t llvm_cbe_cond_2e_i386;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i387;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i382;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i382__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor585;
  uint32_t* llvm_cbe_arrayidx589;
  uint8_t* _281;
  uint64_t llvm_cbe_and_2e_i365;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i367;
  uint32_t llvm_cbe_res_2e_028_2e_i370;
  uint32_t llvm_cbe_res_2e_028_2e_i370__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i371;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i371__PHI_TEMPORARY;
  uint32_t _282;
  uint32_t llvm_cbe_cond_2e_i373;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i374;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i369;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i369__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor590;
  uint32_t* llvm_cbe_incdec_2e_ptr594;
  uint32_t _283;
  uint32_t llvm_cbe_xor595;
  uint32_t* llvm_cbe_arrayidx598;
  uint8_t* _284;
  uint64_t llvm_cbe_and_2e_i352;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i354;
  uint32_t llvm_cbe_res_2e_028_2e_i357;
  uint32_t llvm_cbe_res_2e_028_2e_i357__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i358;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i358__PHI_TEMPORARY;
  uint32_t _285;
  uint32_t llvm_cbe_cond_2e_i360;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i361;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i356;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i356__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor599;
  uint32_t* llvm_cbe_arrayidx603;
  uint8_t* _286;
  uint64_t llvm_cbe_and_2e_i339;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i341;
  uint32_t llvm_cbe_res_2e_028_2e_i344;
  uint32_t llvm_cbe_res_2e_028_2e_i344__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i345;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i345__PHI_TEMPORARY;
  uint32_t _287;
  uint32_t llvm_cbe_cond_2e_i347;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i348;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i343;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i343__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor604;
  uint32_t* llvm_cbe_arrayidx608;
  uint8_t* _288;
  uint64_t llvm_cbe_and_2e_i326;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i328;
  uint32_t llvm_cbe_res_2e_028_2e_i331;
  uint32_t llvm_cbe_res_2e_028_2e_i331__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i332;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i332__PHI_TEMPORARY;
  uint32_t _289;
  uint32_t llvm_cbe_cond_2e_i334;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i335;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i330;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i330__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor609;
  uint32_t* llvm_cbe_arrayidx613;
  uint8_t* _290;
  uint64_t llvm_cbe_and_2e_i313;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i315;
  uint32_t llvm_cbe_res_2e_028_2e_i318;
  uint32_t llvm_cbe_res_2e_028_2e_i318__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i319;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i319__PHI_TEMPORARY;
  uint32_t _291;
  uint32_t llvm_cbe_cond_2e_i321;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i322;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i317;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i317__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor614;
  uint32_t* llvm_cbe_incdec_2e_ptr615;
  uint32_t _292;
  uint32_t llvm_cbe_xor616;
  uint32_t* llvm_cbe_arrayidx619;
  uint8_t* _293;
  uint64_t llvm_cbe_and_2e_i300;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i302;
  uint32_t llvm_cbe_res_2e_028_2e_i305;
  uint32_t llvm_cbe_res_2e_028_2e_i305__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i306;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i306__PHI_TEMPORARY;
  uint32_t _294;
  uint32_t llvm_cbe_cond_2e_i308;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i309;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i304;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i304__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor620;
  uint32_t* llvm_cbe_arrayidx624;
  uint8_t* _295;
  uint64_t llvm_cbe_and_2e_i287;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i289;
  uint32_t llvm_cbe_res_2e_028_2e_i292;
  uint32_t llvm_cbe_res_2e_028_2e_i292__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i293;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i293__PHI_TEMPORARY;
  uint32_t _296;
  uint32_t llvm_cbe_cond_2e_i295;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i296;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i291;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i291__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor625;
  uint32_t* llvm_cbe_arrayidx629;
  uint8_t* _297;
  uint64_t llvm_cbe_and_2e_i274;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i276;
  uint32_t llvm_cbe_res_2e_028_2e_i279;
  uint32_t llvm_cbe_res_2e_028_2e_i279__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i280;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i280__PHI_TEMPORARY;
  uint32_t _298;
  uint32_t llvm_cbe_cond_2e_i282;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i283;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i278;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i278__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor630;
  uint32_t* llvm_cbe_arrayidx634;
  uint8_t* _299;
  uint64_t llvm_cbe_and_2e_i261;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i263;
  uint32_t llvm_cbe_res_2e_028_2e_i266;
  uint32_t llvm_cbe_res_2e_028_2e_i266__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i267;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i267__PHI_TEMPORARY;
  uint32_t _300;
  uint32_t llvm_cbe_cond_2e_i269;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i270;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i265;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i265__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor635;
  uint32_t* llvm_cbe_incdec_2e_ptr639;
  uint32_t _301;
  uint32_t llvm_cbe_xor640;
  uint32_t* llvm_cbe_arrayidx643;
  uint8_t* _302;
  uint64_t llvm_cbe_and_2e_i248;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i250;
  uint32_t llvm_cbe_res_2e_028_2e_i253;
  uint32_t llvm_cbe_res_2e_028_2e_i253__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i254;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i254__PHI_TEMPORARY;
  uint32_t _303;
  uint32_t llvm_cbe_cond_2e_i256;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i257;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i252;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i252__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor644;
  uint32_t* llvm_cbe_arrayidx648;
  uint8_t* _304;
  uint64_t llvm_cbe_and_2e_i235;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i237;
  uint32_t llvm_cbe_res_2e_028_2e_i240;
  uint32_t llvm_cbe_res_2e_028_2e_i240__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i241;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i241__PHI_TEMPORARY;
  uint32_t _305;
  uint32_t llvm_cbe_cond_2e_i243;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i244;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i239;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i239__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor649;
  uint32_t* llvm_cbe_arrayidx653;
  uint8_t* _306;
  uint64_t llvm_cbe_and_2e_i222;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i224;
  uint32_t llvm_cbe_res_2e_028_2e_i227;
  uint32_t llvm_cbe_res_2e_028_2e_i227__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i228;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i228__PHI_TEMPORARY;
  uint32_t _307;
  uint32_t llvm_cbe_cond_2e_i230;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i231;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i226;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i226__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor654;
  uint32_t* llvm_cbe_arrayidx658;
  uint8_t* _308;
  uint64_t llvm_cbe_and_2e_i209;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i211;
  uint32_t llvm_cbe_res_2e_028_2e_i214;
  uint32_t llvm_cbe_res_2e_028_2e_i214__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i215;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i215__PHI_TEMPORARY;
  uint32_t _309;
  uint32_t llvm_cbe_cond_2e_i217;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i218;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i213;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i213__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor659;
  uint32_t* llvm_cbe_incdec_2e_ptr660;
  uint32_t _310;
  uint32_t llvm_cbe_xor661;
  uint32_t* llvm_cbe_arrayidx664;
  uint8_t* _311;
  uint64_t llvm_cbe_and_2e_i196;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i198;
  uint32_t llvm_cbe_res_2e_028_2e_i201;
  uint32_t llvm_cbe_res_2e_028_2e_i201__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i202;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i202__PHI_TEMPORARY;
  uint32_t _312;
  uint32_t llvm_cbe_cond_2e_i204;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i205;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i200;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i200__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor665;
  uint32_t* llvm_cbe_arrayidx669;
  uint8_t* _313;
  uint64_t llvm_cbe_and_2e_i183;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i185;
  uint32_t llvm_cbe_res_2e_028_2e_i188;
  uint32_t llvm_cbe_res_2e_028_2e_i188__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i189;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i189__PHI_TEMPORARY;
  uint32_t _314;
  uint32_t llvm_cbe_cond_2e_i191;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i192;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i187;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i187__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor670;
  uint32_t* llvm_cbe_arrayidx674;
  uint8_t* _315;
  uint64_t llvm_cbe_and_2e_i170;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i172;
  uint32_t llvm_cbe_res_2e_028_2e_i175;
  uint32_t llvm_cbe_res_2e_028_2e_i175__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i176;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i176__PHI_TEMPORARY;
  uint32_t _316;
  uint32_t llvm_cbe_cond_2e_i178;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i179;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i174;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i174__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor675;
  uint32_t* llvm_cbe_arrayidx679;
  uint8_t* _317;
  uint64_t llvm_cbe_and_2e_i157;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i159;
  uint32_t llvm_cbe_res_2e_028_2e_i162;
  uint32_t llvm_cbe_res_2e_028_2e_i162__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i163;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i163__PHI_TEMPORARY;
  uint32_t _318;
  uint32_t llvm_cbe_cond_2e_i165;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i166;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i161;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i161__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor680;
  uint32_t* llvm_cbe_incdec_2e_ptr684;
  uint32_t _319;
  uint32_t llvm_cbe_xor685;
  uint32_t* llvm_cbe_arrayidx688;
  uint8_t* _320;
  uint64_t llvm_cbe_and_2e_i144;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i146;
  uint32_t llvm_cbe_res_2e_028_2e_i149;
  uint32_t llvm_cbe_res_2e_028_2e_i149__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i150;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i150__PHI_TEMPORARY;
  uint32_t _321;
  uint32_t llvm_cbe_cond_2e_i152;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i153;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i148;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i148__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor689;
  uint32_t* llvm_cbe_arrayidx693;
  uint8_t* _322;
  uint64_t llvm_cbe_and_2e_i131;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i133;
  uint32_t llvm_cbe_res_2e_028_2e_i136;
  uint32_t llvm_cbe_res_2e_028_2e_i136__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i137;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i137__PHI_TEMPORARY;
  uint32_t _323;
  uint32_t llvm_cbe_cond_2e_i139;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i140;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i135;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i135__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor694;
  uint32_t* llvm_cbe_arrayidx698;
  uint8_t* _324;
  uint64_t llvm_cbe_and_2e_i118;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i120;
  uint32_t llvm_cbe_res_2e_028_2e_i123;
  uint32_t llvm_cbe_res_2e_028_2e_i123__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i124;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i124__PHI_TEMPORARY;
  uint32_t _325;
  uint32_t llvm_cbe_cond_2e_i126;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i127;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i122;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i122__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor699;
  uint32_t* llvm_cbe_arrayidx703;
  uint8_t* _326;
  uint64_t llvm_cbe_and_2e_i105;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i107;
  uint32_t llvm_cbe_res_2e_028_2e_i110;
  uint32_t llvm_cbe_res_2e_028_2e_i110__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i111;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i111__PHI_TEMPORARY;
  uint32_t _327;
  uint32_t llvm_cbe_cond_2e_i113;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i114;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i109;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i109__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor704;
  uint32_t* llvm_cbe_incdec_2e_ptr705;
  uint32_t _328;
  uint32_t llvm_cbe_xor706;
  uint32_t* llvm_cbe_arrayidx709;
  uint8_t* _329;
  uint64_t llvm_cbe_and_2e_i92;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i94;
  uint32_t llvm_cbe_res_2e_028_2e_i97;
  uint32_t llvm_cbe_res_2e_028_2e_i97__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i98;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i98__PHI_TEMPORARY;
  uint32_t _330;
  uint32_t llvm_cbe_cond_2e_i100;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i101;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i96;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i96__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor710;
  uint32_t* llvm_cbe_arrayidx714;
  uint8_t* _331;
  uint64_t llvm_cbe_and_2e_i79;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i81;
  uint32_t llvm_cbe_res_2e_028_2e_i84;
  uint32_t llvm_cbe_res_2e_028_2e_i84__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i85;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i85__PHI_TEMPORARY;
  uint32_t _332;
  uint32_t llvm_cbe_cond_2e_i87;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i88;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i83;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i83__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor715;
  uint32_t* llvm_cbe_arrayidx719;
  uint8_t* _333;
  uint64_t llvm_cbe_and_2e_i66;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i68;
  uint32_t llvm_cbe_res_2e_028_2e_i71;
  uint32_t llvm_cbe_res_2e_028_2e_i71__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i72;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i72__PHI_TEMPORARY;
  uint32_t _334;
  uint32_t llvm_cbe_cond_2e_i74;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i75;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i70;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i70__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor720;
  uint32_t* llvm_cbe_arrayidx724;
  uint8_t* _335;
  uint64_t llvm_cbe_and_2e_i53;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i55;
  uint32_t llvm_cbe_res_2e_028_2e_i58;
  uint32_t llvm_cbe_res_2e_028_2e_i58__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i59;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i59__PHI_TEMPORARY;
  uint32_t _336;
  uint32_t llvm_cbe_cond_2e_i61;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i62;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i57;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i57__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor725;
  uint32_t _337;
  uint32_t llvm_cbe_xor730;
  uint32_t* llvm_cbe_arrayidx733;
  uint8_t* _338;
  uint64_t llvm_cbe_and_2e_i40;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i42;
  uint32_t llvm_cbe_res_2e_028_2e_i45;
  uint32_t llvm_cbe_res_2e_028_2e_i45__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i46;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i46__PHI_TEMPORARY;
  uint32_t _339;
  uint32_t llvm_cbe_cond_2e_i48;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i49;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i44;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i44__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor734;
  uint32_t* llvm_cbe_arrayidx738;
  uint8_t* _340;
  uint64_t llvm_cbe_and_2e_i27;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i29;
  uint32_t llvm_cbe_res_2e_028_2e_i32;
  uint32_t llvm_cbe_res_2e_028_2e_i32__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i33;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i33__PHI_TEMPORARY;
  uint32_t _341;
  uint32_t llvm_cbe_cond_2e_i35;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i36;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i31;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i31__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor739;
  uint32_t* llvm_cbe_arrayidx743;
  uint8_t* _342;
  uint64_t llvm_cbe_and_2e_i14;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i16;
  uint32_t llvm_cbe_res_2e_028_2e_i19;
  uint32_t llvm_cbe_res_2e_028_2e_i19__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i20;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i20__PHI_TEMPORARY;
  uint32_t _343;
  uint32_t llvm_cbe_cond_2e_i22;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i23;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i18;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i18__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor744;
  uint32_t* llvm_cbe_arrayidx748;
  uint8_t* _344;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint32_t llvm_cbe_res_2e_028_2e_i6;
  uint32_t llvm_cbe_res_2e_028_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7__PHI_TEMPORARY;
  uint32_t _345;
  uint32_t llvm_cbe_cond_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i10;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor749;
  uint32_t llvm_cbe_or752;
  uint32_t llvm_cbe_and754;
  uint32_t llvm_cbe_xor755;
  uint32_t llvm_cbe_or759;
  uint32_t llvm_cbe_and762;
  uint32_t llvm_cbe_xor763;
  uint32_t llvm_cbe_xor765;
  uint32_t llvm_cbe_and768;
  uint32_t llvm_cbe_xor769;
  uint32_t llvm_cbe_xor771;
  uint32_t llvm_cbe_and774;
  uint32_t llvm_cbe_xor775;
  uint32_t llvm_cbe_xor777;
  uint32_t llvm_cbe_and780;
  uint32_t llvm_cbe_xor781;
  uint32_t llvm_cbe_xor783;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
  ;
#line 669 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _50 = *((&in.array[((int64_t)0)]));
  _51 = *((&in.array[((int64_t)1)]));
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _52 = *((&in.array[((int64_t)2)]));
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _53 = *((&in.array[((int64_t)3)]));
  llvm_cbe_or10_2e_i = ((((((uint32_t)(uint8_t)_51)) << 16) | ((((uint32_t)(uint8_t)_50)) << 24)) | ((((uint32_t)(uint8_t)_52)) << 8)) | (((uint32_t)(uint8_t)_53));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _54 = *((&in.array[((int64_t)4)]));
  _55 = *((&in.array[((int64_t)5)]));
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _56 = *((&in.array[((int64_t)6)]));
#line 132 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _57 = *((&in.array[((int64_t)7)]));
  llvm_cbe_or10_2e_i818 = ((((((uint32_t)(uint8_t)_55)) << 16) | ((((uint32_t)(uint8_t)_54)) << 24)) | ((((uint32_t)(uint8_t)_56)) << 8)) | (((uint32_t)(uint8_t)_57));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and = (llvm_cbe_or10_2e_i818 ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i, 4))) & 252645135;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor4 = llvm_cbe_and ^ llvm_cbe_or10_2e_i818;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor5 = (llvm_cbe_and << 4) ^ llvm_cbe_or10_2e_i;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and8 = (llvm_lshr_u32(llvm_cbe_xor5, 16)) ^ (llvm_cbe_xor4 & 65535);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor9 = llvm_cbe_and8 ^ llvm_cbe_xor4;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor11 = (llvm_cbe_and8 << 16) ^ llvm_cbe_xor5;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and14 = ((llvm_lshr_u32(llvm_cbe_xor9, 2)) ^ llvm_cbe_xor11) & 858993459;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor15 = llvm_cbe_and14 ^ llvm_cbe_xor11;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor17 = (llvm_cbe_and14 << 2) ^ llvm_cbe_xor9;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and20 = ((llvm_lshr_u32(llvm_cbe_xor17, 8)) ^ llvm_cbe_xor15) & 16711935;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor21 = llvm_cbe_and20 ^ llvm_cbe_xor15;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor23 = (llvm_cbe_and20 << 8) ^ llvm_cbe_xor17;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_shl24 = llvm_cbe_xor23 << 1;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and27 = (llvm_cbe_shl24 ^ llvm_cbe_xor21) & 2863311530u;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor28 = llvm_cbe_and27 ^ (llvm_cbe_shl24 | (llvm_lshr_u32(llvm_cbe_xor23, 31)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor29 = llvm_cbe_and27 ^ llvm_cbe_xor21;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 672 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_or32 = (llvm_cbe_xor29 << 1) | (llvm_lshr_u32(llvm_cbe_xor29, 31));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr = (&llvm_cbe_ctx->field0.array[((int64_t)1)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _58 = *((&llvm_cbe_ctx->field0.array[((int64_t)0)]));
  llvm_cbe_xor33 = llvm_cbe_xor28 ^ _58;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor33 & 63))))]);
  _59 = ((uint8_t*)llvm_cbe_arrayidx);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_028_2e_i = llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i = llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY;
  _60 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i));
  llvm_cbe_cond_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i == _59)&1)), _60, llvm_cbe_res_2e_028_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i = (&llvm_cbe__ptr_2e_027_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx39 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor33, 8)) & 63))))]);
  _61 = ((uint8_t*)llvm_cbe_arrayidx39);
  llvm_cbe_and_2e_i1639 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx39)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1639) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1642;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1643__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1651;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1642:
  llvm_cbe_add_2e_ptr6_2e_i1641 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1639)]);
  llvm_cbe_res_2e_028_2e_i1644__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1645__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1641;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1650;

  do {     /* Syntactic loop 'for.body.i1650' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1650:
  llvm_cbe_res_2e_028_2e_i1644 = llvm_cbe_res_2e_028_2e_i1644__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1645 = llvm_cbe__ptr_2e_027_2e_i1645__PHI_TEMPORARY;
  _62 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1645));
  llvm_cbe_cond_2e_i1647 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1645 == _61)&1)), _62, llvm_cbe_res_2e_028_2e_i1644);
  llvm_cbe_add_2e_ptr8_2e_i1648 = (&llvm_cbe__ptr_2e_027_2e_i1645[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1648) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1644__PHI_TEMPORARY = llvm_cbe_cond_2e_i1647;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1645__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1648;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1650;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1643__PHI_TEMPORARY = llvm_cbe_cond_2e_i1647;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1651;
  }

  } while (1); /* end of syntactic loop 'for.body.i1650' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1651:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1643 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1643__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx44 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor33, 16)) & 63))))]);
  _63 = ((uint8_t*)llvm_cbe_arrayidx44);
  llvm_cbe_and_2e_i1626 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx44)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1626) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1629;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1630__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1638;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1629:
  llvm_cbe_add_2e_ptr6_2e_i1628 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1626)]);
  llvm_cbe_res_2e_028_2e_i1631__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1632__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1628;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1637;

  do {     /* Syntactic loop 'for.body.i1637' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1637:
  llvm_cbe_res_2e_028_2e_i1631 = llvm_cbe_res_2e_028_2e_i1631__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1632 = llvm_cbe__ptr_2e_027_2e_i1632__PHI_TEMPORARY;
  _64 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1632));
  llvm_cbe_cond_2e_i1634 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1632 == _63)&1)), _64, llvm_cbe_res_2e_028_2e_i1631);
  llvm_cbe_add_2e_ptr8_2e_i1635 = (&llvm_cbe__ptr_2e_027_2e_i1632[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1635) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1631__PHI_TEMPORARY = llvm_cbe_cond_2e_i1634;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1632__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1635;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1637;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1630__PHI_TEMPORARY = llvm_cbe_cond_2e_i1634;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1638;
  }

  } while (1); /* end of syntactic loop 'for.body.i1637' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1638:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1630 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1630__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx49 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor33, 24)) & 63))))]);
  _65 = ((uint8_t*)llvm_cbe_arrayidx49);
  llvm_cbe_and_2e_i1613 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx49)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1613) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1616;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1617__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1625;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1616:
  llvm_cbe_add_2e_ptr6_2e_i1615 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1613)]);
  llvm_cbe_res_2e_028_2e_i1618__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1619__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1615;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1624;

  do {     /* Syntactic loop 'for.body.i1624' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1624:
  llvm_cbe_res_2e_028_2e_i1618 = llvm_cbe_res_2e_028_2e_i1618__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1619 = llvm_cbe__ptr_2e_027_2e_i1619__PHI_TEMPORARY;
  _66 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1619));
  llvm_cbe_cond_2e_i1621 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1619 == _65)&1)), _66, llvm_cbe_res_2e_028_2e_i1618);
  llvm_cbe_add_2e_ptr8_2e_i1622 = (&llvm_cbe__ptr_2e_027_2e_i1619[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1622) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1618__PHI_TEMPORARY = llvm_cbe_cond_2e_i1621;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1619__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1622;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1624;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1617__PHI_TEMPORARY = llvm_cbe_cond_2e_i1621;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1625;
  }

  } while (1); /* end of syntactic loop 'for.body.i1624' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1625:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1617 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1617__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr54 = (&llvm_cbe_ctx->field0.array[((int64_t)2)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _67 = *llvm_cbe_incdec_2e_ptr;
  llvm_cbe_xor55 = _67 ^ ((llvm_cbe_xor28 << 28) | (llvm_lshr_u32(llvm_cbe_xor28, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx58 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor55 & 63))))]);
  _68 = ((uint8_t*)llvm_cbe_arrayidx58);
  llvm_cbe_and_2e_i1600 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx58)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1600) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1603;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1604__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1612;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1603:
  llvm_cbe_add_2e_ptr6_2e_i1602 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1600)]);
  llvm_cbe_res_2e_028_2e_i1605__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1606__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1602;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1611;

  do {     /* Syntactic loop 'for.body.i1611' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1611:
  llvm_cbe_res_2e_028_2e_i1605 = llvm_cbe_res_2e_028_2e_i1605__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1606 = llvm_cbe__ptr_2e_027_2e_i1606__PHI_TEMPORARY;
  _69 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1606));
  llvm_cbe_cond_2e_i1608 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1606 == _68)&1)), _69, llvm_cbe_res_2e_028_2e_i1605);
  llvm_cbe_add_2e_ptr8_2e_i1609 = (&llvm_cbe__ptr_2e_027_2e_i1606[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1609) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1605__PHI_TEMPORARY = llvm_cbe_cond_2e_i1608;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1606__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1609;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1611;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1604__PHI_TEMPORARY = llvm_cbe_cond_2e_i1608;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1612;
  }

  } while (1); /* end of syntactic loop 'for.body.i1611' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1612:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1604 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1604__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx63 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor55, 8)) & 63))))]);
  _70 = ((uint8_t*)llvm_cbe_arrayidx63);
  llvm_cbe_and_2e_i1587 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx63)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1587) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1590;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1591__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1599;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1590:
  llvm_cbe_add_2e_ptr6_2e_i1589 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1587)]);
  llvm_cbe_res_2e_028_2e_i1592__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1593__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1589;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1598;

  do {     /* Syntactic loop 'for.body.i1598' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1598:
  llvm_cbe_res_2e_028_2e_i1592 = llvm_cbe_res_2e_028_2e_i1592__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1593 = llvm_cbe__ptr_2e_027_2e_i1593__PHI_TEMPORARY;
  _71 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1593));
  llvm_cbe_cond_2e_i1595 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1593 == _70)&1)), _71, llvm_cbe_res_2e_028_2e_i1592);
  llvm_cbe_add_2e_ptr8_2e_i1596 = (&llvm_cbe__ptr_2e_027_2e_i1593[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1596) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1592__PHI_TEMPORARY = llvm_cbe_cond_2e_i1595;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1593__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1596;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1598;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1591__PHI_TEMPORARY = llvm_cbe_cond_2e_i1595;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1599;
  }

  } while (1); /* end of syntactic loop 'for.body.i1598' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1599:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1591 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1591__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx68 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor55, 16)) & 63))))]);
  _72 = ((uint8_t*)llvm_cbe_arrayidx68);
  llvm_cbe_and_2e_i1574 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx68)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1574) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1577;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1578__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1586;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1577:
  llvm_cbe_add_2e_ptr6_2e_i1576 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1574)]);
  llvm_cbe_res_2e_028_2e_i1579__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1580__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1576;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1585;

  do {     /* Syntactic loop 'for.body.i1585' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1585:
  llvm_cbe_res_2e_028_2e_i1579 = llvm_cbe_res_2e_028_2e_i1579__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1580 = llvm_cbe__ptr_2e_027_2e_i1580__PHI_TEMPORARY;
  _73 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1580));
  llvm_cbe_cond_2e_i1582 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1580 == _72)&1)), _73, llvm_cbe_res_2e_028_2e_i1579);
  llvm_cbe_add_2e_ptr8_2e_i1583 = (&llvm_cbe__ptr_2e_027_2e_i1580[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1583) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1579__PHI_TEMPORARY = llvm_cbe_cond_2e_i1582;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1580__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1583;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1585;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1578__PHI_TEMPORARY = llvm_cbe_cond_2e_i1582;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1586;
  }

  } while (1); /* end of syntactic loop 'for.body.i1585' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1586:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1578 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1578__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx73 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor55, 24)) & 63))))]);
  _74 = ((uint8_t*)llvm_cbe_arrayidx73);
  llvm_cbe_and_2e_i1561 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx73)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1561) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1564;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1565__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1573;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1564:
  llvm_cbe_add_2e_ptr6_2e_i1563 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1561)]);
  llvm_cbe_res_2e_028_2e_i1566__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1567__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1563;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1572;

  do {     /* Syntactic loop 'for.body.i1572' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1572:
  llvm_cbe_res_2e_028_2e_i1566 = llvm_cbe_res_2e_028_2e_i1566__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1567 = llvm_cbe__ptr_2e_027_2e_i1567__PHI_TEMPORARY;
  _75 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1567));
  llvm_cbe_cond_2e_i1569 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1567 == _74)&1)), _75, llvm_cbe_res_2e_028_2e_i1566);
  llvm_cbe_add_2e_ptr8_2e_i1570 = (&llvm_cbe__ptr_2e_027_2e_i1567[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1570) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1566__PHI_TEMPORARY = llvm_cbe_cond_2e_i1569;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1567__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1570;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1572;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1565__PHI_TEMPORARY = llvm_cbe_cond_2e_i1569;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1573;
  }

  } while (1); /* end of syntactic loop 'for.body.i1572' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1573:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1565 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1565__PHI_TEMPORARY;
  llvm_cbe_xor74 = (((((((llvm_cbe_res_2e_0_2e_lcssa_2e_i ^ llvm_cbe_or32) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1643) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1630) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1617) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1604) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1591) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1578) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1565;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr75 = (&llvm_cbe_ctx->field0.array[((int64_t)3)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _76 = *llvm_cbe_incdec_2e_ptr54;
  llvm_cbe_xor76 = llvm_cbe_xor74 ^ _76;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx79 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor76 & 63))))]);
  _77 = ((uint8_t*)llvm_cbe_arrayidx79);
  llvm_cbe_and_2e_i1548 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx79)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1548) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1551;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1552__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1560;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1551:
  llvm_cbe_add_2e_ptr6_2e_i1550 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1548)]);
  llvm_cbe_res_2e_028_2e_i1553__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1554__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1550;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1559;

  do {     /* Syntactic loop 'for.body.i1559' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1559:
  llvm_cbe_res_2e_028_2e_i1553 = llvm_cbe_res_2e_028_2e_i1553__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1554 = llvm_cbe__ptr_2e_027_2e_i1554__PHI_TEMPORARY;
  _78 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1554));
  llvm_cbe_cond_2e_i1556 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1554 == _77)&1)), _78, llvm_cbe_res_2e_028_2e_i1553);
  llvm_cbe_add_2e_ptr8_2e_i1557 = (&llvm_cbe__ptr_2e_027_2e_i1554[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1557) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1553__PHI_TEMPORARY = llvm_cbe_cond_2e_i1556;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1554__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1557;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1559;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1552__PHI_TEMPORARY = llvm_cbe_cond_2e_i1556;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1560;
  }

  } while (1); /* end of syntactic loop 'for.body.i1559' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1560:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1552 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1552__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx84 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor76, 8)) & 63))))]);
  _79 = ((uint8_t*)llvm_cbe_arrayidx84);
  llvm_cbe_and_2e_i1535 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx84)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1535) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1538;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1539__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1547;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1538:
  llvm_cbe_add_2e_ptr6_2e_i1537 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1535)]);
  llvm_cbe_res_2e_028_2e_i1540__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1541__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1537;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1546;

  do {     /* Syntactic loop 'for.body.i1546' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1546:
  llvm_cbe_res_2e_028_2e_i1540 = llvm_cbe_res_2e_028_2e_i1540__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1541 = llvm_cbe__ptr_2e_027_2e_i1541__PHI_TEMPORARY;
  _80 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1541));
  llvm_cbe_cond_2e_i1543 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1541 == _79)&1)), _80, llvm_cbe_res_2e_028_2e_i1540);
  llvm_cbe_add_2e_ptr8_2e_i1544 = (&llvm_cbe__ptr_2e_027_2e_i1541[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1544) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1540__PHI_TEMPORARY = llvm_cbe_cond_2e_i1543;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1541__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1544;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1546;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1539__PHI_TEMPORARY = llvm_cbe_cond_2e_i1543;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1547;
  }

  } while (1); /* end of syntactic loop 'for.body.i1546' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1547:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1539 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1539__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx89 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor76, 16)) & 63))))]);
  _81 = ((uint8_t*)llvm_cbe_arrayidx89);
  llvm_cbe_and_2e_i1522 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx89)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1522) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1525;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1526__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1534;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1525:
  llvm_cbe_add_2e_ptr6_2e_i1524 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1522)]);
  llvm_cbe_res_2e_028_2e_i1527__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1528__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1524;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1533;

  do {     /* Syntactic loop 'for.body.i1533' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1533:
  llvm_cbe_res_2e_028_2e_i1527 = llvm_cbe_res_2e_028_2e_i1527__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1528 = llvm_cbe__ptr_2e_027_2e_i1528__PHI_TEMPORARY;
  _82 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1528));
  llvm_cbe_cond_2e_i1530 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1528 == _81)&1)), _82, llvm_cbe_res_2e_028_2e_i1527);
  llvm_cbe_add_2e_ptr8_2e_i1531 = (&llvm_cbe__ptr_2e_027_2e_i1528[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1531) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1527__PHI_TEMPORARY = llvm_cbe_cond_2e_i1530;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1528__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1531;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1533;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1526__PHI_TEMPORARY = llvm_cbe_cond_2e_i1530;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1534;
  }

  } while (1); /* end of syntactic loop 'for.body.i1533' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1534:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1526 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1526__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx94 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor76, 24)) & 63))))]);
  _83 = ((uint8_t*)llvm_cbe_arrayidx94);
  llvm_cbe_and_2e_i1509 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx94)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1509) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1512;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1513__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1521;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1512:
  llvm_cbe_add_2e_ptr6_2e_i1511 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1509)]);
  llvm_cbe_res_2e_028_2e_i1514__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1515__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1511;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1520;

  do {     /* Syntactic loop 'for.body.i1520' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1520:
  llvm_cbe_res_2e_028_2e_i1514 = llvm_cbe_res_2e_028_2e_i1514__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1515 = llvm_cbe__ptr_2e_027_2e_i1515__PHI_TEMPORARY;
  _84 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1515));
  llvm_cbe_cond_2e_i1517 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1515 == _83)&1)), _84, llvm_cbe_res_2e_028_2e_i1514);
  llvm_cbe_add_2e_ptr8_2e_i1518 = (&llvm_cbe__ptr_2e_027_2e_i1515[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1518) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1514__PHI_TEMPORARY = llvm_cbe_cond_2e_i1517;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1515__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1518;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1520;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1513__PHI_TEMPORARY = llvm_cbe_cond_2e_i1517;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1521;
  }

  } while (1); /* end of syntactic loop 'for.body.i1520' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1521:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1513 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1513__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr99 = (&llvm_cbe_ctx->field0.array[((int64_t)4)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _85 = *llvm_cbe_incdec_2e_ptr75;
  llvm_cbe_xor100 = _85 ^ ((llvm_cbe_xor74 << 28) | (llvm_lshr_u32(llvm_cbe_xor74, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx103 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor100 & 63))))]);
  _86 = ((uint8_t*)llvm_cbe_arrayidx103);
  llvm_cbe_and_2e_i1496 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx103)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1496) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1499;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1500__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1508;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1499:
  llvm_cbe_add_2e_ptr6_2e_i1498 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1496)]);
  llvm_cbe_res_2e_028_2e_i1501__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1502__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1498;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1507;

  do {     /* Syntactic loop 'for.body.i1507' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1507:
  llvm_cbe_res_2e_028_2e_i1501 = llvm_cbe_res_2e_028_2e_i1501__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1502 = llvm_cbe__ptr_2e_027_2e_i1502__PHI_TEMPORARY;
  _87 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1502));
  llvm_cbe_cond_2e_i1504 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1502 == _86)&1)), _87, llvm_cbe_res_2e_028_2e_i1501);
  llvm_cbe_add_2e_ptr8_2e_i1505 = (&llvm_cbe__ptr_2e_027_2e_i1502[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1505) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1501__PHI_TEMPORARY = llvm_cbe_cond_2e_i1504;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1502__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1505;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1507;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1500__PHI_TEMPORARY = llvm_cbe_cond_2e_i1504;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1508;
  }

  } while (1); /* end of syntactic loop 'for.body.i1507' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1508:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1500 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1500__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx108 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor100, 8)) & 63))))]);
  _88 = ((uint8_t*)llvm_cbe_arrayidx108);
  llvm_cbe_and_2e_i1483 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx108)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1483) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1486;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1487__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1495;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1486:
  llvm_cbe_add_2e_ptr6_2e_i1485 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1483)]);
  llvm_cbe_res_2e_028_2e_i1488__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1489__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1485;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1494;

  do {     /* Syntactic loop 'for.body.i1494' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1494:
  llvm_cbe_res_2e_028_2e_i1488 = llvm_cbe_res_2e_028_2e_i1488__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1489 = llvm_cbe__ptr_2e_027_2e_i1489__PHI_TEMPORARY;
  _89 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1489));
  llvm_cbe_cond_2e_i1491 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1489 == _88)&1)), _89, llvm_cbe_res_2e_028_2e_i1488);
  llvm_cbe_add_2e_ptr8_2e_i1492 = (&llvm_cbe__ptr_2e_027_2e_i1489[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1492) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1488__PHI_TEMPORARY = llvm_cbe_cond_2e_i1491;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1489__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1492;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1494;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1487__PHI_TEMPORARY = llvm_cbe_cond_2e_i1491;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1495;
  }

  } while (1); /* end of syntactic loop 'for.body.i1494' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1495:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1487 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1487__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx113 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor100, 16)) & 63))))]);
  _90 = ((uint8_t*)llvm_cbe_arrayidx113);
  llvm_cbe_and_2e_i1470 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx113)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1470) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1473;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1474__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1482;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1473:
  llvm_cbe_add_2e_ptr6_2e_i1472 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1470)]);
  llvm_cbe_res_2e_028_2e_i1475__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1476__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1472;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1481;

  do {     /* Syntactic loop 'for.body.i1481' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1481:
  llvm_cbe_res_2e_028_2e_i1475 = llvm_cbe_res_2e_028_2e_i1475__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1476 = llvm_cbe__ptr_2e_027_2e_i1476__PHI_TEMPORARY;
  _91 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1476));
  llvm_cbe_cond_2e_i1478 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1476 == _90)&1)), _91, llvm_cbe_res_2e_028_2e_i1475);
  llvm_cbe_add_2e_ptr8_2e_i1479 = (&llvm_cbe__ptr_2e_027_2e_i1476[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1479) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1475__PHI_TEMPORARY = llvm_cbe_cond_2e_i1478;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1476__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1479;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1481;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1474__PHI_TEMPORARY = llvm_cbe_cond_2e_i1478;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1482;
  }

  } while (1); /* end of syntactic loop 'for.body.i1481' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1482:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1474 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1474__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 674 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx118 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor100, 24)) & 63))))]);
  _92 = ((uint8_t*)llvm_cbe_arrayidx118);
  llvm_cbe_and_2e_i1457 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx118)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1457) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1460;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1461__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1469;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1460:
  llvm_cbe_add_2e_ptr6_2e_i1459 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1457)]);
  llvm_cbe_res_2e_028_2e_i1462__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1463__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1459;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1468;

  do {     /* Syntactic loop 'for.body.i1468' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1468:
  llvm_cbe_res_2e_028_2e_i1462 = llvm_cbe_res_2e_028_2e_i1462__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1463 = llvm_cbe__ptr_2e_027_2e_i1463__PHI_TEMPORARY;
  _93 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1463));
  llvm_cbe_cond_2e_i1465 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1463 == _92)&1)), _93, llvm_cbe_res_2e_028_2e_i1462);
  llvm_cbe_add_2e_ptr8_2e_i1466 = (&llvm_cbe__ptr_2e_027_2e_i1463[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1466) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1462__PHI_TEMPORARY = llvm_cbe_cond_2e_i1465;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1463__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1466;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1468;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1461__PHI_TEMPORARY = llvm_cbe_cond_2e_i1465;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1469;
  }

  } while (1); /* end of syntactic loop 'for.body.i1468' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1469:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1461 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1461__PHI_TEMPORARY;
  llvm_cbe_xor119 = (((((((llvm_cbe_res_2e_0_2e_lcssa_2e_i1552 ^ llvm_cbe_xor28) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1539) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1526) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1513) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1500) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1487) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1474) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1461;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr120 = (&llvm_cbe_ctx->field0.array[((int64_t)5)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _94 = *llvm_cbe_incdec_2e_ptr99;
  llvm_cbe_xor121 = llvm_cbe_xor119 ^ _94;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx124 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor121 & 63))))]);
  _95 = ((uint8_t*)llvm_cbe_arrayidx124);
  llvm_cbe_and_2e_i1444 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx124)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1444) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1447;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1448__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1456;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1447:
  llvm_cbe_add_2e_ptr6_2e_i1446 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1444)]);
  llvm_cbe_res_2e_028_2e_i1449__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1450__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1446;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1455;

  do {     /* Syntactic loop 'for.body.i1455' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1455:
  llvm_cbe_res_2e_028_2e_i1449 = llvm_cbe_res_2e_028_2e_i1449__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1450 = llvm_cbe__ptr_2e_027_2e_i1450__PHI_TEMPORARY;
  _96 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1450));
  llvm_cbe_cond_2e_i1452 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1450 == _95)&1)), _96, llvm_cbe_res_2e_028_2e_i1449);
  llvm_cbe_add_2e_ptr8_2e_i1453 = (&llvm_cbe__ptr_2e_027_2e_i1450[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1453) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1449__PHI_TEMPORARY = llvm_cbe_cond_2e_i1452;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1450__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1453;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1455;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1448__PHI_TEMPORARY = llvm_cbe_cond_2e_i1452;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1456;
  }

  } while (1); /* end of syntactic loop 'for.body.i1455' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1456:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1448 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1448__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx129 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor121, 8)) & 63))))]);
  _97 = ((uint8_t*)llvm_cbe_arrayidx129);
  llvm_cbe_and_2e_i1431 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx129)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1431) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1434;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1435__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1443;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1434:
  llvm_cbe_add_2e_ptr6_2e_i1433 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1431)]);
  llvm_cbe_res_2e_028_2e_i1436__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1437__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1433;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1442;

  do {     /* Syntactic loop 'for.body.i1442' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1442:
  llvm_cbe_res_2e_028_2e_i1436 = llvm_cbe_res_2e_028_2e_i1436__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1437 = llvm_cbe__ptr_2e_027_2e_i1437__PHI_TEMPORARY;
  _98 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1437));
  llvm_cbe_cond_2e_i1439 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1437 == _97)&1)), _98, llvm_cbe_res_2e_028_2e_i1436);
  llvm_cbe_add_2e_ptr8_2e_i1440 = (&llvm_cbe__ptr_2e_027_2e_i1437[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1440) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1436__PHI_TEMPORARY = llvm_cbe_cond_2e_i1439;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1437__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1440;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1442;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1435__PHI_TEMPORARY = llvm_cbe_cond_2e_i1439;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1443;
  }

  } while (1); /* end of syntactic loop 'for.body.i1442' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1443:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1435 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1435__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx134 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor121, 16)) & 63))))]);
  _99 = ((uint8_t*)llvm_cbe_arrayidx134);
  llvm_cbe_and_2e_i1418 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx134)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1418) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1421;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1422__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1430;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1421:
  llvm_cbe_add_2e_ptr6_2e_i1420 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1418)]);
  llvm_cbe_res_2e_028_2e_i1423__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1424__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1420;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1429;

  do {     /* Syntactic loop 'for.body.i1429' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1429:
  llvm_cbe_res_2e_028_2e_i1423 = llvm_cbe_res_2e_028_2e_i1423__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1424 = llvm_cbe__ptr_2e_027_2e_i1424__PHI_TEMPORARY;
  _100 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1424));
  llvm_cbe_cond_2e_i1426 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1424 == _99)&1)), _100, llvm_cbe_res_2e_028_2e_i1423);
  llvm_cbe_add_2e_ptr8_2e_i1427 = (&llvm_cbe__ptr_2e_027_2e_i1424[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1427) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1423__PHI_TEMPORARY = llvm_cbe_cond_2e_i1426;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1424__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1427;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1429;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1422__PHI_TEMPORARY = llvm_cbe_cond_2e_i1426;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1430;
  }

  } while (1); /* end of syntactic loop 'for.body.i1429' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1430:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1422 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1422__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx139 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor121, 24)) & 63))))]);
  _101 = ((uint8_t*)llvm_cbe_arrayidx139);
  llvm_cbe_and_2e_i1405 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx139)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1405) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1408;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1409__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1417;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1408:
  llvm_cbe_add_2e_ptr6_2e_i1407 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1405)]);
  llvm_cbe_res_2e_028_2e_i1410__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1411__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1407;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1416;

  do {     /* Syntactic loop 'for.body.i1416' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1416:
  llvm_cbe_res_2e_028_2e_i1410 = llvm_cbe_res_2e_028_2e_i1410__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1411 = llvm_cbe__ptr_2e_027_2e_i1411__PHI_TEMPORARY;
  _102 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1411));
  llvm_cbe_cond_2e_i1413 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1411 == _101)&1)), _102, llvm_cbe_res_2e_028_2e_i1410);
  llvm_cbe_add_2e_ptr8_2e_i1414 = (&llvm_cbe__ptr_2e_027_2e_i1411[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1414) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1410__PHI_TEMPORARY = llvm_cbe_cond_2e_i1413;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1411__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1414;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1416;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1409__PHI_TEMPORARY = llvm_cbe_cond_2e_i1413;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1417;
  }

  } while (1); /* end of syntactic loop 'for.body.i1416' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1417:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1409 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1409__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr144 = (&llvm_cbe_ctx->field0.array[((int64_t)6)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _103 = *llvm_cbe_incdec_2e_ptr120;
  llvm_cbe_xor145 = _103 ^ ((llvm_cbe_xor119 << 28) | (llvm_lshr_u32(llvm_cbe_xor119, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx148 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor145 & 63))))]);
  _104 = ((uint8_t*)llvm_cbe_arrayidx148);
  llvm_cbe_and_2e_i1392 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx148)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1392) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1395;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1396__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1404;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1395:
  llvm_cbe_add_2e_ptr6_2e_i1394 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1392)]);
  llvm_cbe_res_2e_028_2e_i1397__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1398__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1394;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1403;

  do {     /* Syntactic loop 'for.body.i1403' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1403:
  llvm_cbe_res_2e_028_2e_i1397 = llvm_cbe_res_2e_028_2e_i1397__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1398 = llvm_cbe__ptr_2e_027_2e_i1398__PHI_TEMPORARY;
  _105 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1398));
  llvm_cbe_cond_2e_i1400 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1398 == _104)&1)), _105, llvm_cbe_res_2e_028_2e_i1397);
  llvm_cbe_add_2e_ptr8_2e_i1401 = (&llvm_cbe__ptr_2e_027_2e_i1398[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1401) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1397__PHI_TEMPORARY = llvm_cbe_cond_2e_i1400;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1398__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1401;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1403;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1396__PHI_TEMPORARY = llvm_cbe_cond_2e_i1400;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1404;
  }

  } while (1); /* end of syntactic loop 'for.body.i1403' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1404:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1396 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1396__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx153 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor145, 8)) & 63))))]);
  _106 = ((uint8_t*)llvm_cbe_arrayidx153);
  llvm_cbe_and_2e_i1379 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx153)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1379) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1382;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1383__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1391;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1382:
  llvm_cbe_add_2e_ptr6_2e_i1381 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1379)]);
  llvm_cbe_res_2e_028_2e_i1384__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1385__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1381;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1390;

  do {     /* Syntactic loop 'for.body.i1390' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1390:
  llvm_cbe_res_2e_028_2e_i1384 = llvm_cbe_res_2e_028_2e_i1384__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1385 = llvm_cbe__ptr_2e_027_2e_i1385__PHI_TEMPORARY;
  _107 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1385));
  llvm_cbe_cond_2e_i1387 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1385 == _106)&1)), _107, llvm_cbe_res_2e_028_2e_i1384);
  llvm_cbe_add_2e_ptr8_2e_i1388 = (&llvm_cbe__ptr_2e_027_2e_i1385[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1388) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1384__PHI_TEMPORARY = llvm_cbe_cond_2e_i1387;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1385__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1388;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1390;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1383__PHI_TEMPORARY = llvm_cbe_cond_2e_i1387;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1391;
  }

  } while (1); /* end of syntactic loop 'for.body.i1390' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1391:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1383 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1383__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx158 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor145, 16)) & 63))))]);
  _108 = ((uint8_t*)llvm_cbe_arrayidx158);
  llvm_cbe_and_2e_i1366 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx158)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1366) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1369;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1370__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1378;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1369:
  llvm_cbe_add_2e_ptr6_2e_i1368 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1366)]);
  llvm_cbe_res_2e_028_2e_i1371__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1372__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1368;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1377;

  do {     /* Syntactic loop 'for.body.i1377' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1377:
  llvm_cbe_res_2e_028_2e_i1371 = llvm_cbe_res_2e_028_2e_i1371__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1372 = llvm_cbe__ptr_2e_027_2e_i1372__PHI_TEMPORARY;
  _109 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1372));
  llvm_cbe_cond_2e_i1374 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1372 == _108)&1)), _109, llvm_cbe_res_2e_028_2e_i1371);
  llvm_cbe_add_2e_ptr8_2e_i1375 = (&llvm_cbe__ptr_2e_027_2e_i1372[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1375) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1371__PHI_TEMPORARY = llvm_cbe_cond_2e_i1374;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1372__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1375;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1377;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1370__PHI_TEMPORARY = llvm_cbe_cond_2e_i1374;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1378;
  }

  } while (1); /* end of syntactic loop 'for.body.i1377' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1378:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1370 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1370__PHI_TEMPORARY;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx163 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor145, 24)) & 63))))]);
  _110 = ((uint8_t*)llvm_cbe_arrayidx163);
  llvm_cbe_and_2e_i1353 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx163)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1353) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1356;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1357__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1365;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1356:
  llvm_cbe_add_2e_ptr6_2e_i1355 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1353)]);
  llvm_cbe_res_2e_028_2e_i1358__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1359__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1355;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1364;

  do {     /* Syntactic loop 'for.body.i1364' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1364:
  llvm_cbe_res_2e_028_2e_i1358 = llvm_cbe_res_2e_028_2e_i1358__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1359 = llvm_cbe__ptr_2e_027_2e_i1359__PHI_TEMPORARY;
  _111 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1359));
  llvm_cbe_cond_2e_i1361 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1359 == _110)&1)), _111, llvm_cbe_res_2e_028_2e_i1358);
  llvm_cbe_add_2e_ptr8_2e_i1362 = (&llvm_cbe__ptr_2e_027_2e_i1359[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1362) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1358__PHI_TEMPORARY = llvm_cbe_cond_2e_i1361;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1359__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1362;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1364;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1357__PHI_TEMPORARY = llvm_cbe_cond_2e_i1361;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1365;
  }

  } while (1); /* end of syntactic loop 'for.body.i1364' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1365:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1357 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1357__PHI_TEMPORARY;
  llvm_cbe_xor164 = (((((((llvm_cbe_res_2e_0_2e_lcssa_2e_i1448 ^ llvm_cbe_xor74) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1435) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1422) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1409) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1396) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1383) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1370) ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1357;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr165 = (&llvm_cbe_ctx->field0.array[((int64_t)7)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _112 = *llvm_cbe_incdec_2e_ptr144;
  llvm_cbe_xor166 = llvm_cbe_xor164 ^ _112;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx169 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor166 & 63))))]);
  _113 = ((uint8_t*)llvm_cbe_arrayidx169);
  llvm_cbe_and_2e_i1340 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx169)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1340) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1343;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1344__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1352;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1343:
  llvm_cbe_add_2e_ptr6_2e_i1342 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1340)]);
  llvm_cbe_res_2e_028_2e_i1345__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1346__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1342;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1351;

  do {     /* Syntactic loop 'for.body.i1351' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1351:
  llvm_cbe_res_2e_028_2e_i1345 = llvm_cbe_res_2e_028_2e_i1345__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1346 = llvm_cbe__ptr_2e_027_2e_i1346__PHI_TEMPORARY;
  _114 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1346));
  llvm_cbe_cond_2e_i1348 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1346 == _113)&1)), _114, llvm_cbe_res_2e_028_2e_i1345);
  llvm_cbe_add_2e_ptr8_2e_i1349 = (&llvm_cbe__ptr_2e_027_2e_i1346[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1349) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1345__PHI_TEMPORARY = llvm_cbe_cond_2e_i1348;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1346__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1349;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1351;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1344__PHI_TEMPORARY = llvm_cbe_cond_2e_i1348;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1352;
  }

  } while (1); /* end of syntactic loop 'for.body.i1351' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1352:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1344 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1344__PHI_TEMPORARY;
  llvm_cbe_xor170 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1344 ^ llvm_cbe_xor119;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx174 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor166, 8)) & 63))))]);
  _115 = ((uint8_t*)llvm_cbe_arrayidx174);
  llvm_cbe_and_2e_i1327 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx174)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1327) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1330;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1331__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1339;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1330:
  llvm_cbe_add_2e_ptr6_2e_i1329 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1327)]);
  llvm_cbe_res_2e_028_2e_i1332__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1333__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1329;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1338;

  do {     /* Syntactic loop 'for.body.i1338' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1338:
  llvm_cbe_res_2e_028_2e_i1332 = llvm_cbe_res_2e_028_2e_i1332__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1333 = llvm_cbe__ptr_2e_027_2e_i1333__PHI_TEMPORARY;
  _116 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1333));
  llvm_cbe_cond_2e_i1335 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1333 == _115)&1)), _116, llvm_cbe_res_2e_028_2e_i1332);
  llvm_cbe_add_2e_ptr8_2e_i1336 = (&llvm_cbe__ptr_2e_027_2e_i1333[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1336) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1332__PHI_TEMPORARY = llvm_cbe_cond_2e_i1335;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1333__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1336;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1338;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1331__PHI_TEMPORARY = llvm_cbe_cond_2e_i1335;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1339;
  }

  } while (1); /* end of syntactic loop 'for.body.i1338' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1339:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1331 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1331__PHI_TEMPORARY;
  llvm_cbe_xor175 = llvm_cbe_xor170 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1331;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx179 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor166, 16)) & 63))))]);
  _117 = ((uint8_t*)llvm_cbe_arrayidx179);
  llvm_cbe_and_2e_i1314 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx179)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1314) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1317;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1318__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1326;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1317:
  llvm_cbe_add_2e_ptr6_2e_i1316 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1314)]);
  llvm_cbe_res_2e_028_2e_i1319__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1320__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1316;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1325;

  do {     /* Syntactic loop 'for.body.i1325' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1325:
  llvm_cbe_res_2e_028_2e_i1319 = llvm_cbe_res_2e_028_2e_i1319__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1320 = llvm_cbe__ptr_2e_027_2e_i1320__PHI_TEMPORARY;
  _118 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1320));
  llvm_cbe_cond_2e_i1322 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1320 == _117)&1)), _118, llvm_cbe_res_2e_028_2e_i1319);
  llvm_cbe_add_2e_ptr8_2e_i1323 = (&llvm_cbe__ptr_2e_027_2e_i1320[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1323) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1319__PHI_TEMPORARY = llvm_cbe_cond_2e_i1322;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1320__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1323;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1325;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1318__PHI_TEMPORARY = llvm_cbe_cond_2e_i1322;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1326;
  }

  } while (1); /* end of syntactic loop 'for.body.i1325' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1326:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1318 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1318__PHI_TEMPORARY;
  llvm_cbe_xor180 = llvm_cbe_xor175 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1318;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx184 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor166, 24)) & 63))))]);
  _119 = ((uint8_t*)llvm_cbe_arrayidx184);
  llvm_cbe_and_2e_i1301 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx184)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1301) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1304;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1305__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1313;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1304:
  llvm_cbe_add_2e_ptr6_2e_i1303 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1301)]);
  llvm_cbe_res_2e_028_2e_i1306__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1307__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1303;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1312;

  do {     /* Syntactic loop 'for.body.i1312' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1312:
  llvm_cbe_res_2e_028_2e_i1306 = llvm_cbe_res_2e_028_2e_i1306__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1307 = llvm_cbe__ptr_2e_027_2e_i1307__PHI_TEMPORARY;
  _120 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1307));
  llvm_cbe_cond_2e_i1309 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1307 == _119)&1)), _120, llvm_cbe_res_2e_028_2e_i1306);
  llvm_cbe_add_2e_ptr8_2e_i1310 = (&llvm_cbe__ptr_2e_027_2e_i1307[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1310) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1306__PHI_TEMPORARY = llvm_cbe_cond_2e_i1309;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1307__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1310;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1312;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1305__PHI_TEMPORARY = llvm_cbe_cond_2e_i1309;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1313;
  }

  } while (1); /* end of syntactic loop 'for.body.i1312' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1313:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1305 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1305__PHI_TEMPORARY;
  llvm_cbe_xor185 = llvm_cbe_xor180 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1305;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr189 = (&llvm_cbe_ctx->field0.array[((int64_t)8)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _121 = *llvm_cbe_incdec_2e_ptr165;
  llvm_cbe_xor190 = _121 ^ ((llvm_cbe_xor164 << 28) | (llvm_lshr_u32(llvm_cbe_xor164, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx193 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor190 & 63))))]);
  _122 = ((uint8_t*)llvm_cbe_arrayidx193);
  llvm_cbe_and_2e_i1288 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx193)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1288) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1291;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1292__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1300;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1291:
  llvm_cbe_add_2e_ptr6_2e_i1290 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1288)]);
  llvm_cbe_res_2e_028_2e_i1293__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1294__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1290;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1299;

  do {     /* Syntactic loop 'for.body.i1299' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1299:
  llvm_cbe_res_2e_028_2e_i1293 = llvm_cbe_res_2e_028_2e_i1293__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1294 = llvm_cbe__ptr_2e_027_2e_i1294__PHI_TEMPORARY;
  _123 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1294));
  llvm_cbe_cond_2e_i1296 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1294 == _122)&1)), _123, llvm_cbe_res_2e_028_2e_i1293);
  llvm_cbe_add_2e_ptr8_2e_i1297 = (&llvm_cbe__ptr_2e_027_2e_i1294[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1297) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1293__PHI_TEMPORARY = llvm_cbe_cond_2e_i1296;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1294__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1297;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1299;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1292__PHI_TEMPORARY = llvm_cbe_cond_2e_i1296;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1300;
  }

  } while (1); /* end of syntactic loop 'for.body.i1299' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1300:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1292 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1292__PHI_TEMPORARY;
  llvm_cbe_xor194 = llvm_cbe_xor185 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1292;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx198 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor190, 8)) & 63))))]);
  _124 = ((uint8_t*)llvm_cbe_arrayidx198);
  llvm_cbe_and_2e_i1275 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx198)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1275) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1278;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1279__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1287;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1278:
  llvm_cbe_add_2e_ptr6_2e_i1277 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1275)]);
  llvm_cbe_res_2e_028_2e_i1280__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1281__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1277;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1286;

  do {     /* Syntactic loop 'for.body.i1286' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1286:
  llvm_cbe_res_2e_028_2e_i1280 = llvm_cbe_res_2e_028_2e_i1280__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1281 = llvm_cbe__ptr_2e_027_2e_i1281__PHI_TEMPORARY;
  _125 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1281));
  llvm_cbe_cond_2e_i1283 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1281 == _124)&1)), _125, llvm_cbe_res_2e_028_2e_i1280);
  llvm_cbe_add_2e_ptr8_2e_i1284 = (&llvm_cbe__ptr_2e_027_2e_i1281[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1284) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1280__PHI_TEMPORARY = llvm_cbe_cond_2e_i1283;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1281__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1284;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1286;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1279__PHI_TEMPORARY = llvm_cbe_cond_2e_i1283;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1287;
  }

  } while (1); /* end of syntactic loop 'for.body.i1286' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1287:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1279 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1279__PHI_TEMPORARY;
  llvm_cbe_xor199 = llvm_cbe_xor194 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1279;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx203 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor190, 16)) & 63))))]);
  _126 = ((uint8_t*)llvm_cbe_arrayidx203);
  llvm_cbe_and_2e_i1262 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx203)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1262) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1265;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1266__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1274;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1265:
  llvm_cbe_add_2e_ptr6_2e_i1264 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1262)]);
  llvm_cbe_res_2e_028_2e_i1267__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1268__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1264;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1273;

  do {     /* Syntactic loop 'for.body.i1273' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1273:
  llvm_cbe_res_2e_028_2e_i1267 = llvm_cbe_res_2e_028_2e_i1267__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1268 = llvm_cbe__ptr_2e_027_2e_i1268__PHI_TEMPORARY;
  _127 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1268));
  llvm_cbe_cond_2e_i1270 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1268 == _126)&1)), _127, llvm_cbe_res_2e_028_2e_i1267);
  llvm_cbe_add_2e_ptr8_2e_i1271 = (&llvm_cbe__ptr_2e_027_2e_i1268[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1271) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1267__PHI_TEMPORARY = llvm_cbe_cond_2e_i1270;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1268__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1271;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1273;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1266__PHI_TEMPORARY = llvm_cbe_cond_2e_i1270;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1274;
  }

  } while (1); /* end of syntactic loop 'for.body.i1273' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1274:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1266 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1266__PHI_TEMPORARY;
  llvm_cbe_xor204 = llvm_cbe_xor199 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1266;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 675 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx208 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor190, 24)) & 63))))]);
  _128 = ((uint8_t*)llvm_cbe_arrayidx208);
  llvm_cbe_and_2e_i1249 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx208)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1249) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1252;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1253__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1261;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1252:
  llvm_cbe_add_2e_ptr6_2e_i1251 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1249)]);
  llvm_cbe_res_2e_028_2e_i1254__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1255__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1251;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1260;

  do {     /* Syntactic loop 'for.body.i1260' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1260:
  llvm_cbe_res_2e_028_2e_i1254 = llvm_cbe_res_2e_028_2e_i1254__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1255 = llvm_cbe__ptr_2e_027_2e_i1255__PHI_TEMPORARY;
  _129 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1255));
  llvm_cbe_cond_2e_i1257 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1255 == _128)&1)), _129, llvm_cbe_res_2e_028_2e_i1254);
  llvm_cbe_add_2e_ptr8_2e_i1258 = (&llvm_cbe__ptr_2e_027_2e_i1255[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1258) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1254__PHI_TEMPORARY = llvm_cbe_cond_2e_i1257;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1255__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1258;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1260;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1253__PHI_TEMPORARY = llvm_cbe_cond_2e_i1257;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1261;
  }

  } while (1); /* end of syntactic loop 'for.body.i1260' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1261:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1253 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1253__PHI_TEMPORARY;
  llvm_cbe_xor209 = llvm_cbe_xor204 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1253;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr210 = (&llvm_cbe_ctx->field0.array[((int64_t)9)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _130 = *llvm_cbe_incdec_2e_ptr189;
  llvm_cbe_xor211 = llvm_cbe_xor209 ^ _130;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx214 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor211 & 63))))]);
  _131 = ((uint8_t*)llvm_cbe_arrayidx214);
  llvm_cbe_and_2e_i1236 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx214)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1236) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1239;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1240__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1248;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1239:
  llvm_cbe_add_2e_ptr6_2e_i1238 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1236)]);
  llvm_cbe_res_2e_028_2e_i1241__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1242__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1238;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1247;

  do {     /* Syntactic loop 'for.body.i1247' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1247:
  llvm_cbe_res_2e_028_2e_i1241 = llvm_cbe_res_2e_028_2e_i1241__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1242 = llvm_cbe__ptr_2e_027_2e_i1242__PHI_TEMPORARY;
  _132 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1242));
  llvm_cbe_cond_2e_i1244 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1242 == _131)&1)), _132, llvm_cbe_res_2e_028_2e_i1241);
  llvm_cbe_add_2e_ptr8_2e_i1245 = (&llvm_cbe__ptr_2e_027_2e_i1242[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1245) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1241__PHI_TEMPORARY = llvm_cbe_cond_2e_i1244;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1242__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1245;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1247;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1240__PHI_TEMPORARY = llvm_cbe_cond_2e_i1244;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1248;
  }

  } while (1); /* end of syntactic loop 'for.body.i1247' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1248:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1240 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1240__PHI_TEMPORARY;
  llvm_cbe_xor215 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1240 ^ llvm_cbe_xor164;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx219 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor211, 8)) & 63))))]);
  _133 = ((uint8_t*)llvm_cbe_arrayidx219);
  llvm_cbe_and_2e_i1223 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx219)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1223) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1226;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1227__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1235;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1226:
  llvm_cbe_add_2e_ptr6_2e_i1225 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1223)]);
  llvm_cbe_res_2e_028_2e_i1228__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1229__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1225;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1234;

  do {     /* Syntactic loop 'for.body.i1234' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1234:
  llvm_cbe_res_2e_028_2e_i1228 = llvm_cbe_res_2e_028_2e_i1228__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1229 = llvm_cbe__ptr_2e_027_2e_i1229__PHI_TEMPORARY;
  _134 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1229));
  llvm_cbe_cond_2e_i1231 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1229 == _133)&1)), _134, llvm_cbe_res_2e_028_2e_i1228);
  llvm_cbe_add_2e_ptr8_2e_i1232 = (&llvm_cbe__ptr_2e_027_2e_i1229[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1232) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1228__PHI_TEMPORARY = llvm_cbe_cond_2e_i1231;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1229__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1232;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1234;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1227__PHI_TEMPORARY = llvm_cbe_cond_2e_i1231;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1235;
  }

  } while (1); /* end of syntactic loop 'for.body.i1234' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1235:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1227 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1227__PHI_TEMPORARY;
  llvm_cbe_xor220 = llvm_cbe_xor215 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1227;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx224 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor211, 16)) & 63))))]);
  _135 = ((uint8_t*)llvm_cbe_arrayidx224);
  llvm_cbe_and_2e_i1210 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx224)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1210) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1213;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1214__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1222;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1213:
  llvm_cbe_add_2e_ptr6_2e_i1212 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1210)]);
  llvm_cbe_res_2e_028_2e_i1215__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1216__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1212;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1221;

  do {     /* Syntactic loop 'for.body.i1221' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1221:
  llvm_cbe_res_2e_028_2e_i1215 = llvm_cbe_res_2e_028_2e_i1215__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1216 = llvm_cbe__ptr_2e_027_2e_i1216__PHI_TEMPORARY;
  _136 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1216));
  llvm_cbe_cond_2e_i1218 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1216 == _135)&1)), _136, llvm_cbe_res_2e_028_2e_i1215);
  llvm_cbe_add_2e_ptr8_2e_i1219 = (&llvm_cbe__ptr_2e_027_2e_i1216[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1219) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1215__PHI_TEMPORARY = llvm_cbe_cond_2e_i1218;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1216__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1219;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1221;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1214__PHI_TEMPORARY = llvm_cbe_cond_2e_i1218;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1222;
  }

  } while (1); /* end of syntactic loop 'for.body.i1221' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1222:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1214 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1214__PHI_TEMPORARY;
  llvm_cbe_xor225 = llvm_cbe_xor220 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1214;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx229 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor211, 24)) & 63))))]);
  _137 = ((uint8_t*)llvm_cbe_arrayidx229);
  llvm_cbe_and_2e_i1197 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx229)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1197) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1200;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1201__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1209;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1200:
  llvm_cbe_add_2e_ptr6_2e_i1199 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1197)]);
  llvm_cbe_res_2e_028_2e_i1202__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1203__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1199;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1208;

  do {     /* Syntactic loop 'for.body.i1208' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1208:
  llvm_cbe_res_2e_028_2e_i1202 = llvm_cbe_res_2e_028_2e_i1202__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1203 = llvm_cbe__ptr_2e_027_2e_i1203__PHI_TEMPORARY;
  _138 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1203));
  llvm_cbe_cond_2e_i1205 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1203 == _137)&1)), _138, llvm_cbe_res_2e_028_2e_i1202);
  llvm_cbe_add_2e_ptr8_2e_i1206 = (&llvm_cbe__ptr_2e_027_2e_i1203[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1206) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1202__PHI_TEMPORARY = llvm_cbe_cond_2e_i1205;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1203__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1206;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1208;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1201__PHI_TEMPORARY = llvm_cbe_cond_2e_i1205;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1209;
  }

  } while (1); /* end of syntactic loop 'for.body.i1208' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1209:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1201 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1201__PHI_TEMPORARY;
  llvm_cbe_xor230 = llvm_cbe_xor225 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1201;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr234 = (&llvm_cbe_ctx->field0.array[((int64_t)10)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _139 = *llvm_cbe_incdec_2e_ptr210;
  llvm_cbe_xor235 = _139 ^ ((llvm_cbe_xor209 << 28) | (llvm_lshr_u32(llvm_cbe_xor209, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx238 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor235 & 63))))]);
  _140 = ((uint8_t*)llvm_cbe_arrayidx238);
  llvm_cbe_and_2e_i1184 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx238)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1184) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1187;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1188__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1196;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1187:
  llvm_cbe_add_2e_ptr6_2e_i1186 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1184)]);
  llvm_cbe_res_2e_028_2e_i1189__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1190__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1186;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1195;

  do {     /* Syntactic loop 'for.body.i1195' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1195:
  llvm_cbe_res_2e_028_2e_i1189 = llvm_cbe_res_2e_028_2e_i1189__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1190 = llvm_cbe__ptr_2e_027_2e_i1190__PHI_TEMPORARY;
  _141 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1190));
  llvm_cbe_cond_2e_i1192 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1190 == _140)&1)), _141, llvm_cbe_res_2e_028_2e_i1189);
  llvm_cbe_add_2e_ptr8_2e_i1193 = (&llvm_cbe__ptr_2e_027_2e_i1190[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1193) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1189__PHI_TEMPORARY = llvm_cbe_cond_2e_i1192;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1190__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1193;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1195;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1188__PHI_TEMPORARY = llvm_cbe_cond_2e_i1192;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1196;
  }

  } while (1); /* end of syntactic loop 'for.body.i1195' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1196:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1188 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1188__PHI_TEMPORARY;
  llvm_cbe_xor239 = llvm_cbe_xor230 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1188;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx243 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor235, 8)) & 63))))]);
  _142 = ((uint8_t*)llvm_cbe_arrayidx243);
  llvm_cbe_and_2e_i1171 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx243)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1171) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1174;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1175__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1183;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1174:
  llvm_cbe_add_2e_ptr6_2e_i1173 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1171)]);
  llvm_cbe_res_2e_028_2e_i1176__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1177__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1173;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1182;

  do {     /* Syntactic loop 'for.body.i1182' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1182:
  llvm_cbe_res_2e_028_2e_i1176 = llvm_cbe_res_2e_028_2e_i1176__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1177 = llvm_cbe__ptr_2e_027_2e_i1177__PHI_TEMPORARY;
  _143 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1177));
  llvm_cbe_cond_2e_i1179 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1177 == _142)&1)), _143, llvm_cbe_res_2e_028_2e_i1176);
  llvm_cbe_add_2e_ptr8_2e_i1180 = (&llvm_cbe__ptr_2e_027_2e_i1177[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1180) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1176__PHI_TEMPORARY = llvm_cbe_cond_2e_i1179;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1177__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1180;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1182;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1175__PHI_TEMPORARY = llvm_cbe_cond_2e_i1179;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1183;
  }

  } while (1); /* end of syntactic loop 'for.body.i1182' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1183:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1175 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1175__PHI_TEMPORARY;
  llvm_cbe_xor244 = llvm_cbe_xor239 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1175;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx248 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor235, 16)) & 63))))]);
  _144 = ((uint8_t*)llvm_cbe_arrayidx248);
  llvm_cbe_and_2e_i1158 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx248)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1158) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1161;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1162__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1170;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1161:
  llvm_cbe_add_2e_ptr6_2e_i1160 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1158)]);
  llvm_cbe_res_2e_028_2e_i1163__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1164__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1160;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1169;

  do {     /* Syntactic loop 'for.body.i1169' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1169:
  llvm_cbe_res_2e_028_2e_i1163 = llvm_cbe_res_2e_028_2e_i1163__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1164 = llvm_cbe__ptr_2e_027_2e_i1164__PHI_TEMPORARY;
  _145 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1164));
  llvm_cbe_cond_2e_i1166 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1164 == _144)&1)), _145, llvm_cbe_res_2e_028_2e_i1163);
  llvm_cbe_add_2e_ptr8_2e_i1167 = (&llvm_cbe__ptr_2e_027_2e_i1164[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1167) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1163__PHI_TEMPORARY = llvm_cbe_cond_2e_i1166;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1164__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1167;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1169;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1162__PHI_TEMPORARY = llvm_cbe_cond_2e_i1166;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1170;
  }

  } while (1); /* end of syntactic loop 'for.body.i1169' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1170:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1162 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1162__PHI_TEMPORARY;
  llvm_cbe_xor249 = llvm_cbe_xor244 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1162;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx253 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor235, 24)) & 63))))]);
  _146 = ((uint8_t*)llvm_cbe_arrayidx253);
  llvm_cbe_and_2e_i1145 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx253)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1145) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1148;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1149__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1157;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1148:
  llvm_cbe_add_2e_ptr6_2e_i1147 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1145)]);
  llvm_cbe_res_2e_028_2e_i1150__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1151__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1147;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1156;

  do {     /* Syntactic loop 'for.body.i1156' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1156:
  llvm_cbe_res_2e_028_2e_i1150 = llvm_cbe_res_2e_028_2e_i1150__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1151 = llvm_cbe__ptr_2e_027_2e_i1151__PHI_TEMPORARY;
  _147 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1151));
  llvm_cbe_cond_2e_i1153 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1151 == _146)&1)), _147, llvm_cbe_res_2e_028_2e_i1150);
  llvm_cbe_add_2e_ptr8_2e_i1154 = (&llvm_cbe__ptr_2e_027_2e_i1151[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1154) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1150__PHI_TEMPORARY = llvm_cbe_cond_2e_i1153;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1151__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1154;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1156;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1149__PHI_TEMPORARY = llvm_cbe_cond_2e_i1153;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1157;
  }

  } while (1); /* end of syntactic loop 'for.body.i1156' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1157:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1149 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1149__PHI_TEMPORARY;
  llvm_cbe_xor254 = llvm_cbe_xor249 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1149;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr255 = (&llvm_cbe_ctx->field0.array[((int64_t)11)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _148 = *llvm_cbe_incdec_2e_ptr234;
  llvm_cbe_xor256 = llvm_cbe_xor254 ^ _148;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx259 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor256 & 63))))]);
  _149 = ((uint8_t*)llvm_cbe_arrayidx259);
  llvm_cbe_and_2e_i1132 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx259)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1132) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1135;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1136__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1144;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1135:
  llvm_cbe_add_2e_ptr6_2e_i1134 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1132)]);
  llvm_cbe_res_2e_028_2e_i1137__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1138__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1134;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1143;

  do {     /* Syntactic loop 'for.body.i1143' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1143:
  llvm_cbe_res_2e_028_2e_i1137 = llvm_cbe_res_2e_028_2e_i1137__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1138 = llvm_cbe__ptr_2e_027_2e_i1138__PHI_TEMPORARY;
  _150 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1138));
  llvm_cbe_cond_2e_i1140 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1138 == _149)&1)), _150, llvm_cbe_res_2e_028_2e_i1137);
  llvm_cbe_add_2e_ptr8_2e_i1141 = (&llvm_cbe__ptr_2e_027_2e_i1138[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1141) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1137__PHI_TEMPORARY = llvm_cbe_cond_2e_i1140;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1138__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1141;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1143;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1136__PHI_TEMPORARY = llvm_cbe_cond_2e_i1140;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1144;
  }

  } while (1); /* end of syntactic loop 'for.body.i1143' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1144:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1136 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1136__PHI_TEMPORARY;
  llvm_cbe_xor260 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1136 ^ llvm_cbe_xor209;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx264 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor256, 8)) & 63))))]);
  _151 = ((uint8_t*)llvm_cbe_arrayidx264);
  llvm_cbe_and_2e_i1119 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx264)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1119) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1122;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1123__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1131;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1122:
  llvm_cbe_add_2e_ptr6_2e_i1121 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1119)]);
  llvm_cbe_res_2e_028_2e_i1124__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1125__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1121;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1130;

  do {     /* Syntactic loop 'for.body.i1130' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1130:
  llvm_cbe_res_2e_028_2e_i1124 = llvm_cbe_res_2e_028_2e_i1124__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1125 = llvm_cbe__ptr_2e_027_2e_i1125__PHI_TEMPORARY;
  _152 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1125));
  llvm_cbe_cond_2e_i1127 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1125 == _151)&1)), _152, llvm_cbe_res_2e_028_2e_i1124);
  llvm_cbe_add_2e_ptr8_2e_i1128 = (&llvm_cbe__ptr_2e_027_2e_i1125[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1128) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1124__PHI_TEMPORARY = llvm_cbe_cond_2e_i1127;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1125__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1128;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1130;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1123__PHI_TEMPORARY = llvm_cbe_cond_2e_i1127;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1131;
  }

  } while (1); /* end of syntactic loop 'for.body.i1130' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1131:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1123 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1123__PHI_TEMPORARY;
  llvm_cbe_xor265 = llvm_cbe_xor260 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1123;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx269 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor256, 16)) & 63))))]);
  _153 = ((uint8_t*)llvm_cbe_arrayidx269);
  llvm_cbe_and_2e_i1106 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx269)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1106) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1109;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1110__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1118;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1109:
  llvm_cbe_add_2e_ptr6_2e_i1108 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1106)]);
  llvm_cbe_res_2e_028_2e_i1111__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1112__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1108;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1117;

  do {     /* Syntactic loop 'for.body.i1117' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1117:
  llvm_cbe_res_2e_028_2e_i1111 = llvm_cbe_res_2e_028_2e_i1111__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1112 = llvm_cbe__ptr_2e_027_2e_i1112__PHI_TEMPORARY;
  _154 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1112));
  llvm_cbe_cond_2e_i1114 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1112 == _153)&1)), _154, llvm_cbe_res_2e_028_2e_i1111);
  llvm_cbe_add_2e_ptr8_2e_i1115 = (&llvm_cbe__ptr_2e_027_2e_i1112[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1115) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1111__PHI_TEMPORARY = llvm_cbe_cond_2e_i1114;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1112__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1115;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1117;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1110__PHI_TEMPORARY = llvm_cbe_cond_2e_i1114;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1118;
  }

  } while (1); /* end of syntactic loop 'for.body.i1117' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1118:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1110 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1110__PHI_TEMPORARY;
  llvm_cbe_xor270 = llvm_cbe_xor265 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1110;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx274 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor256, 24)) & 63))))]);
  _155 = ((uint8_t*)llvm_cbe_arrayidx274);
  llvm_cbe_and_2e_i1093 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx274)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1093) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1096;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1097__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1105;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1096:
  llvm_cbe_add_2e_ptr6_2e_i1095 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i1093)]);
  llvm_cbe_res_2e_028_2e_i1098__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1099__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1095;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1104;

  do {     /* Syntactic loop 'for.body.i1104' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1104:
  llvm_cbe_res_2e_028_2e_i1098 = llvm_cbe_res_2e_028_2e_i1098__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1099 = llvm_cbe__ptr_2e_027_2e_i1099__PHI_TEMPORARY;
  _156 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1099));
  llvm_cbe_cond_2e_i1101 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1099 == _155)&1)), _156, llvm_cbe_res_2e_028_2e_i1098);
  llvm_cbe_add_2e_ptr8_2e_i1102 = (&llvm_cbe__ptr_2e_027_2e_i1099[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1102) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1098__PHI_TEMPORARY = llvm_cbe_cond_2e_i1101;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1099__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1102;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1104;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1097__PHI_TEMPORARY = llvm_cbe_cond_2e_i1101;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1105;
  }

  } while (1); /* end of syntactic loop 'for.body.i1104' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1105:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1097 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1097__PHI_TEMPORARY;
  llvm_cbe_xor275 = llvm_cbe_xor270 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1097;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr279 = (&llvm_cbe_ctx->field0.array[((int64_t)12)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _157 = *llvm_cbe_incdec_2e_ptr255;
  llvm_cbe_xor280 = _157 ^ ((llvm_cbe_xor254 << 28) | (llvm_lshr_u32(llvm_cbe_xor254, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx283 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor280 & 63))))]);
  _158 = ((uint8_t*)llvm_cbe_arrayidx283);
  llvm_cbe_and_2e_i1080 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx283)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1080) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1083;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1084__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1092;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1083:
  llvm_cbe_add_2e_ptr6_2e_i1082 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i1080)]);
  llvm_cbe_res_2e_028_2e_i1085__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1086__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1082;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1091;

  do {     /* Syntactic loop 'for.body.i1091' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1091:
  llvm_cbe_res_2e_028_2e_i1085 = llvm_cbe_res_2e_028_2e_i1085__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1086 = llvm_cbe__ptr_2e_027_2e_i1086__PHI_TEMPORARY;
  _159 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1086));
  llvm_cbe_cond_2e_i1088 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1086 == _158)&1)), _159, llvm_cbe_res_2e_028_2e_i1085);
  llvm_cbe_add_2e_ptr8_2e_i1089 = (&llvm_cbe__ptr_2e_027_2e_i1086[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1089) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1085__PHI_TEMPORARY = llvm_cbe_cond_2e_i1088;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1086__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1089;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1091;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1084__PHI_TEMPORARY = llvm_cbe_cond_2e_i1088;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1092;
  }

  } while (1); /* end of syntactic loop 'for.body.i1091' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1092:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1084 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1084__PHI_TEMPORARY;
  llvm_cbe_xor284 = llvm_cbe_xor275 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1084;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx288 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor280, 8)) & 63))))]);
  _160 = ((uint8_t*)llvm_cbe_arrayidx288);
  llvm_cbe_and_2e_i1067 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx288)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1067) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1070;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1071__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1079;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1070:
  llvm_cbe_add_2e_ptr6_2e_i1069 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i1067)]);
  llvm_cbe_res_2e_028_2e_i1072__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1073__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1069;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1078;

  do {     /* Syntactic loop 'for.body.i1078' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1078:
  llvm_cbe_res_2e_028_2e_i1072 = llvm_cbe_res_2e_028_2e_i1072__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1073 = llvm_cbe__ptr_2e_027_2e_i1073__PHI_TEMPORARY;
  _161 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1073));
  llvm_cbe_cond_2e_i1075 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1073 == _160)&1)), _161, llvm_cbe_res_2e_028_2e_i1072);
  llvm_cbe_add_2e_ptr8_2e_i1076 = (&llvm_cbe__ptr_2e_027_2e_i1073[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1076) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1072__PHI_TEMPORARY = llvm_cbe_cond_2e_i1075;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1073__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1076;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1078;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1071__PHI_TEMPORARY = llvm_cbe_cond_2e_i1075;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1079;
  }

  } while (1); /* end of syntactic loop 'for.body.i1078' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1079:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1071 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1071__PHI_TEMPORARY;
  llvm_cbe_xor289 = llvm_cbe_xor284 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1071;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx293 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor280, 16)) & 63))))]);
  _162 = ((uint8_t*)llvm_cbe_arrayidx293);
  llvm_cbe_and_2e_i1054 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx293)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1054) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1057;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1058__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1066;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1057:
  llvm_cbe_add_2e_ptr6_2e_i1056 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i1054)]);
  llvm_cbe_res_2e_028_2e_i1059__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1060__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1056;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1065;

  do {     /* Syntactic loop 'for.body.i1065' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1065:
  llvm_cbe_res_2e_028_2e_i1059 = llvm_cbe_res_2e_028_2e_i1059__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1060 = llvm_cbe__ptr_2e_027_2e_i1060__PHI_TEMPORARY;
  _163 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1060));
  llvm_cbe_cond_2e_i1062 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1060 == _162)&1)), _163, llvm_cbe_res_2e_028_2e_i1059);
  llvm_cbe_add_2e_ptr8_2e_i1063 = (&llvm_cbe__ptr_2e_027_2e_i1060[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1063) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1059__PHI_TEMPORARY = llvm_cbe_cond_2e_i1062;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1060__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1063;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1065;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1058__PHI_TEMPORARY = llvm_cbe_cond_2e_i1062;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1066;
  }

  } while (1); /* end of syntactic loop 'for.body.i1065' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1066:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1058 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1058__PHI_TEMPORARY;
  llvm_cbe_xor294 = llvm_cbe_xor289 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1058;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 676 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx298 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor280, 24)) & 63))))]);
  _164 = ((uint8_t*)llvm_cbe_arrayidx298);
  llvm_cbe_and_2e_i1041 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx298)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1041) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1044;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1045__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1053;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1044:
  llvm_cbe_add_2e_ptr6_2e_i1043 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1041)]);
  llvm_cbe_res_2e_028_2e_i1046__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1047__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1043;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1052;

  do {     /* Syntactic loop 'for.body.i1052' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1052:
  llvm_cbe_res_2e_028_2e_i1046 = llvm_cbe_res_2e_028_2e_i1046__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1047 = llvm_cbe__ptr_2e_027_2e_i1047__PHI_TEMPORARY;
  _165 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1047));
  llvm_cbe_cond_2e_i1049 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1047 == _164)&1)), _165, llvm_cbe_res_2e_028_2e_i1046);
  llvm_cbe_add_2e_ptr8_2e_i1050 = (&llvm_cbe__ptr_2e_027_2e_i1047[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1050) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1046__PHI_TEMPORARY = llvm_cbe_cond_2e_i1049;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1047__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1050;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1052;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1045__PHI_TEMPORARY = llvm_cbe_cond_2e_i1049;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1053;
  }

  } while (1); /* end of syntactic loop 'for.body.i1052' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1053:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1045 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1045__PHI_TEMPORARY;
  llvm_cbe_xor299 = llvm_cbe_xor294 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1045;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr300 = (&llvm_cbe_ctx->field0.array[((int64_t)13)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _166 = *llvm_cbe_incdec_2e_ptr279;
  llvm_cbe_xor301 = llvm_cbe_xor299 ^ _166;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx304 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor301 & 63))))]);
  _167 = ((uint8_t*)llvm_cbe_arrayidx304);
  llvm_cbe_and_2e_i1028 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx304)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1028) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1031;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1032__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1040;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1031:
  llvm_cbe_add_2e_ptr6_2e_i1030 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i1028)]);
  llvm_cbe_res_2e_028_2e_i1033__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1034__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1030;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1039;

  do {     /* Syntactic loop 'for.body.i1039' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1039:
  llvm_cbe_res_2e_028_2e_i1033 = llvm_cbe_res_2e_028_2e_i1033__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1034 = llvm_cbe__ptr_2e_027_2e_i1034__PHI_TEMPORARY;
  _168 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1034));
  llvm_cbe_cond_2e_i1036 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1034 == _167)&1)), _168, llvm_cbe_res_2e_028_2e_i1033);
  llvm_cbe_add_2e_ptr8_2e_i1037 = (&llvm_cbe__ptr_2e_027_2e_i1034[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1037) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1033__PHI_TEMPORARY = llvm_cbe_cond_2e_i1036;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1034__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1037;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1039;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1032__PHI_TEMPORARY = llvm_cbe_cond_2e_i1036;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1040;
  }

  } while (1); /* end of syntactic loop 'for.body.i1039' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1040:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1032 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1032__PHI_TEMPORARY;
  llvm_cbe_xor305 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1032 ^ llvm_cbe_xor254;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx309 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor301, 8)) & 63))))]);
  _169 = ((uint8_t*)llvm_cbe_arrayidx309);
  llvm_cbe_and_2e_i1015 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx309)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1015) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1018;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1019__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1027;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1018:
  llvm_cbe_add_2e_ptr6_2e_i1017 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i1015)]);
  llvm_cbe_res_2e_028_2e_i1020__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1021__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1017;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1026;

  do {     /* Syntactic loop 'for.body.i1026' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1026:
  llvm_cbe_res_2e_028_2e_i1020 = llvm_cbe_res_2e_028_2e_i1020__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1021 = llvm_cbe__ptr_2e_027_2e_i1021__PHI_TEMPORARY;
  _170 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1021));
  llvm_cbe_cond_2e_i1023 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1021 == _169)&1)), _170, llvm_cbe_res_2e_028_2e_i1020);
  llvm_cbe_add_2e_ptr8_2e_i1024 = (&llvm_cbe__ptr_2e_027_2e_i1021[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1024) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1020__PHI_TEMPORARY = llvm_cbe_cond_2e_i1023;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1021__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1024;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1026;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1019__PHI_TEMPORARY = llvm_cbe_cond_2e_i1023;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1027;
  }

  } while (1); /* end of syntactic loop 'for.body.i1026' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1027:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1019 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1019__PHI_TEMPORARY;
  llvm_cbe_xor310 = llvm_cbe_xor305 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1019;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx314 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor301, 16)) & 63))))]);
  _171 = ((uint8_t*)llvm_cbe_arrayidx314);
  llvm_cbe_and_2e_i1002 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx314)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1002) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i1005;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1006__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1014;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i1005:
  llvm_cbe_add_2e_ptr6_2e_i1004 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i1002)]);
  llvm_cbe_res_2e_028_2e_i1007__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i1008__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i1004;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1013;

  do {     /* Syntactic loop 'for.body.i1013' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1013:
  llvm_cbe_res_2e_028_2e_i1007 = llvm_cbe_res_2e_028_2e_i1007__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i1008 = llvm_cbe__ptr_2e_027_2e_i1008__PHI_TEMPORARY;
  _172 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i1008));
  llvm_cbe_cond_2e_i1010 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i1008 == _171)&1)), _172, llvm_cbe_res_2e_028_2e_i1007);
  llvm_cbe_add_2e_ptr8_2e_i1011 = (&llvm_cbe__ptr_2e_027_2e_i1008[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i1011) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i1007__PHI_TEMPORARY = llvm_cbe_cond_2e_i1010;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i1008__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i1011;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1013;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i1006__PHI_TEMPORARY = llvm_cbe_cond_2e_i1010;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1014;
  }

  } while (1); /* end of syntactic loop 'for.body.i1013' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1014:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i1006 = llvm_cbe_res_2e_0_2e_lcssa_2e_i1006__PHI_TEMPORARY;
  llvm_cbe_xor315 = llvm_cbe_xor310 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i1006;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx319 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor301, 24)) & 63))))]);
  _173 = ((uint8_t*)llvm_cbe_arrayidx319);
  llvm_cbe_and_2e_i989 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx319)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i989) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i992;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i993__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1001;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i992:
  llvm_cbe_add_2e_ptr6_2e_i991 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i989)]);
  llvm_cbe_res_2e_028_2e_i994__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i995__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i991;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1000;

  do {     /* Syntactic loop 'for.body.i1000' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1000:
  llvm_cbe_res_2e_028_2e_i994 = llvm_cbe_res_2e_028_2e_i994__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i995 = llvm_cbe__ptr_2e_027_2e_i995__PHI_TEMPORARY;
  _174 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i995));
  llvm_cbe_cond_2e_i997 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i995 == _173)&1)), _174, llvm_cbe_res_2e_028_2e_i994);
  llvm_cbe_add_2e_ptr8_2e_i998 = (&llvm_cbe__ptr_2e_027_2e_i995[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i998) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i994__PHI_TEMPORARY = llvm_cbe_cond_2e_i997;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i995__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i998;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1000;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i993__PHI_TEMPORARY = llvm_cbe_cond_2e_i997;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit1001;
  }

  } while (1); /* end of syntactic loop 'for.body.i1000' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit1001:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i993 = llvm_cbe_res_2e_0_2e_lcssa_2e_i993__PHI_TEMPORARY;
  llvm_cbe_xor320 = llvm_cbe_xor315 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i993;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr324 = (&llvm_cbe_ctx->field0.array[((int64_t)14)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _175 = *llvm_cbe_incdec_2e_ptr300;
  llvm_cbe_xor325 = _175 ^ ((llvm_cbe_xor299 << 28) | (llvm_lshr_u32(llvm_cbe_xor299, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx328 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor325 & 63))))]);
  _176 = ((uint8_t*)llvm_cbe_arrayidx328);
  llvm_cbe_and_2e_i976 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx328)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i976) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i979;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i980__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit988;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i979:
  llvm_cbe_add_2e_ptr6_2e_i978 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i976)]);
  llvm_cbe_res_2e_028_2e_i981__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i982__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i978;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i987;

  do {     /* Syntactic loop 'for.body.i987' to make GCC happy */
llvm_cbe_for_2e_body_2e_i987:
  llvm_cbe_res_2e_028_2e_i981 = llvm_cbe_res_2e_028_2e_i981__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i982 = llvm_cbe__ptr_2e_027_2e_i982__PHI_TEMPORARY;
  _177 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i982));
  llvm_cbe_cond_2e_i984 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i982 == _176)&1)), _177, llvm_cbe_res_2e_028_2e_i981);
  llvm_cbe_add_2e_ptr8_2e_i985 = (&llvm_cbe__ptr_2e_027_2e_i982[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i985) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i981__PHI_TEMPORARY = llvm_cbe_cond_2e_i984;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i982__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i985;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i987;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i980__PHI_TEMPORARY = llvm_cbe_cond_2e_i984;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit988;
  }

  } while (1); /* end of syntactic loop 'for.body.i987' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit988:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i980 = llvm_cbe_res_2e_0_2e_lcssa_2e_i980__PHI_TEMPORARY;
  llvm_cbe_xor329 = llvm_cbe_xor320 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i980;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx333 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor325, 8)) & 63))))]);
  _178 = ((uint8_t*)llvm_cbe_arrayidx333);
  llvm_cbe_and_2e_i963 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx333)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i963) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i966;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i967__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit975;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i966:
  llvm_cbe_add_2e_ptr6_2e_i965 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i963)]);
  llvm_cbe_res_2e_028_2e_i968__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i969__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i965;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i974;

  do {     /* Syntactic loop 'for.body.i974' to make GCC happy */
llvm_cbe_for_2e_body_2e_i974:
  llvm_cbe_res_2e_028_2e_i968 = llvm_cbe_res_2e_028_2e_i968__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i969 = llvm_cbe__ptr_2e_027_2e_i969__PHI_TEMPORARY;
  _179 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i969));
  llvm_cbe_cond_2e_i971 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i969 == _178)&1)), _179, llvm_cbe_res_2e_028_2e_i968);
  llvm_cbe_add_2e_ptr8_2e_i972 = (&llvm_cbe__ptr_2e_027_2e_i969[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i972) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i968__PHI_TEMPORARY = llvm_cbe_cond_2e_i971;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i969__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i972;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i974;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i967__PHI_TEMPORARY = llvm_cbe_cond_2e_i971;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit975;
  }

  } while (1); /* end of syntactic loop 'for.body.i974' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit975:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i967 = llvm_cbe_res_2e_0_2e_lcssa_2e_i967__PHI_TEMPORARY;
  llvm_cbe_xor334 = llvm_cbe_xor329 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i967;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx338 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor325, 16)) & 63))))]);
  _180 = ((uint8_t*)llvm_cbe_arrayidx338);
  llvm_cbe_and_2e_i950 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx338)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i950) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i953;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i954__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit962;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i953:
  llvm_cbe_add_2e_ptr6_2e_i952 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i950)]);
  llvm_cbe_res_2e_028_2e_i955__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i956__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i952;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i961;

  do {     /* Syntactic loop 'for.body.i961' to make GCC happy */
llvm_cbe_for_2e_body_2e_i961:
  llvm_cbe_res_2e_028_2e_i955 = llvm_cbe_res_2e_028_2e_i955__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i956 = llvm_cbe__ptr_2e_027_2e_i956__PHI_TEMPORARY;
  _181 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i956));
  llvm_cbe_cond_2e_i958 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i956 == _180)&1)), _181, llvm_cbe_res_2e_028_2e_i955);
  llvm_cbe_add_2e_ptr8_2e_i959 = (&llvm_cbe__ptr_2e_027_2e_i956[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i959) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i955__PHI_TEMPORARY = llvm_cbe_cond_2e_i958;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i956__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i959;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i961;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i954__PHI_TEMPORARY = llvm_cbe_cond_2e_i958;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit962;
  }

  } while (1); /* end of syntactic loop 'for.body.i961' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit962:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i954 = llvm_cbe_res_2e_0_2e_lcssa_2e_i954__PHI_TEMPORARY;
  llvm_cbe_xor339 = llvm_cbe_xor334 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i954;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx343 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor325, 24)) & 63))))]);
  _182 = ((uint8_t*)llvm_cbe_arrayidx343);
  llvm_cbe_and_2e_i937 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx343)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i937) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i940;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i941__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit949;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i940:
  llvm_cbe_add_2e_ptr6_2e_i939 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i937)]);
  llvm_cbe_res_2e_028_2e_i942__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i943__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i939;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i948;

  do {     /* Syntactic loop 'for.body.i948' to make GCC happy */
llvm_cbe_for_2e_body_2e_i948:
  llvm_cbe_res_2e_028_2e_i942 = llvm_cbe_res_2e_028_2e_i942__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i943 = llvm_cbe__ptr_2e_027_2e_i943__PHI_TEMPORARY;
  _183 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i943));
  llvm_cbe_cond_2e_i945 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i943 == _182)&1)), _183, llvm_cbe_res_2e_028_2e_i942);
  llvm_cbe_add_2e_ptr8_2e_i946 = (&llvm_cbe__ptr_2e_027_2e_i943[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i946) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i942__PHI_TEMPORARY = llvm_cbe_cond_2e_i945;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i943__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i946;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i948;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i941__PHI_TEMPORARY = llvm_cbe_cond_2e_i945;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit949;
  }

  } while (1); /* end of syntactic loop 'for.body.i948' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit949:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i941 = llvm_cbe_res_2e_0_2e_lcssa_2e_i941__PHI_TEMPORARY;
  llvm_cbe_xor344 = llvm_cbe_xor339 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i941;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr345 = (&llvm_cbe_ctx->field0.array[((int64_t)15)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _184 = *llvm_cbe_incdec_2e_ptr324;
  llvm_cbe_xor346 = llvm_cbe_xor344 ^ _184;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx349 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor346 & 63))))]);
  _185 = ((uint8_t*)llvm_cbe_arrayidx349);
  llvm_cbe_and_2e_i924 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx349)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i924) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i927;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i928__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit936;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i927:
  llvm_cbe_add_2e_ptr6_2e_i926 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i924)]);
  llvm_cbe_res_2e_028_2e_i929__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i930__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i926;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i935;

  do {     /* Syntactic loop 'for.body.i935' to make GCC happy */
llvm_cbe_for_2e_body_2e_i935:
  llvm_cbe_res_2e_028_2e_i929 = llvm_cbe_res_2e_028_2e_i929__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i930 = llvm_cbe__ptr_2e_027_2e_i930__PHI_TEMPORARY;
  _186 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i930));
  llvm_cbe_cond_2e_i932 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i930 == _185)&1)), _186, llvm_cbe_res_2e_028_2e_i929);
  llvm_cbe_add_2e_ptr8_2e_i933 = (&llvm_cbe__ptr_2e_027_2e_i930[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i933) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i929__PHI_TEMPORARY = llvm_cbe_cond_2e_i932;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i930__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i933;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i935;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i928__PHI_TEMPORARY = llvm_cbe_cond_2e_i932;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit936;
  }

  } while (1); /* end of syntactic loop 'for.body.i935' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit936:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i928 = llvm_cbe_res_2e_0_2e_lcssa_2e_i928__PHI_TEMPORARY;
  llvm_cbe_xor350 = llvm_cbe_res_2e_0_2e_lcssa_2e_i928 ^ llvm_cbe_xor299;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx354 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor346, 8)) & 63))))]);
  _187 = ((uint8_t*)llvm_cbe_arrayidx354);
  llvm_cbe_and_2e_i911 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx354)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i911) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i914;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i915__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit923;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i914:
  llvm_cbe_add_2e_ptr6_2e_i913 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i911)]);
  llvm_cbe_res_2e_028_2e_i916__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i917__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i913;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i922;

  do {     /* Syntactic loop 'for.body.i922' to make GCC happy */
llvm_cbe_for_2e_body_2e_i922:
  llvm_cbe_res_2e_028_2e_i916 = llvm_cbe_res_2e_028_2e_i916__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i917 = llvm_cbe__ptr_2e_027_2e_i917__PHI_TEMPORARY;
  _188 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i917));
  llvm_cbe_cond_2e_i919 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i917 == _187)&1)), _188, llvm_cbe_res_2e_028_2e_i916);
  llvm_cbe_add_2e_ptr8_2e_i920 = (&llvm_cbe__ptr_2e_027_2e_i917[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i920) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i916__PHI_TEMPORARY = llvm_cbe_cond_2e_i919;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i917__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i920;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i922;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i915__PHI_TEMPORARY = llvm_cbe_cond_2e_i919;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit923;
  }

  } while (1); /* end of syntactic loop 'for.body.i922' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit923:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i915 = llvm_cbe_res_2e_0_2e_lcssa_2e_i915__PHI_TEMPORARY;
  llvm_cbe_xor355 = llvm_cbe_xor350 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i915;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx359 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor346, 16)) & 63))))]);
  _189 = ((uint8_t*)llvm_cbe_arrayidx359);
  llvm_cbe_and_2e_i898 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx359)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i898) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i901;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i902__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit910;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i901:
  llvm_cbe_add_2e_ptr6_2e_i900 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i898)]);
  llvm_cbe_res_2e_028_2e_i903__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i904__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i900;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i909;

  do {     /* Syntactic loop 'for.body.i909' to make GCC happy */
llvm_cbe_for_2e_body_2e_i909:
  llvm_cbe_res_2e_028_2e_i903 = llvm_cbe_res_2e_028_2e_i903__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i904 = llvm_cbe__ptr_2e_027_2e_i904__PHI_TEMPORARY;
  _190 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i904));
  llvm_cbe_cond_2e_i906 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i904 == _189)&1)), _190, llvm_cbe_res_2e_028_2e_i903);
  llvm_cbe_add_2e_ptr8_2e_i907 = (&llvm_cbe__ptr_2e_027_2e_i904[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i907) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i903__PHI_TEMPORARY = llvm_cbe_cond_2e_i906;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i904__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i907;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i909;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i902__PHI_TEMPORARY = llvm_cbe_cond_2e_i906;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit910;
  }

  } while (1); /* end of syntactic loop 'for.body.i909' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit910:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i902 = llvm_cbe_res_2e_0_2e_lcssa_2e_i902__PHI_TEMPORARY;
  llvm_cbe_xor360 = llvm_cbe_xor355 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i902;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx364 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor346, 24)) & 63))))]);
  _191 = ((uint8_t*)llvm_cbe_arrayidx364);
  llvm_cbe_and_2e_i885 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx364)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i885) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i888;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i889__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit897;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i888:
  llvm_cbe_add_2e_ptr6_2e_i887 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i885)]);
  llvm_cbe_res_2e_028_2e_i890__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i891__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i887;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i896;

  do {     /* Syntactic loop 'for.body.i896' to make GCC happy */
llvm_cbe_for_2e_body_2e_i896:
  llvm_cbe_res_2e_028_2e_i890 = llvm_cbe_res_2e_028_2e_i890__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i891 = llvm_cbe__ptr_2e_027_2e_i891__PHI_TEMPORARY;
  _192 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i891));
  llvm_cbe_cond_2e_i893 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i891 == _191)&1)), _192, llvm_cbe_res_2e_028_2e_i890);
  llvm_cbe_add_2e_ptr8_2e_i894 = (&llvm_cbe__ptr_2e_027_2e_i891[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i894) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i890__PHI_TEMPORARY = llvm_cbe_cond_2e_i893;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i891__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i894;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i896;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i889__PHI_TEMPORARY = llvm_cbe_cond_2e_i893;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit897;
  }

  } while (1); /* end of syntactic loop 'for.body.i896' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit897:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i889 = llvm_cbe_res_2e_0_2e_lcssa_2e_i889__PHI_TEMPORARY;
  llvm_cbe_xor365 = llvm_cbe_xor360 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i889;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr369 = (&llvm_cbe_ctx->field0.array[((int64_t)16)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _193 = *llvm_cbe_incdec_2e_ptr345;
  llvm_cbe_xor370 = _193 ^ ((llvm_cbe_xor344 << 28) | (llvm_lshr_u32(llvm_cbe_xor344, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx373 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor370 & 63))))]);
  _194 = ((uint8_t*)llvm_cbe_arrayidx373);
  llvm_cbe_and_2e_i872 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx373)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i872) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i875;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i876__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit884;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i875:
  llvm_cbe_add_2e_ptr6_2e_i874 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i872)]);
  llvm_cbe_res_2e_028_2e_i877__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i878__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i874;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i883;

  do {     /* Syntactic loop 'for.body.i883' to make GCC happy */
llvm_cbe_for_2e_body_2e_i883:
  llvm_cbe_res_2e_028_2e_i877 = llvm_cbe_res_2e_028_2e_i877__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i878 = llvm_cbe__ptr_2e_027_2e_i878__PHI_TEMPORARY;
  _195 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i878));
  llvm_cbe_cond_2e_i880 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i878 == _194)&1)), _195, llvm_cbe_res_2e_028_2e_i877);
  llvm_cbe_add_2e_ptr8_2e_i881 = (&llvm_cbe__ptr_2e_027_2e_i878[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i881) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i877__PHI_TEMPORARY = llvm_cbe_cond_2e_i880;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i878__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i881;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i883;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i876__PHI_TEMPORARY = llvm_cbe_cond_2e_i880;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit884;
  }

  } while (1); /* end of syntactic loop 'for.body.i883' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit884:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i876 = llvm_cbe_res_2e_0_2e_lcssa_2e_i876__PHI_TEMPORARY;
  llvm_cbe_xor374 = llvm_cbe_xor365 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i876;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx378 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor370, 8)) & 63))))]);
  _196 = ((uint8_t*)llvm_cbe_arrayidx378);
  llvm_cbe_and_2e_i859 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx378)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i859) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i862;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i863__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit871;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i862:
  llvm_cbe_add_2e_ptr6_2e_i861 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i859)]);
  llvm_cbe_res_2e_028_2e_i864__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i865__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i861;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i870;

  do {     /* Syntactic loop 'for.body.i870' to make GCC happy */
llvm_cbe_for_2e_body_2e_i870:
  llvm_cbe_res_2e_028_2e_i864 = llvm_cbe_res_2e_028_2e_i864__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i865 = llvm_cbe__ptr_2e_027_2e_i865__PHI_TEMPORARY;
  _197 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i865));
  llvm_cbe_cond_2e_i867 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i865 == _196)&1)), _197, llvm_cbe_res_2e_028_2e_i864);
  llvm_cbe_add_2e_ptr8_2e_i868 = (&llvm_cbe__ptr_2e_027_2e_i865[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i868) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i864__PHI_TEMPORARY = llvm_cbe_cond_2e_i867;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i865__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i868;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i870;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i863__PHI_TEMPORARY = llvm_cbe_cond_2e_i867;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit871;
  }

  } while (1); /* end of syntactic loop 'for.body.i870' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit871:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i863 = llvm_cbe_res_2e_0_2e_lcssa_2e_i863__PHI_TEMPORARY;
  llvm_cbe_xor379 = llvm_cbe_xor374 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i863;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx383 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor370, 16)) & 63))))]);
  _198 = ((uint8_t*)llvm_cbe_arrayidx383);
  llvm_cbe_and_2e_i846 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx383)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i846) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i849;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i850__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit858;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i849:
  llvm_cbe_add_2e_ptr6_2e_i848 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i846)]);
  llvm_cbe_res_2e_028_2e_i851__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i852__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i848;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i857;

  do {     /* Syntactic loop 'for.body.i857' to make GCC happy */
llvm_cbe_for_2e_body_2e_i857:
  llvm_cbe_res_2e_028_2e_i851 = llvm_cbe_res_2e_028_2e_i851__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i852 = llvm_cbe__ptr_2e_027_2e_i852__PHI_TEMPORARY;
  _199 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i852));
  llvm_cbe_cond_2e_i854 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i852 == _198)&1)), _199, llvm_cbe_res_2e_028_2e_i851);
  llvm_cbe_add_2e_ptr8_2e_i855 = (&llvm_cbe__ptr_2e_027_2e_i852[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i855) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i851__PHI_TEMPORARY = llvm_cbe_cond_2e_i854;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i852__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i855;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i857;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i850__PHI_TEMPORARY = llvm_cbe_cond_2e_i854;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit858;
  }

  } while (1); /* end of syntactic loop 'for.body.i857' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit858:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i850 = llvm_cbe_res_2e_0_2e_lcssa_2e_i850__PHI_TEMPORARY;
  llvm_cbe_xor384 = llvm_cbe_xor379 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i850;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 677 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx388 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor370, 24)) & 63))))]);
  _200 = ((uint8_t*)llvm_cbe_arrayidx388);
  llvm_cbe_and_2e_i833 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx388)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i833) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i836;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i837__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit845;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i836:
  llvm_cbe_add_2e_ptr6_2e_i835 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i833)]);
  llvm_cbe_res_2e_028_2e_i838__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i839__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i835;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i844;

  do {     /* Syntactic loop 'for.body.i844' to make GCC happy */
llvm_cbe_for_2e_body_2e_i844:
  llvm_cbe_res_2e_028_2e_i838 = llvm_cbe_res_2e_028_2e_i838__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i839 = llvm_cbe__ptr_2e_027_2e_i839__PHI_TEMPORARY;
  _201 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i839));
  llvm_cbe_cond_2e_i841 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i839 == _200)&1)), _201, llvm_cbe_res_2e_028_2e_i838);
  llvm_cbe_add_2e_ptr8_2e_i842 = (&llvm_cbe__ptr_2e_027_2e_i839[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i842) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i838__PHI_TEMPORARY = llvm_cbe_cond_2e_i841;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i839__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i842;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i844;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i837__PHI_TEMPORARY = llvm_cbe_cond_2e_i841;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit845;
  }

  } while (1); /* end of syntactic loop 'for.body.i844' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit845:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i837 = llvm_cbe_res_2e_0_2e_lcssa_2e_i837__PHI_TEMPORARY;
  llvm_cbe_xor389 = llvm_cbe_xor384 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i837;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr390 = (&llvm_cbe_ctx->field0.array[((int64_t)17)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _202 = *llvm_cbe_incdec_2e_ptr369;
  llvm_cbe_xor391 = llvm_cbe_xor389 ^ _202;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx394 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor391 & 63))))]);
  _203 = ((uint8_t*)llvm_cbe_arrayidx394);
  llvm_cbe_and_2e_i820 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx394)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i820) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i823;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i824__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit832;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i823:
  llvm_cbe_add_2e_ptr6_2e_i822 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i820)]);
  llvm_cbe_res_2e_028_2e_i825__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i826__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i822;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i831;

  do {     /* Syntactic loop 'for.body.i831' to make GCC happy */
llvm_cbe_for_2e_body_2e_i831:
  llvm_cbe_res_2e_028_2e_i825 = llvm_cbe_res_2e_028_2e_i825__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i826 = llvm_cbe__ptr_2e_027_2e_i826__PHI_TEMPORARY;
  _204 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i826));
  llvm_cbe_cond_2e_i828 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i826 == _203)&1)), _204, llvm_cbe_res_2e_028_2e_i825);
  llvm_cbe_add_2e_ptr8_2e_i829 = (&llvm_cbe__ptr_2e_027_2e_i826[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i829) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i825__PHI_TEMPORARY = llvm_cbe_cond_2e_i828;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i826__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i829;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i831;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i824__PHI_TEMPORARY = llvm_cbe_cond_2e_i828;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit832;
  }

  } while (1); /* end of syntactic loop 'for.body.i831' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit832:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i824 = llvm_cbe_res_2e_0_2e_lcssa_2e_i824__PHI_TEMPORARY;
  llvm_cbe_xor395 = llvm_cbe_res_2e_0_2e_lcssa_2e_i824 ^ llvm_cbe_xor344;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx399 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor391, 8)) & 63))))]);
  _205 = ((uint8_t*)llvm_cbe_arrayidx399);
  llvm_cbe_and_2e_i807 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx399)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i807) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i810;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i811__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit819;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i810:
  llvm_cbe_add_2e_ptr6_2e_i809 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i807)]);
  llvm_cbe_res_2e_028_2e_i812__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i813__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i809;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i818;

  do {     /* Syntactic loop 'for.body.i818' to make GCC happy */
llvm_cbe_for_2e_body_2e_i818:
  llvm_cbe_res_2e_028_2e_i812 = llvm_cbe_res_2e_028_2e_i812__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i813 = llvm_cbe__ptr_2e_027_2e_i813__PHI_TEMPORARY;
  _206 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i813));
  llvm_cbe_cond_2e_i815 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i813 == _205)&1)), _206, llvm_cbe_res_2e_028_2e_i812);
  llvm_cbe_add_2e_ptr8_2e_i816 = (&llvm_cbe__ptr_2e_027_2e_i813[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i816) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i812__PHI_TEMPORARY = llvm_cbe_cond_2e_i815;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i813__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i816;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i818;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i811__PHI_TEMPORARY = llvm_cbe_cond_2e_i815;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit819;
  }

  } while (1); /* end of syntactic loop 'for.body.i818' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit819:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i811 = llvm_cbe_res_2e_0_2e_lcssa_2e_i811__PHI_TEMPORARY;
  llvm_cbe_xor400 = llvm_cbe_xor395 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i811;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx404 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor391, 16)) & 63))))]);
  _207 = ((uint8_t*)llvm_cbe_arrayidx404);
  llvm_cbe_and_2e_i794 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx404)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i794) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i797;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i798__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit806;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i797:
  llvm_cbe_add_2e_ptr6_2e_i796 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i794)]);
  llvm_cbe_res_2e_028_2e_i799__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i800__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i796;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i805;

  do {     /* Syntactic loop 'for.body.i805' to make GCC happy */
llvm_cbe_for_2e_body_2e_i805:
  llvm_cbe_res_2e_028_2e_i799 = llvm_cbe_res_2e_028_2e_i799__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i800 = llvm_cbe__ptr_2e_027_2e_i800__PHI_TEMPORARY;
  _208 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i800));
  llvm_cbe_cond_2e_i802 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i800 == _207)&1)), _208, llvm_cbe_res_2e_028_2e_i799);
  llvm_cbe_add_2e_ptr8_2e_i803 = (&llvm_cbe__ptr_2e_027_2e_i800[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i803) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i799__PHI_TEMPORARY = llvm_cbe_cond_2e_i802;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i800__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i803;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i805;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i798__PHI_TEMPORARY = llvm_cbe_cond_2e_i802;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit806;
  }

  } while (1); /* end of syntactic loop 'for.body.i805' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit806:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i798 = llvm_cbe_res_2e_0_2e_lcssa_2e_i798__PHI_TEMPORARY;
  llvm_cbe_xor405 = llvm_cbe_xor400 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i798;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx409 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor391, 24)) & 63))))]);
  _209 = ((uint8_t*)llvm_cbe_arrayidx409);
  llvm_cbe_and_2e_i781 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx409)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i781) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i784;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i785__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit793;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i784:
  llvm_cbe_add_2e_ptr6_2e_i783 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i781)]);
  llvm_cbe_res_2e_028_2e_i786__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i787__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i783;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i792;

  do {     /* Syntactic loop 'for.body.i792' to make GCC happy */
llvm_cbe_for_2e_body_2e_i792:
  llvm_cbe_res_2e_028_2e_i786 = llvm_cbe_res_2e_028_2e_i786__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i787 = llvm_cbe__ptr_2e_027_2e_i787__PHI_TEMPORARY;
  _210 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i787));
  llvm_cbe_cond_2e_i789 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i787 == _209)&1)), _210, llvm_cbe_res_2e_028_2e_i786);
  llvm_cbe_add_2e_ptr8_2e_i790 = (&llvm_cbe__ptr_2e_027_2e_i787[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i790) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i786__PHI_TEMPORARY = llvm_cbe_cond_2e_i789;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i787__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i790;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i792;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i785__PHI_TEMPORARY = llvm_cbe_cond_2e_i789;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit793;
  }

  } while (1); /* end of syntactic loop 'for.body.i792' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit793:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i785 = llvm_cbe_res_2e_0_2e_lcssa_2e_i785__PHI_TEMPORARY;
  llvm_cbe_xor410 = llvm_cbe_xor405 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i785;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr414 = (&llvm_cbe_ctx->field0.array[((int64_t)18)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _211 = *llvm_cbe_incdec_2e_ptr390;
  llvm_cbe_xor415 = _211 ^ ((llvm_cbe_xor389 << 28) | (llvm_lshr_u32(llvm_cbe_xor389, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx418 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor415 & 63))))]);
  _212 = ((uint8_t*)llvm_cbe_arrayidx418);
  llvm_cbe_and_2e_i768 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx418)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i768) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i771;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i772__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit780;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i771:
  llvm_cbe_add_2e_ptr6_2e_i770 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i768)]);
  llvm_cbe_res_2e_028_2e_i773__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i774__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i770;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i779;

  do {     /* Syntactic loop 'for.body.i779' to make GCC happy */
llvm_cbe_for_2e_body_2e_i779:
  llvm_cbe_res_2e_028_2e_i773 = llvm_cbe_res_2e_028_2e_i773__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i774 = llvm_cbe__ptr_2e_027_2e_i774__PHI_TEMPORARY;
  _213 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i774));
  llvm_cbe_cond_2e_i776 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i774 == _212)&1)), _213, llvm_cbe_res_2e_028_2e_i773);
  llvm_cbe_add_2e_ptr8_2e_i777 = (&llvm_cbe__ptr_2e_027_2e_i774[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i777) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i773__PHI_TEMPORARY = llvm_cbe_cond_2e_i776;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i774__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i777;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i779;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i772__PHI_TEMPORARY = llvm_cbe_cond_2e_i776;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit780;
  }

  } while (1); /* end of syntactic loop 'for.body.i779' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit780:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i772 = llvm_cbe_res_2e_0_2e_lcssa_2e_i772__PHI_TEMPORARY;
  llvm_cbe_xor419 = llvm_cbe_xor410 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i772;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx423 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor415, 8)) & 63))))]);
  _214 = ((uint8_t*)llvm_cbe_arrayidx423);
  llvm_cbe_and_2e_i755 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx423)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i755) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i758;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i759__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit767;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i758:
  llvm_cbe_add_2e_ptr6_2e_i757 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i755)]);
  llvm_cbe_res_2e_028_2e_i760__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i761__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i757;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i766;

  do {     /* Syntactic loop 'for.body.i766' to make GCC happy */
llvm_cbe_for_2e_body_2e_i766:
  llvm_cbe_res_2e_028_2e_i760 = llvm_cbe_res_2e_028_2e_i760__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i761 = llvm_cbe__ptr_2e_027_2e_i761__PHI_TEMPORARY;
  _215 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i761));
  llvm_cbe_cond_2e_i763 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i761 == _214)&1)), _215, llvm_cbe_res_2e_028_2e_i760);
  llvm_cbe_add_2e_ptr8_2e_i764 = (&llvm_cbe__ptr_2e_027_2e_i761[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i764) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i760__PHI_TEMPORARY = llvm_cbe_cond_2e_i763;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i761__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i764;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i766;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i759__PHI_TEMPORARY = llvm_cbe_cond_2e_i763;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit767;
  }

  } while (1); /* end of syntactic loop 'for.body.i766' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit767:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i759 = llvm_cbe_res_2e_0_2e_lcssa_2e_i759__PHI_TEMPORARY;
  llvm_cbe_xor424 = llvm_cbe_xor419 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i759;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx428 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor415, 16)) & 63))))]);
  _216 = ((uint8_t*)llvm_cbe_arrayidx428);
  llvm_cbe_and_2e_i742 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx428)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i742) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i745;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i746__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit754;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i745:
  llvm_cbe_add_2e_ptr6_2e_i744 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i742)]);
  llvm_cbe_res_2e_028_2e_i747__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i748__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i744;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i753;

  do {     /* Syntactic loop 'for.body.i753' to make GCC happy */
llvm_cbe_for_2e_body_2e_i753:
  llvm_cbe_res_2e_028_2e_i747 = llvm_cbe_res_2e_028_2e_i747__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i748 = llvm_cbe__ptr_2e_027_2e_i748__PHI_TEMPORARY;
  _217 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i748));
  llvm_cbe_cond_2e_i750 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i748 == _216)&1)), _217, llvm_cbe_res_2e_028_2e_i747);
  llvm_cbe_add_2e_ptr8_2e_i751 = (&llvm_cbe__ptr_2e_027_2e_i748[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i751) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i747__PHI_TEMPORARY = llvm_cbe_cond_2e_i750;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i748__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i751;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i753;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i746__PHI_TEMPORARY = llvm_cbe_cond_2e_i750;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit754;
  }

  } while (1); /* end of syntactic loop 'for.body.i753' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit754:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i746 = llvm_cbe_res_2e_0_2e_lcssa_2e_i746__PHI_TEMPORARY;
  llvm_cbe_xor429 = llvm_cbe_xor424 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i746;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx433 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor415, 24)) & 63))))]);
  _218 = ((uint8_t*)llvm_cbe_arrayidx433);
  llvm_cbe_and_2e_i729 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx433)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i729) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i732;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i733__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit741;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i732:
  llvm_cbe_add_2e_ptr6_2e_i731 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i729)]);
  llvm_cbe_res_2e_028_2e_i734__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i735__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i731;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i740;

  do {     /* Syntactic loop 'for.body.i740' to make GCC happy */
llvm_cbe_for_2e_body_2e_i740:
  llvm_cbe_res_2e_028_2e_i734 = llvm_cbe_res_2e_028_2e_i734__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i735 = llvm_cbe__ptr_2e_027_2e_i735__PHI_TEMPORARY;
  _219 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i735));
  llvm_cbe_cond_2e_i737 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i735 == _218)&1)), _219, llvm_cbe_res_2e_028_2e_i734);
  llvm_cbe_add_2e_ptr8_2e_i738 = (&llvm_cbe__ptr_2e_027_2e_i735[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i738) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i734__PHI_TEMPORARY = llvm_cbe_cond_2e_i737;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i735__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i738;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i740;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i733__PHI_TEMPORARY = llvm_cbe_cond_2e_i737;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit741;
  }

  } while (1); /* end of syntactic loop 'for.body.i740' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit741:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i733 = llvm_cbe_res_2e_0_2e_lcssa_2e_i733__PHI_TEMPORARY;
  llvm_cbe_xor434 = llvm_cbe_xor429 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i733;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr435 = (&llvm_cbe_ctx->field0.array[((int64_t)19)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _220 = *llvm_cbe_incdec_2e_ptr414;
  llvm_cbe_xor436 = llvm_cbe_xor434 ^ _220;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx439 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor436 & 63))))]);
  _221 = ((uint8_t*)llvm_cbe_arrayidx439);
  llvm_cbe_and_2e_i716 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx439)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i716) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i719;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i720__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit728;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i719:
  llvm_cbe_add_2e_ptr6_2e_i718 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i716)]);
  llvm_cbe_res_2e_028_2e_i721__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i722__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i718;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i727;

  do {     /* Syntactic loop 'for.body.i727' to make GCC happy */
llvm_cbe_for_2e_body_2e_i727:
  llvm_cbe_res_2e_028_2e_i721 = llvm_cbe_res_2e_028_2e_i721__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i722 = llvm_cbe__ptr_2e_027_2e_i722__PHI_TEMPORARY;
  _222 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i722));
  llvm_cbe_cond_2e_i724 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i722 == _221)&1)), _222, llvm_cbe_res_2e_028_2e_i721);
  llvm_cbe_add_2e_ptr8_2e_i725 = (&llvm_cbe__ptr_2e_027_2e_i722[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i725) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i721__PHI_TEMPORARY = llvm_cbe_cond_2e_i724;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i722__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i725;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i727;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i720__PHI_TEMPORARY = llvm_cbe_cond_2e_i724;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit728;
  }

  } while (1); /* end of syntactic loop 'for.body.i727' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit728:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i720 = llvm_cbe_res_2e_0_2e_lcssa_2e_i720__PHI_TEMPORARY;
  llvm_cbe_xor440 = llvm_cbe_res_2e_0_2e_lcssa_2e_i720 ^ llvm_cbe_xor389;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx444 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor436, 8)) & 63))))]);
  _223 = ((uint8_t*)llvm_cbe_arrayidx444);
  llvm_cbe_and_2e_i703 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx444)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i703) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i706;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i707__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit715;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i706:
  llvm_cbe_add_2e_ptr6_2e_i705 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i703)]);
  llvm_cbe_res_2e_028_2e_i708__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i709__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i705;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i714;

  do {     /* Syntactic loop 'for.body.i714' to make GCC happy */
llvm_cbe_for_2e_body_2e_i714:
  llvm_cbe_res_2e_028_2e_i708 = llvm_cbe_res_2e_028_2e_i708__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i709 = llvm_cbe__ptr_2e_027_2e_i709__PHI_TEMPORARY;
  _224 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i709));
  llvm_cbe_cond_2e_i711 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i709 == _223)&1)), _224, llvm_cbe_res_2e_028_2e_i708);
  llvm_cbe_add_2e_ptr8_2e_i712 = (&llvm_cbe__ptr_2e_027_2e_i709[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i712) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i708__PHI_TEMPORARY = llvm_cbe_cond_2e_i711;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i709__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i712;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i714;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i707__PHI_TEMPORARY = llvm_cbe_cond_2e_i711;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit715;
  }

  } while (1); /* end of syntactic loop 'for.body.i714' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit715:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i707 = llvm_cbe_res_2e_0_2e_lcssa_2e_i707__PHI_TEMPORARY;
  llvm_cbe_xor445 = llvm_cbe_xor440 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i707;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx449 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor436, 16)) & 63))))]);
  _225 = ((uint8_t*)llvm_cbe_arrayidx449);
  llvm_cbe_and_2e_i690 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx449)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i690) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i693;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i694__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit702;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i693:
  llvm_cbe_add_2e_ptr6_2e_i692 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i690)]);
  llvm_cbe_res_2e_028_2e_i695__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i696__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i692;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i701;

  do {     /* Syntactic loop 'for.body.i701' to make GCC happy */
llvm_cbe_for_2e_body_2e_i701:
  llvm_cbe_res_2e_028_2e_i695 = llvm_cbe_res_2e_028_2e_i695__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i696 = llvm_cbe__ptr_2e_027_2e_i696__PHI_TEMPORARY;
  _226 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i696));
  llvm_cbe_cond_2e_i698 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i696 == _225)&1)), _226, llvm_cbe_res_2e_028_2e_i695);
  llvm_cbe_add_2e_ptr8_2e_i699 = (&llvm_cbe__ptr_2e_027_2e_i696[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i699) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i695__PHI_TEMPORARY = llvm_cbe_cond_2e_i698;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i696__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i699;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i701;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i694__PHI_TEMPORARY = llvm_cbe_cond_2e_i698;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit702;
  }

  } while (1); /* end of syntactic loop 'for.body.i701' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit702:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i694 = llvm_cbe_res_2e_0_2e_lcssa_2e_i694__PHI_TEMPORARY;
  llvm_cbe_xor450 = llvm_cbe_xor445 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i694;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx454 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor436, 24)) & 63))))]);
  _227 = ((uint8_t*)llvm_cbe_arrayidx454);
  llvm_cbe_and_2e_i677 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx454)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i677) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i680;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i681__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit689;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i680:
  llvm_cbe_add_2e_ptr6_2e_i679 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i677)]);
  llvm_cbe_res_2e_028_2e_i682__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i683__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i679;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i688;

  do {     /* Syntactic loop 'for.body.i688' to make GCC happy */
llvm_cbe_for_2e_body_2e_i688:
  llvm_cbe_res_2e_028_2e_i682 = llvm_cbe_res_2e_028_2e_i682__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i683 = llvm_cbe__ptr_2e_027_2e_i683__PHI_TEMPORARY;
  _228 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i683));
  llvm_cbe_cond_2e_i685 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i683 == _227)&1)), _228, llvm_cbe_res_2e_028_2e_i682);
  llvm_cbe_add_2e_ptr8_2e_i686 = (&llvm_cbe__ptr_2e_027_2e_i683[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i686) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i682__PHI_TEMPORARY = llvm_cbe_cond_2e_i685;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i683__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i686;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i688;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i681__PHI_TEMPORARY = llvm_cbe_cond_2e_i685;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit689;
  }

  } while (1); /* end of syntactic loop 'for.body.i688' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit689:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i681 = llvm_cbe_res_2e_0_2e_lcssa_2e_i681__PHI_TEMPORARY;
  llvm_cbe_xor455 = llvm_cbe_xor450 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i681;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr459 = (&llvm_cbe_ctx->field0.array[((int64_t)20)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _229 = *llvm_cbe_incdec_2e_ptr435;
  llvm_cbe_xor460 = _229 ^ ((llvm_cbe_xor434 << 28) | (llvm_lshr_u32(llvm_cbe_xor434, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx463 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor460 & 63))))]);
  _230 = ((uint8_t*)llvm_cbe_arrayidx463);
  llvm_cbe_and_2e_i664 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx463)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i664) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i667;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i668__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit676;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i667:
  llvm_cbe_add_2e_ptr6_2e_i666 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i664)]);
  llvm_cbe_res_2e_028_2e_i669__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i670__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i666;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i675;

  do {     /* Syntactic loop 'for.body.i675' to make GCC happy */
llvm_cbe_for_2e_body_2e_i675:
  llvm_cbe_res_2e_028_2e_i669 = llvm_cbe_res_2e_028_2e_i669__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i670 = llvm_cbe__ptr_2e_027_2e_i670__PHI_TEMPORARY;
  _231 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i670));
  llvm_cbe_cond_2e_i672 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i670 == _230)&1)), _231, llvm_cbe_res_2e_028_2e_i669);
  llvm_cbe_add_2e_ptr8_2e_i673 = (&llvm_cbe__ptr_2e_027_2e_i670[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i673) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i669__PHI_TEMPORARY = llvm_cbe_cond_2e_i672;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i670__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i673;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i675;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i668__PHI_TEMPORARY = llvm_cbe_cond_2e_i672;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit676;
  }

  } while (1); /* end of syntactic loop 'for.body.i675' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit676:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i668 = llvm_cbe_res_2e_0_2e_lcssa_2e_i668__PHI_TEMPORARY;
  llvm_cbe_xor464 = llvm_cbe_xor455 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i668;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx468 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor460, 8)) & 63))))]);
  _232 = ((uint8_t*)llvm_cbe_arrayidx468);
  llvm_cbe_and_2e_i651 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx468)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i651) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i654;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i655__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit663;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i654:
  llvm_cbe_add_2e_ptr6_2e_i653 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i651)]);
  llvm_cbe_res_2e_028_2e_i656__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i657__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i653;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i662;

  do {     /* Syntactic loop 'for.body.i662' to make GCC happy */
llvm_cbe_for_2e_body_2e_i662:
  llvm_cbe_res_2e_028_2e_i656 = llvm_cbe_res_2e_028_2e_i656__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i657 = llvm_cbe__ptr_2e_027_2e_i657__PHI_TEMPORARY;
  _233 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i657));
  llvm_cbe_cond_2e_i659 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i657 == _232)&1)), _233, llvm_cbe_res_2e_028_2e_i656);
  llvm_cbe_add_2e_ptr8_2e_i660 = (&llvm_cbe__ptr_2e_027_2e_i657[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i660) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i656__PHI_TEMPORARY = llvm_cbe_cond_2e_i659;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i657__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i660;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i662;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i655__PHI_TEMPORARY = llvm_cbe_cond_2e_i659;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit663;
  }

  } while (1); /* end of syntactic loop 'for.body.i662' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit663:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i655 = llvm_cbe_res_2e_0_2e_lcssa_2e_i655__PHI_TEMPORARY;
  llvm_cbe_xor469 = llvm_cbe_xor464 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i655;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx473 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor460, 16)) & 63))))]);
  _234 = ((uint8_t*)llvm_cbe_arrayidx473);
  llvm_cbe_and_2e_i638 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx473)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i638) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i641;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i642__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit650;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i641:
  llvm_cbe_add_2e_ptr6_2e_i640 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i638)]);
  llvm_cbe_res_2e_028_2e_i643__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i644__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i640;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i649;

  do {     /* Syntactic loop 'for.body.i649' to make GCC happy */
llvm_cbe_for_2e_body_2e_i649:
  llvm_cbe_res_2e_028_2e_i643 = llvm_cbe_res_2e_028_2e_i643__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i644 = llvm_cbe__ptr_2e_027_2e_i644__PHI_TEMPORARY;
  _235 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i644));
  llvm_cbe_cond_2e_i646 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i644 == _234)&1)), _235, llvm_cbe_res_2e_028_2e_i643);
  llvm_cbe_add_2e_ptr8_2e_i647 = (&llvm_cbe__ptr_2e_027_2e_i644[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i647) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i643__PHI_TEMPORARY = llvm_cbe_cond_2e_i646;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i644__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i647;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i649;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i642__PHI_TEMPORARY = llvm_cbe_cond_2e_i646;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit650;
  }

  } while (1); /* end of syntactic loop 'for.body.i649' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit650:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i642 = llvm_cbe_res_2e_0_2e_lcssa_2e_i642__PHI_TEMPORARY;
  llvm_cbe_xor474 = llvm_cbe_xor469 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i642;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 678 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx478 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor460, 24)) & 63))))]);
  _236 = ((uint8_t*)llvm_cbe_arrayidx478);
  llvm_cbe_and_2e_i625 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx478)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i625) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i628;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i629__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit637;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i628:
  llvm_cbe_add_2e_ptr6_2e_i627 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i625)]);
  llvm_cbe_res_2e_028_2e_i630__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i631__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i627;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i636;

  do {     /* Syntactic loop 'for.body.i636' to make GCC happy */
llvm_cbe_for_2e_body_2e_i636:
  llvm_cbe_res_2e_028_2e_i630 = llvm_cbe_res_2e_028_2e_i630__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i631 = llvm_cbe__ptr_2e_027_2e_i631__PHI_TEMPORARY;
  _237 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i631));
  llvm_cbe_cond_2e_i633 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i631 == _236)&1)), _237, llvm_cbe_res_2e_028_2e_i630);
  llvm_cbe_add_2e_ptr8_2e_i634 = (&llvm_cbe__ptr_2e_027_2e_i631[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i634) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i630__PHI_TEMPORARY = llvm_cbe_cond_2e_i633;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i631__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i634;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i636;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i629__PHI_TEMPORARY = llvm_cbe_cond_2e_i633;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit637;
  }

  } while (1); /* end of syntactic loop 'for.body.i636' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit637:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i629 = llvm_cbe_res_2e_0_2e_lcssa_2e_i629__PHI_TEMPORARY;
  llvm_cbe_xor479 = llvm_cbe_xor474 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i629;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr480 = (&llvm_cbe_ctx->field0.array[((int64_t)21)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _238 = *llvm_cbe_incdec_2e_ptr459;
  llvm_cbe_xor481 = llvm_cbe_xor479 ^ _238;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx484 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor481 & 63))))]);
  _239 = ((uint8_t*)llvm_cbe_arrayidx484);
  llvm_cbe_and_2e_i612 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx484)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i612) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i615;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i616__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit624;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i615:
  llvm_cbe_add_2e_ptr6_2e_i614 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i612)]);
  llvm_cbe_res_2e_028_2e_i617__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i618__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i614;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i623;

  do {     /* Syntactic loop 'for.body.i623' to make GCC happy */
llvm_cbe_for_2e_body_2e_i623:
  llvm_cbe_res_2e_028_2e_i617 = llvm_cbe_res_2e_028_2e_i617__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i618 = llvm_cbe__ptr_2e_027_2e_i618__PHI_TEMPORARY;
  _240 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i618));
  llvm_cbe_cond_2e_i620 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i618 == _239)&1)), _240, llvm_cbe_res_2e_028_2e_i617);
  llvm_cbe_add_2e_ptr8_2e_i621 = (&llvm_cbe__ptr_2e_027_2e_i618[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i621) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i617__PHI_TEMPORARY = llvm_cbe_cond_2e_i620;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i618__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i621;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i623;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i616__PHI_TEMPORARY = llvm_cbe_cond_2e_i620;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit624;
  }

  } while (1); /* end of syntactic loop 'for.body.i623' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit624:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i616 = llvm_cbe_res_2e_0_2e_lcssa_2e_i616__PHI_TEMPORARY;
  llvm_cbe_xor485 = llvm_cbe_res_2e_0_2e_lcssa_2e_i616 ^ llvm_cbe_xor434;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx489 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor481, 8)) & 63))))]);
  _241 = ((uint8_t*)llvm_cbe_arrayidx489);
  llvm_cbe_and_2e_i599 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx489)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i599) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i602;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i603__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit611;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i602:
  llvm_cbe_add_2e_ptr6_2e_i601 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i599)]);
  llvm_cbe_res_2e_028_2e_i604__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i605__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i601;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i610;

  do {     /* Syntactic loop 'for.body.i610' to make GCC happy */
llvm_cbe_for_2e_body_2e_i610:
  llvm_cbe_res_2e_028_2e_i604 = llvm_cbe_res_2e_028_2e_i604__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i605 = llvm_cbe__ptr_2e_027_2e_i605__PHI_TEMPORARY;
  _242 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i605));
  llvm_cbe_cond_2e_i607 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i605 == _241)&1)), _242, llvm_cbe_res_2e_028_2e_i604);
  llvm_cbe_add_2e_ptr8_2e_i608 = (&llvm_cbe__ptr_2e_027_2e_i605[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i608) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i604__PHI_TEMPORARY = llvm_cbe_cond_2e_i607;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i605__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i608;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i610;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i603__PHI_TEMPORARY = llvm_cbe_cond_2e_i607;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit611;
  }

  } while (1); /* end of syntactic loop 'for.body.i610' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit611:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i603 = llvm_cbe_res_2e_0_2e_lcssa_2e_i603__PHI_TEMPORARY;
  llvm_cbe_xor490 = llvm_cbe_xor485 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i603;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx494 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor481, 16)) & 63))))]);
  _243 = ((uint8_t*)llvm_cbe_arrayidx494);
  llvm_cbe_and_2e_i586 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx494)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i586) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i589;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i590__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit598;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i589:
  llvm_cbe_add_2e_ptr6_2e_i588 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i586)]);
  llvm_cbe_res_2e_028_2e_i591__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i592__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i588;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i597;

  do {     /* Syntactic loop 'for.body.i597' to make GCC happy */
llvm_cbe_for_2e_body_2e_i597:
  llvm_cbe_res_2e_028_2e_i591 = llvm_cbe_res_2e_028_2e_i591__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i592 = llvm_cbe__ptr_2e_027_2e_i592__PHI_TEMPORARY;
  _244 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i592));
  llvm_cbe_cond_2e_i594 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i592 == _243)&1)), _244, llvm_cbe_res_2e_028_2e_i591);
  llvm_cbe_add_2e_ptr8_2e_i595 = (&llvm_cbe__ptr_2e_027_2e_i592[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i595) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i591__PHI_TEMPORARY = llvm_cbe_cond_2e_i594;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i592__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i595;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i597;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i590__PHI_TEMPORARY = llvm_cbe_cond_2e_i594;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit598;
  }

  } while (1); /* end of syntactic loop 'for.body.i597' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit598:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i590 = llvm_cbe_res_2e_0_2e_lcssa_2e_i590__PHI_TEMPORARY;
  llvm_cbe_xor495 = llvm_cbe_xor490 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i590;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx499 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor481, 24)) & 63))))]);
  _245 = ((uint8_t*)llvm_cbe_arrayidx499);
  llvm_cbe_and_2e_i573 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx499)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i573) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i576;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i577__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit585;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i576:
  llvm_cbe_add_2e_ptr6_2e_i575 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i573)]);
  llvm_cbe_res_2e_028_2e_i578__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i579__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i575;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i584;

  do {     /* Syntactic loop 'for.body.i584' to make GCC happy */
llvm_cbe_for_2e_body_2e_i584:
  llvm_cbe_res_2e_028_2e_i578 = llvm_cbe_res_2e_028_2e_i578__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i579 = llvm_cbe__ptr_2e_027_2e_i579__PHI_TEMPORARY;
  _246 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i579));
  llvm_cbe_cond_2e_i581 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i579 == _245)&1)), _246, llvm_cbe_res_2e_028_2e_i578);
  llvm_cbe_add_2e_ptr8_2e_i582 = (&llvm_cbe__ptr_2e_027_2e_i579[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i582) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i578__PHI_TEMPORARY = llvm_cbe_cond_2e_i581;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i579__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i582;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i584;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i577__PHI_TEMPORARY = llvm_cbe_cond_2e_i581;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit585;
  }

  } while (1); /* end of syntactic loop 'for.body.i584' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit585:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i577 = llvm_cbe_res_2e_0_2e_lcssa_2e_i577__PHI_TEMPORARY;
  llvm_cbe_xor500 = llvm_cbe_xor495 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i577;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr504 = (&llvm_cbe_ctx->field0.array[((int64_t)22)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _247 = *llvm_cbe_incdec_2e_ptr480;
  llvm_cbe_xor505 = _247 ^ ((llvm_cbe_xor479 << 28) | (llvm_lshr_u32(llvm_cbe_xor479, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx508 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor505 & 63))))]);
  _248 = ((uint8_t*)llvm_cbe_arrayidx508);
  llvm_cbe_and_2e_i560 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx508)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i560) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i563;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i564__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit572;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i563:
  llvm_cbe_add_2e_ptr6_2e_i562 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i560)]);
  llvm_cbe_res_2e_028_2e_i565__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i566__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i562;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i571;

  do {     /* Syntactic loop 'for.body.i571' to make GCC happy */
llvm_cbe_for_2e_body_2e_i571:
  llvm_cbe_res_2e_028_2e_i565 = llvm_cbe_res_2e_028_2e_i565__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i566 = llvm_cbe__ptr_2e_027_2e_i566__PHI_TEMPORARY;
  _249 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i566));
  llvm_cbe_cond_2e_i568 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i566 == _248)&1)), _249, llvm_cbe_res_2e_028_2e_i565);
  llvm_cbe_add_2e_ptr8_2e_i569 = (&llvm_cbe__ptr_2e_027_2e_i566[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i569) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i565__PHI_TEMPORARY = llvm_cbe_cond_2e_i568;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i566__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i569;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i571;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i564__PHI_TEMPORARY = llvm_cbe_cond_2e_i568;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit572;
  }

  } while (1); /* end of syntactic loop 'for.body.i571' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit572:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i564 = llvm_cbe_res_2e_0_2e_lcssa_2e_i564__PHI_TEMPORARY;
  llvm_cbe_xor509 = llvm_cbe_xor500 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i564;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx513 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor505, 8)) & 63))))]);
  _250 = ((uint8_t*)llvm_cbe_arrayidx513);
  llvm_cbe_and_2e_i547 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx513)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i547) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i550;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i551__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit559;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i550:
  llvm_cbe_add_2e_ptr6_2e_i549 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i547)]);
  llvm_cbe_res_2e_028_2e_i552__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i553__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i549;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i558;

  do {     /* Syntactic loop 'for.body.i558' to make GCC happy */
llvm_cbe_for_2e_body_2e_i558:
  llvm_cbe_res_2e_028_2e_i552 = llvm_cbe_res_2e_028_2e_i552__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i553 = llvm_cbe__ptr_2e_027_2e_i553__PHI_TEMPORARY;
  _251 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i553));
  llvm_cbe_cond_2e_i555 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i553 == _250)&1)), _251, llvm_cbe_res_2e_028_2e_i552);
  llvm_cbe_add_2e_ptr8_2e_i556 = (&llvm_cbe__ptr_2e_027_2e_i553[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i556) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i552__PHI_TEMPORARY = llvm_cbe_cond_2e_i555;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i553__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i556;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i558;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i551__PHI_TEMPORARY = llvm_cbe_cond_2e_i555;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit559;
  }

  } while (1); /* end of syntactic loop 'for.body.i558' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit559:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i551 = llvm_cbe_res_2e_0_2e_lcssa_2e_i551__PHI_TEMPORARY;
  llvm_cbe_xor514 = llvm_cbe_xor509 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i551;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx518 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor505, 16)) & 63))))]);
  _252 = ((uint8_t*)llvm_cbe_arrayidx518);
  llvm_cbe_and_2e_i534 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx518)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i534) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i537;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i538__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit546;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i537:
  llvm_cbe_add_2e_ptr6_2e_i536 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i534)]);
  llvm_cbe_res_2e_028_2e_i539__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i540__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i536;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i545;

  do {     /* Syntactic loop 'for.body.i545' to make GCC happy */
llvm_cbe_for_2e_body_2e_i545:
  llvm_cbe_res_2e_028_2e_i539 = llvm_cbe_res_2e_028_2e_i539__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i540 = llvm_cbe__ptr_2e_027_2e_i540__PHI_TEMPORARY;
  _253 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i540));
  llvm_cbe_cond_2e_i542 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i540 == _252)&1)), _253, llvm_cbe_res_2e_028_2e_i539);
  llvm_cbe_add_2e_ptr8_2e_i543 = (&llvm_cbe__ptr_2e_027_2e_i540[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i543) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i539__PHI_TEMPORARY = llvm_cbe_cond_2e_i542;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i540__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i543;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i545;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i538__PHI_TEMPORARY = llvm_cbe_cond_2e_i542;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit546;
  }

  } while (1); /* end of syntactic loop 'for.body.i545' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit546:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i538 = llvm_cbe_res_2e_0_2e_lcssa_2e_i538__PHI_TEMPORARY;
  llvm_cbe_xor519 = llvm_cbe_xor514 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i538;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx523 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor505, 24)) & 63))))]);
  _254 = ((uint8_t*)llvm_cbe_arrayidx523);
  llvm_cbe_and_2e_i521 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx523)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i521) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i524;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i525__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit533;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i524:
  llvm_cbe_add_2e_ptr6_2e_i523 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i521)]);
  llvm_cbe_res_2e_028_2e_i526__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i527__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i523;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i532;

  do {     /* Syntactic loop 'for.body.i532' to make GCC happy */
llvm_cbe_for_2e_body_2e_i532:
  llvm_cbe_res_2e_028_2e_i526 = llvm_cbe_res_2e_028_2e_i526__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i527 = llvm_cbe__ptr_2e_027_2e_i527__PHI_TEMPORARY;
  _255 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i527));
  llvm_cbe_cond_2e_i529 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i527 == _254)&1)), _255, llvm_cbe_res_2e_028_2e_i526);
  llvm_cbe_add_2e_ptr8_2e_i530 = (&llvm_cbe__ptr_2e_027_2e_i527[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i530) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i526__PHI_TEMPORARY = llvm_cbe_cond_2e_i529;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i527__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i530;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i532;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i525__PHI_TEMPORARY = llvm_cbe_cond_2e_i529;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit533;
  }

  } while (1); /* end of syntactic loop 'for.body.i532' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit533:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i525 = llvm_cbe_res_2e_0_2e_lcssa_2e_i525__PHI_TEMPORARY;
  llvm_cbe_xor524 = llvm_cbe_xor519 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i525;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr525 = (&llvm_cbe_ctx->field0.array[((int64_t)23)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _256 = *llvm_cbe_incdec_2e_ptr504;
  llvm_cbe_xor526 = llvm_cbe_xor524 ^ _256;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx529 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor526 & 63))))]);
  _257 = ((uint8_t*)llvm_cbe_arrayidx529);
  llvm_cbe_and_2e_i508 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx529)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i508) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i511;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i512__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit520;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i511:
  llvm_cbe_add_2e_ptr6_2e_i510 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i508)]);
  llvm_cbe_res_2e_028_2e_i513__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i514__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i510;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i519;

  do {     /* Syntactic loop 'for.body.i519' to make GCC happy */
llvm_cbe_for_2e_body_2e_i519:
  llvm_cbe_res_2e_028_2e_i513 = llvm_cbe_res_2e_028_2e_i513__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i514 = llvm_cbe__ptr_2e_027_2e_i514__PHI_TEMPORARY;
  _258 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i514));
  llvm_cbe_cond_2e_i516 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i514 == _257)&1)), _258, llvm_cbe_res_2e_028_2e_i513);
  llvm_cbe_add_2e_ptr8_2e_i517 = (&llvm_cbe__ptr_2e_027_2e_i514[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i517) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i513__PHI_TEMPORARY = llvm_cbe_cond_2e_i516;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i514__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i517;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i519;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i512__PHI_TEMPORARY = llvm_cbe_cond_2e_i516;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit520;
  }

  } while (1); /* end of syntactic loop 'for.body.i519' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit520:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i512 = llvm_cbe_res_2e_0_2e_lcssa_2e_i512__PHI_TEMPORARY;
  llvm_cbe_xor530 = llvm_cbe_res_2e_0_2e_lcssa_2e_i512 ^ llvm_cbe_xor479;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx534 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor526, 8)) & 63))))]);
  _259 = ((uint8_t*)llvm_cbe_arrayidx534);
  llvm_cbe_and_2e_i495 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx534)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i495) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i498;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i499__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit507;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i498:
  llvm_cbe_add_2e_ptr6_2e_i497 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i495)]);
  llvm_cbe_res_2e_028_2e_i500__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i501__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i497;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i506;

  do {     /* Syntactic loop 'for.body.i506' to make GCC happy */
llvm_cbe_for_2e_body_2e_i506:
  llvm_cbe_res_2e_028_2e_i500 = llvm_cbe_res_2e_028_2e_i500__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i501 = llvm_cbe__ptr_2e_027_2e_i501__PHI_TEMPORARY;
  _260 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i501));
  llvm_cbe_cond_2e_i503 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i501 == _259)&1)), _260, llvm_cbe_res_2e_028_2e_i500);
  llvm_cbe_add_2e_ptr8_2e_i504 = (&llvm_cbe__ptr_2e_027_2e_i501[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i504) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i500__PHI_TEMPORARY = llvm_cbe_cond_2e_i503;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i501__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i504;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i506;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i499__PHI_TEMPORARY = llvm_cbe_cond_2e_i503;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit507;
  }

  } while (1); /* end of syntactic loop 'for.body.i506' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit507:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i499 = llvm_cbe_res_2e_0_2e_lcssa_2e_i499__PHI_TEMPORARY;
  llvm_cbe_xor535 = llvm_cbe_xor530 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i499;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx539 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor526, 16)) & 63))))]);
  _261 = ((uint8_t*)llvm_cbe_arrayidx539);
  llvm_cbe_and_2e_i482 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx539)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i482) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i485;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i486__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit494;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i485:
  llvm_cbe_add_2e_ptr6_2e_i484 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i482)]);
  llvm_cbe_res_2e_028_2e_i487__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i488__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i484;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i493;

  do {     /* Syntactic loop 'for.body.i493' to make GCC happy */
llvm_cbe_for_2e_body_2e_i493:
  llvm_cbe_res_2e_028_2e_i487 = llvm_cbe_res_2e_028_2e_i487__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i488 = llvm_cbe__ptr_2e_027_2e_i488__PHI_TEMPORARY;
  _262 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i488));
  llvm_cbe_cond_2e_i490 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i488 == _261)&1)), _262, llvm_cbe_res_2e_028_2e_i487);
  llvm_cbe_add_2e_ptr8_2e_i491 = (&llvm_cbe__ptr_2e_027_2e_i488[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i491) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i487__PHI_TEMPORARY = llvm_cbe_cond_2e_i490;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i488__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i491;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i493;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i486__PHI_TEMPORARY = llvm_cbe_cond_2e_i490;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit494;
  }

  } while (1); /* end of syntactic loop 'for.body.i493' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit494:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i486 = llvm_cbe_res_2e_0_2e_lcssa_2e_i486__PHI_TEMPORARY;
  llvm_cbe_xor540 = llvm_cbe_xor535 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i486;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx544 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor526, 24)) & 63))))]);
  _263 = ((uint8_t*)llvm_cbe_arrayidx544);
  llvm_cbe_and_2e_i469 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx544)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i469) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i472;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i473__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit481;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i472:
  llvm_cbe_add_2e_ptr6_2e_i471 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i469)]);
  llvm_cbe_res_2e_028_2e_i474__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i475__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i471;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i480;

  do {     /* Syntactic loop 'for.body.i480' to make GCC happy */
llvm_cbe_for_2e_body_2e_i480:
  llvm_cbe_res_2e_028_2e_i474 = llvm_cbe_res_2e_028_2e_i474__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i475 = llvm_cbe__ptr_2e_027_2e_i475__PHI_TEMPORARY;
  _264 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i475));
  llvm_cbe_cond_2e_i477 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i475 == _263)&1)), _264, llvm_cbe_res_2e_028_2e_i474);
  llvm_cbe_add_2e_ptr8_2e_i478 = (&llvm_cbe__ptr_2e_027_2e_i475[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i478) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i474__PHI_TEMPORARY = llvm_cbe_cond_2e_i477;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i475__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i478;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i480;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i473__PHI_TEMPORARY = llvm_cbe_cond_2e_i477;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit481;
  }

  } while (1); /* end of syntactic loop 'for.body.i480' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit481:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i473 = llvm_cbe_res_2e_0_2e_lcssa_2e_i473__PHI_TEMPORARY;
  llvm_cbe_xor545 = llvm_cbe_xor540 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i473;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr549 = (&llvm_cbe_ctx->field0.array[((int64_t)24)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _265 = *llvm_cbe_incdec_2e_ptr525;
  llvm_cbe_xor550 = _265 ^ ((llvm_cbe_xor524 << 28) | (llvm_lshr_u32(llvm_cbe_xor524, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx553 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor550 & 63))))]);
  _266 = ((uint8_t*)llvm_cbe_arrayidx553);
  llvm_cbe_and_2e_i456 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx553)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i456) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i459;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i460__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit468;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i459:
  llvm_cbe_add_2e_ptr6_2e_i458 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i456)]);
  llvm_cbe_res_2e_028_2e_i461__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i462__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i458;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i467;

  do {     /* Syntactic loop 'for.body.i467' to make GCC happy */
llvm_cbe_for_2e_body_2e_i467:
  llvm_cbe_res_2e_028_2e_i461 = llvm_cbe_res_2e_028_2e_i461__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i462 = llvm_cbe__ptr_2e_027_2e_i462__PHI_TEMPORARY;
  _267 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i462));
  llvm_cbe_cond_2e_i464 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i462 == _266)&1)), _267, llvm_cbe_res_2e_028_2e_i461);
  llvm_cbe_add_2e_ptr8_2e_i465 = (&llvm_cbe__ptr_2e_027_2e_i462[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i465) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i461__PHI_TEMPORARY = llvm_cbe_cond_2e_i464;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i462__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i465;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i467;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i460__PHI_TEMPORARY = llvm_cbe_cond_2e_i464;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit468;
  }

  } while (1); /* end of syntactic loop 'for.body.i467' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit468:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i460 = llvm_cbe_res_2e_0_2e_lcssa_2e_i460__PHI_TEMPORARY;
  llvm_cbe_xor554 = llvm_cbe_xor545 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i460;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx558 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor550, 8)) & 63))))]);
  _268 = ((uint8_t*)llvm_cbe_arrayidx558);
  llvm_cbe_and_2e_i443 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx558)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i443) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i446;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i447__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit455;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i446:
  llvm_cbe_add_2e_ptr6_2e_i445 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i443)]);
  llvm_cbe_res_2e_028_2e_i448__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i449__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i445;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i454;

  do {     /* Syntactic loop 'for.body.i454' to make GCC happy */
llvm_cbe_for_2e_body_2e_i454:
  llvm_cbe_res_2e_028_2e_i448 = llvm_cbe_res_2e_028_2e_i448__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i449 = llvm_cbe__ptr_2e_027_2e_i449__PHI_TEMPORARY;
  _269 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i449));
  llvm_cbe_cond_2e_i451 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i449 == _268)&1)), _269, llvm_cbe_res_2e_028_2e_i448);
  llvm_cbe_add_2e_ptr8_2e_i452 = (&llvm_cbe__ptr_2e_027_2e_i449[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i452) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i448__PHI_TEMPORARY = llvm_cbe_cond_2e_i451;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i449__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i452;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i454;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i447__PHI_TEMPORARY = llvm_cbe_cond_2e_i451;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit455;
  }

  } while (1); /* end of syntactic loop 'for.body.i454' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit455:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i447 = llvm_cbe_res_2e_0_2e_lcssa_2e_i447__PHI_TEMPORARY;
  llvm_cbe_xor559 = llvm_cbe_xor554 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i447;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx563 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor550, 16)) & 63))))]);
  _270 = ((uint8_t*)llvm_cbe_arrayidx563);
  llvm_cbe_and_2e_i430 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx563)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i430) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i433;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i434__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit442;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i433:
  llvm_cbe_add_2e_ptr6_2e_i432 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i430)]);
  llvm_cbe_res_2e_028_2e_i435__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i436__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i432;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i441;

  do {     /* Syntactic loop 'for.body.i441' to make GCC happy */
llvm_cbe_for_2e_body_2e_i441:
  llvm_cbe_res_2e_028_2e_i435 = llvm_cbe_res_2e_028_2e_i435__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i436 = llvm_cbe__ptr_2e_027_2e_i436__PHI_TEMPORARY;
  _271 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i436));
  llvm_cbe_cond_2e_i438 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i436 == _270)&1)), _271, llvm_cbe_res_2e_028_2e_i435);
  llvm_cbe_add_2e_ptr8_2e_i439 = (&llvm_cbe__ptr_2e_027_2e_i436[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i439) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i435__PHI_TEMPORARY = llvm_cbe_cond_2e_i438;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i436__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i439;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i441;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i434__PHI_TEMPORARY = llvm_cbe_cond_2e_i438;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit442;
  }

  } while (1); /* end of syntactic loop 'for.body.i441' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit442:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i434 = llvm_cbe_res_2e_0_2e_lcssa_2e_i434__PHI_TEMPORARY;
  llvm_cbe_xor564 = llvm_cbe_xor559 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i434;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 679 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx568 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor550, 24)) & 63))))]);
  _272 = ((uint8_t*)llvm_cbe_arrayidx568);
  llvm_cbe_and_2e_i417 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx568)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i417) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i420;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i421__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit429;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i420:
  llvm_cbe_add_2e_ptr6_2e_i419 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i417)]);
  llvm_cbe_res_2e_028_2e_i422__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i423__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i419;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i428;

  do {     /* Syntactic loop 'for.body.i428' to make GCC happy */
llvm_cbe_for_2e_body_2e_i428:
  llvm_cbe_res_2e_028_2e_i422 = llvm_cbe_res_2e_028_2e_i422__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i423 = llvm_cbe__ptr_2e_027_2e_i423__PHI_TEMPORARY;
  _273 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i423));
  llvm_cbe_cond_2e_i425 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i423 == _272)&1)), _273, llvm_cbe_res_2e_028_2e_i422);
  llvm_cbe_add_2e_ptr8_2e_i426 = (&llvm_cbe__ptr_2e_027_2e_i423[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i426) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i422__PHI_TEMPORARY = llvm_cbe_cond_2e_i425;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i423__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i426;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i428;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i421__PHI_TEMPORARY = llvm_cbe_cond_2e_i425;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit429;
  }

  } while (1); /* end of syntactic loop 'for.body.i428' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit429:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i421 = llvm_cbe_res_2e_0_2e_lcssa_2e_i421__PHI_TEMPORARY;
  llvm_cbe_xor569 = llvm_cbe_xor564 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i421;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr570 = (&llvm_cbe_ctx->field0.array[((int64_t)25)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _274 = *llvm_cbe_incdec_2e_ptr549;
  llvm_cbe_xor571 = llvm_cbe_xor569 ^ _274;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx574 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor571 & 63))))]);
  _275 = ((uint8_t*)llvm_cbe_arrayidx574);
  llvm_cbe_and_2e_i404 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx574)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i404) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i407;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i408__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit416;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i407:
  llvm_cbe_add_2e_ptr6_2e_i406 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i404)]);
  llvm_cbe_res_2e_028_2e_i409__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i410__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i406;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i415;

  do {     /* Syntactic loop 'for.body.i415' to make GCC happy */
llvm_cbe_for_2e_body_2e_i415:
  llvm_cbe_res_2e_028_2e_i409 = llvm_cbe_res_2e_028_2e_i409__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i410 = llvm_cbe__ptr_2e_027_2e_i410__PHI_TEMPORARY;
  _276 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i410));
  llvm_cbe_cond_2e_i412 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i410 == _275)&1)), _276, llvm_cbe_res_2e_028_2e_i409);
  llvm_cbe_add_2e_ptr8_2e_i413 = (&llvm_cbe__ptr_2e_027_2e_i410[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i413) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i409__PHI_TEMPORARY = llvm_cbe_cond_2e_i412;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i410__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i413;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i415;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i408__PHI_TEMPORARY = llvm_cbe_cond_2e_i412;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit416;
  }

  } while (1); /* end of syntactic loop 'for.body.i415' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit416:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i408 = llvm_cbe_res_2e_0_2e_lcssa_2e_i408__PHI_TEMPORARY;
  llvm_cbe_xor575 = llvm_cbe_res_2e_0_2e_lcssa_2e_i408 ^ llvm_cbe_xor524;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx579 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor571, 8)) & 63))))]);
  _277 = ((uint8_t*)llvm_cbe_arrayidx579);
  llvm_cbe_and_2e_i391 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx579)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i391) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i394;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i395__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit403;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i394:
  llvm_cbe_add_2e_ptr6_2e_i393 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i391)]);
  llvm_cbe_res_2e_028_2e_i396__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i397__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i393;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i402;

  do {     /* Syntactic loop 'for.body.i402' to make GCC happy */
llvm_cbe_for_2e_body_2e_i402:
  llvm_cbe_res_2e_028_2e_i396 = llvm_cbe_res_2e_028_2e_i396__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i397 = llvm_cbe__ptr_2e_027_2e_i397__PHI_TEMPORARY;
  _278 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i397));
  llvm_cbe_cond_2e_i399 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i397 == _277)&1)), _278, llvm_cbe_res_2e_028_2e_i396);
  llvm_cbe_add_2e_ptr8_2e_i400 = (&llvm_cbe__ptr_2e_027_2e_i397[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i400) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i396__PHI_TEMPORARY = llvm_cbe_cond_2e_i399;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i397__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i400;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i402;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i395__PHI_TEMPORARY = llvm_cbe_cond_2e_i399;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit403;
  }

  } while (1); /* end of syntactic loop 'for.body.i402' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit403:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i395 = llvm_cbe_res_2e_0_2e_lcssa_2e_i395__PHI_TEMPORARY;
  llvm_cbe_xor580 = llvm_cbe_xor575 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i395;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx584 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor571, 16)) & 63))))]);
  _279 = ((uint8_t*)llvm_cbe_arrayidx584);
  llvm_cbe_and_2e_i378 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx584)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i378) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i381;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i382__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit390;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i381:
  llvm_cbe_add_2e_ptr6_2e_i380 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i378)]);
  llvm_cbe_res_2e_028_2e_i383__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i384__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i380;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i389;

  do {     /* Syntactic loop 'for.body.i389' to make GCC happy */
llvm_cbe_for_2e_body_2e_i389:
  llvm_cbe_res_2e_028_2e_i383 = llvm_cbe_res_2e_028_2e_i383__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i384 = llvm_cbe__ptr_2e_027_2e_i384__PHI_TEMPORARY;
  _280 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i384));
  llvm_cbe_cond_2e_i386 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i384 == _279)&1)), _280, llvm_cbe_res_2e_028_2e_i383);
  llvm_cbe_add_2e_ptr8_2e_i387 = (&llvm_cbe__ptr_2e_027_2e_i384[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i387) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i383__PHI_TEMPORARY = llvm_cbe_cond_2e_i386;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i384__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i387;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i389;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i382__PHI_TEMPORARY = llvm_cbe_cond_2e_i386;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit390;
  }

  } while (1); /* end of syntactic loop 'for.body.i389' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit390:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i382 = llvm_cbe_res_2e_0_2e_lcssa_2e_i382__PHI_TEMPORARY;
  llvm_cbe_xor585 = llvm_cbe_xor580 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i382;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx589 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor571, 24)) & 63))))]);
  _281 = ((uint8_t*)llvm_cbe_arrayidx589);
  llvm_cbe_and_2e_i365 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx589)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i365) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i368;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i369__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit377;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i368:
  llvm_cbe_add_2e_ptr6_2e_i367 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i365)]);
  llvm_cbe_res_2e_028_2e_i370__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i371__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i367;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i376;

  do {     /* Syntactic loop 'for.body.i376' to make GCC happy */
llvm_cbe_for_2e_body_2e_i376:
  llvm_cbe_res_2e_028_2e_i370 = llvm_cbe_res_2e_028_2e_i370__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i371 = llvm_cbe__ptr_2e_027_2e_i371__PHI_TEMPORARY;
  _282 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i371));
  llvm_cbe_cond_2e_i373 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i371 == _281)&1)), _282, llvm_cbe_res_2e_028_2e_i370);
  llvm_cbe_add_2e_ptr8_2e_i374 = (&llvm_cbe__ptr_2e_027_2e_i371[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i374) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i370__PHI_TEMPORARY = llvm_cbe_cond_2e_i373;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i371__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i374;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i376;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i369__PHI_TEMPORARY = llvm_cbe_cond_2e_i373;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit377;
  }

  } while (1); /* end of syntactic loop 'for.body.i376' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit377:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i369 = llvm_cbe_res_2e_0_2e_lcssa_2e_i369__PHI_TEMPORARY;
  llvm_cbe_xor590 = llvm_cbe_xor585 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i369;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr594 = (&llvm_cbe_ctx->field0.array[((int64_t)26)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _283 = *llvm_cbe_incdec_2e_ptr570;
  llvm_cbe_xor595 = _283 ^ ((llvm_cbe_xor569 << 28) | (llvm_lshr_u32(llvm_cbe_xor569, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx598 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor595 & 63))))]);
  _284 = ((uint8_t*)llvm_cbe_arrayidx598);
  llvm_cbe_and_2e_i352 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx598)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i352) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i355;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i356__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit364;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i355:
  llvm_cbe_add_2e_ptr6_2e_i354 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i352)]);
  llvm_cbe_res_2e_028_2e_i357__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i358__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i354;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i363;

  do {     /* Syntactic loop 'for.body.i363' to make GCC happy */
llvm_cbe_for_2e_body_2e_i363:
  llvm_cbe_res_2e_028_2e_i357 = llvm_cbe_res_2e_028_2e_i357__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i358 = llvm_cbe__ptr_2e_027_2e_i358__PHI_TEMPORARY;
  _285 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i358));
  llvm_cbe_cond_2e_i360 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i358 == _284)&1)), _285, llvm_cbe_res_2e_028_2e_i357);
  llvm_cbe_add_2e_ptr8_2e_i361 = (&llvm_cbe__ptr_2e_027_2e_i358[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i361) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i357__PHI_TEMPORARY = llvm_cbe_cond_2e_i360;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i358__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i361;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i363;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i356__PHI_TEMPORARY = llvm_cbe_cond_2e_i360;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit364;
  }

  } while (1); /* end of syntactic loop 'for.body.i363' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit364:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i356 = llvm_cbe_res_2e_0_2e_lcssa_2e_i356__PHI_TEMPORARY;
  llvm_cbe_xor599 = llvm_cbe_xor590 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i356;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx603 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor595, 8)) & 63))))]);
  _286 = ((uint8_t*)llvm_cbe_arrayidx603);
  llvm_cbe_and_2e_i339 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx603)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i339) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i342;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i343__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit351;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i342:
  llvm_cbe_add_2e_ptr6_2e_i341 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i339)]);
  llvm_cbe_res_2e_028_2e_i344__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i345__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i341;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i350;

  do {     /* Syntactic loop 'for.body.i350' to make GCC happy */
llvm_cbe_for_2e_body_2e_i350:
  llvm_cbe_res_2e_028_2e_i344 = llvm_cbe_res_2e_028_2e_i344__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i345 = llvm_cbe__ptr_2e_027_2e_i345__PHI_TEMPORARY;
  _287 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i345));
  llvm_cbe_cond_2e_i347 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i345 == _286)&1)), _287, llvm_cbe_res_2e_028_2e_i344);
  llvm_cbe_add_2e_ptr8_2e_i348 = (&llvm_cbe__ptr_2e_027_2e_i345[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i348) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i344__PHI_TEMPORARY = llvm_cbe_cond_2e_i347;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i345__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i348;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i350;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i343__PHI_TEMPORARY = llvm_cbe_cond_2e_i347;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit351;
  }

  } while (1); /* end of syntactic loop 'for.body.i350' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit351:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i343 = llvm_cbe_res_2e_0_2e_lcssa_2e_i343__PHI_TEMPORARY;
  llvm_cbe_xor604 = llvm_cbe_xor599 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i343;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx608 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor595, 16)) & 63))))]);
  _288 = ((uint8_t*)llvm_cbe_arrayidx608);
  llvm_cbe_and_2e_i326 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx608)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i326) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i329;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i330__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit338;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i329:
  llvm_cbe_add_2e_ptr6_2e_i328 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i326)]);
  llvm_cbe_res_2e_028_2e_i331__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i332__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i328;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i337;

  do {     /* Syntactic loop 'for.body.i337' to make GCC happy */
llvm_cbe_for_2e_body_2e_i337:
  llvm_cbe_res_2e_028_2e_i331 = llvm_cbe_res_2e_028_2e_i331__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i332 = llvm_cbe__ptr_2e_027_2e_i332__PHI_TEMPORARY;
  _289 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i332));
  llvm_cbe_cond_2e_i334 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i332 == _288)&1)), _289, llvm_cbe_res_2e_028_2e_i331);
  llvm_cbe_add_2e_ptr8_2e_i335 = (&llvm_cbe__ptr_2e_027_2e_i332[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i335) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i331__PHI_TEMPORARY = llvm_cbe_cond_2e_i334;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i332__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i335;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i337;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i330__PHI_TEMPORARY = llvm_cbe_cond_2e_i334;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit338;
  }

  } while (1); /* end of syntactic loop 'for.body.i337' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit338:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i330 = llvm_cbe_res_2e_0_2e_lcssa_2e_i330__PHI_TEMPORARY;
  llvm_cbe_xor609 = llvm_cbe_xor604 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i330;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx613 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor595, 24)) & 63))))]);
  _290 = ((uint8_t*)llvm_cbe_arrayidx613);
  llvm_cbe_and_2e_i313 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx613)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i313) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i316;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i317__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit325;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i316:
  llvm_cbe_add_2e_ptr6_2e_i315 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i313)]);
  llvm_cbe_res_2e_028_2e_i318__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i319__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i315;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i324;

  do {     /* Syntactic loop 'for.body.i324' to make GCC happy */
llvm_cbe_for_2e_body_2e_i324:
  llvm_cbe_res_2e_028_2e_i318 = llvm_cbe_res_2e_028_2e_i318__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i319 = llvm_cbe__ptr_2e_027_2e_i319__PHI_TEMPORARY;
  _291 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i319));
  llvm_cbe_cond_2e_i321 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i319 == _290)&1)), _291, llvm_cbe_res_2e_028_2e_i318);
  llvm_cbe_add_2e_ptr8_2e_i322 = (&llvm_cbe__ptr_2e_027_2e_i319[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i322) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i318__PHI_TEMPORARY = llvm_cbe_cond_2e_i321;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i319__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i322;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i324;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i317__PHI_TEMPORARY = llvm_cbe_cond_2e_i321;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit325;
  }

  } while (1); /* end of syntactic loop 'for.body.i324' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit325:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i317 = llvm_cbe_res_2e_0_2e_lcssa_2e_i317__PHI_TEMPORARY;
  llvm_cbe_xor614 = llvm_cbe_xor609 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i317;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr615 = (&llvm_cbe_ctx->field0.array[((int64_t)27)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _292 = *llvm_cbe_incdec_2e_ptr594;
  llvm_cbe_xor616 = llvm_cbe_xor614 ^ _292;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx619 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor616 & 63))))]);
  _293 = ((uint8_t*)llvm_cbe_arrayidx619);
  llvm_cbe_and_2e_i300 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx619)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i300) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i303;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i304__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit312;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i303:
  llvm_cbe_add_2e_ptr6_2e_i302 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i300)]);
  llvm_cbe_res_2e_028_2e_i305__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i306__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i302;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i311;

  do {     /* Syntactic loop 'for.body.i311' to make GCC happy */
llvm_cbe_for_2e_body_2e_i311:
  llvm_cbe_res_2e_028_2e_i305 = llvm_cbe_res_2e_028_2e_i305__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i306 = llvm_cbe__ptr_2e_027_2e_i306__PHI_TEMPORARY;
  _294 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i306));
  llvm_cbe_cond_2e_i308 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i306 == _293)&1)), _294, llvm_cbe_res_2e_028_2e_i305);
  llvm_cbe_add_2e_ptr8_2e_i309 = (&llvm_cbe__ptr_2e_027_2e_i306[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i309) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i305__PHI_TEMPORARY = llvm_cbe_cond_2e_i308;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i306__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i309;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i311;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i304__PHI_TEMPORARY = llvm_cbe_cond_2e_i308;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit312;
  }

  } while (1); /* end of syntactic loop 'for.body.i311' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit312:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i304 = llvm_cbe_res_2e_0_2e_lcssa_2e_i304__PHI_TEMPORARY;
  llvm_cbe_xor620 = llvm_cbe_res_2e_0_2e_lcssa_2e_i304 ^ llvm_cbe_xor569;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx624 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor616, 8)) & 63))))]);
  _295 = ((uint8_t*)llvm_cbe_arrayidx624);
  llvm_cbe_and_2e_i287 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx624)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i287) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i290;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i291__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit299;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i290:
  llvm_cbe_add_2e_ptr6_2e_i289 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i287)]);
  llvm_cbe_res_2e_028_2e_i292__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i293__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i289;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i298;

  do {     /* Syntactic loop 'for.body.i298' to make GCC happy */
llvm_cbe_for_2e_body_2e_i298:
  llvm_cbe_res_2e_028_2e_i292 = llvm_cbe_res_2e_028_2e_i292__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i293 = llvm_cbe__ptr_2e_027_2e_i293__PHI_TEMPORARY;
  _296 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i293));
  llvm_cbe_cond_2e_i295 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i293 == _295)&1)), _296, llvm_cbe_res_2e_028_2e_i292);
  llvm_cbe_add_2e_ptr8_2e_i296 = (&llvm_cbe__ptr_2e_027_2e_i293[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i296) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i292__PHI_TEMPORARY = llvm_cbe_cond_2e_i295;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i293__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i296;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i298;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i291__PHI_TEMPORARY = llvm_cbe_cond_2e_i295;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit299;
  }

  } while (1); /* end of syntactic loop 'for.body.i298' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit299:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i291 = llvm_cbe_res_2e_0_2e_lcssa_2e_i291__PHI_TEMPORARY;
  llvm_cbe_xor625 = llvm_cbe_xor620 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i291;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx629 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor616, 16)) & 63))))]);
  _297 = ((uint8_t*)llvm_cbe_arrayidx629);
  llvm_cbe_and_2e_i274 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx629)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i274) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i277;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i278__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit286;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i277:
  llvm_cbe_add_2e_ptr6_2e_i276 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i274)]);
  llvm_cbe_res_2e_028_2e_i279__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i280__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i276;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i285;

  do {     /* Syntactic loop 'for.body.i285' to make GCC happy */
llvm_cbe_for_2e_body_2e_i285:
  llvm_cbe_res_2e_028_2e_i279 = llvm_cbe_res_2e_028_2e_i279__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i280 = llvm_cbe__ptr_2e_027_2e_i280__PHI_TEMPORARY;
  _298 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i280));
  llvm_cbe_cond_2e_i282 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i280 == _297)&1)), _298, llvm_cbe_res_2e_028_2e_i279);
  llvm_cbe_add_2e_ptr8_2e_i283 = (&llvm_cbe__ptr_2e_027_2e_i280[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i283) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i279__PHI_TEMPORARY = llvm_cbe_cond_2e_i282;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i280__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i283;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i285;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i278__PHI_TEMPORARY = llvm_cbe_cond_2e_i282;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit286;
  }

  } while (1); /* end of syntactic loop 'for.body.i285' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit286:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i278 = llvm_cbe_res_2e_0_2e_lcssa_2e_i278__PHI_TEMPORARY;
  llvm_cbe_xor630 = llvm_cbe_xor625 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i278;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx634 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor616, 24)) & 63))))]);
  _299 = ((uint8_t*)llvm_cbe_arrayidx634);
  llvm_cbe_and_2e_i261 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx634)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i261) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i264;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i265__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit273;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i264:
  llvm_cbe_add_2e_ptr6_2e_i263 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i261)]);
  llvm_cbe_res_2e_028_2e_i266__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i267__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i263;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i272;

  do {     /* Syntactic loop 'for.body.i272' to make GCC happy */
llvm_cbe_for_2e_body_2e_i272:
  llvm_cbe_res_2e_028_2e_i266 = llvm_cbe_res_2e_028_2e_i266__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i267 = llvm_cbe__ptr_2e_027_2e_i267__PHI_TEMPORARY;
  _300 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i267));
  llvm_cbe_cond_2e_i269 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i267 == _299)&1)), _300, llvm_cbe_res_2e_028_2e_i266);
  llvm_cbe_add_2e_ptr8_2e_i270 = (&llvm_cbe__ptr_2e_027_2e_i267[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i270) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i266__PHI_TEMPORARY = llvm_cbe_cond_2e_i269;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i267__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i270;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i272;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i265__PHI_TEMPORARY = llvm_cbe_cond_2e_i269;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit273;
  }

  } while (1); /* end of syntactic loop 'for.body.i272' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit273:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i265 = llvm_cbe_res_2e_0_2e_lcssa_2e_i265__PHI_TEMPORARY;
  llvm_cbe_xor635 = llvm_cbe_xor630 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i265;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr639 = (&llvm_cbe_ctx->field0.array[((int64_t)28)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _301 = *llvm_cbe_incdec_2e_ptr615;
  llvm_cbe_xor640 = _301 ^ ((llvm_cbe_xor614 << 28) | (llvm_lshr_u32(llvm_cbe_xor614, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx643 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor640 & 63))))]);
  _302 = ((uint8_t*)llvm_cbe_arrayidx643);
  llvm_cbe_and_2e_i248 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx643)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i248) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i251;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i252__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit260;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i251:
  llvm_cbe_add_2e_ptr6_2e_i250 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i248)]);
  llvm_cbe_res_2e_028_2e_i253__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i254__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i250;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i259;

  do {     /* Syntactic loop 'for.body.i259' to make GCC happy */
llvm_cbe_for_2e_body_2e_i259:
  llvm_cbe_res_2e_028_2e_i253 = llvm_cbe_res_2e_028_2e_i253__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i254 = llvm_cbe__ptr_2e_027_2e_i254__PHI_TEMPORARY;
  _303 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i254));
  llvm_cbe_cond_2e_i256 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i254 == _302)&1)), _303, llvm_cbe_res_2e_028_2e_i253);
  llvm_cbe_add_2e_ptr8_2e_i257 = (&llvm_cbe__ptr_2e_027_2e_i254[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i257) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i253__PHI_TEMPORARY = llvm_cbe_cond_2e_i256;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i254__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i257;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i259;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i252__PHI_TEMPORARY = llvm_cbe_cond_2e_i256;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit260;
  }

  } while (1); /* end of syntactic loop 'for.body.i259' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit260:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i252 = llvm_cbe_res_2e_0_2e_lcssa_2e_i252__PHI_TEMPORARY;
  llvm_cbe_xor644 = llvm_cbe_xor635 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i252;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx648 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor640, 8)) & 63))))]);
  _304 = ((uint8_t*)llvm_cbe_arrayidx648);
  llvm_cbe_and_2e_i235 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx648)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i235) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i238;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i239__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit247;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i238:
  llvm_cbe_add_2e_ptr6_2e_i237 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i235)]);
  llvm_cbe_res_2e_028_2e_i240__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i241__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i237;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i246;

  do {     /* Syntactic loop 'for.body.i246' to make GCC happy */
llvm_cbe_for_2e_body_2e_i246:
  llvm_cbe_res_2e_028_2e_i240 = llvm_cbe_res_2e_028_2e_i240__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i241 = llvm_cbe__ptr_2e_027_2e_i241__PHI_TEMPORARY;
  _305 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i241));
  llvm_cbe_cond_2e_i243 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i241 == _304)&1)), _305, llvm_cbe_res_2e_028_2e_i240);
  llvm_cbe_add_2e_ptr8_2e_i244 = (&llvm_cbe__ptr_2e_027_2e_i241[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i244) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i240__PHI_TEMPORARY = llvm_cbe_cond_2e_i243;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i241__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i244;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i246;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i239__PHI_TEMPORARY = llvm_cbe_cond_2e_i243;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit247;
  }

  } while (1); /* end of syntactic loop 'for.body.i246' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit247:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i239 = llvm_cbe_res_2e_0_2e_lcssa_2e_i239__PHI_TEMPORARY;
  llvm_cbe_xor649 = llvm_cbe_xor644 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i239;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx653 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor640, 16)) & 63))))]);
  _306 = ((uint8_t*)llvm_cbe_arrayidx653);
  llvm_cbe_and_2e_i222 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx653)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i222) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i225;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i226__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit234;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i225:
  llvm_cbe_add_2e_ptr6_2e_i224 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i222)]);
  llvm_cbe_res_2e_028_2e_i227__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i228__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i224;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i233;

  do {     /* Syntactic loop 'for.body.i233' to make GCC happy */
llvm_cbe_for_2e_body_2e_i233:
  llvm_cbe_res_2e_028_2e_i227 = llvm_cbe_res_2e_028_2e_i227__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i228 = llvm_cbe__ptr_2e_027_2e_i228__PHI_TEMPORARY;
  _307 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i228));
  llvm_cbe_cond_2e_i230 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i228 == _306)&1)), _307, llvm_cbe_res_2e_028_2e_i227);
  llvm_cbe_add_2e_ptr8_2e_i231 = (&llvm_cbe__ptr_2e_027_2e_i228[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i231) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i227__PHI_TEMPORARY = llvm_cbe_cond_2e_i230;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i228__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i231;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i233;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i226__PHI_TEMPORARY = llvm_cbe_cond_2e_i230;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit234;
  }

  } while (1); /* end of syntactic loop 'for.body.i233' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit234:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i226 = llvm_cbe_res_2e_0_2e_lcssa_2e_i226__PHI_TEMPORARY;
  llvm_cbe_xor654 = llvm_cbe_xor649 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i226;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 680 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx658 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor640, 24)) & 63))))]);
  _308 = ((uint8_t*)llvm_cbe_arrayidx658);
  llvm_cbe_and_2e_i209 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx658)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i209) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i212;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i213__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit221;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i212:
  llvm_cbe_add_2e_ptr6_2e_i211 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i209)]);
  llvm_cbe_res_2e_028_2e_i214__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i215__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i211;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i220;

  do {     /* Syntactic loop 'for.body.i220' to make GCC happy */
llvm_cbe_for_2e_body_2e_i220:
  llvm_cbe_res_2e_028_2e_i214 = llvm_cbe_res_2e_028_2e_i214__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i215 = llvm_cbe__ptr_2e_027_2e_i215__PHI_TEMPORARY;
  _309 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i215));
  llvm_cbe_cond_2e_i217 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i215 == _308)&1)), _309, llvm_cbe_res_2e_028_2e_i214);
  llvm_cbe_add_2e_ptr8_2e_i218 = (&llvm_cbe__ptr_2e_027_2e_i215[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i218) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i214__PHI_TEMPORARY = llvm_cbe_cond_2e_i217;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i215__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i218;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i220;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i213__PHI_TEMPORARY = llvm_cbe_cond_2e_i217;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit221;
  }

  } while (1); /* end of syntactic loop 'for.body.i220' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit221:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i213 = llvm_cbe_res_2e_0_2e_lcssa_2e_i213__PHI_TEMPORARY;
  llvm_cbe_xor659 = llvm_cbe_xor654 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i213;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr660 = (&llvm_cbe_ctx->field0.array[((int64_t)29)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _310 = *llvm_cbe_incdec_2e_ptr639;
  llvm_cbe_xor661 = llvm_cbe_xor659 ^ _310;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx664 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor661 & 63))))]);
  _311 = ((uint8_t*)llvm_cbe_arrayidx664);
  llvm_cbe_and_2e_i196 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx664)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i196) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i199;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i200__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit208;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i199:
  llvm_cbe_add_2e_ptr6_2e_i198 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i196)]);
  llvm_cbe_res_2e_028_2e_i201__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i202__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i198;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i207;

  do {     /* Syntactic loop 'for.body.i207' to make GCC happy */
llvm_cbe_for_2e_body_2e_i207:
  llvm_cbe_res_2e_028_2e_i201 = llvm_cbe_res_2e_028_2e_i201__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i202 = llvm_cbe__ptr_2e_027_2e_i202__PHI_TEMPORARY;
  _312 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i202));
  llvm_cbe_cond_2e_i204 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i202 == _311)&1)), _312, llvm_cbe_res_2e_028_2e_i201);
  llvm_cbe_add_2e_ptr8_2e_i205 = (&llvm_cbe__ptr_2e_027_2e_i202[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i205) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i201__PHI_TEMPORARY = llvm_cbe_cond_2e_i204;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i202__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i205;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i207;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i200__PHI_TEMPORARY = llvm_cbe_cond_2e_i204;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit208;
  }

  } while (1); /* end of syntactic loop 'for.body.i207' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit208:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i200 = llvm_cbe_res_2e_0_2e_lcssa_2e_i200__PHI_TEMPORARY;
  llvm_cbe_xor665 = llvm_cbe_res_2e_0_2e_lcssa_2e_i200 ^ llvm_cbe_xor614;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx669 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor661, 8)) & 63))))]);
  _313 = ((uint8_t*)llvm_cbe_arrayidx669);
  llvm_cbe_and_2e_i183 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx669)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i183) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i186;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i187__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit195;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i186:
  llvm_cbe_add_2e_ptr6_2e_i185 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i183)]);
  llvm_cbe_res_2e_028_2e_i188__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i189__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i185;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i194;

  do {     /* Syntactic loop 'for.body.i194' to make GCC happy */
llvm_cbe_for_2e_body_2e_i194:
  llvm_cbe_res_2e_028_2e_i188 = llvm_cbe_res_2e_028_2e_i188__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i189 = llvm_cbe__ptr_2e_027_2e_i189__PHI_TEMPORARY;
  _314 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i189));
  llvm_cbe_cond_2e_i191 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i189 == _313)&1)), _314, llvm_cbe_res_2e_028_2e_i188);
  llvm_cbe_add_2e_ptr8_2e_i192 = (&llvm_cbe__ptr_2e_027_2e_i189[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i192) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i188__PHI_TEMPORARY = llvm_cbe_cond_2e_i191;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i189__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i192;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i194;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i187__PHI_TEMPORARY = llvm_cbe_cond_2e_i191;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit195;
  }

  } while (1); /* end of syntactic loop 'for.body.i194' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit195:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i187 = llvm_cbe_res_2e_0_2e_lcssa_2e_i187__PHI_TEMPORARY;
  llvm_cbe_xor670 = llvm_cbe_xor665 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i187;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx674 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor661, 16)) & 63))))]);
  _315 = ((uint8_t*)llvm_cbe_arrayidx674);
  llvm_cbe_and_2e_i170 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx674)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i170) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i173;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i174__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit182;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i173:
  llvm_cbe_add_2e_ptr6_2e_i172 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i170)]);
  llvm_cbe_res_2e_028_2e_i175__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i176__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i172;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i181;

  do {     /* Syntactic loop 'for.body.i181' to make GCC happy */
llvm_cbe_for_2e_body_2e_i181:
  llvm_cbe_res_2e_028_2e_i175 = llvm_cbe_res_2e_028_2e_i175__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i176 = llvm_cbe__ptr_2e_027_2e_i176__PHI_TEMPORARY;
  _316 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i176));
  llvm_cbe_cond_2e_i178 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i176 == _315)&1)), _316, llvm_cbe_res_2e_028_2e_i175);
  llvm_cbe_add_2e_ptr8_2e_i179 = (&llvm_cbe__ptr_2e_027_2e_i176[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i179) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i175__PHI_TEMPORARY = llvm_cbe_cond_2e_i178;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i176__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i179;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i181;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i174__PHI_TEMPORARY = llvm_cbe_cond_2e_i178;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit182;
  }

  } while (1); /* end of syntactic loop 'for.body.i181' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit182:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i174 = llvm_cbe_res_2e_0_2e_lcssa_2e_i174__PHI_TEMPORARY;
  llvm_cbe_xor675 = llvm_cbe_xor670 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i174;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx679 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor661, 24)) & 63))))]);
  _317 = ((uint8_t*)llvm_cbe_arrayidx679);
  llvm_cbe_and_2e_i157 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx679)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i157) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i160;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i161__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit169;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i160:
  llvm_cbe_add_2e_ptr6_2e_i159 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i157)]);
  llvm_cbe_res_2e_028_2e_i162__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i163__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i159;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i168;

  do {     /* Syntactic loop 'for.body.i168' to make GCC happy */
llvm_cbe_for_2e_body_2e_i168:
  llvm_cbe_res_2e_028_2e_i162 = llvm_cbe_res_2e_028_2e_i162__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i163 = llvm_cbe__ptr_2e_027_2e_i163__PHI_TEMPORARY;
  _318 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i163));
  llvm_cbe_cond_2e_i165 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i163 == _317)&1)), _318, llvm_cbe_res_2e_028_2e_i162);
  llvm_cbe_add_2e_ptr8_2e_i166 = (&llvm_cbe__ptr_2e_027_2e_i163[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i166) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i162__PHI_TEMPORARY = llvm_cbe_cond_2e_i165;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i163__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i166;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i168;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i161__PHI_TEMPORARY = llvm_cbe_cond_2e_i165;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit169;
  }

  } while (1); /* end of syntactic loop 'for.body.i168' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit169:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i161 = llvm_cbe_res_2e_0_2e_lcssa_2e_i161__PHI_TEMPORARY;
  llvm_cbe_xor680 = llvm_cbe_xor675 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i161;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr684 = (&llvm_cbe_ctx->field0.array[((int64_t)30)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _319 = *llvm_cbe_incdec_2e_ptr660;
  llvm_cbe_xor685 = _319 ^ ((llvm_cbe_xor659 << 28) | (llvm_lshr_u32(llvm_cbe_xor659, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx688 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor685 & 63))))]);
  _320 = ((uint8_t*)llvm_cbe_arrayidx688);
  llvm_cbe_and_2e_i144 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx688)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i144) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i147;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i148__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit156;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i147:
  llvm_cbe_add_2e_ptr6_2e_i146 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i144)]);
  llvm_cbe_res_2e_028_2e_i149__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i150__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i146;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i155;

  do {     /* Syntactic loop 'for.body.i155' to make GCC happy */
llvm_cbe_for_2e_body_2e_i155:
  llvm_cbe_res_2e_028_2e_i149 = llvm_cbe_res_2e_028_2e_i149__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i150 = llvm_cbe__ptr_2e_027_2e_i150__PHI_TEMPORARY;
  _321 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i150));
  llvm_cbe_cond_2e_i152 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i150 == _320)&1)), _321, llvm_cbe_res_2e_028_2e_i149);
  llvm_cbe_add_2e_ptr8_2e_i153 = (&llvm_cbe__ptr_2e_027_2e_i150[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i153) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i149__PHI_TEMPORARY = llvm_cbe_cond_2e_i152;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i150__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i153;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i155;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i148__PHI_TEMPORARY = llvm_cbe_cond_2e_i152;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit156;
  }

  } while (1); /* end of syntactic loop 'for.body.i155' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit156:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i148 = llvm_cbe_res_2e_0_2e_lcssa_2e_i148__PHI_TEMPORARY;
  llvm_cbe_xor689 = llvm_cbe_xor680 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i148;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx693 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor685, 8)) & 63))))]);
  _322 = ((uint8_t*)llvm_cbe_arrayidx693);
  llvm_cbe_and_2e_i131 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx693)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i131) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i134;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i135__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit143;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i134:
  llvm_cbe_add_2e_ptr6_2e_i133 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i131)]);
  llvm_cbe_res_2e_028_2e_i136__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i137__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i133;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i142;

  do {     /* Syntactic loop 'for.body.i142' to make GCC happy */
llvm_cbe_for_2e_body_2e_i142:
  llvm_cbe_res_2e_028_2e_i136 = llvm_cbe_res_2e_028_2e_i136__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i137 = llvm_cbe__ptr_2e_027_2e_i137__PHI_TEMPORARY;
  _323 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i137));
  llvm_cbe_cond_2e_i139 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i137 == _322)&1)), _323, llvm_cbe_res_2e_028_2e_i136);
  llvm_cbe_add_2e_ptr8_2e_i140 = (&llvm_cbe__ptr_2e_027_2e_i137[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i140) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i136__PHI_TEMPORARY = llvm_cbe_cond_2e_i139;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i137__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i140;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i142;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i135__PHI_TEMPORARY = llvm_cbe_cond_2e_i139;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit143;
  }

  } while (1); /* end of syntactic loop 'for.body.i142' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit143:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i135 = llvm_cbe_res_2e_0_2e_lcssa_2e_i135__PHI_TEMPORARY;
  llvm_cbe_xor694 = llvm_cbe_xor689 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i135;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx698 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor685, 16)) & 63))))]);
  _324 = ((uint8_t*)llvm_cbe_arrayidx698);
  llvm_cbe_and_2e_i118 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx698)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i118) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i121;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i122__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit130;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i121:
  llvm_cbe_add_2e_ptr6_2e_i120 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i118)]);
  llvm_cbe_res_2e_028_2e_i123__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i124__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i120;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i129;

  do {     /* Syntactic loop 'for.body.i129' to make GCC happy */
llvm_cbe_for_2e_body_2e_i129:
  llvm_cbe_res_2e_028_2e_i123 = llvm_cbe_res_2e_028_2e_i123__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i124 = llvm_cbe__ptr_2e_027_2e_i124__PHI_TEMPORARY;
  _325 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i124));
  llvm_cbe_cond_2e_i126 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i124 == _324)&1)), _325, llvm_cbe_res_2e_028_2e_i123);
  llvm_cbe_add_2e_ptr8_2e_i127 = (&llvm_cbe__ptr_2e_027_2e_i124[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i127) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i123__PHI_TEMPORARY = llvm_cbe_cond_2e_i126;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i124__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i127;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i129;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i122__PHI_TEMPORARY = llvm_cbe_cond_2e_i126;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit130;
  }

  } while (1); /* end of syntactic loop 'for.body.i129' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit130:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i122 = llvm_cbe_res_2e_0_2e_lcssa_2e_i122__PHI_TEMPORARY;
  llvm_cbe_xor699 = llvm_cbe_xor694 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i122;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx703 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor685, 24)) & 63))))]);
  _326 = ((uint8_t*)llvm_cbe_arrayidx703);
  llvm_cbe_and_2e_i105 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx703)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i105) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i108;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i109__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit117;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i108:
  llvm_cbe_add_2e_ptr6_2e_i107 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i105)]);
  llvm_cbe_res_2e_028_2e_i110__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i111__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i107;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i116;

  do {     /* Syntactic loop 'for.body.i116' to make GCC happy */
llvm_cbe_for_2e_body_2e_i116:
  llvm_cbe_res_2e_028_2e_i110 = llvm_cbe_res_2e_028_2e_i110__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i111 = llvm_cbe__ptr_2e_027_2e_i111__PHI_TEMPORARY;
  _327 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i111));
  llvm_cbe_cond_2e_i113 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i111 == _326)&1)), _327, llvm_cbe_res_2e_028_2e_i110);
  llvm_cbe_add_2e_ptr8_2e_i114 = (&llvm_cbe__ptr_2e_027_2e_i111[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i114) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i110__PHI_TEMPORARY = llvm_cbe_cond_2e_i113;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i111__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i114;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i116;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i109__PHI_TEMPORARY = llvm_cbe_cond_2e_i113;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit117;
  }

  } while (1); /* end of syntactic loop 'for.body.i116' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit117:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i109 = llvm_cbe_res_2e_0_2e_lcssa_2e_i109__PHI_TEMPORARY;
  llvm_cbe_xor704 = llvm_cbe_xor699 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i109;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_incdec_2e_ptr705 = (&llvm_cbe_ctx->field0.array[((int64_t)31)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _328 = *llvm_cbe_incdec_2e_ptr684;
  llvm_cbe_xor706 = llvm_cbe_xor704 ^ _328;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx709 = (&sbox8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor706 & 63))))]);
  _329 = ((uint8_t*)llvm_cbe_arrayidx709);
  llvm_cbe_and_2e_i92 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx709)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i92) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i95;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i96__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit104;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i95:
  llvm_cbe_add_2e_ptr6_2e_i94 = (&((uint8_t*)(&sbox8))[((int64_t)llvm_cbe_and_2e_i92)]);
  llvm_cbe_res_2e_028_2e_i97__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i98__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i94;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i103;

  do {     /* Syntactic loop 'for.body.i103' to make GCC happy */
llvm_cbe_for_2e_body_2e_i103:
  llvm_cbe_res_2e_028_2e_i97 = llvm_cbe_res_2e_028_2e_i97__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i98 = llvm_cbe__ptr_2e_027_2e_i98__PHI_TEMPORARY;
  _330 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i98));
  llvm_cbe_cond_2e_i100 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i98 == _329)&1)), _330, llvm_cbe_res_2e_028_2e_i97);
  llvm_cbe_add_2e_ptr8_2e_i101 = (&llvm_cbe__ptr_2e_027_2e_i98[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i101) < ((uint64_t)((&((uint8_t*)(&sbox8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i97__PHI_TEMPORARY = llvm_cbe_cond_2e_i100;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i98__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i101;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i103;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i96__PHI_TEMPORARY = llvm_cbe_cond_2e_i100;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit104;
  }

  } while (1); /* end of syntactic loop 'for.body.i103' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit104:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i96 = llvm_cbe_res_2e_0_2e_lcssa_2e_i96__PHI_TEMPORARY;
  llvm_cbe_xor710 = llvm_cbe_res_2e_0_2e_lcssa_2e_i96 ^ llvm_cbe_xor659;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx714 = (&sbox6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor706, 8)) & 63))))]);
  _331 = ((uint8_t*)llvm_cbe_arrayidx714);
  llvm_cbe_and_2e_i79 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx714)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i79) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i82;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i83__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit91;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i82:
  llvm_cbe_add_2e_ptr6_2e_i81 = (&((uint8_t*)(&sbox6))[((int64_t)llvm_cbe_and_2e_i79)]);
  llvm_cbe_res_2e_028_2e_i84__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i85__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i81;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i90;

  do {     /* Syntactic loop 'for.body.i90' to make GCC happy */
llvm_cbe_for_2e_body_2e_i90:
  llvm_cbe_res_2e_028_2e_i84 = llvm_cbe_res_2e_028_2e_i84__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i85 = llvm_cbe__ptr_2e_027_2e_i85__PHI_TEMPORARY;
  _332 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i85));
  llvm_cbe_cond_2e_i87 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i85 == _331)&1)), _332, llvm_cbe_res_2e_028_2e_i84);
  llvm_cbe_add_2e_ptr8_2e_i88 = (&llvm_cbe__ptr_2e_027_2e_i85[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i88) < ((uint64_t)((&((uint8_t*)(&sbox6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i84__PHI_TEMPORARY = llvm_cbe_cond_2e_i87;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i85__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i88;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i90;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i83__PHI_TEMPORARY = llvm_cbe_cond_2e_i87;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit91;
  }

  } while (1); /* end of syntactic loop 'for.body.i90' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit91:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i83 = llvm_cbe_res_2e_0_2e_lcssa_2e_i83__PHI_TEMPORARY;
  llvm_cbe_xor715 = llvm_cbe_xor710 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i83;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx719 = (&sbox4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor706, 16)) & 63))))]);
  _333 = ((uint8_t*)llvm_cbe_arrayidx719);
  llvm_cbe_and_2e_i66 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx719)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i66) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i69;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i70__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit78;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i69:
  llvm_cbe_add_2e_ptr6_2e_i68 = (&((uint8_t*)(&sbox4))[((int64_t)llvm_cbe_and_2e_i66)]);
  llvm_cbe_res_2e_028_2e_i71__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i72__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i68;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i77;

  do {     /* Syntactic loop 'for.body.i77' to make GCC happy */
llvm_cbe_for_2e_body_2e_i77:
  llvm_cbe_res_2e_028_2e_i71 = llvm_cbe_res_2e_028_2e_i71__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i72 = llvm_cbe__ptr_2e_027_2e_i72__PHI_TEMPORARY;
  _334 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i72));
  llvm_cbe_cond_2e_i74 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i72 == _333)&1)), _334, llvm_cbe_res_2e_028_2e_i71);
  llvm_cbe_add_2e_ptr8_2e_i75 = (&llvm_cbe__ptr_2e_027_2e_i72[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i75) < ((uint64_t)((&((uint8_t*)(&sbox4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i71__PHI_TEMPORARY = llvm_cbe_cond_2e_i74;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i72__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i75;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i77;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i70__PHI_TEMPORARY = llvm_cbe_cond_2e_i74;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit78;
  }

  } while (1); /* end of syntactic loop 'for.body.i77' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit78:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i70 = llvm_cbe_res_2e_0_2e_lcssa_2e_i70__PHI_TEMPORARY;
  llvm_cbe_xor720 = llvm_cbe_xor715 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i70;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx724 = (&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor706, 24)) & 63))))]);
  _335 = ((uint8_t*)llvm_cbe_arrayidx724);
  llvm_cbe_and_2e_i53 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx724)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i53) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i56;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i57__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit65;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i56:
  llvm_cbe_add_2e_ptr6_2e_i55 = (&((uint8_t*)(&sbox2))[((int64_t)llvm_cbe_and_2e_i53)]);
  llvm_cbe_res_2e_028_2e_i58__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i59__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i55;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i64;

  do {     /* Syntactic loop 'for.body.i64' to make GCC happy */
llvm_cbe_for_2e_body_2e_i64:
  llvm_cbe_res_2e_028_2e_i58 = llvm_cbe_res_2e_028_2e_i58__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i59 = llvm_cbe__ptr_2e_027_2e_i59__PHI_TEMPORARY;
  _336 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i59));
  llvm_cbe_cond_2e_i61 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i59 == _335)&1)), _336, llvm_cbe_res_2e_028_2e_i58);
  llvm_cbe_add_2e_ptr8_2e_i62 = (&llvm_cbe__ptr_2e_027_2e_i59[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i62) < ((uint64_t)((&((uint8_t*)(&sbox2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i58__PHI_TEMPORARY = llvm_cbe_cond_2e_i61;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i59__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i62;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i64;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i57__PHI_TEMPORARY = llvm_cbe_cond_2e_i61;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit65;
  }

  } while (1); /* end of syntactic loop 'for.body.i64' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit65:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i57 = llvm_cbe_res_2e_0_2e_lcssa_2e_i57__PHI_TEMPORARY;
  llvm_cbe_xor725 = llvm_cbe_xor720 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i57;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  _337 = *llvm_cbe_incdec_2e_ptr705;
  llvm_cbe_xor730 = _337 ^ ((llvm_cbe_xor704 << 28) | (llvm_lshr_u32(llvm_cbe_xor704, 4)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx733 = (&sbox7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor730 & 63))))]);
  _338 = ((uint8_t*)llvm_cbe_arrayidx733);
  llvm_cbe_and_2e_i40 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx733)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i40) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i43;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i44__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit52;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i43:
  llvm_cbe_add_2e_ptr6_2e_i42 = (&((uint8_t*)(&sbox7))[((int64_t)llvm_cbe_and_2e_i40)]);
  llvm_cbe_res_2e_028_2e_i45__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i46__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i42;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i51;

  do {     /* Syntactic loop 'for.body.i51' to make GCC happy */
llvm_cbe_for_2e_body_2e_i51:
  llvm_cbe_res_2e_028_2e_i45 = llvm_cbe_res_2e_028_2e_i45__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i46 = llvm_cbe__ptr_2e_027_2e_i46__PHI_TEMPORARY;
  _339 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i46));
  llvm_cbe_cond_2e_i48 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i46 == _338)&1)), _339, llvm_cbe_res_2e_028_2e_i45);
  llvm_cbe_add_2e_ptr8_2e_i49 = (&llvm_cbe__ptr_2e_027_2e_i46[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i49) < ((uint64_t)((&((uint8_t*)(&sbox7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i45__PHI_TEMPORARY = llvm_cbe_cond_2e_i48;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i46__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i49;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i51;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i44__PHI_TEMPORARY = llvm_cbe_cond_2e_i48;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit52;
  }

  } while (1); /* end of syntactic loop 'for.body.i51' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit52:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i44 = llvm_cbe_res_2e_0_2e_lcssa_2e_i44__PHI_TEMPORARY;
  llvm_cbe_xor734 = llvm_cbe_xor725 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i44;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx738 = (&sbox5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor730, 8)) & 63))))]);
  _340 = ((uint8_t*)llvm_cbe_arrayidx738);
  llvm_cbe_and_2e_i27 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx738)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i27) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i30;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i31__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit39;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i30:
  llvm_cbe_add_2e_ptr6_2e_i29 = (&((uint8_t*)(&sbox5))[((int64_t)llvm_cbe_and_2e_i27)]);
  llvm_cbe_res_2e_028_2e_i32__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i33__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i29;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i38;

  do {     /* Syntactic loop 'for.body.i38' to make GCC happy */
llvm_cbe_for_2e_body_2e_i38:
  llvm_cbe_res_2e_028_2e_i32 = llvm_cbe_res_2e_028_2e_i32__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i33 = llvm_cbe__ptr_2e_027_2e_i33__PHI_TEMPORARY;
  _341 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i33));
  llvm_cbe_cond_2e_i35 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i33 == _340)&1)), _341, llvm_cbe_res_2e_028_2e_i32);
  llvm_cbe_add_2e_ptr8_2e_i36 = (&llvm_cbe__ptr_2e_027_2e_i33[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i36) < ((uint64_t)((&((uint8_t*)(&sbox5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i32__PHI_TEMPORARY = llvm_cbe_cond_2e_i35;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i33__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i36;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i38;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i31__PHI_TEMPORARY = llvm_cbe_cond_2e_i35;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit39;
  }

  } while (1); /* end of syntactic loop 'for.body.i38' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit39:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i31 = llvm_cbe_res_2e_0_2e_lcssa_2e_i31__PHI_TEMPORARY;
  llvm_cbe_xor739 = llvm_cbe_xor734 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i31;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx743 = (&sbox3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor730, 16)) & 63))))]);
  _342 = ((uint8_t*)llvm_cbe_arrayidx743);
  llvm_cbe_and_2e_i14 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx743)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i14) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i17;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i18__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit26;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i17:
  llvm_cbe_add_2e_ptr6_2e_i16 = (&((uint8_t*)(&sbox3))[((int64_t)llvm_cbe_and_2e_i14)]);
  llvm_cbe_res_2e_028_2e_i19__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i20__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i16;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i25;

  do {     /* Syntactic loop 'for.body.i25' to make GCC happy */
llvm_cbe_for_2e_body_2e_i25:
  llvm_cbe_res_2e_028_2e_i19 = llvm_cbe_res_2e_028_2e_i19__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i20 = llvm_cbe__ptr_2e_027_2e_i20__PHI_TEMPORARY;
  _343 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i20));
  llvm_cbe_cond_2e_i22 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i20 == _342)&1)), _343, llvm_cbe_res_2e_028_2e_i19);
  llvm_cbe_add_2e_ptr8_2e_i23 = (&llvm_cbe__ptr_2e_027_2e_i20[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i23) < ((uint64_t)((&((uint8_t*)(&sbox3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i19__PHI_TEMPORARY = llvm_cbe_cond_2e_i22;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i20__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i23;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i25;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i18__PHI_TEMPORARY = llvm_cbe_cond_2e_i22;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit26;
  }

  } while (1); /* end of syntactic loop 'for.body.i25' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit26:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i18 = llvm_cbe_res_2e_0_2e_lcssa_2e_i18__PHI_TEMPORARY;
  llvm_cbe_xor744 = llvm_cbe_xor739 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i18;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 681 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_arrayidx748 = (&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor730, 24)) & 63))))]);
  _344 = ((uint8_t*)llvm_cbe_arrayidx748);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx748)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sbox1))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_028_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_028_2e_i6 = llvm_cbe_res_2e_028_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i7 = llvm_cbe__ptr_2e_027_2e_i7__PHI_TEMPORARY;
  _345 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i7));
  llvm_cbe_cond_2e_i9 = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i7 == _344)&1)), _345, llvm_cbe_res_2e_028_2e_i6);
  llvm_cbe_add_2e_ptr8_2e_i10 = (&llvm_cbe__ptr_2e_027_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i10) < ((uint64_t)((&((uint8_t*)(&sbox1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sbox1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sbox1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_xor749 = llvm_cbe_xor744 ^ llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_or752 = (llvm_cbe_xor749 << 31) | (llvm_lshr_u32(llvm_cbe_xor749, 1));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and754 = (llvm_cbe_or752 ^ llvm_cbe_xor704) & 2863311530u;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor755 = llvm_cbe_and754 ^ llvm_cbe_or752;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_or759 = (llvm_lshr_u32((llvm_cbe_and754 ^ llvm_cbe_xor704), 1)) | (llvm_cbe_xor704 << 31);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and762 = ((llvm_lshr_u32(llvm_cbe_or759, 8)) ^ llvm_cbe_xor755) & 16711935;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor763 = llvm_cbe_and762 ^ llvm_cbe_xor755;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor765 = (llvm_cbe_and762 << 8) ^ llvm_cbe_or759;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and768 = ((llvm_lshr_u32(llvm_cbe_xor765, 2)) ^ llvm_cbe_xor763) & 858993459;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor769 = llvm_cbe_and768 ^ llvm_cbe_xor763;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor771 = (llvm_cbe_and768 << 2) ^ llvm_cbe_xor765;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and774 = (llvm_cbe_xor771 & 65535) ^ (llvm_lshr_u32(llvm_cbe_xor769, 16));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor775 = llvm_cbe_and774 ^ llvm_cbe_xor771;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor777 = (llvm_cbe_and774 << 16) ^ llvm_cbe_xor769;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_and780 = ((llvm_lshr_u32(llvm_cbe_xor777, 4)) ^ llvm_cbe_xor775) & 252645135;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor781 = llvm_cbe_and780 ^ llvm_cbe_xor775;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
#line 683 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  llvm_cbe_xor783 = (llvm_cbe_and780 << 4) ^ llvm_cbe_xor777;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
  ;
#line 140 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)0)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor783, 24))));
#line 141 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor783, 16))));
#line 142 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)2)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor783, 8))));
#line 143 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)3)])) = (((uint8_t)llvm_cbe_xor783));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  ;
  ;
  ;
#line 140 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)4)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor781, 24))));
#line 141 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)5)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor781, 16))));
#line 142 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)6)])) = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor781, 8))));
#line 143 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/libg/des.c"
  *((&out.array[((int64_t)7)])) = (((uint8_t)llvm_cbe_xor781));
}


void dfl_init(void) {
  __asm__ volatile (""
        :
        :);
}


void dfl_id_print(uint64_t llvm_cbe_bgid, uint64_t llvm_cbe_ibid) {
  return;
}


int main(int argc, char ** argv) {
  uint32_t _346 = (uint32_t)argc;
  uint8_t** _347 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

