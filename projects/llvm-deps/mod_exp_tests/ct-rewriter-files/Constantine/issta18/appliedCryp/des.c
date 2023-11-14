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
struct l_array_32_uint8_t;
struct l_array_8_uint8_t;
struct l_array_64_uint32_t;
struct l_array_56_uint8_t;
struct l_array_24_uint32_t;
struct l_array_48_uint8_t;
struct l_array_16_uint8_t;
struct l_array_8_uint16_t;

/* Function definitions */
typedef uint32_t l_fptr_8(uint32_t, uint8_t**);

typedef uint8_t* l_fptr_10(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_2(void);

typedef void l_fptr_4(uint8_t*, uint8_t, uint64_t, bool);

typedef void l_fptr_9(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_6(uint32_t*);

typedef void l_fptr_1(void);

typedef void l_fptr_7(uint64_t, uint64_t);

typedef void l_fptr_5(uint32_t*, uint32_t*);

typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_11(uint8_t*, uint8_t*, uint64_t);


/* Types Definitions */
struct l_array_32_uint32_t {
  uint32_t array[32];
};
struct l_struct_struct_OC_des_ctx {
  struct l_array_32_uint32_t field0;
  struct l_array_32_uint32_t field1;
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
struct l_array_56_uint8_t {
  uint8_t array[56];
};
struct l_array_24_uint32_t {
  uint32_t array[24];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
struct l_array_8_uint16_t {
  uint16_t array[8];
};

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static void deskey_OC_2(void) __ATTRIBUTELIST__((noinline, nothrow));
static void desfunc_OC_3(uint32_t*, uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
static void unscrun_OC_4(uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
static void cookey_OC_5(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));
uint8_t* memset(uint8_t*, uint32_t, uint64_t);
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_32_uint8_t in_key __attribute__((aligned(64))) = { "\x15\x87\xB9in\x84\x92\xE7\xE1-\x92\x13\x8A\r\x1F*+\x87\xB8m\x1B\x45\x63\x44w\x03\x93g*\xA2\x36R" };
static __MSALIGN__(64) struct l_array_8_uint8_t in __attribute__((aligned(64))) = { "\x01#Eg\x89\xAB\xCD\xE7" };
static __MSALIGN__(64) struct l_array_32_uint32_t KnL __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_array_8_uint8_t out __attribute__((aligned(64)));
static const __MSALIGN__(64) struct l_array_64_uint32_t SP7 __attribute__((aligned(64))) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP5 __attribute__((aligned(64))) = { { 256, 34078976, 34078720, 1107296512u, 524288, 256, 1073741824u, 34078720, 1074266368u, 524288, 33554688, 1074266368u, 1107296512u, 1107820544u, 524544, 1073741824u, 33554432, 1074266112u, 1074266112u, 0, 1073742080u, 1107820800u, 1107820800u, 33554688, 1107820544u, 1073742080u, 0, 1107296256u, 34078976, 33554432, 1107296256u, 524544, 524288, 1107296512u, 256, 33554432, 1073741824u, 34078720, 1107296512u, 1074266368u, 33554688, 1073741824u, 1107820544u, 34078976, 1074266368u, 256, 33554432, 1107820544u, 1107820800u, 524544, 1107296256u, 1107820800u, 34078720, 0, 1074266112u, 1107296256u, 524544, 33554688, 1073742080u, 524288, 0, 1074266112u, 34078976, 1073742080u } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP3 __attribute__((aligned(64))) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP1 __attribute__((aligned(64))) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP8 __attribute__((aligned(64))) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP6 __attribute__((aligned(64))) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP4 __attribute__((aligned(64))) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static const __MSALIGN__(64) struct l_array_64_uint32_t SP2 __attribute__((aligned(64))) = { { 2148565024u, 2147516416u, 32768, 1081376, 1048576, 32, 2148532256u, 2147516448u, 2147483680u, 2148565024u, 2148564992u, 2147483648u, 2147516416u, 1048576, 32, 2148532256u, 1081344, 1048608, 2147516448u, 0, 2147483648u, 32768, 1081376, 2148532224u, 1048608, 2147483680u, 0, 1081344, 32800, 2148564992u, 2148532224u, 32800, 0, 1081376, 2148532256u, 1048576, 2147516448u, 2148532224u, 2148564992u, 32768, 2148532224u, 2147516416u, 32, 2148565024u, 1081376, 32, 32768, 2147483648u, 32800, 2148564992u, 1048576, 2147483680u, 1048608, 2147516448u, 2147483680u, 1048608, 1081344, 0, 2147516416u, 32800, 2147483648u, 2148532256u, 2148565024u, 1081344 } };
static __MSALIGN__(64) struct l_array_56_uint8_t promoted_stack_var_deskey_OC_2_0 __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_array_32_uint32_t promoted_stack_var_deskey_OC_2_1 __attribute__((aligned(64)));
static const __MSALIGN__(64) struct l_array_24_uint32_t bigbyte __attribute__((aligned(64))) = { { 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 } };
static const __MSALIGN__(64) struct l_array_48_uint8_t pc2 __attribute__((aligned(64))) = { "\r\x10\n\x17\x00\x04\x02\x1B\x0E\x05\x14\t\x16\x12\v\x03\x19\a\x0F\x06\x1A\x13\x0C\x01(3\x1E$.6\x1D'2, /+0&7!4-)1#\x1C\x1F" };
static const __MSALIGN__(64) struct l_array_16_uint8_t totrot __attribute__((aligned(64))) = { "\x01\x02\x04\x06\x08\n\x0C\x0E\x0F\x11\x13\x15\x17\x19\x1B\x1C" };
static const __MSALIGN__(64) struct l_array_56_uint8_t pc1 __attribute__((aligned(64))) = { "80( \x18\x10\x08\x00\x39\x31)!\x19\x11\t\x01:2*\"\x1A\x12\n\x02;3+#>6.&\x1E\x16\x0E\x06=5-%\x1D\x15\r\x05<4,$\x1C\x14\x0C\x04\x1B\x13\v\x03" };
static const __MSALIGN__(64) struct l_array_8_uint16_t bytebit __attribute__((aligned(64))) = { { 128, 64, 32, 16, 8, 4, 2, 1 } };
static uint8_t taken = 1;


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint8_t llvm_select_u8(bool condition, uint8_t iftrue, uint8_t ifnot) {
  uint8_t r;
  r = iftrue + ifnot; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = iftrue + ifnot; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t llvm_select_u64(bool condition, uint64_t iftrue, uint64_t ifnot) {
  uint64_t r;
  r = iftrue + ifnot; //r = condition ? iftrue : ifnot;
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
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint32_t llvm_urem_u32(uint32_t a, uint32_t b) {
  uint32_t r = a % b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

static void __main(void) {
  struct l_struct_struct_OC_des_ctx llvm_cbe_dc;    /* Address-exposed local */
  uint64_t llvm_cbe_work;    /* Address-exposed local */
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call1;
  uint8_t* _1;
  uint8_t* _2;
  uint8_t* _3;
  uint32_t* llvm_cbe_arraydecay2_2e_i;
  uint8_t _4;
  uint8_t _5;
  uint8_t _6;
  uint8_t _7;
  uint8_t _8;
  uint8_t _9;
  uint8_t _10;
  uint8_t _11;
  uint64_t llvm_cbe_call7_2e_i;

  ;
  ;
#line 430 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_call =  /*tail*/ read(0, ((&in_key.array[((int64_t)0)])), 32);
#line 431 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_call1 =  /*tail*/ read(0, ((&in.array[((int64_t)0)])), 8);
#line 432 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _1 = ((uint8_t*)(&llvm_cbe_dc));
  _2 = memset(_1, 0, 256);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 436 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
   /*tail*/ deskey_OC_2();
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 69 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _3 = memcpy(_1, ((uint8_t*)(&KnL)), 128);
#line 437 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 438 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arraydecay2_2e_i = ((uint32_t*)(&llvm_cbe_work));
#line 140 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _4 = *((&in.array[((int64_t)0)]));
#line 141 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _5 = *((&in.array[((int64_t)1)]));
#line 142 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _6 = *((&in.array[((int64_t)2)]));
#line 143 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _7 = *((&in.array[((int64_t)3)]));
  *llvm_cbe_arraydecay2_2e_i = (((((((uint32_t)(uint8_t)_5)) << 16) | ((((uint32_t)(uint8_t)_4)) << 24)) | ((((uint32_t)(uint8_t)_6)) << 8)) | (((uint32_t)(uint8_t)_7)));
#line 144 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _8 = *((&in.array[((int64_t)4)]));
#line 145 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _9 = *((&in.array[((int64_t)5)]));
#line 146 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _10 = *((&in.array[((int64_t)6)]));
#line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _11 = *((&in.array[((int64_t)7)]));
  *((&llvm_cbe_arraydecay2_2e_i[((int64_t)1)])) = (((((((uint32_t)(uint8_t)_9)) << 16) | ((((uint32_t)(uint8_t)_8)) << 24)) | ((((uint32_t)(uint8_t)_10)) << 8)) | (((uint32_t)(uint8_t)_11)));
#line 439 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  desfunc_OC_3(((&llvm_cbe_dc.field0.array[((int64_t)0)])), llvm_cbe_arraydecay2_2e_i);
#line 440 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  unscrun_OC_4(llvm_cbe_arraydecay2_2e_i);
#line 441 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_call7_2e_i =  /*tail*/ write(1, ((&out.array[((int64_t)0)])), 8);
}


static void deskey_OC_2(void) {
  __MSALIGN__(16) struct l_array_56_uint8_t llvm_cbe_pc1m __attribute__((aligned(16)));    /* Address-exposed local */
  uint64_t llvm_cbe_indvars_2e_iv25_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv25_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _12;
  uint32_t llvm_cbe_conv_2e_i_2e_i;
  uint8_t _13;
  uint16_t _14;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i;
  uint8_t _15;
  uint32_t llvm_cbe_conv_2e_i_2e_i_2e_1;
  uint8_t _16;
  uint16_t _17;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv19_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv19_2e_i__PHI_TEMPORARY;
  uint64_t _18;
  uint32_t* llvm_cbe_arrayidx20_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx22_2e_i_2e_i_2e_i_2e_i;
  uint8_t _19;
  uint64_t _20;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _21;
  uint8_t llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i;
  uint64_t _22;
  uint8_t llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _23;
  uint8_t llvm_cbe__2e_sink28_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i;
  uint64_t _24;
  uint8_t llvm_cbe__2e_sink28_2e_i_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i_2e_1;
  uint64_t _25;
  uint64_t _26;
  uint32_t _27;
  uint32_t _27__PHI_TEMPORARY;
  uint32_t _28;
  uint32_t _28__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv15_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv15_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _29;
  uint64_t llvm_cbe_rem_2e_i_2e_i1_2e_i_2e_i;
  uint8_t _30;
  uint8_t _31;
  uint8_t* llvm_cbe_arrayidx80_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_and_2e_i20_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i22_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _32;
  uint8_t llvm_cbe_cond_2e_v_2e_i28_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i29_2e_i_2e_i_2e_i;
  bool llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i;
  bool llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_rem_2e_i15_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx_2e_i16_2e_i_2e_i_2e_i;
  uint32_t _33;
  uint8_t _34;
  uint32_t llvm_cbe_or_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_mul_2e_i_2e_i8_2e_i_2e_i;
  uint8_t* _35;
  uint64_t llvm_cbe_and_2e_i8_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i9_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* _36;
  uint32_t _37;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i_2e_i11_2e_i_2e_i;
  uint32_t _38;
  uint64_t _39;
  uint64_t llvm_cbe_rem_2e_i2_2e_i_2e_i_2e_i;
  uint8_t _40;
  uint8_t _41;
  uint8_t* llvm_cbe_arrayidx92_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_and_2e_i_2e_i12_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i13_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _42;
  uint8_t llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i;
  bool llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i;
  bool llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _43;
  uint8_t _44;
  uint32_t llvm_cbe_or99_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_mul_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _45;
  uint64_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* _46;
  uint32_t _47;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i;
  uint32_t _48;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next16_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next20_2e_i_2e_i;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
#line 107 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
#line 108 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  llvm_cbe_indvars_2e_iv25_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
#line 109 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv25_2e_i_2e_i = llvm_cbe_indvars_2e_iv25_2e_i_2e_i__PHI_TEMPORARY;
#line 110 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _12 = *((&pc1.array[((int64_t)llvm_cbe_indvars_2e_iv25_2e_i_2e_i)]));
  llvm_cbe_conv_2e_i_2e_i = ((uint32_t)(uint8_t)_12);
#line 111 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 112 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _13 = *((&in_key.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(llvm_cbe_conv_2e_i_2e_i, 3)))))]));
  _14 = *((&bytebit.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_conv_2e_i_2e_i & 7))))]));
  *((&llvm_cbe_pc1m.array[((int64_t)llvm_cbe_indvars_2e_iv25_2e_i_2e_i)])) = (((uint8_t)(bool)(((((((uint32_t)(uint16_t)_14)) & (((uint32_t)(uint8_t)_13))) != 0u)&1))));
#line 109 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i = llvm_cbe_indvars_2e_iv25_2e_i_2e_i | 1;
#line 110 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _15 = *((&pc1.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i)]));
  llvm_cbe_conv_2e_i_2e_i_2e_1 = ((uint32_t)(uint8_t)_15);
#line 111 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 112 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _16 = *((&in_key.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(llvm_cbe_conv_2e_i_2e_i_2e_1, 3)))))]));
  _17 = *((&bytebit.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_conv_2e_i_2e_i_2e_1 & 7))))]));
  *((&llvm_cbe_pc1m.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i)])) = (((uint8_t)(bool)(((((((uint32_t)(uint16_t)_17)) & (((uint32_t)(uint8_t)_16))) != 0u)&1))));
#line 109 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i_2e_1 = llvm_add_u64(llvm_cbe_indvars_2e_iv25_2e_i_2e_i, 2);
  if ((((llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i_2e_1 == UINT64_C(56))&1))) {
    llvm_cbe_indvars_2e_iv19_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body14_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv25_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next26_2e_i_2e_i_2e_1;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
  do {     /* Syntactic loop 'for.body14.i' to make GCC happy */
llvm_cbe_for_2e_body14_2e_i:
  llvm_cbe_indvars_2e_iv19_2e_i = llvm_cbe_indvars_2e_iv19_2e_i__PHI_TEMPORARY;
#line 115 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _18 = llvm_cbe_indvars_2e_iv19_2e_i << 1;
#line 117 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 118 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx20_2e_i_2e_i_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_1.array[((int64_t)(_18 | 1))]);
  *llvm_cbe_arrayidx20_2e_i_2e_i_2e_i_2e_i = 0;
  llvm_cbe_arrayidx22_2e_i_2e_i_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_1.array[((int64_t)_18)]);
  *llvm_cbe_arrayidx22_2e_i_2e_i_2e_i_2e_i = 0;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _19 = *((&totrot.array[((int64_t)llvm_cbe_indvars_2e_iv19_2e_i)]));
#line 119 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _20 = ((uint64_t)(uint8_t)_19);
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body26_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body26.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body26_2e_i_2e_i_2e_i_2e_i:
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
#line 120 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _21 = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i, _20);
#line 121 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i = *((&llvm_cbe_pc1m.array[((int64_t)(llvm_select_u64((((((uint64_t)_21) < ((uint64_t)UINT64_C(28)))&1)), _21, (llvm_add_u64(_21, -28)))))]));
#line 121 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i)])) = llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i;
#line 119 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i | 1;
#line 120 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _22 = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i, _20);
#line 121 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i_2e_1 = *((&llvm_cbe_pc1m.array[((int64_t)(llvm_select_u64((((((uint64_t)_22) < ((uint64_t)UINT64_C(28)))&1)), _22, (llvm_add_u64(_22, -28)))))]));
#line 121 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i)])) = llvm_cbe__2e_sink_2e_i_2e_i_2e_i_2e_i_2e_1;
#line 119 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_1 = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i, 2);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_1 == UINT64_C(28))&1))) {
    llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i__PHI_TEMPORARY = 28;   /* for PHI node */
    goto llvm_cbe_for_2e_body51_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_1;   /* for PHI node */
    goto llvm_cbe_for_2e_body26_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body26.i.i.i.i' */
  do {     /* Syntactic loop 'for.body51.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body51_2e_i_2e_i_2e_i:
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i__PHI_TEMPORARY;
#line 125 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _23 = llvm_add_u64(llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i, _20);
#line 126 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe__2e_sink28_2e_i_2e_i_2e_i = *((&llvm_cbe_pc1m.array[((int64_t)(llvm_select_u64((((((uint64_t)_23) < ((uint64_t)UINT64_C(56)))&1)), _23, (llvm_add_u64(_23, -28)))))]));
#line 126 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i)])) = llvm_cbe__2e_sink28_2e_i_2e_i_2e_i;
#line 124 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i | 1;
#line 125 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _24 = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i, _20);
#line 126 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe__2e_sink28_2e_i_2e_i_2e_i_2e_1 = *((&llvm_cbe_pc1m.array[((int64_t)(llvm_select_u64((((((uint64_t)_24) < ((uint64_t)UINT64_C(56)))&1)), _24, (llvm_add_u64(_24, -28)))))]));
#line 126 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i)])) = llvm_cbe__2e_sink28_2e_i_2e_i_2e_i_2e_1;
#line 124 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i_2e_1 = llvm_add_u64(llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i, 2);
  if ((((llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i_2e_1 == UINT64_C(56))&1))) {
    goto llvm_cbe_for_2e_body76_2e_preheader_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv10_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next11_2e_i_2e_i_2e_i_2e_1;   /* for PHI node */
    goto llvm_cbe_for_2e_body51_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body51.i.i.i' */
llvm_cbe_for_2e_body76_2e_preheader_2e_i_2e_i:
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _25 = ((uint64_t)(uintptr_t)llvm_cbe_arrayidx22_2e_i_2e_i_2e_i_2e_i);
  _26 = ((uint64_t)(uintptr_t)llvm_cbe_arrayidx20_2e_i_2e_i_2e_i_2e_i);
  _27__PHI_TEMPORARY = 0;   /* for PHI node */
  _28__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_indvars_2e_iv15_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body76_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body76.i.i' to make GCC happy */
llvm_cbe_for_2e_body76_2e_i_2e_i:
  _27 = _27__PHI_TEMPORARY;
  _28 = _28__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv15_2e_i_2e_i = llvm_cbe_indvars_2e_iv15_2e_i_2e_i__PHI_TEMPORARY;
#line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _29 = ((uint32_t)llvm_cbe_indvars_2e_iv15_2e_i_2e_i);
  llvm_cbe_rem_2e_i_2e_i1_2e_i_2e_i = ((uint64_t)(uint32_t)(llvm_urem_u32(_29, 48)));
  _30 = *(volatile uint8_t*)((&pc2.array[((int64_t)llvm_cbe_rem_2e_i_2e_i1_2e_i_2e_i)]));
  _31 = *(volatile uint8_t*)(&taken);
  llvm_cbe_arrayidx80_2e_i_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_0.array[((int64_t)(llvm_select_u64(((((((_31 != ((uint8_t)0))&1)) & (((llvm_cbe_indvars_2e_iv15_2e_i_2e_i == llvm_cbe_rem_2e_i_2e_i1_2e_i_2e_i)&1)))&1)), (((uint64_t)(uint8_t)_30)), 0)))]);
  llvm_cbe_and_2e_i20_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx80_2e_i_2e_i_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i20_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0))) + ((uint64_t)119))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i23_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit32_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i23_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i22_2e_i_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_and_2e_i20_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i22_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i31_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i31.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i31_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _32 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i28_2e_i_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i == llvm_cbe_arrayidx80_2e_i_2e_i_2e_i)&1)), _32, llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i29_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i29_2e_i_2e_i_2e_i) < ((uint64_t)((&((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0))) + ((uint64_t)119))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i25_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i28_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i26_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i29_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i31_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit32_2e_loopexit_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i31.i.i.i' */
llvm_cbe_uint8_t_dfl_glob_load_2e_exit32_2e_loopexit_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i__PHI_TEMPORARY = (((llvm_cbe_cond_2e_v_2e_i28_2e_i_2e_i_2e_i != ((uint8_t)0))&1));   /* for PHI node */
  goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit32_2e_i_2e_i_2e_i;

llvm_cbe_uint8_t_dfl_glob_load_2e_exit32_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i = ((llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i__PHI_TEMPORARY)&1);
  taken = (((uint8_t)(bool)((((((_31 != ((uint8_t)0))&1)) & llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i)&1))));
  llvm_cbe_rem_2e_i15_2e_i_2e_i_2e_i = ((uint64_t)(uint32_t)(llvm_urem_u32(_29, 24)));
  llvm_cbe_arrayidx_2e_i16_2e_i_2e_i_2e_i = (&bigbyte.array[((int64_t)llvm_cbe_rem_2e_i15_2e_i_2e_i_2e_i)]);
  _33 = *(volatile uint32_t*)llvm_cbe_arrayidx_2e_i16_2e_i_2e_i_2e_i;
  _34 = *(volatile uint8_t*)(&taken);
  llvm_cbe_or_2e_i_2e_i_2e_i = (llvm_select_u32((((_34 == ((uint8_t)0))&1)), 0, (llvm_select_u32((((llvm_cbe_indvars_2e_iv15_2e_i_2e_i == llvm_cbe_rem_2e_i15_2e_i_2e_i_2e_i)&1)), _33, 0)))) | _28;
  llvm_cbe_mul_2e_i_2e_i8_2e_i_2e_i = llvm_mul_u64((((uint64_t)(uint8_t)_34)), _25);
  _35 = ((uint8_t*)(uintptr_t)llvm_cbe_mul_2e_i_2e_i8_2e_i_2e_i);
  llvm_cbe_and_2e_i8_2e_i_2e_i_2e_i = llvm_cbe_mul_2e_i_2e_i8_2e_i_2e_i & 56;
  if ((((((int64_t)llvm_cbe_and_2e_i8_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1))) + ((uint64_t)191))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i10_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_store_2e_exit_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i10_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i9_2e_i_2e_i_2e_i = (&((uint8_t*)(&promoted_stack_var_deskey_OC_2_1))[((int64_t)llvm_cbe_and_2e_i8_2e_i_2e_i_2e_i)]);
  llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i9_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i14_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i14.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i14_2e_i_2e_i_2e_i:
  llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i = llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i__PHI_TEMPORARY;
  _36 = ((uint32_t*)llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i);
  _37 = *(volatile uint32_t*)_36;
  *(volatile uint32_t*)_36 = (llvm_select_u32((((llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i == _35)&1)), llvm_cbe_or_2e_i_2e_i_2e_i, _37));
  llvm_cbe_add_2e_ptr8_2e_i_2e_i11_2e_i_2e_i = (&llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i_2e_i11_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(&promoted_stack_var_deskey_OC_2_1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1))) + ((uint64_t)191))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1)))))) & -64))]))))&1))) {
    llvm_cbe__ptr_2e_026_2e_i_2e_i10_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i_2e_i11_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i14_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint32_t_dfl_glob_store_2e_exit_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i14.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_store_2e_exit_2e_i_2e_i_2e_i:
  _38 = llvm_select_u32(llvm_cbe_res_2e_0_2e_lcssa_2e_i24_2e_i_2e_i_2e_i, llvm_cbe_or_2e_i_2e_i_2e_i, _28);
  taken = _31;
#line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _39 = llvm_add_u64(llvm_cbe_indvars_2e_iv15_2e_i_2e_i, 24);
#line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_rem_2e_i2_2e_i_2e_i_2e_i = ((uint64_t)(uint32_t)(llvm_urem_u32((((uint32_t)_39)), 48)));
  _40 = *(volatile uint8_t*)((&pc2.array[((int64_t)llvm_cbe_rem_2e_i2_2e_i_2e_i_2e_i)]));
  _41 = *(volatile uint8_t*)(&taken);
#line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx92_2e_i_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_0.array[((int64_t)(llvm_select_u64(((((((_39 == llvm_cbe_rem_2e_i2_2e_i_2e_i_2e_i)&1)) & (((_41 != ((uint8_t)0))&1)))&1)), (((uint64_t)(uint8_t)_40)), 0)))]);
#line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_and_2e_i_2e_i12_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx92_2e_i_2e_i_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i12_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0))) + ((uint64_t)119))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i14_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe___cfl_branch_deskey_2e_2_2e_exit_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i14_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i13_2e_i_2e_i = (&promoted_stack_var_deskey_OC_2_0.array[((int64_t)llvm_cbe_and_2e_i_2e_i12_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i13_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i17_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i17.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i17_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _42 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i == llvm_cbe_arrayidx92_2e_i_2e_i_2e_i)&1)), _42, llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((&promoted_stack_var_deskey_OC_2_0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0))) + ((uint64_t)119))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i17_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i17.i.i' */
llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i_2e_i:
#line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (((llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i != ((uint8_t)0))&1));   /* for PHI node */
  goto llvm_cbe___cfl_branch_deskey_2e_2_2e_exit_2e_i_2e_i;

llvm_cbe___cfl_branch_deskey_2e_2_2e_exit_2e_i_2e_i:
#line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY)&1);
#line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  taken = (((uint8_t)(bool)((((((_41 != ((uint8_t)0))&1)) & llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i)&1))));
  _43 = *(volatile uint32_t*)llvm_cbe_arrayidx_2e_i16_2e_i_2e_i_2e_i;
  _44 = *(volatile uint8_t*)(&taken);
  llvm_cbe_or99_2e_i_2e_i_2e_i = (llvm_select_u32((((_44 == ((uint8_t)0))&1)), 0, (llvm_select_u32((((llvm_cbe_indvars_2e_iv15_2e_i_2e_i == llvm_cbe_rem_2e_i15_2e_i_2e_i_2e_i)&1)), _43, 0)))) | _27;
  llvm_cbe_mul_2e_i_2e_i_2e_i_2e_i = llvm_mul_u64((((uint64_t)(uint8_t)_44)), _26);
  _45 = ((uint8_t*)(uintptr_t)llvm_cbe_mul_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i = llvm_cbe_mul_2e_i_2e_i_2e_i_2e_i & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1))) + ((uint64_t)191))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe___cfl_branch_deskey_2e_2_2e_1_2e_exit_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(&promoted_stack_var_deskey_OC_2_1))[((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _46 = ((uint32_t*)llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i);
  _47 = *(volatile uint32_t*)_46;
  *(volatile uint32_t*)_46 = (llvm_select_u32((((llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i == _45)&1)), llvm_cbe_or99_2e_i_2e_i_2e_i, _47));
  llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(&promoted_stack_var_deskey_OC_2_1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1))) + ((uint64_t)191))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_deskey_OC_2_1)))))) & -64))]))))&1))) {
    llvm_cbe__ptr_2e_026_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe___cfl_branch_deskey_2e_2_2e_1_2e_exit_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i' */
llvm_cbe___cfl_branch_deskey_2e_2_2e_1_2e_exit_2e_i_2e_i:
  _48 = llvm_select_u32(llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i, llvm_cbe_or99_2e_i_2e_i_2e_i, _27);
  taken = _41;
#line 129 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next16_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv15_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next16_2e_i_2e_i_2e_i == UINT64_C(24))&1))) {
    goto llvm_cbe_loop_deskey_2e_2_2e_4_2e_exit_2e_i;
  } else {
    _27__PHI_TEMPORARY = _48;   /* for PHI node */
    _28__PHI_TEMPORARY = _38;   /* for PHI node */
    llvm_cbe_indvars_2e_iv15_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next16_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body76_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body76.i.i' */
llvm_cbe_loop_deskey_2e_2_2e_4_2e_exit_2e_i:
#line 114 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_indvars_2e_iv_2e_next20_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv19_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next20_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_loop_deskey_2e_2_2e_5_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv19_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next20_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body14_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body14.i' */
llvm_cbe_loop_deskey_2e_2_2e_5_2e_exit:
#line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
   /*tail*/ cookey_OC_5();
}


static void desfunc_OC_3(uint32_t* llvm_cbe_keys, uint32_t* llvm_cbe_block) {
  uint32_t _49;
  uint32_t* llvm_cbe_arrayidx1;
  uint32_t _50;
  uint32_t _51;
  uint32_t llvm_cbe_xor3;
  uint32_t llvm_cbe_xor4;
  uint32_t _52;
  uint32_t llvm_cbe_xor10;
  uint32_t llvm_cbe_xor12;
  uint32_t _53;
  uint32_t llvm_cbe_xor18;
  uint32_t llvm_cbe_xor20;
  uint32_t _54;
  uint32_t llvm_cbe_xor26;
  uint32_t llvm_cbe_xor28;
  uint32_t llvm_cbe_shl29;
  uint32_t _55;
  uint32_t llvm_cbe_xor40;
  uint32_t llvm_cbe_xor41;
  uint32_t llvm_cbe_or472;
  uint32_t* llvm_cbe_keys_2e_addr_2e_06_2e_i;
  uint32_t* llvm_cbe_keys_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_round_2e_05_2e_i;
  uint32_t llvm_cbe_round_2e_05_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_right_2e_04_2e_i;
  uint32_t llvm_cbe_right_2e_04_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_leftt_2e_03_2e_i;
  uint32_t llvm_cbe_leftt_2e_03_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_incdec_2e_ptr_2e_i;
  uint32_t _56;
  uint32_t llvm_cbe_xor54_2e_i;
  uint32_t* llvm_cbe_arrayidx57_2e_i;
  uint8_t* _57;
  uint64_t llvm_cbe_and_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _58;
  uint32_t llvm_cbe_cond_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx61_2e_i;
  uint8_t* _59;
  uint64_t llvm_cbe_and_2e_i183_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i185_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i188_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i188_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i189_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i189_2e_i__PHI_TEMPORARY;
  uint32_t _60;
  uint32_t llvm_cbe_cond_2e_i191_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i192_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or62_2e_i;
  uint32_t* llvm_cbe_arrayidx66_2e_i;
  uint8_t* _61;
  uint64_t llvm_cbe_and_2e_i170_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i172_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i175_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i175_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i176_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i176_2e_i__PHI_TEMPORARY;
  uint32_t _62;
  uint32_t llvm_cbe_cond_2e_i178_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i179_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or67_2e_i;
  uint32_t* llvm_cbe_arrayidx71_2e_i;
  uint8_t* _63;
  uint64_t llvm_cbe_and_2e_i157_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i159_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i162_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i162_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i163_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i163_2e_i__PHI_TEMPORARY;
  uint32_t _64;
  uint32_t llvm_cbe_cond_2e_i165_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i166_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or72_2e_i;
  uint32_t* llvm_cbe_incdec_2e_ptr73_2e_i;
  uint32_t _65;
  uint32_t llvm_cbe_xor74_2e_i;
  uint32_t* llvm_cbe_arrayidx77_2e_i;
  uint8_t* _66;
  uint64_t llvm_cbe_and_2e_i144_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i146_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i149_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i149_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i150_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i150_2e_i__PHI_TEMPORARY;
  uint32_t _67;
  uint32_t llvm_cbe_cond_2e_i152_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i153_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or78_2e_i;
  uint32_t* llvm_cbe_arrayidx82_2e_i;
  uint8_t* _68;
  uint64_t llvm_cbe_and_2e_i131_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i133_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i136_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i136_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i137_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i137_2e_i__PHI_TEMPORARY;
  uint32_t _69;
  uint32_t llvm_cbe_cond_2e_i139_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i140_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or83_2e_i;
  uint32_t* llvm_cbe_arrayidx87_2e_i;
  uint8_t* _70;
  uint64_t llvm_cbe_and_2e_i118_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i120_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i123_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i123_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i124_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i124_2e_i__PHI_TEMPORARY;
  uint32_t _71;
  uint32_t llvm_cbe_cond_2e_i126_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i127_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or88_2e_i;
  uint32_t* llvm_cbe_arrayidx92_2e_i;
  uint8_t* _72;
  uint64_t llvm_cbe_and_2e_i105_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i107_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i110_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i110_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i111_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i111_2e_i__PHI_TEMPORARY;
  uint32_t _73;
  uint32_t llvm_cbe_cond_2e_i113_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i114_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor94_2e_i;
  uint32_t* llvm_cbe_incdec_2e_ptr98_2e_i;
  uint32_t _74;
  uint32_t llvm_cbe_xor99_2e_i;
  uint32_t* llvm_cbe_arrayidx102_2e_i;
  uint8_t* _75;
  uint64_t llvm_cbe_and_2e_i92_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i94_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i97_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i97_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i98_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i98_2e_i__PHI_TEMPORARY;
  uint32_t _76;
  uint32_t llvm_cbe_cond_2e_i100_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i101_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx106_2e_i;
  uint8_t* _77;
  uint64_t llvm_cbe_and_2e_i79_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i81_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i84_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i84_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i85_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i85_2e_i__PHI_TEMPORARY;
  uint32_t _78;
  uint32_t llvm_cbe_cond_2e_i87_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i88_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or107_2e_i;
  uint32_t* llvm_cbe_arrayidx111_2e_i;
  uint8_t* _79;
  uint64_t llvm_cbe_and_2e_i66_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i68_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i71_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i71_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i72_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i72_2e_i__PHI_TEMPORARY;
  uint32_t _80;
  uint32_t llvm_cbe_cond_2e_i74_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i75_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or112_2e_i;
  uint32_t* llvm_cbe_arrayidx116_2e_i;
  uint8_t* _81;
  uint64_t llvm_cbe_and_2e_i53_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i55_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i58_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i58_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i59_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i59_2e_i__PHI_TEMPORARY;
  uint32_t _82;
  uint32_t llvm_cbe_cond_2e_i61_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i62_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or117_2e_i;
  uint32_t* llvm_cbe_incdec_2e_ptr118_2e_i;
  uint32_t _83;
  uint32_t llvm_cbe_xor119_2e_i;
  uint32_t* llvm_cbe_arrayidx122_2e_i;
  uint8_t* _84;
  uint64_t llvm_cbe_and_2e_i40_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i42_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i45_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i45_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i46_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i46_2e_i__PHI_TEMPORARY;
  uint32_t _85;
  uint32_t llvm_cbe_cond_2e_i48_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i49_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or123_2e_i;
  uint32_t* llvm_cbe_arrayidx127_2e_i;
  uint8_t* _86;
  uint64_t llvm_cbe_and_2e_i27_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i29_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i32_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i32_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i33_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i33_2e_i__PHI_TEMPORARY;
  uint32_t _87;
  uint32_t llvm_cbe_cond_2e_i35_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i36_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or128_2e_i;
  uint32_t* llvm_cbe_arrayidx132_2e_i;
  uint8_t* _88;
  uint64_t llvm_cbe_and_2e_i14_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i16_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i19_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i19_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i20_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i20_2e_i__PHI_TEMPORARY;
  uint32_t _89;
  uint32_t llvm_cbe_cond_2e_i22_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i23_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or133_2e_i;
  uint32_t* llvm_cbe_arrayidx137_2e_i;
  uint8_t* _90;
  uint64_t llvm_cbe_and_2e_i1_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i6_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY;
  uint32_t _91;
  uint32_t llvm_cbe_cond_2e_i9_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i10_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor139_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  uint32_t llvm_cbe_or142_2e_i;
  uint32_t _92;
  uint32_t llvm_cbe_xor148_2e_i;
  uint32_t llvm_cbe_or151_2e_i;
  uint32_t _93;
  uint32_t llvm_cbe_xor157_2e_i;
  uint32_t llvm_cbe_xor159_2e_i;
  uint32_t _94;
  uint32_t llvm_cbe_xor165_2e_i;
  uint32_t llvm_cbe_xor167_2e_i;
  uint32_t _95;
  uint32_t llvm_cbe_xor173_2e_i;
  uint32_t llvm_cbe_xor175_2e_i;
  uint32_t _96;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
#line 314 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _49 = *llvm_cbe_block;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 315 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx1 = (&llvm_cbe_block[((int64_t)1)]);
  _50 = *llvm_cbe_arrayidx1;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 316 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _51 = ((llvm_lshr_u32(_49, 4)) ^ _50) & 252645135;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 317 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor3 = _51 ^ _50;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 318 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor4 = (_51 << 4) ^ _49;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 319 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _52 = (llvm_lshr_u32(llvm_cbe_xor4, 16)) ^ (llvm_cbe_xor3 & 65535);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 320 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor10 = _52 ^ llvm_cbe_xor3;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 321 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor12 = (_52 << 16) ^ llvm_cbe_xor4;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 322 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _53 = ((llvm_lshr_u32(llvm_cbe_xor10, 2)) ^ llvm_cbe_xor12) & 858993459;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 323 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor18 = _53 ^ llvm_cbe_xor12;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 324 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor20 = (_53 << 2) ^ llvm_cbe_xor10;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 325 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _54 = ((llvm_lshr_u32(llvm_cbe_xor20, 8)) ^ llvm_cbe_xor18) & 16711935;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 326 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor26 = _54 ^ llvm_cbe_xor18;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 327 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor28 = (_54 << 8) ^ llvm_cbe_xor20;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 328 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_shl29 = llvm_cbe_xor28 << 1;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 329 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _55 = (llvm_cbe_shl29 ^ llvm_cbe_xor26) & 2863311530u;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 330 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor40 = _55 ^ llvm_cbe_xor26;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 331 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor41 = _55 ^ (llvm_cbe_shl29 | (llvm_lshr_u32(llvm_cbe_xor28, 31)));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 332 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or472 = (llvm_cbe_xor40 << 1) | (llvm_lshr_u32(llvm_cbe_xor40, 31));
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
  ;
  ;
  llvm_cbe_keys_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_keys;   /* for PHI node */
  llvm_cbe_round_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_right_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_xor41;   /* for PHI node */
  llvm_cbe_leftt_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_or472;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_keys_2e_addr_2e_06_2e_i = llvm_cbe_keys_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_round_2e_05_2e_i = llvm_cbe_round_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_right_2e_04_2e_i = llvm_cbe_right_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_leftt_2e_03_2e_i = llvm_cbe_leftt_2e_03_2e_i__PHI_TEMPORARY;
#line 336 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 337 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_incdec_2e_ptr_2e_i = (&llvm_cbe_keys_2e_addr_2e_06_2e_i[((int64_t)1)]);
  _56 = *llvm_cbe_keys_2e_addr_2e_06_2e_i;
  llvm_cbe_xor54_2e_i = _56 ^ ((llvm_cbe_right_2e_04_2e_i << 28) | (llvm_lshr_u32(llvm_cbe_right_2e_04_2e_i, 4)));
#line 338 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx57_2e_i = (&SP7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor54_2e_i & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _57 = ((uint8_t*)llvm_cbe_arrayidx57_2e_i);
  llvm_cbe_and_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx57_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i = (&((uint8_t*)(&SP7))[((int64_t)llvm_cbe_and_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  _58 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i));
  llvm_cbe_cond_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i_2e_i == _57)&1)), _58, llvm_cbe_res_2e_028_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(&SP7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i__PHI_TEMPORARY;
#line 339 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx61_2e_i = (&SP5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor54_2e_i, 8)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _59 = ((uint8_t*)llvm_cbe_arrayidx61_2e_i);
  llvm_cbe_and_2e_i183_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx61_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i183_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i186_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit195_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i186_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i185_2e_i = (&((uint8_t*)(&SP5))[((int64_t)llvm_cbe_and_2e_i183_2e_i)]);
  llvm_cbe_res_2e_028_2e_i188_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i189_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i185_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i194_2e_i;

  do {     /* Syntactic loop 'for.body.i194.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i194_2e_i:
  llvm_cbe_res_2e_028_2e_i188_2e_i = llvm_cbe_res_2e_028_2e_i188_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i189_2e_i = llvm_cbe__ptr_2e_027_2e_i189_2e_i__PHI_TEMPORARY;
  _60 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i189_2e_i));
  llvm_cbe_cond_2e_i191_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i189_2e_i == _59)&1)), _60, llvm_cbe_res_2e_028_2e_i188_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i192_2e_i = (&llvm_cbe__ptr_2e_027_2e_i189_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i192_2e_i) < ((uint64_t)((&((uint8_t*)(&SP5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i188_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i191_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i189_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i192_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i194_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i191_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit195_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i194.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit195_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i__PHI_TEMPORARY;
#line 339 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or62_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i187_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i;
#line 340 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx66_2e_i = (&SP3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor54_2e_i, 16)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _61 = ((uint8_t*)llvm_cbe_arrayidx66_2e_i);
  llvm_cbe_and_2e_i170_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx66_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i170_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i173_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit182_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i173_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i172_2e_i = (&((uint8_t*)(&SP3))[((int64_t)llvm_cbe_and_2e_i170_2e_i)]);
  llvm_cbe_res_2e_028_2e_i175_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i176_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i172_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i181_2e_i;

  do {     /* Syntactic loop 'for.body.i181.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i181_2e_i:
  llvm_cbe_res_2e_028_2e_i175_2e_i = llvm_cbe_res_2e_028_2e_i175_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i176_2e_i = llvm_cbe__ptr_2e_027_2e_i176_2e_i__PHI_TEMPORARY;
  _62 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i176_2e_i));
  llvm_cbe_cond_2e_i178_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i176_2e_i == _61)&1)), _62, llvm_cbe_res_2e_028_2e_i175_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i179_2e_i = (&llvm_cbe__ptr_2e_027_2e_i176_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i179_2e_i) < ((uint64_t)((&((uint8_t*)(&SP3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i175_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i178_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i176_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i179_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i181_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i178_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit182_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i181.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit182_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i__PHI_TEMPORARY;
#line 340 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or67_2e_i = llvm_cbe_or62_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i174_2e_i;
#line 341 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx71_2e_i = (&SP1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor54_2e_i, 24)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _63 = ((uint8_t*)llvm_cbe_arrayidx71_2e_i);
  llvm_cbe_and_2e_i157_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx71_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i157_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i160_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit169_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i160_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i159_2e_i = (&((uint8_t*)(&SP1))[((int64_t)llvm_cbe_and_2e_i157_2e_i)]);
  llvm_cbe_res_2e_028_2e_i162_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i163_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i159_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i168_2e_i;

  do {     /* Syntactic loop 'for.body.i168.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i168_2e_i:
  llvm_cbe_res_2e_028_2e_i162_2e_i = llvm_cbe_res_2e_028_2e_i162_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i163_2e_i = llvm_cbe__ptr_2e_027_2e_i163_2e_i__PHI_TEMPORARY;
  _64 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i163_2e_i));
  llvm_cbe_cond_2e_i165_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i163_2e_i == _63)&1)), _64, llvm_cbe_res_2e_028_2e_i162_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i166_2e_i = (&llvm_cbe__ptr_2e_027_2e_i163_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i166_2e_i) < ((uint64_t)((&((uint8_t*)(&SP1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i162_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i165_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i163_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i166_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i168_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i165_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit169_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i168.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit169_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i__PHI_TEMPORARY;
#line 341 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or72_2e_i = llvm_cbe_or67_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i161_2e_i;
#line 342 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_incdec_2e_ptr73_2e_i = (&llvm_cbe_keys_2e_addr_2e_06_2e_i[((int64_t)2)]);
  _65 = *llvm_cbe_incdec_2e_ptr_2e_i;
  llvm_cbe_xor74_2e_i = _65 ^ llvm_cbe_right_2e_04_2e_i;
#line 343 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx77_2e_i = (&SP8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor74_2e_i & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _66 = ((uint8_t*)llvm_cbe_arrayidx77_2e_i);
  llvm_cbe_and_2e_i144_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx77_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i144_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i147_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit156_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i147_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i146_2e_i = (&((uint8_t*)(&SP8))[((int64_t)llvm_cbe_and_2e_i144_2e_i)]);
  llvm_cbe_res_2e_028_2e_i149_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i150_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i146_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i155_2e_i;

  do {     /* Syntactic loop 'for.body.i155.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i155_2e_i:
  llvm_cbe_res_2e_028_2e_i149_2e_i = llvm_cbe_res_2e_028_2e_i149_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i150_2e_i = llvm_cbe__ptr_2e_027_2e_i150_2e_i__PHI_TEMPORARY;
  _67 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i150_2e_i));
  llvm_cbe_cond_2e_i152_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i150_2e_i == _66)&1)), _67, llvm_cbe_res_2e_028_2e_i149_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i153_2e_i = (&llvm_cbe__ptr_2e_027_2e_i150_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i153_2e_i) < ((uint64_t)((&((uint8_t*)(&SP8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i149_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i152_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i150_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i153_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i155_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i152_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit156_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i155.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit156_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i__PHI_TEMPORARY;
#line 343 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or78_2e_i = llvm_cbe_or72_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i148_2e_i;
#line 344 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx82_2e_i = (&SP6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor74_2e_i, 8)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _68 = ((uint8_t*)llvm_cbe_arrayidx82_2e_i);
  llvm_cbe_and_2e_i131_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx82_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i131_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i134_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit143_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i134_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i133_2e_i = (&((uint8_t*)(&SP6))[((int64_t)llvm_cbe_and_2e_i131_2e_i)]);
  llvm_cbe_res_2e_028_2e_i136_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i137_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i133_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i142_2e_i;

  do {     /* Syntactic loop 'for.body.i142.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i142_2e_i:
  llvm_cbe_res_2e_028_2e_i136_2e_i = llvm_cbe_res_2e_028_2e_i136_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i137_2e_i = llvm_cbe__ptr_2e_027_2e_i137_2e_i__PHI_TEMPORARY;
  _69 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i137_2e_i));
  llvm_cbe_cond_2e_i139_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i137_2e_i == _68)&1)), _69, llvm_cbe_res_2e_028_2e_i136_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i140_2e_i = (&llvm_cbe__ptr_2e_027_2e_i137_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i140_2e_i) < ((uint64_t)((&((uint8_t*)(&SP6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i136_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i139_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i137_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i140_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i142_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i139_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit143_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i142.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit143_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i__PHI_TEMPORARY;
#line 344 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or83_2e_i = llvm_cbe_or78_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i135_2e_i;
#line 345 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx87_2e_i = (&SP4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor74_2e_i, 16)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _70 = ((uint8_t*)llvm_cbe_arrayidx87_2e_i);
  llvm_cbe_and_2e_i118_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx87_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i118_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i121_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit130_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i121_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i120_2e_i = (&((uint8_t*)(&SP4))[((int64_t)llvm_cbe_and_2e_i118_2e_i)]);
  llvm_cbe_res_2e_028_2e_i123_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i124_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i120_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i129_2e_i;

  do {     /* Syntactic loop 'for.body.i129.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i129_2e_i:
  llvm_cbe_res_2e_028_2e_i123_2e_i = llvm_cbe_res_2e_028_2e_i123_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i124_2e_i = llvm_cbe__ptr_2e_027_2e_i124_2e_i__PHI_TEMPORARY;
  _71 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i124_2e_i));
  llvm_cbe_cond_2e_i126_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i124_2e_i == _70)&1)), _71, llvm_cbe_res_2e_028_2e_i123_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i127_2e_i = (&llvm_cbe__ptr_2e_027_2e_i124_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i127_2e_i) < ((uint64_t)((&((uint8_t*)(&SP4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i123_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i126_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i124_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i127_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i129_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i126_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit130_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i129.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit130_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i__PHI_TEMPORARY;
#line 345 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or88_2e_i = llvm_cbe_or83_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i122_2e_i;
#line 346 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx92_2e_i = (&SP2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor74_2e_i, 24)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _72 = ((uint8_t*)llvm_cbe_arrayidx92_2e_i);
  llvm_cbe_and_2e_i105_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx92_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i105_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i108_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit117_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i108_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i107_2e_i = (&((uint8_t*)(&SP2))[((int64_t)llvm_cbe_and_2e_i105_2e_i)]);
  llvm_cbe_res_2e_028_2e_i110_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i111_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i107_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i116_2e_i;

  do {     /* Syntactic loop 'for.body.i116.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i116_2e_i:
  llvm_cbe_res_2e_028_2e_i110_2e_i = llvm_cbe_res_2e_028_2e_i110_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i111_2e_i = llvm_cbe__ptr_2e_027_2e_i111_2e_i__PHI_TEMPORARY;
  _73 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i111_2e_i));
  llvm_cbe_cond_2e_i113_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i111_2e_i == _72)&1)), _73, llvm_cbe_res_2e_028_2e_i110_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i114_2e_i = (&llvm_cbe__ptr_2e_027_2e_i111_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i114_2e_i) < ((uint64_t)((&((uint8_t*)(&SP2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i110_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i113_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i111_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i114_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i116_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i113_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit117_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i116.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit117_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i__PHI_TEMPORARY;
#line 346 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 347 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor94_2e_i = (llvm_cbe_or88_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i109_2e_i) ^ llvm_cbe_leftt_2e_03_2e_i;
#line 348 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 349 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_incdec_2e_ptr98_2e_i = (&llvm_cbe_keys_2e_addr_2e_06_2e_i[((int64_t)3)]);
  _74 = *llvm_cbe_incdec_2e_ptr73_2e_i;
  llvm_cbe_xor99_2e_i = ((llvm_cbe_xor94_2e_i << 28) | (llvm_lshr_u32(llvm_cbe_xor94_2e_i, 4))) ^ _74;
#line 350 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx102_2e_i = (&SP7.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor99_2e_i & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _75 = ((uint8_t*)llvm_cbe_arrayidx102_2e_i);
  llvm_cbe_and_2e_i92_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx102_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i92_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP7)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i95_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit104_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i95_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i94_2e_i = (&((uint8_t*)(&SP7))[((int64_t)llvm_cbe_and_2e_i92_2e_i)]);
  llvm_cbe_res_2e_028_2e_i97_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i98_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i94_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i103_2e_i;

  do {     /* Syntactic loop 'for.body.i103.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i103_2e_i:
  llvm_cbe_res_2e_028_2e_i97_2e_i = llvm_cbe_res_2e_028_2e_i97_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i98_2e_i = llvm_cbe__ptr_2e_027_2e_i98_2e_i__PHI_TEMPORARY;
  _76 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i98_2e_i));
  llvm_cbe_cond_2e_i100_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i98_2e_i == _75)&1)), _76, llvm_cbe_res_2e_028_2e_i97_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i101_2e_i = (&llvm_cbe__ptr_2e_027_2e_i98_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i101_2e_i) < ((uint64_t)((&((uint8_t*)(&SP7))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP7))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP7)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i97_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i100_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i98_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i101_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i103_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i100_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit104_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i103.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit104_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i__PHI_TEMPORARY;
#line 351 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx106_2e_i = (&SP5.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor99_2e_i, 8)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _77 = ((uint8_t*)llvm_cbe_arrayidx106_2e_i);
  llvm_cbe_and_2e_i79_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx106_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i79_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP5)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i82_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit91_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i82_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i81_2e_i = (&((uint8_t*)(&SP5))[((int64_t)llvm_cbe_and_2e_i79_2e_i)]);
  llvm_cbe_res_2e_028_2e_i84_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i85_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i81_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i90_2e_i;

  do {     /* Syntactic loop 'for.body.i90.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i90_2e_i:
  llvm_cbe_res_2e_028_2e_i84_2e_i = llvm_cbe_res_2e_028_2e_i84_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i85_2e_i = llvm_cbe__ptr_2e_027_2e_i85_2e_i__PHI_TEMPORARY;
  _78 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i85_2e_i));
  llvm_cbe_cond_2e_i87_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i85_2e_i == _77)&1)), _78, llvm_cbe_res_2e_028_2e_i84_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i88_2e_i = (&llvm_cbe__ptr_2e_027_2e_i85_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i88_2e_i) < ((uint64_t)((&((uint8_t*)(&SP5))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP5))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP5)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i84_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i87_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i85_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i88_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i90_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i87_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit91_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i90.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit91_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i__PHI_TEMPORARY;
#line 351 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or107_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i83_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i96_2e_i;
#line 352 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx111_2e_i = (&SP3.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor99_2e_i, 16)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _79 = ((uint8_t*)llvm_cbe_arrayidx111_2e_i);
  llvm_cbe_and_2e_i66_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx111_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i66_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP3)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i69_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit78_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i69_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i68_2e_i = (&((uint8_t*)(&SP3))[((int64_t)llvm_cbe_and_2e_i66_2e_i)]);
  llvm_cbe_res_2e_028_2e_i71_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i72_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i68_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i77_2e_i;

  do {     /* Syntactic loop 'for.body.i77.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i77_2e_i:
  llvm_cbe_res_2e_028_2e_i71_2e_i = llvm_cbe_res_2e_028_2e_i71_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i72_2e_i = llvm_cbe__ptr_2e_027_2e_i72_2e_i__PHI_TEMPORARY;
  _80 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i72_2e_i));
  llvm_cbe_cond_2e_i74_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i72_2e_i == _79)&1)), _80, llvm_cbe_res_2e_028_2e_i71_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i75_2e_i = (&llvm_cbe__ptr_2e_027_2e_i72_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i75_2e_i) < ((uint64_t)((&((uint8_t*)(&SP3))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP3))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP3)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i71_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i74_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i72_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i75_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i77_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i74_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit78_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i77.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit78_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i__PHI_TEMPORARY;
#line 352 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or112_2e_i = llvm_cbe_or107_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i70_2e_i;
#line 353 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx116_2e_i = (&SP1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor99_2e_i, 24)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _81 = ((uint8_t*)llvm_cbe_arrayidx116_2e_i);
  llvm_cbe_and_2e_i53_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx116_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i53_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP1)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i56_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit65_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i56_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i55_2e_i = (&((uint8_t*)(&SP1))[((int64_t)llvm_cbe_and_2e_i53_2e_i)]);
  llvm_cbe_res_2e_028_2e_i58_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i59_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i55_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i64_2e_i;

  do {     /* Syntactic loop 'for.body.i64.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i64_2e_i:
  llvm_cbe_res_2e_028_2e_i58_2e_i = llvm_cbe_res_2e_028_2e_i58_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i59_2e_i = llvm_cbe__ptr_2e_027_2e_i59_2e_i__PHI_TEMPORARY;
  _82 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i59_2e_i));
  llvm_cbe_cond_2e_i61_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i59_2e_i == _81)&1)), _82, llvm_cbe_res_2e_028_2e_i58_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i62_2e_i = (&llvm_cbe__ptr_2e_027_2e_i59_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i62_2e_i) < ((uint64_t)((&((uint8_t*)(&SP1))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP1))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP1)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i58_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i61_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i59_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i62_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i64_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i61_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit65_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i64.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit65_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i__PHI_TEMPORARY;
#line 353 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or117_2e_i = llvm_cbe_or112_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i57_2e_i;
#line 354 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_incdec_2e_ptr118_2e_i = (&llvm_cbe_keys_2e_addr_2e_06_2e_i[((int64_t)4)]);
  _83 = *llvm_cbe_incdec_2e_ptr98_2e_i;
  llvm_cbe_xor119_2e_i = _83 ^ llvm_cbe_xor94_2e_i;
#line 355 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx122_2e_i = (&SP8.array[((int64_t)(((uint64_t)(uint32_t)(llvm_cbe_xor119_2e_i & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _84 = ((uint8_t*)llvm_cbe_arrayidx122_2e_i);
  llvm_cbe_and_2e_i40_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx122_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i40_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP8)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i43_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit52_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i43_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i42_2e_i = (&((uint8_t*)(&SP8))[((int64_t)llvm_cbe_and_2e_i40_2e_i)]);
  llvm_cbe_res_2e_028_2e_i45_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i46_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i42_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i51_2e_i;

  do {     /* Syntactic loop 'for.body.i51.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i51_2e_i:
  llvm_cbe_res_2e_028_2e_i45_2e_i = llvm_cbe_res_2e_028_2e_i45_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i46_2e_i = llvm_cbe__ptr_2e_027_2e_i46_2e_i__PHI_TEMPORARY;
  _85 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i46_2e_i));
  llvm_cbe_cond_2e_i48_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i46_2e_i == _84)&1)), _85, llvm_cbe_res_2e_028_2e_i45_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i49_2e_i = (&llvm_cbe__ptr_2e_027_2e_i46_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i49_2e_i) < ((uint64_t)((&((uint8_t*)(&SP8))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP8))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP8)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i45_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i48_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i46_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i49_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i51_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i48_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit52_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i51.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit52_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i__PHI_TEMPORARY;
#line 355 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or123_2e_i = llvm_cbe_or117_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i44_2e_i;
#line 356 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx127_2e_i = (&SP6.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor119_2e_i, 8)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _86 = ((uint8_t*)llvm_cbe_arrayidx127_2e_i);
  llvm_cbe_and_2e_i27_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx127_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i27_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP6)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i30_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit39_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i30_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i29_2e_i = (&((uint8_t*)(&SP6))[((int64_t)llvm_cbe_and_2e_i27_2e_i)]);
  llvm_cbe_res_2e_028_2e_i32_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i33_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i29_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i38_2e_i;

  do {     /* Syntactic loop 'for.body.i38.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i38_2e_i:
  llvm_cbe_res_2e_028_2e_i32_2e_i = llvm_cbe_res_2e_028_2e_i32_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i33_2e_i = llvm_cbe__ptr_2e_027_2e_i33_2e_i__PHI_TEMPORARY;
  _87 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i33_2e_i));
  llvm_cbe_cond_2e_i35_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i33_2e_i == _86)&1)), _87, llvm_cbe_res_2e_028_2e_i32_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i36_2e_i = (&llvm_cbe__ptr_2e_027_2e_i33_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i36_2e_i) < ((uint64_t)((&((uint8_t*)(&SP6))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP6))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP6)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i32_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i35_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i33_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i36_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i38_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i35_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit39_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i38.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit39_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i__PHI_TEMPORARY;
#line 356 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or128_2e_i = llvm_cbe_or123_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i31_2e_i;
#line 357 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx132_2e_i = (&SP4.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor119_2e_i, 16)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _88 = ((uint8_t*)llvm_cbe_arrayidx132_2e_i);
  llvm_cbe_and_2e_i14_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx132_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i14_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP4)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i17_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit26_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i17_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i16_2e_i = (&((uint8_t*)(&SP4))[((int64_t)llvm_cbe_and_2e_i14_2e_i)]);
  llvm_cbe_res_2e_028_2e_i19_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i20_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i16_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i25_2e_i;

  do {     /* Syntactic loop 'for.body.i25.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i25_2e_i:
  llvm_cbe_res_2e_028_2e_i19_2e_i = llvm_cbe_res_2e_028_2e_i19_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i20_2e_i = llvm_cbe__ptr_2e_027_2e_i20_2e_i__PHI_TEMPORARY;
  _89 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i20_2e_i));
  llvm_cbe_cond_2e_i22_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i20_2e_i == _88)&1)), _89, llvm_cbe_res_2e_028_2e_i19_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i23_2e_i = (&llvm_cbe__ptr_2e_027_2e_i20_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i23_2e_i) < ((uint64_t)((&((uint8_t*)(&SP4))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP4))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP4)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i19_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i22_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i20_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i23_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i25_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i22_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit26_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i25.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit26_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i__PHI_TEMPORARY;
#line 357 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or133_2e_i = llvm_cbe_or128_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i18_2e_i;
#line 358 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arrayidx137_2e_i = (&SP2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(llvm_cbe_xor119_2e_i, 24)) & 63))))]);
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _90 = ((uint8_t*)llvm_cbe_arrayidx137_2e_i);
  llvm_cbe_and_2e_i1_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx137_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP2)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit13_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i3_2e_i = (&((uint8_t*)(&SP2))[((int64_t)llvm_cbe_and_2e_i1_2e_i)]);
  llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12_2e_i;

  do {     /* Syntactic loop 'for.body.i12.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12_2e_i:
  llvm_cbe_res_2e_028_2e_i6_2e_i = llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i7_2e_i = llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY;
  _91 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i7_2e_i));
  llvm_cbe_cond_2e_i9_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i7_2e_i == _90)&1)), _91, llvm_cbe_res_2e_028_2e_i6_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i10_2e_i = (&llvm_cbe__ptr_2e_027_2e_i7_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i10_2e_i) < ((uint64_t)((&((uint8_t*)(&SP2))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&SP2))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&SP2)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i9_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i9_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit13_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i12.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit13_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY;
#line 358 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 359 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor139_2e_i = (llvm_cbe_or133_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i) ^ llvm_cbe_right_2e_04_2e_i;
#line 335 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_round_2e_05_2e_i, 1);
  if ((((llvm_cbe_inc_2e_i == 8u)&1))) {
    goto llvm_cbe_loop_desfunc_2e_3_2e_exit;
  } else {
    llvm_cbe_keys_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_incdec_2e_ptr118_2e_i;   /* for PHI node */
    llvm_cbe_round_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_right_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_xor139_2e_i;   /* for PHI node */
    llvm_cbe_leftt_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_xor94_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_desfunc_2e_3_2e_exit:
#line 362 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or142_2e_i = (llvm_cbe_xor139_2e_i << 31) | (llvm_lshr_u32(llvm_cbe_xor139_2e_i, 1));
#line 363 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _92 = (llvm_cbe_or142_2e_i ^ llvm_cbe_xor94_2e_i) & 2863311530u;
#line 364 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 365 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor148_2e_i = _92 ^ llvm_cbe_or142_2e_i;
#line 366 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_or151_2e_i = (llvm_lshr_u32((_92 ^ llvm_cbe_xor94_2e_i), 1)) | (llvm_cbe_xor94_2e_i << 31);
#line 367 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _93 = ((llvm_lshr_u32(llvm_cbe_or151_2e_i, 8)) ^ llvm_cbe_xor148_2e_i) & 16711935;
#line 368 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor157_2e_i = _93 ^ llvm_cbe_xor148_2e_i;
#line 369 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor159_2e_i = (_93 << 8) ^ llvm_cbe_or151_2e_i;
#line 370 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _94 = ((llvm_lshr_u32(llvm_cbe_xor159_2e_i, 2)) ^ llvm_cbe_xor157_2e_i) & 858993459;
#line 371 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor165_2e_i = _94 ^ llvm_cbe_xor157_2e_i;
#line 372 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor167_2e_i = (_94 << 2) ^ llvm_cbe_xor159_2e_i;
#line 373 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _95 = (llvm_cbe_xor167_2e_i & 65535) ^ (llvm_lshr_u32(llvm_cbe_xor165_2e_i, 16));
#line 374 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor173_2e_i = _95 ^ llvm_cbe_xor167_2e_i;
#line 375 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_xor175_2e_i = (_95 << 16) ^ llvm_cbe_xor165_2e_i;
#line 376 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _96 = ((llvm_lshr_u32(llvm_cbe_xor175_2e_i, 4)) ^ llvm_cbe_xor173_2e_i) & 252645135;
#line 377 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 378 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 379 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *llvm_cbe_block = ((_96 << 4) ^ llvm_cbe_xor175_2e_i);
#line 380 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *llvm_cbe_arrayidx1 = (_96 ^ llvm_cbe_xor173_2e_i);
}


static void unscrun_OC_4(uint32_t* llvm_cbe_outof) {
  uint32_t _97;
  uint32_t _98;
  uint32_t _99;
  uint32_t* llvm_cbe_incdec_2e_ptr12;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
#line 152 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _97 = *llvm_cbe_outof;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 152 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)0)])) = (((uint8_t)(llvm_lshr_u32(_97, 24))));
#line 153 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _98 = *llvm_cbe_outof;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 153 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32(_98, 16))));
#line 154 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _99 = *llvm_cbe_outof;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 154 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)2)])) = (((uint8_t)(llvm_lshr_u32(_99, 8))));
#line 155 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_incdec_2e_ptr12 = (&llvm_cbe_outof[((int64_t)1)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 155 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _100 = *llvm_cbe_outof;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 155 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)3)])) = (((uint8_t)_100));
#line 156 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _101 = *llvm_cbe_incdec_2e_ptr12;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 156 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)4)])) = (((uint8_t)(llvm_lshr_u32(_101, 24))));
#line 157 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _102 = *llvm_cbe_incdec_2e_ptr12;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 157 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)5)])) = (((uint8_t)(llvm_lshr_u32(_102, 16))));
#line 158 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _103 = *llvm_cbe_incdec_2e_ptr12;
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 158 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&out.array[((int64_t)6)])) = (((uint8_t)(llvm_lshr_u32(_103, 8))));
#line 159 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _104 = *llvm_cbe_incdec_2e_ptr12;
  *((&out.array[((int64_t)7)])) = (((uint8_t)_104));
}


static void cookey_OC_5(void) {
  __MSALIGN__(16) struct l_array_32_uint32_t llvm_cbe_dough __attribute__((aligned(16)));    /* Address-exposed local */
  uint32_t* llvm_cbe_arraydecay;
  uint32_t llvm_cbe_i_2e_010_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_010_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i;
  uint32_t* llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_cook_2e_08_2e_i_2e_i;
  uint32_t* llvm_cbe_cook_2e_08_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_index_2e_i_2e_i;
  uint64_t llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _105;
  uint32_t _106;
  uint32_t llvm_cbe_inc_2e_i_2e_i;
  uint8_t* _107;

#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 86 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
#line 88 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_arraydecay = (&llvm_cbe_dough.array[((int64_t)0)]);
#line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  ;
  ;
  ;
  llvm_cbe_i_2e_010_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i__PHI_TEMPORARY = ((&promoted_stack_var_deskey_OC_2_1.array[((int64_t)0)]));   /* for PHI node */
  llvm_cbe_cook_2e_08_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_arraydecay;   /* for PHI node */
  llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1_2e_i;

  do {     /* Syntactic loop 'for.body.i1.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1_2e_i:
#line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_i_2e_010_2e_i_2e_i = llvm_cbe_i_2e_010_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i = llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_cook_2e_08_2e_i_2e_i = llvm_cbe_cook_2e_08_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_index_2e_i_2e_i = llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY;
#line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 91 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _105 = *llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i;
#line 92 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 93 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _106 = *((&llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i[((int64_t)1)]));
#line 94 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 88 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 94 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&llvm_cbe_dough.array[((int64_t)llvm_cbe_index_2e_i_2e_i)])) = (((((_105 << 6) & 1056964608) | ((_105 << 10) & 4128768)) | ((llvm_lshr_u32(_106, 10)) & 16128)) | ((llvm_lshr_u32(_106, 6)) & 63));
#line 95 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 96 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 97 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 98 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 97 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
#line 98 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  *((&llvm_cbe_cook_2e_08_2e_i_2e_i[((int64_t)1)])) = (((((_105 << 12) & 1056964608) | ((_105 << 16) & 4128768)) | (_106 & 63)) | ((llvm_lshr_u32(_106, 4)) & 16128));
#line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  llvm_cbe_inc_2e_i_2e_i = llvm_add_u32(llvm_cbe_i_2e_010_2e_i_2e_i, 1);
  if ((((llvm_cbe_inc_2e_i_2e_i == 16u)&1))) {
    goto llvm_cbe_loop_cookey_2e_5_2e_6_2e_exit;
  } else {
    llvm_cbe_i_2e_010_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i__PHI_TEMPORARY = ((&llvm_cbe_raw1_2e_addr_2e_09_2e_i_2e_i[((int64_t)2)]));   /* for PHI node */
    llvm_cbe_cook_2e_08_2e_i_2e_i__PHI_TEMPORARY = ((&llvm_cbe_cook_2e_08_2e_i_2e_i[((int64_t)2)]));   /* for PHI node */
    llvm_cbe_index_2e_i_2e_i__PHI_TEMPORARY = (llvm_add_u64(llvm_cbe_index_2e_i_2e_i, 2));   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i1.i' */
llvm_cbe_loop_cookey_2e_5_2e_6_2e_exit:
#line 79 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/des.c"
  _107 = memcpy(((uint8_t*)(&KnL)), (((uint8_t*)(&llvm_cbe_dough))), 128);
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
  uint32_t _108 = (uint32_t)argc;
  uint8_t** _109 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

