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
struct l_struct_struct_OC_br_block_cbcenc_class_;
struct l_array_96_uint32_t;
struct l_struct_struct_OC_br_des_tab_cbcenc_keys;
struct l_array_64_uint32_t;
struct l_array_28_uint8_t;
struct l_array_16_uint8_t;

/* Function definitions */
typedef uint32_t l_fptr_12(uint32_t, uint8_t**);

typedef void l_fptr_2(struct l_struct_struct_OC_br_block_cbcenc_class_**, uint8_t*, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_13(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_1(struct l_struct_struct_OC_br_block_cbcenc_class_**, uint8_t*, uint64_t);

typedef void l_fptr_5(uint64_t, uint8_t*);

typedef void l_fptr_8(struct l_struct_struct_OC_br_des_tab_cbcenc_keys*, uint8_t*, uint64_t);

typedef void l_fptr_10(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_9(struct l_struct_struct_OC_br_des_tab_cbcenc_keys*, uint8_t*, uint8_t*, uint64_t);

typedef void l_fptr_6(uint8_t*, uint8_t, uint64_t, bool);

typedef uint64_t l_fptr_7(uint32_t, uint8_t*, uint64_t);

typedef void l_fptr_4(void);

typedef void l_fptr_3(void);

typedef void l_fptr_11(uint64_t, uint64_t);

typedef uint8_t* l_fptr_14(uint8_t*, uint8_t*, uint64_t);


/* Types Definitions */
struct l_struct_struct_OC_br_block_cbcenc_class_ {
  uint64_t field0;
  uint32_t field1;
  uint32_t field2;
  l_fptr_1* field3;
  l_fptr_2* field4;
};
struct l_array_96_uint32_t {
  uint32_t array[96];
};
struct l_struct_struct_OC_br_des_tab_cbcenc_keys {
  struct l_struct_struct_OC_br_block_cbcenc_class_* field0;
  struct l_array_96_uint32_t field1;
  uint32_t field2;
};
struct l_array_64_uint32_t {
  uint32_t array[64];
};
struct l_array_28_uint8_t {
  uint8_t array[28];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
uint64_t write(uint32_t, uint8_t*, uint64_t);
static void br_des_tab_cbcenc_init(struct l_struct_struct_OC_br_des_tab_cbcenc_keys*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
static void br_des_tab_cbcenc_run(struct l_struct_struct_OC_br_des_tab_cbcenc_keys*, uint8_t*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));
uint8_t* memset(uint8_t*, uint32_t, uint64_t);
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);


/* Global Variable Definitions and Initialization */
static const struct l_struct_struct_OC_br_block_cbcenc_class_ br_des_tab_cbcenc_vtable = { 400, 8, 3, ((l_fptr_1*)br_des_tab_cbcenc_init), ((l_fptr_2*)br_des_tab_cbcenc_run) };
static const __MSALIGN__(16) struct l_array_64_uint32_t S1 __attribute__((aligned(16))) = { { 8421888, 0, 32768, 8421890, 8421378, 33282, 2, 32768, 512, 8421888, 8421890, 512, 8389122, 8421378, 8388608, 2, 514, 8389120, 8389120, 33280, 33280, 8421376, 8421376, 8389122, 32770, 8388610, 8388610, 32770, 0, 514, 33282, 8388608, 32768, 8421890, 2, 8421376, 8421888, 8388608, 8388608, 512, 8421378, 32768, 33280, 8388610, 512, 2, 8389122, 33282, 8421890, 32770, 8421376, 8389122, 8388610, 514, 33282, 8421888, 514, 8389120, 8389120, 0, 32770, 33280, 0, 8421378 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S2 __attribute__((aligned(16))) = { { 1074282512u, 1073758208u, 16384, 540688, 524288, 16, 1074266128u, 1073758224u, 1073741840u, 1074282512u, 1074282496u, 1073741824u, 1073758208u, 524288, 16, 1074266128u, 540672, 524304, 1073758224u, 0, 1073741824u, 16384, 540688, 1074266112u, 524304, 1073741840u, 0, 540672, 16400, 1074282496u, 1074266112u, 16400, 0, 540688, 1074266128u, 524288, 1073758224u, 1074266112u, 1074282496u, 16384, 1074266112u, 1073758208u, 16, 1074282512u, 540688, 16, 16384, 1073741824u, 16400, 1074282496u, 524288, 1073741840u, 524304, 1073758224u, 1073741840u, 524304, 540672, 0, 1073758208u, 16400, 1073741824u, 1074266128u, 1074282512u, 540672 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S3 __attribute__((aligned(16))) = { { 260, 67174656, 0, 67174404, 67109120, 0, 65796, 67109120, 65540, 67108868, 67108868, 65536, 67174660, 65540, 67174400, 260, 67108864, 4, 67174656, 256, 65792, 67174400, 67174404, 65796, 67109124, 65792, 65536, 67109124, 4, 67174660, 256, 67108864, 67174656, 67108864, 65540, 260, 65536, 67174656, 67109120, 0, 256, 65540, 67174660, 67109120, 67108868, 256, 0, 67174404, 67109124, 65536, 67108864, 67174660, 4, 65796, 65792, 67108868, 67174400, 67109124, 260, 67174400, 65796, 4, 67174404, 65792 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S4 __attribute__((aligned(16))) = { { 2151682048u, 2147487808u, 2147487808u, 64, 4198464, 2151678016u, 2151677952u, 2147487744u, 0, 4198400, 4198400, 2151682112u, 2147483712u, 0, 4194368, 2151677952u, 2147483648u, 4096, 4194304, 2151682048u, 64, 4194304, 2147487744u, 4160, 2151678016u, 2147483648u, 4160, 4194368, 4096, 4198464, 2151682112u, 2147483712u, 4194368, 2151677952u, 4198400, 2151682112u, 2147483712u, 0, 0, 4198400, 4160, 4194368, 2151678016u, 2147483648u, 2151682048u, 2147487808u, 2147487808u, 64, 2151682112u, 2147483712u, 2147483648u, 4096, 2151677952u, 2147487744u, 4198464, 2151678016u, 2147487744u, 4160, 4194304, 2151682048u, 64, 4194304, 4096, 4198464 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S5 __attribute__((aligned(16))) = { { 128, 17039488, 17039360, 553648256, 262144, 128, 536870912, 17039360, 537133184, 262144, 16777344, 537133184, 553648256, 553910272, 262272, 536870912, 16777216, 537133056, 537133056, 0, 536871040, 553910400, 553910400, 16777344, 553910272, 536871040, 0, 553648128, 17039488, 16777216, 553648128, 262272, 262144, 553648256, 128, 16777216, 536870912, 17039360, 553648256, 537133184, 16777344, 536870912, 553910272, 17039488, 537133184, 128, 16777216, 553910272, 553910400, 262272, 553648128, 553910400, 17039360, 0, 537133056, 553648128, 262272, 16777344, 536871040, 262144, 0, 537133056, 17039488, 536871040 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S6 __attribute__((aligned(16))) = { { 268435464, 270532608, 8192, 270540808, 270532608, 8, 270540808, 2097152, 268443648, 2105352, 2097152, 268435464, 2097160, 268443648, 268435456, 8200, 0, 2097160, 268443656, 8192, 2105344, 268443656, 8, 270532616, 270532616, 0, 2105352, 270540800, 8200, 2105344, 270540800, 268435456, 268443648, 8, 270532616, 2105344, 270540808, 2097152, 8200, 268435464, 2097152, 268443648, 268435456, 8200, 268435464, 270540808, 2105344, 270532608, 2105352, 270540800, 0, 270532616, 8, 8192, 270532608, 2105352, 8192, 2097160, 268443656, 0, 270540800, 268435456, 2097160, 268443656 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S7 __attribute__((aligned(16))) = { { 1048576, 34603009, 33555457, 0, 1024, 33555457, 1049601, 34604032, 34604033, 1048576, 0, 33554433, 1, 33554432, 34603009, 1025, 33555456, 1049601, 1048577, 33555456, 33554433, 34603008, 34604032, 1048577, 34603008, 1024, 1025, 34604033, 1049600, 1, 33554432, 1049600, 33554432, 1049600, 1048576, 33555457, 33555457, 34603009, 34603009, 1, 1048577, 33554432, 33555456, 1048576, 34604032, 1025, 1049601, 34604032, 1025, 33554433, 34604033, 34603008, 1049600, 0, 1, 34604033, 0, 1049601, 34603008, 1024, 33554433, 33555456, 1024, 1048577 } };
static const __MSALIGN__(16) struct l_array_64_uint32_t S8 __attribute__((aligned(16))) = { { 134219808, 2048, 131072, 134350880, 134217728, 134219808, 32, 134217728, 131104, 134348800, 134350880, 133120, 134350848, 133152, 2048, 32, 134348800, 134217760, 134219776, 2080, 133120, 131104, 134348832, 134350848, 2080, 0, 0, 134348832, 134217760, 134219776, 133152, 131072, 133152, 131072, 134350848, 2048, 32, 134348832, 2048, 133152, 134219776, 32, 134217760, 134348800, 134348832, 134217728, 131072, 134219808, 0, 134350880, 131104, 134217760, 134348800, 134219776, 134219808, 0, 134350880, 133120, 133120, 2080, 2080, 131104, 134217728, 134350848 } };
static const __MSALIGN__(16) struct l_array_28_uint8_t PC2left __attribute__((aligned(16))) = { "\x10\x03\a\x18\x14\v\x18\r\x02\n\x18\x16\x05\x0F\x17\x01\t\x15\x0C\x18\x06\x04\x0E\x12\x08\x11\x00\x13" };
static const __MSALIGN__(16) struct l_array_28_uint8_t PC2right __attribute__((aligned(16))) = { "\x08\x12\x18\x06\x16\x0F\x03\n\x0C\x13\x05\x0E\v\x18\x04\x17\x10\t\x18\x14\x02\x18\a\r\x00\x15\x11\x01" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = iftrue + ifnot; // r = condition ? iftrue : ifnot;
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
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}
static __forceinline uint8_t llvm_xor_u8(uint8_t a, uint8_t b) {
  uint8_t r = a ^ b;
  return r;
}


/* Function Bodies */

static void __main(void) {
  struct l_struct_struct_OC_br_des_tab_cbcenc_keys llvm_cbe_ctx;    /* Address-exposed local */
  uint64_t llvm_cbe_iv;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_16_uint8_t llvm_cbe_data __attribute__((aligned(16)));    /* Address-exposed local */
  uint8_t* _1;
  uint8_t* _2;
  uint32_t* llvm_cbe_num_rounds;
  uint8_t* _3;
  uint8_t* _4;
  uint8_t* _5;
  uint32_t* llvm_cbe_arraydecay;
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call2;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_2;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_3;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_4;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_5;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_6;
  uint8_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_7;
  uint8_t _6;
  uint8_t _6__PHI_TEMPORARY;
  uint8_t _7;
  uint8_t _7__PHI_TEMPORARY;
  uint64_t llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _8;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_1;
  uint8_t _9;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_1;
  uint8_t _10;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_2;
  uint8_t _11;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_2;
  uint8_t _12;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_3;
  uint8_t _13;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_3;
  uint8_t _14;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_4;
  uint8_t _15;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_4;
  uint8_t _16;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_5;
  uint8_t _17;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_5;
  uint8_t _18;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_6;
  uint8_t _19;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_6;
  uint8_t _20;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_7;
  uint8_t _21;
  uint8_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_7;
  uint32_t _22;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _23;
  uint32_t _23__PHI_TEMPORARY;
  uint32_t _24;
  uint32_t _24__PHI_TEMPORARY;
  uint32_t llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _25;
  uint32_t _26;
  uint32_t _27;
  uint32_t llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _28;
  uint64_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _29;
  uint32_t llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _30;
  uint64_t llvm_cbe_and_2e_i80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i82_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _31;
  uint32_t llvm_cbe_cond_2e_i88_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i89_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _32;
  uint64_t llvm_cbe_and_2e_i67_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i69_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _33;
  uint32_t llvm_cbe_cond_2e_i75_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i76_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _34;
  uint64_t llvm_cbe_and_2e_i54_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i56_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _35;
  uint32_t llvm_cbe_cond_2e_i62_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i63_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or22_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _36;
  uint64_t llvm_cbe_and_2e_i41_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _37;
  uint32_t llvm_cbe_cond_2e_i49_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i50_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or29_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _38;
  uint64_t llvm_cbe_and_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _39;
  uint32_t llvm_cbe_cond_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i37_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx42_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _40;
  uint64_t llvm_cbe_and_2e_i15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _41;
  uint32_t llvm_cbe_cond_2e_i23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_or43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_arrayidx48_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _42;
  uint64_t llvm_cbe_and_2e_i2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i4_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _43;
  uint32_t llvm_cbe_cond_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr8_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t _44;
  uint8_t* llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_sub_2e_i_2e_i_2e_i_2e_i;
  uint8_t _45;
  uint8_t _46;
  uint64_t llvm_cbe_call6;

  ;
  ;
// #line 12 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  _1 = ((uint8_t*)(&llvm_cbe_ctx));
  _2 = memset((((uint8_t*)((&llvm_cbe_ctx.field1)))), 0, 392);
// #line 13 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  *((&llvm_cbe_ctx.field0)) = (&br_des_tab_cbcenc_vtable);
// #line 14 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  llvm_cbe_num_rounds = (&llvm_cbe_ctx.field2);
  *llvm_cbe_num_rounds = 2;
// #line 15 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  _3 = ((uint8_t*)(&llvm_cbe_iv));
// #line 1"/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  ;
// #line 15 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  llvm_cbe_iv = 0;
// #line 16 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  _4 = (&llvm_cbe_data.array[((int64_t)0)]);
  ;
  _5 = memset(_4, 0, 16);
// #line 18 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  llvm_cbe_arraydecay = (&llvm_cbe_ctx.field1.array[((int64_t)0)]);
  llvm_cbe_call = read(0, (((uint8_t*)llvm_cbe_arraydecay)), 384);
// #line 19 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  llvm_cbe_call2 = read(0, _4, 16);
// #line 1"/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  ;
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_2 = (&_3[((int64_t)2)]);
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_3 = (&_3[((int64_t)3)]);
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_4 = (&_3[((int64_t)4)]);
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_5 = (&_3[((int64_t)5)]);
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_6 = (&_3[((int64_t)6)]);
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_7 = (&_3[((int64_t)7)]);
  _6__PHI_TEMPORARY = 0;   /* for PHI node */
  _7__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i__PHI_TEMPORARY = 16;   /* for PHI node */
  llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i__PHI_TEMPORARY = _4;   /* for PHI node */
  goto llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.cond.preheader.i.i.i' to make GCC happy */
llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i_2e_i:
// #line 21 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  _6 = _6__PHI_TEMPORARY;
  _7 = _7__PHI_TEMPORARY;
  llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i = llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i = llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _8 = *llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i = llvm_xor_u8(_8, _7);
  *llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_1 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)1)]);
  _9 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_1;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_1 = llvm_xor_u8(_9, _6);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_1 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_1;
  _10 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_2;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_2 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)2)]);
  _11 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_2;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_2 = llvm_xor_u8(_11, _10);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_2 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_2;
  _12 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_3;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_3 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)3)]);
  _13 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_3;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_3 = llvm_xor_u8(_13, _12);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_3 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_3;
  _14 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_4;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_4 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)4)]);
  _15 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_4;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_4 = llvm_xor_u8(_15, _14);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_4 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_4;
  _16 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_5;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_5 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)5)]);
  _17 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_5;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_5 = llvm_xor_u8(_17, _16);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_5 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_5;
  _18 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_6;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_6 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)6)]);
  _19 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_6;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_6 = llvm_xor_u8(_19, _18);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_6 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_6;
  _20 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_7;
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_7 = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)7)]);
  _21 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_7;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_7 = llvm_xor_u8(_21, _20);
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_7 = llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_7;
  _22 = *llvm_cbe_num_rounds;
  llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_1)) << 16) | ((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i)) << 24)) | ((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_2)) << 8)) | (((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_3));
  llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_5)) << 16) | ((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_4)) << 24)) | ((((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_6)) << 8)) | (((uint32_t)(uint8_t)llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_7));
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  if ((((_22 == 0u)&1))) {
    llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_loop_br_des_tab_cbcenc_run_2e_1_2e_2_2e_exit_2e_i_2e_i_2e_i;
  } else {
    _23__PHI_TEMPORARY = llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    _24__PHI_TEMPORARY = llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _22;   /* for PHI node */
    llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_arraydecay;   /* for PHI node */
    goto llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  do {     /* Syntactic loop 'while.body.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  _23 = _23__PHI_TEMPORARY;
  _24 = _24__PHI_TEMPORARY;
  llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _23;   /* for PHI node */
  llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _24;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _25 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 1;
  _26 = *((&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)_25)]));
  _27 = *((&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)(_25 | 1))]));
  llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 16) | (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 16));
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S1.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_26, 18)) ^ (llvm_lshr_u32(llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 11))) & 63))))]);
  _28 = ((uint8_t*)llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S1))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S1)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S1)) & -64))[((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i1.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _29 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _28)&1)), _29, llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S1)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S1))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S1)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i1.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S2.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_26, 12)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 23))) & 63))))]);
  _30 = ((uint8_t*)llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S2))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S2)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i83_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit92_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i83_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i82_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S2)) & -64))[((int64_t)llvm_cbe_and_2e_i80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i82_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i91_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i91.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i91_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _31 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i88_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _30)&1)), _31, llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i89_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i89_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S2)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S2))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S2)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i85_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i88_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i86_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i89_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i91_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i88_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit92_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i91.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit92_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i84_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S3.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_26, 6)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 19))) & 63))))]);
  _32 = ((uint8_t*)llvm_cbe_arrayidx15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i67_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i67_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S3))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S3)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i70_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit79_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i70_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i69_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S3)) & -64))[((int64_t)llvm_cbe_and_2e_i67_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i69_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i78_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i78.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i78_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _33 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i75_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _32)&1)), _33, llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i76_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i76_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S3)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S3))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S3)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i72_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i75_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i73_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i76_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i78_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i75_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit79_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i78.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit79_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S4.array[((int64_t)(((uint64_t)(uint32_t)((_26 ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 15))) & 63))))]);
  _34 = ((uint8_t*)llvm_cbe_arrayidx21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i54_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i54_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S4))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S4)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i57_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit66_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i57_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i56_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S4)) & -64))[((int64_t)llvm_cbe_and_2e_i54_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i56_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i65_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i65.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i65_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _35 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i62_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _34)&1)), _35, llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i63_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i63_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S4)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S4))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S4)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i59_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i62_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i60_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i63_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i65_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i62_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit66_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i65.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit66_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or22_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S5.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_27, 18)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 11))) & 63))))]);
  _36 = ((uint8_t*)llvm_cbe_arrayidx28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i41_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i41_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S5))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S5)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i44_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit53_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i44_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S5)) & -64))[((int64_t)llvm_cbe_and_2e_i41_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i52_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i52.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i52_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _37 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i49_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _36)&1)), _37, llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i50_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i50_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S5)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S5))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S5)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i46_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i49_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i47_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i50_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i52_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i49_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit53_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i52.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit53_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or29_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or22_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i45_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S6.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_27, 12)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 7))) & 63))))]);
  _38 = ((uint8_t*)llvm_cbe_arrayidx35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S6))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S6)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i31_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit40_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i31_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S6)) & -64))[((int64_t)llvm_cbe_and_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i39_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i39.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i39_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _39 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _38)&1)), _39, llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i37_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i37_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S6)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S6))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S6)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i33_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i37_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i39_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit40_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i39.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit40_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or29_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i32_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx42_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S7.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_27, 6)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 3))) & 63))))]);
  _40 = ((uint8_t*)llvm_cbe_arrayidx42_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx42_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S7))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S7)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit27_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S7)) & -64))[((int64_t)llvm_cbe_and_2e_i15_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i26.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _41 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _40)&1)), _41, llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S7)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S7))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S7)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit27_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i26.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit27_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_or43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or36_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx48_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&S8.array[((int64_t)(((uint64_t)(uint32_t)((_27 ^ (llvm_lshr_u32(llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 15))) & 63))))]);
  _42 = ((uint8_t*)llvm_cbe_arrayidx48_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_and_2e_i2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx48_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S8))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S8)) & -64))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i4_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S8)) & -64))[((int64_t)llvm_cbe_and_2e_i2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i4_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i13.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _43 = *(volatile uint32_t*)(((uint32_t*)llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_cond_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _42)&1)), _43, llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr8_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr8_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((uint8_t*)(uintptr_t)(((uint64_t)(uintptr_t)(&S8)) & -64))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&S8))) + ((uint64_t)319))))) - ((uint64_t)(((uint64_t)(uintptr_t)(&S8)) & -64))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr8_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_uint32_t_dfl_glob_load_2e_exit14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i13.i.i.i.i.i.i.i.i' */
llvm_cbe_uint32_t_dfl_glob_load_2e_exit14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_or43_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i | llvm_cbe_res_2e_0_2e_lcssa_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) ^ llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_loop_br_des_tab_process_block_2e_16_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i.i.i.i.i.i' */
llvm_cbe_loop_br_des_tab_process_block_2e_16_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, -1);
  llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)32)]);
  if ((((llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == 0u)&1))) {
    llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_loop_br_des_tab_cbcenc_run_2e_1_2e_2_2e_exit_2e_i_2e_i_2e_i;
  } else {
    _23__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    _24__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'while.body.i.i.i.i.i.i.i' */
llvm_cbe_loop_br_des_tab_cbcenc_run_2e_1_2e_2_2e_exit_2e_i_2e_i_2e_i:
  llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i & 65535) ^ (llvm_lshr_u32(llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i, 16));
  llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i, 4)) ^ llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i_2e_i) & 252645135;
  llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i, 24))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_1 = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i, 16))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_2 = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i, 8))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_3 = (((uint8_t)llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i_2e_i));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_4 = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i, 24))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_5 = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i, 16))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_6 = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i, 8))));
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i_2e_i_2e_7 = (((uint8_t)llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i_2e_i));
  _44 = __UNALIGNED_LOAD__(uint64_t, 1, (((uint64_t*)llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i)));
  llvm_cbe_iv = _44;
  llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i[((int64_t)8)]);
  llvm_cbe_sub_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i, -8);
  _45 = ((uint8_t)_44);
  _46 = ((uint8_t)(llvm_lshr_u64(_44, 8)));
  if ((((llvm_cbe_sub_2e_i_2e_i_2e_i_2e_i == UINT64_C(0))&1))) {
    goto llvm_cbe_br_des_tab_cbcenc_run_2e_1_2e_exit;
  } else {
    _6__PHI_TEMPORARY = _46;   /* for PHI node */
    _7__PHI_TEMPORARY = _45;   /* for PHI node */
    llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_sub_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_buf_2e_021_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.cond.preheader.i.i.i' */
llvm_cbe_br_des_tab_cbcenc_run_2e_1_2e_exit:
// #line 22 "/home/constantine/constantine/src/apps/binsec/bearssl/des_tab_wrapper.c"
  llvm_cbe_call6 = write(1, _4, 16);
}


static void br_des_tab_cbcenc_init(struct l_struct_struct_OC_br_des_tab_cbcenc_keys* llvm_cbe_ctx, uint8_t* llvm_cbe_key, uint64_t llvm_cbe_len) {
  uint32_t* llvm_cbe_arraydecay;
  uint8_t _47;
  uint8_t _48;
  uint8_t _49;
  uint8_t _50;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t _51;
  uint8_t _52;
  uint8_t _53;
  uint8_t _54;
  uint32_t llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t _55;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _56;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i_2e_i;
  uint32_t _57;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i_2e_i;
  uint32_t _58;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _59;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i_2e_i;
  uint8_t _60;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i;
  uint8_t _61;
  uint8_t _62;
  uint8_t _63;
  uint8_t _64;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i14_2e_i_2e_i_2e_i;
  uint8_t _65;
  uint8_t _66;
  uint8_t _67;
  uint8_t _68;
  uint32_t llvm_cbe_or10_2e_i71_2e_i_2e_i28_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i31_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i32_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i34_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i37_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i38_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i40_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i43_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i44_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i46_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i49_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i50_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i52_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i55_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i56_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i59_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or9_2e_i_2e_i69_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or19_2e_i_2e_i79_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i86_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i87_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i93_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i95_2e_i_2e_i_2e_i;
  uint64_t _69;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i98_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _70;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i102_2e_i_2e_i_2e_i;
  uint32_t _71;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i103_2e_i_2e_i_2e_i;
  uint32_t _72;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _73;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i114_2e_i_2e_i_2e_i;
  uint8_t _74;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i119_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i122_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i125_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _75;
  uint32_t* llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _76;
  uint32_t* llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _77;
  uint32_t* llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _78;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* _79;
  bool _80;
  bool _80__PHI_TEMPORARY;
  uint8_t _81;
  uint8_t _82;
  uint8_t _83;
  uint8_t _84;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t _85;
  uint8_t _86;
  uint8_t _87;
  uint8_t _88;
  uint32_t llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i4_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i6_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i8_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t _89;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i11_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _90;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i;
  uint32_t _91;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i;
  uint32_t _92;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _93;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i;
  uint8_t _94;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i13_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_add_2e_ptr5_2e_i_2e_i;
  uint8_t _95;
  uint8_t _96;
  uint8_t _97;
  uint8_t _98;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i264_2e_i_2e_i;
  uint8_t _99;
  uint8_t _100;
  uint8_t _101;
  uint8_t _102;
  uint32_t llvm_cbe_or10_2e_i71_2e_i_2e_i278_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i281_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i282_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i284_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i287_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i288_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i290_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i293_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i294_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i296_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i299_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i300_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i302_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i305_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i306_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i309_2e_i_2e_i;
  uint32_t llvm_cbe_or9_2e_i_2e_i319_2e_i_2e_i;
  uint32_t llvm_cbe_or19_2e_i_2e_i329_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i336_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i337_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i343_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i345_2e_i_2e_i;
  uint64_t _103;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i348_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _104;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i352_2e_i_2e_i;
  uint32_t _105;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i353_2e_i_2e_i;
  uint32_t _106;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _107;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i364_2e_i_2e_i;
  uint8_t _108;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i369_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i372_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i375_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i;
  uint32_t _109;
  uint32_t* llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i;
  uint32_t _110;
  uint32_t* llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i;
  uint32_t _111;
  uint32_t* llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i;
  uint32_t _112;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_add_2e_ptr8_2e_i_2e_i;
  uint8_t _113;
  uint8_t _114;
  uint8_t _115;
  uint8_t _116;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i138_2e_i_2e_i;
  uint8_t _117;
  uint8_t _118;
  uint8_t _119;
  uint8_t _120;
  uint32_t llvm_cbe_or10_2e_i71_2e_i_2e_i152_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i155_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i156_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i158_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i161_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i162_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i164_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i167_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i168_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i170_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i173_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i174_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i176_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i179_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i180_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i183_2e_i_2e_i;
  uint32_t llvm_cbe_or9_2e_i_2e_i193_2e_i_2e_i;
  uint32_t llvm_cbe_or19_2e_i_2e_i203_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i210_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i211_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i217_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i219_2e_i_2e_i;
  uint64_t _121;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i222_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _122;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i226_2e_i_2e_i;
  uint32_t _123;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i227_2e_i_2e_i;
  uint32_t _124;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _125;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i238_2e_i_2e_i;
  uint8_t _126;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i243_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i246_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i249_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i;
  uint32_t llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i;
  uint32_t llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe__2e__2e_i_2e_i_2e_i85_2e_i_2e_i;
  uint32_t llvm_cbe__2e_80_2e_i_2e_i_2e_i86_2e_i_2e_i;
  uint32_t llvm_cbe_and34_2e_i_2e_i_2e_i92_2e_i_2e_i;
  uint32_t llvm_cbe_and35_2e_i_2e_i_2e_i94_2e_i_2e_i;
  uint64_t _127;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i97_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _128;
  uint32_t* llvm_cbe_arrayidx_2e_i_2e_i1_2e_i101_2e_i_2e_i;
  uint32_t _129;
  uint32_t* llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i102_2e_i_2e_i;
  uint32_t _130;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i;
  uint32_t llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i;
  uint32_t llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i;
  uint32_t llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i;
  uint32_t llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _131;
  uint32_t llvm_cbe_or_2e_i_2e_i6_2e_i113_2e_i_2e_i;
  uint8_t _132;
  uint32_t llvm_cbe_or16_2e_i_2e_i_2e_i118_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i121_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i124_2e_i_2e_i;
  uint32_t llvm_cbe_retval_2e_0_2e_i_2e_i;
  uint32_t llvm_cbe_retval_2e_0_2e_i_2e_i__PHI_TEMPORARY;

  *((&llvm_cbe_ctx->field0)) = (&br_des_tab_cbcenc_vtable);
  llvm_cbe_arraydecay = (&llvm_cbe_ctx->field1.array[((int64_t)0)]);
  if ((((((int64_t)llvm_cbe_len) > ((int64_t)UINT64_C(15)))&1))) {
    goto llvm_cbe_codeRepl_2e_i_2e_i;
  } else {
    goto llvm_cbe_LeafBlock_2e_i_2e_i;
  }

llvm_cbe_codeRepl_2e_i_2e_i:
  if ((((llvm_cbe_len == UINT64_C(16))&1))) {
    goto llvm_cbe_sw_2e_bb1_2e_i_2e_i_2e_i;
  } else {
    _80__PHI_TEMPORARY = 1;   /* for PHI node */
    goto llvm_cbe_branch_br_des_tab_keysched_2e_14_2e_4_2e_exit_2e_i;
  }

llvm_cbe_sw_2e_bb1_2e_i_2e_i_2e_i:
  _47 = *llvm_cbe_key;
  _48 = *((&llvm_cbe_key[((int64_t)1)]));
  _49 = *((&llvm_cbe_key[((int64_t)2)]));
  _50 = *((&llvm_cbe_key[((int64_t)3)]));
  llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_48)) << 16) | ((((uint32_t)(uint8_t)_47)) << 24)) | ((((uint32_t)(uint8_t)_49)) << 8)) | (((uint32_t)(uint8_t)_50));
  _51 = *((&llvm_cbe_key[((int64_t)4)]));
  _52 = *((&llvm_cbe_key[((int64_t)5)]));
  _53 = *((&llvm_cbe_key[((int64_t)6)]));
  _54 = *((&llvm_cbe_key[((int64_t)7)]));
  llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_52)) << 16) | ((((uint32_t)(uint8_t)_51)) << 24)) | ((((uint32_t)(uint8_t)_53)) << 8)) | (((uint32_t)(uint8_t)_54));
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 4);
  llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i = ((((llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 12)) & 4080) | (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i & 267386880)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 12)) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 20)) & 15);
  llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i_2e_i = (((llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i & 4080) | ((llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 20) & 267386880)) | ((llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 4) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) & 15);
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i));
  _55 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 1;
  *((&llvm_cbe_ctx->field1.array[((int64_t)_55)])) = llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  *((&llvm_cbe_ctx->field1.array[((int64_t)(_55 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i.i.i' */
  do {     /* Syntactic loop 'for.body.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _56 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)_56)]);
  _57 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)(_56 | 1))]);
  _58 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _58;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _57;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _59 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_59))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  _60 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_60))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_27_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i.i.i.i' */
llvm_cbe_loop_keysched_unit_2e_27_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_keysched_unit_2e_27_2e_exit_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i.i' */
llvm_cbe_keysched_unit_2e_27_2e_exit_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)32)]);
  _61 = *((&llvm_cbe_key[((int64_t)8)]));
  _62 = *((&llvm_cbe_key[((int64_t)9)]));
  _63 = *((&llvm_cbe_key[((int64_t)10)]));
  _64 = *((&llvm_cbe_key[((int64_t)11)]));
  llvm_cbe_or10_2e_i_2e_i_2e_i14_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_62)) << 16) | ((((uint32_t)(uint8_t)_61)) << 24)) | ((((uint32_t)(uint8_t)_63)) << 8)) | (((uint32_t)(uint8_t)_64));
  _65 = *((&llvm_cbe_key[((int64_t)12)]));
  _66 = *((&llvm_cbe_key[((int64_t)13)]));
  _67 = *((&llvm_cbe_key[((int64_t)14)]));
  _68 = *((&llvm_cbe_key[((int64_t)15)]));
  llvm_cbe_or10_2e_i71_2e_i_2e_i28_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_66)) << 16) | ((((uint32_t)(uint8_t)_65)) << 24)) | ((((uint32_t)(uint8_t)_67)) << 8)) | (((uint32_t)(uint8_t)_68));
  llvm_cbe_and_2e_i_2e_i_2e_i31_2e_i_2e_i_2e_i = (llvm_cbe_or10_2e_i71_2e_i_2e_i28_2e_i_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i14_2e_i_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i32_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i31_2e_i_2e_i_2e_i ^ llvm_cbe_or10_2e_i71_2e_i_2e_i28_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i34_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i31_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i14_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i37_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i34_2e_i_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i32_2e_i_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i38_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i37_2e_i_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i32_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i40_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i37_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i34_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i43_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i38_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i40_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i44_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i43_2e_i_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i40_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i46_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i43_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i38_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i49_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i46_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i44_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i50_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i49_2e_i_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i44_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i52_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i49_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i46_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i55_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i50_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i52_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i56_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i55_2e_i_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i52_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i55_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i50_2e_i_2e_i_2e_i;
  llvm_cbe_and_2e_i_2e_i59_2e_i_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i56_2e_i_2e_i_2e_i, 4);
  llvm_cbe_or9_2e_i_2e_i69_2e_i_2e_i_2e_i = ((((llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i56_2e_i_2e_i_2e_i, 12)) & 4080) | (llvm_cbe_and_2e_i_2e_i59_2e_i_2e_i_2e_i & 267386880)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i, 12)) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i, 20)) & 15);
  llvm_cbe_or19_2e_i_2e_i79_2e_i_2e_i_2e_i = (((llvm_cbe_and_2e_i_2e_i59_2e_i_2e_i_2e_i & 4080) | ((llvm_cbe_xor24_2e_i_2e_i_2e_i56_2e_i_2e_i_2e_i << 20) & 267386880)) | ((llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i << 4) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i58_2e_i_2e_i_2e_i, 16)) & 15);
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i79_2e_i_2e_i_2e_i;   /* for PHI node */
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i69_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i100_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i100.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i100_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i86_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i87_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i93_2e_i_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i86_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i87_2e_i_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i95_2e_i_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i86_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i87_2e_i_2e_i_2e_i));
  _69 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i << 1;
  *((&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)_69)])) = llvm_cbe_and34_2e_i_2e_i_2e_i93_2e_i_2e_i_2e_i;
  *((&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)(_69 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i95_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i98_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i98_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i104_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i80_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i98_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i81_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i95_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i82_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i93_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i100_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i100.i.i.i' */
  do {     /* Syntactic loop 'for.body.i.i104.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i104_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _70 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i102_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)_70)]);
  _71 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i102_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i103_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)(_70 | 1))]);
  _72 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i103_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i__PHI_TEMPORARY = _72;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i__PHI_TEMPORARY = _71;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i124_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i124.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i124_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _73 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i114_2e_i_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_73))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i;
  _74 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i119_2e_i_2e_i_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_74))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i122_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i122_2e_i_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_28_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i105_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i122_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i106_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i119_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i107_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i114_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i108_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i109_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i124_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i124.i.i.i' */
llvm_cbe_loop_keysched_unit_2e_28_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i102_2e_i_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i114_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i103_2e_i_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i119_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i125_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i125_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i1_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i101_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i125_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i104_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i104.i.i.i' */
  do {     /* Syntactic loop 'for.body.i.i1.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i1_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  _75 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)(llvm_sub_u64(30, llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i)))]);
  _76 = *llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i_2e_i = _76;
  *llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i_2e_i = _75;
  llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i | 1))]);
  _77 = *llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i[((int64_t)(llvm_sub_u64(31, llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i)))]);
  _78 = *llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i_2e_i = _78;
  *llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i_2e_i = _77;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i, 2);
  if ((((((uint64_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i) > ((uint64_t)UINT64_C(15)))&1))) {
    goto llvm_cbe_br_des_rev_skey_2e_29_2e_exit_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i1_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i1.i.i.i' */
llvm_cbe_br_des_rev_skey_2e_29_2e_exit_2e_i_2e_i_2e_i:
  _79 = memcpy((((uint8_t*)((&llvm_cbe_ctx->field1.array[((int64_t)64)])))), (((uint8_t*)llvm_cbe_arraydecay)), 128);
  _80__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_branch_br_des_tab_keysched_2e_14_2e_4_2e_exit_2e_i;

llvm_cbe_LeafBlock_2e_i_2e_i:
  _80__PHI_TEMPORARY = (((llvm_cbe_len != UINT64_C(8))&1));   /* for PHI node */
  goto llvm_cbe_branch_br_des_tab_keysched_2e_14_2e_4_2e_exit_2e_i;

llvm_cbe_branch_br_des_tab_keysched_2e_14_2e_4_2e_exit_2e_i:
  _80 = ((_80__PHI_TEMPORARY)&1);
  _81 = *llvm_cbe_key;
  _82 = *((&llvm_cbe_key[((int64_t)1)]));
  _83 = *((&llvm_cbe_key[((int64_t)2)]));
  _84 = *((&llvm_cbe_key[((int64_t)3)]));
  llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_82)) << 16) | ((((uint32_t)(uint8_t)_81)) << 24)) | ((((uint32_t)(uint8_t)_83)) << 8)) | (((uint32_t)(uint8_t)_84));
  _85 = *((&llvm_cbe_key[((int64_t)4)]));
  _86 = *((&llvm_cbe_key[((int64_t)5)]));
  _87 = *((&llvm_cbe_key[((int64_t)6)]));
  _88 = *((&llvm_cbe_key[((int64_t)7)]));
  llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_86)) << 16) | ((((uint32_t)(uint8_t)_85)) << 24)) | ((((uint32_t)(uint8_t)_87)) << 8)) | (((uint32_t)(uint8_t)_88));
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i4_2e_i = (llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i_2e_i4_2e_i ^ llvm_cbe_or10_2e_i71_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i4_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i6_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i6_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i6_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i8_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i8_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i8_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i, 4);
  llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i = ((((llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i, 12)) & 4080) | (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i & 267386880)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i, 12)) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i, 20)) & 15);
  llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i = (((llvm_cbe_and_2e_i_2e_i_2e_i_2e_i & 4080) | ((llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i << 20) & 267386880)) | ((llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i << 4) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) & 15);
  if (_80) {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i12_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i99_2e_i_2e_i;
  }

  do {     /* Syntactic loop 'for.body.i.i.i.i12.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i12_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i_2e_i_2e_i));
  _89 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i << 1;
  *((&llvm_cbe_ctx->field1.array[((int64_t)_89)])) = llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i;
  *((&llvm_cbe_ctx->field1.array[((int64_t)(_89 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i11_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i11_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i9_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i11_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i12_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i12.i' */
  do {     /* Syntactic loop 'for.body.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _90 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)_90)]);
  _91 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)(_90 | 1))]);
  _92 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _92;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _91;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _93 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_93))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i;
  _94 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i13_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_94))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_30_2e_exit_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i13_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i.i.i' */
llvm_cbe_loop_keysched_unit_2e_30_2e_exit_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i_2e_i13_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_keysched_unit_2e_30_2e_exit_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i' */
llvm_cbe_keysched_unit_2e_30_2e_exit_2e_i_2e_i:
  llvm_cbe_add_2e_ptr5_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)32)]);
  _95 = *((&llvm_cbe_key[((int64_t)8)]));
  _96 = *((&llvm_cbe_key[((int64_t)9)]));
  _97 = *((&llvm_cbe_key[((int64_t)10)]));
  _98 = *((&llvm_cbe_key[((int64_t)11)]));
  llvm_cbe_or10_2e_i_2e_i_2e_i264_2e_i_2e_i = ((((((uint32_t)(uint8_t)_96)) << 16) | ((((uint32_t)(uint8_t)_95)) << 24)) | ((((uint32_t)(uint8_t)_97)) << 8)) | (((uint32_t)(uint8_t)_98));
  _99 = *((&llvm_cbe_key[((int64_t)12)]));
  _100 = *((&llvm_cbe_key[((int64_t)13)]));
  _101 = *((&llvm_cbe_key[((int64_t)14)]));
  _102 = *((&llvm_cbe_key[((int64_t)15)]));
  llvm_cbe_or10_2e_i71_2e_i_2e_i278_2e_i_2e_i = ((((((uint32_t)(uint8_t)_100)) << 16) | ((((uint32_t)(uint8_t)_99)) << 24)) | ((((uint32_t)(uint8_t)_101)) << 8)) | (((uint32_t)(uint8_t)_102));
  llvm_cbe_and_2e_i_2e_i_2e_i281_2e_i_2e_i = (llvm_cbe_or10_2e_i71_2e_i_2e_i278_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i264_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i282_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i281_2e_i_2e_i ^ llvm_cbe_or10_2e_i71_2e_i_2e_i278_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i284_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i281_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i264_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i287_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i284_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i282_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i288_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i287_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i282_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i290_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i287_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i284_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i293_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i288_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i290_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i294_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i293_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i290_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i296_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i293_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i288_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i299_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i296_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i294_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i300_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i299_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i294_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i302_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i299_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i296_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i305_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i300_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i302_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i306_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i305_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i302_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i305_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i300_2e_i_2e_i;
  llvm_cbe_and_2e_i_2e_i309_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i306_2e_i_2e_i, 4);
  llvm_cbe_or9_2e_i_2e_i319_2e_i_2e_i = ((((llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i306_2e_i_2e_i, 12)) & 4080) | (llvm_cbe_and_2e_i_2e_i309_2e_i_2e_i & 267386880)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i, 12)) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i, 20)) & 15);
  llvm_cbe_or19_2e_i_2e_i329_2e_i_2e_i = (((llvm_cbe_and_2e_i_2e_i309_2e_i_2e_i & 4080) | ((llvm_cbe_xor24_2e_i_2e_i_2e_i306_2e_i_2e_i << 20) & 267386880)) | ((llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i << 4) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i308_2e_i_2e_i, 16)) & 15);
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i329_2e_i_2e_i;   /* for PHI node */
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i319_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i350_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i350.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i350_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i336_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i337_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i343_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i336_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i337_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i345_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i336_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i337_2e_i_2e_i));
  _103 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i << 1;
  *((&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)_103)])) = llvm_cbe_and34_2e_i_2e_i_2e_i343_2e_i_2e_i;
  *((&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)(_103 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i345_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i348_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i348_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i354_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i330_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i348_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i331_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i345_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i332_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i343_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i350_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i350.i.i' */
  do {     /* Syntactic loop 'for.body.i.i354.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i354_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i__PHI_TEMPORARY;
  _104 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i352_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)_104)]);
  _105 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i352_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i353_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)(_104 | 1))]);
  _106 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i353_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i__PHI_TEMPORARY = _106;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i__PHI_TEMPORARY = _105;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i374_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i374.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i374_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i__PHI_TEMPORARY;
  _107 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i364_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_107))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i;
  _108 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i369_2e_i_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_108))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i372_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i372_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_31_2e_exit_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i355_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i372_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i356_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i369_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i357_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i364_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i358_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i359_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i374_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i374.i.i' */
llvm_cbe_loop_keysched_unit_2e_31_2e_exit_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i352_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i364_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i353_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i369_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i375_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i375_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i251_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i351_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i375_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i354_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i354.i.i' */
  do {     /* Syntactic loop 'for.body.i.i251.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i251_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i)]);
  _109 = *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)(llvm_sub_u64(30, llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i)))]);
  _110 = *llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx_2e_i_2e_i_2e_i_2e_i = _110;
  *llvm_cbe_arrayidx2_2e_i_2e_i_2e_i_2e_i = _109;
  llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i | 1))]);
  _111 = *llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_add_2e_ptr5_2e_i_2e_i[((int64_t)(llvm_sub_u64(31, llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i)))]);
  _112 = *llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx11_2e_i_2e_i_2e_i_2e_i = _112;
  *llvm_cbe_arrayidx14_2e_i_2e_i_2e_i_2e_i = _111;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i, 2);
  if ((((((uint64_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i) > ((uint64_t)UINT64_C(15)))&1))) {
    goto llvm_cbe_br_des_rev_skey_2e_32_2e_exit_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i251_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i251.i.i' */
llvm_cbe_br_des_rev_skey_2e_32_2e_exit_2e_i_2e_i:
  llvm_cbe_add_2e_ptr8_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)64)]);
  _113 = *((&llvm_cbe_key[((int64_t)16)]));
  _114 = *((&llvm_cbe_key[((int64_t)17)]));
  _115 = *((&llvm_cbe_key[((int64_t)18)]));
  _116 = *((&llvm_cbe_key[((int64_t)19)]));
  llvm_cbe_or10_2e_i_2e_i_2e_i138_2e_i_2e_i = ((((((uint32_t)(uint8_t)_114)) << 16) | ((((uint32_t)(uint8_t)_113)) << 24)) | ((((uint32_t)(uint8_t)_115)) << 8)) | (((uint32_t)(uint8_t)_116));
  _117 = *((&llvm_cbe_key[((int64_t)20)]));
  _118 = *((&llvm_cbe_key[((int64_t)21)]));
  _119 = *((&llvm_cbe_key[((int64_t)22)]));
  _120 = *((&llvm_cbe_key[((int64_t)23)]));
  llvm_cbe_or10_2e_i71_2e_i_2e_i152_2e_i_2e_i = ((((((uint32_t)(uint8_t)_118)) << 16) | ((((uint32_t)(uint8_t)_117)) << 24)) | ((((uint32_t)(uint8_t)_119)) << 8)) | (((uint32_t)(uint8_t)_120));
  llvm_cbe_and_2e_i_2e_i_2e_i155_2e_i_2e_i = (llvm_cbe_or10_2e_i71_2e_i_2e_i152_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i138_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i156_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i155_2e_i_2e_i ^ llvm_cbe_or10_2e_i71_2e_i_2e_i152_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i158_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i155_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i138_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i161_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i158_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i156_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i162_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i161_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i156_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i164_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i161_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i158_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i167_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i162_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i164_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i168_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i167_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i164_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i170_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i167_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i162_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i173_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i170_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i168_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i174_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i173_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i168_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i176_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i173_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i170_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i179_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i174_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i176_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i180_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i179_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i176_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i179_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i174_2e_i_2e_i;
  llvm_cbe_and_2e_i_2e_i183_2e_i_2e_i = llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i180_2e_i_2e_i, 4);
  llvm_cbe_or9_2e_i_2e_i193_2e_i_2e_i = ((((llvm_lshr_u32(llvm_cbe_xor24_2e_i_2e_i_2e_i180_2e_i_2e_i, 12)) & 4080) | (llvm_cbe_and_2e_i_2e_i183_2e_i_2e_i & 267386880)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i, 12)) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i, 20)) & 15);
  llvm_cbe_or19_2e_i_2e_i203_2e_i_2e_i = (((llvm_cbe_and_2e_i_2e_i183_2e_i_2e_i & 4080) | ((llvm_cbe_xor24_2e_i_2e_i_2e_i180_2e_i_2e_i << 20) & 267386880)) | ((llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i << 4) & 1044480)) | ((llvm_lshr_u32(llvm_cbe_xor26_2e_i_2e_i_2e_i182_2e_i_2e_i, 16)) & 15);
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or19_2e_i_2e_i203_2e_i_2e_i;   /* for PHI node */
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or9_2e_i_2e_i193_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i224_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i224.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i224_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i210_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i211_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i217_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i210_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i211_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i219_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i210_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i211_2e_i_2e_i));
  _121 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i << 1;
  *((&llvm_cbe_add_2e_ptr8_2e_i_2e_i[((int64_t)_121)])) = llvm_cbe_and34_2e_i_2e_i_2e_i217_2e_i_2e_i;
  *((&llvm_cbe_add_2e_ptr8_2e_i_2e_i[((int64_t)(_121 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i219_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i222_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i222_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i228_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i204_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i222_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i205_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i219_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i206_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i217_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i224_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i224.i.i' */
  do {     /* Syntactic loop 'for.body.i.i228.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i228_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i__PHI_TEMPORARY;
  _122 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i226_2e_i_2e_i = (&llvm_cbe_add_2e_ptr8_2e_i_2e_i[((int64_t)_122)]);
  _123 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i226_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i227_2e_i_2e_i = (&llvm_cbe_add_2e_ptr8_2e_i_2e_i[((int64_t)(_122 | 1))]);
  _124 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i227_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i__PHI_TEMPORARY = _124;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i__PHI_TEMPORARY = _123;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i248_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i248.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i248_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i__PHI_TEMPORARY;
  _125 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i238_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_125))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i;
  _126 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i243_2e_i_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_126))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i246_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i246_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_33_2e_exit_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i229_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i246_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i230_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i243_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i231_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i238_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i232_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i233_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i248_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i248.i.i' */
llvm_cbe_loop_keysched_unit_2e_33_2e_exit_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i226_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i238_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i227_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i243_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i249_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i249_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_retval_2e_0_2e_i_2e_i__PHI_TEMPORARY = 3;   /* for PHI node */
    goto llvm_cbe_br_des_tab_keysched_2e_14_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i225_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i249_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i228_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i228.i.i' */
  do {     /* Syntactic loop 'for.body.i.i.i99.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i99_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i = llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i = llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__2e__2e_i_2e_i_2e_i85_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i))) & 33027) == 0u)&1)), 2, 1);
  llvm_cbe__2e_80_2e_i_2e_i_2e_i86_2e_i_2e_i = llvm_select_u32((((((1 << (((uint32_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i))) & 33027) == 0u)&1)), 26, 27);
  llvm_cbe_and34_2e_i_2e_i_2e_i92_2e_i_2e_i = ((llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i85_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i86_2e_i_2e_i));
  llvm_cbe_and35_2e_i_2e_i_2e_i94_2e_i_2e_i = ((llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i << llvm_cbe__2e__2e_i_2e_i_2e_i85_2e_i_2e_i) & 268435455) | (llvm_lshr_u32(llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i, llvm_cbe__2e_80_2e_i_2e_i_2e_i86_2e_i_2e_i));
  _127 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i << 1;
  *((&llvm_cbe_ctx->field1.array[((int64_t)_127)])) = llvm_cbe_and34_2e_i_2e_i_2e_i92_2e_i_2e_i;
  *((&llvm_cbe_ctx->field1.array[((int64_t)(_127 | 1))])) = llvm_cbe_and35_2e_i_2e_i_2e_i94_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i97_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i97_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i103_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i79_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i97_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kr_2e_073_2e_i_2e_i_2e_i80_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and35_2e_i_2e_i_2e_i94_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_kl_2e_072_2e_i_2e_i_2e_i81_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_and34_2e_i_2e_i_2e_i92_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i99_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i99.i.i' */
  do {     /* Syntactic loop 'for.body.i.i103.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i103_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i = llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i__PHI_TEMPORARY;
  _128 = llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i << 1;
  llvm_cbe_arrayidx_2e_i_2e_i1_2e_i101_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)_128)]);
  _129 = *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i101_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i102_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)(_128 | 1))]);
  _130 = *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i102_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i__PHI_TEMPORARY = _130;   /* for PHI node */
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i__PHI_TEMPORARY = _129;   /* for PHI node */
  goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i123_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body7.i.i.i123.i.i' to make GCC happy */
llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i123_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i = llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i = llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i = llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i = llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i__PHI_TEMPORARY;
  _131 = *((&PC2left.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i)]));
  llvm_cbe_or_2e_i_2e_i6_2e_i113_2e_i_2e_i = ((llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_131))) | llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i;
  _132 = *((&PC2right.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i)]));
  llvm_cbe_or16_2e_i_2e_i_2e_i118_2e_i_2e_i = ((llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i & 1) << (((uint32_t)(uint8_t)_132))) | llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i121_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i121_2e_i_2e_i == UINT64_C(28))&1))) {
    goto llvm_cbe_loop_keysched_unit_2e_26_2e_exit_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i3_2e_i104_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i9_2e_i121_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ur_2e_054_2e_i_2e_i_2e_i105_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or16_2e_i_2e_i_2e_i118_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_ul_2e_053_2e_i_2e_i_2e_i106_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_or_2e_i_2e_i6_2e_i113_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xr_2e_052_2e_i_2e_i_2e_i107_2e_i_2e_i, 1));   /* for PHI node */
    llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i__PHI_TEMPORARY = (llvm_lshr_u32(llvm_cbe_xl_2e_051_2e_i_2e_i_2e_i108_2e_i_2e_i, 1));   /* for PHI node */
    goto llvm_cbe_for_2e_body7_2e_i_2e_i_2e_i123_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body7.i.i.i123.i.i' */
llvm_cbe_loop_keysched_unit_2e_26_2e_exit_2e_i_2e_i_2e_i_2e_i:
  *llvm_cbe_arrayidx_2e_i_2e_i1_2e_i101_2e_i_2e_i = llvm_cbe_or_2e_i_2e_i6_2e_i113_2e_i_2e_i;
  *llvm_cbe_arrayidx4_2e_i_2e_i2_2e_i102_2e_i_2e_i = llvm_cbe_or16_2e_i_2e_i_2e_i118_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i124_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i124_2e_i_2e_i == UINT64_C(16))&1))) {
    llvm_cbe_retval_2e_0_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
    goto llvm_cbe_br_des_tab_keysched_2e_14_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv57_2e_i_2e_i100_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next58_2e_i_2e_i_2e_i124_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i103_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i103.i.i' */
llvm_cbe_br_des_tab_keysched_2e_14_2e_exit:
  llvm_cbe_retval_2e_0_2e_i_2e_i = llvm_cbe_retval_2e_0_2e_i_2e_i__PHI_TEMPORARY;
  *((&llvm_cbe_ctx->field2)) = llvm_cbe_retval_2e_0_2e_i_2e_i;
}


static void br_des_tab_cbcenc_run(struct l_struct_struct_OC_br_des_tab_cbcenc_keys* llvm_cbe_ctx, uint8_t* llvm_cbe_iv, uint8_t* llvm_cbe_data, uint64_t llvm_cbe_len) {
  uint32_t* llvm_cbe_arraydecay_2e_i_2e_i;
  uint64_t* _133;
  uint32_t* llvm_cbe_num_rounds1_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i;
  uint64_t llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_buf_2e_021_2e_i_2e_i;
  uint8_t* llvm_cbe_buf_2e_021_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _134;
  uint8_t* llvm_cbe_arrayidx3_2e_i_2e_i_2e_i;
  uint8_t _135;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i;
  uint32_t _136;
  uint8_t _137;
  uint8_t* llvm_cbe_arrayidx1_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t _138;
  uint8_t* llvm_cbe_arrayidx4_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t _139;
  uint8_t* llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t _140;
  uint32_t llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i;
  uint8_t _141;
  uint8_t* llvm_cbe_arrayidx1_2e_i26_2e_i_2e_i_2e_i_2e_i;
  uint8_t _142;
  uint8_t* llvm_cbe_arrayidx4_2e_i30_2e_i_2e_i_2e_i_2e_i;
  uint8_t _143;
  uint8_t* llvm_cbe_arrayidx8_2e_i34_2e_i_2e_i_2e_i_2e_i;
  uint8_t _144;
  uint32_t llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _145;
  uint32_t _145__PHI_TEMPORARY;
  uint32_t _146;
  uint32_t _146__PHI_TEMPORARY;
  uint32_t llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t _147;
  uint32_t _148;
  uint32_t _149;
  uint32_t llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t _150;
  uint32_t _151;
  uint32_t _152;
  uint32_t _153;
  uint32_t _154;
  uint32_t _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t* llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i;
  uint64_t _158;
  uint8_t* llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_sub_2e_i_2e_i_2e_i;

  if ((((llvm_cbe_len == UINT64_C(0))&1))) {
    goto llvm_cbe_branch_br_des_tab_cbcenc_run_2e_exit;
  } else {
    goto llvm_cbe_codeRepl4_2e_i;
  }

llvm_cbe_codeRepl4_2e_i:
  llvm_cbe_arraydecay_2e_i_2e_i = (&llvm_cbe_ctx->field1.array[((int64_t)0)]);
  _133 = ((uint64_t*)llvm_cbe_iv);
  llvm_cbe_num_rounds1_2e_i_2e_i_2e_i = (&llvm_cbe_ctx->field2);
  llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_len;   /* for PHI node */
  llvm_cbe_buf_2e_021_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_data;   /* for PHI node */
  goto llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i;

  do {     /* Syntactic loop 'for.cond.preheader.i.i' to make GCC happy */
llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i:
  llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i = llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_buf_2e_021_2e_i_2e_i = llvm_cbe_buf_2e_021_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _134 = *((&llvm_cbe_iv[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i)]));
  llvm_cbe_arrayidx3_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i)]);
  _135 = *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i;
  *llvm_cbe_arrayidx3_2e_i_2e_i_2e_i = (llvm_xor_u8(_135, _134));
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i == UINT64_C(8))&1))) {
    goto llvm_cbe_for_2e_end_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i' */
llvm_cbe_for_2e_end_2e_i_2e_i_2e_i:
  _136 = *llvm_cbe_num_rounds1_2e_i_2e_i_2e_i;
  _137 = *llvm_cbe_buf_2e_021_2e_i_2e_i;
  llvm_cbe_arrayidx1_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)1)]);
  _138 = *llvm_cbe_arrayidx1_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)2)]);
  _139 = *llvm_cbe_arrayidx4_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)3)]);
  _140 = *llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_138)) << 16) | ((((uint32_t)(uint8_t)_137)) << 24)) | ((((uint32_t)(uint8_t)_139)) << 8)) | (((uint32_t)(uint8_t)_140));
  llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)4)]);
  _141 = *llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx1_2e_i26_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)5)]);
  _142 = *llvm_cbe_arrayidx1_2e_i26_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx4_2e_i30_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)6)]);
  _143 = *llvm_cbe_arrayidx4_2e_i30_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_arrayidx8_2e_i34_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)7)]);
  _144 = *llvm_cbe_arrayidx8_2e_i34_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i = ((((((uint32_t)(uint8_t)_142)) << 16) | ((((uint32_t)(uint8_t)_141)) << 24)) | ((((uint32_t)(uint8_t)_143)) << 8)) | (((uint32_t)(uint8_t)_144));
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i ^ (llvm_lshr_u32(llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i, 4))) & 252645135;
  llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_or10_2e_i36_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_or10_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_lshr_u32(llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i, 16)) ^ (llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i & 65535);
  llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor1_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor2_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor8_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i_2e_i_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor6_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor12_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i_2e_i_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor14_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor20_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_xor18_2e_i_2e_i_2e_i_2e_i_2e_i;
  if ((((_136 == 0u)&1))) {
    llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_loop_br_des_tab_cbcenc_run_2e_exit_2e_i_2e_i;
  } else {
    _145__PHI_TEMPORARY = llvm_cbe_xor24_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    _146__PHI_TEMPORARY = llvm_cbe_xor26_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _136;   /* for PHI node */
    llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_arraydecay_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  do {     /* Syntactic loop 'while.body.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  _145 = _145__PHI_TEMPORARY;
  _146 = _146__PHI_TEMPORARY;
  llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _145;   /* for PHI node */
  llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _146;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _147 = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 1;
  _148 = *((&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)_147)]));
  _149 = *((&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)(_147 | 1))]));
  llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i << 16) | (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 16));
  _150 = *((&S1.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_148, 18)) ^ (llvm_lshr_u32(llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 11))) & 63))))]));
  _151 = *((&S2.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_148, 12)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 23))) & 63))))]));
  _152 = *((&S3.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_148, 6)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 19))) & 63))))]));
  _153 = *((&S4.array[((int64_t)(((uint64_t)(uint32_t)((_148 ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 15))) & 63))))]));
  _154 = *((&S5.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_149, 18)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 11))) & 63))))]));
  _155 = *((&S6.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_149, 12)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 7))) & 63))))]));
  _156 = *((&S7.array[((int64_t)(((uint64_t)(uint32_t)(((llvm_lshr_u32(_149, 6)) ^ (llvm_lshr_u32(llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 3))) & 63))))]));
  _157 = *((&S8.array[((int64_t)(((uint64_t)(uint32_t)((_149 ^ (llvm_lshr_u32(llvm_cbe_or_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 15))) & 63))))]));
  llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((((((_151 | _150) | _152) | _153) | _154) | _155) | _156) | _157) ^ llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == UINT64_C(16))&1))) {
    goto llvm_cbe_loop_br_des_tab_process_block_2e_15_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_l_2e_018_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i.i.i.i.i' */
llvm_cbe_loop_br_des_tab_process_block_2e_15_2e_exit_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i, -1);
  llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)32)]);
  if ((((llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == 0u)&1))) {
    llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_loop_br_des_tab_cbcenc_run_2e_exit_2e_i_2e_i;
  } else {
    _145__PHI_TEMPORARY = llvm_cbe_r_2e_019_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    _146__PHI_TEMPORARY = llvm_cbe_xor_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_num_rounds_2e_addr_2e_039_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_dec_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_skey_2e_addr_2e_038_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr2_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_while_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'while.body.i.i.i.i.i.i' */
llvm_cbe_loop_br_des_tab_cbcenc_run_2e_exit_2e_i_2e_i:
  llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i = llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i = llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i, 1)) ^ llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i) & 1431655765u;
  llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_r_2e_0_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and_2e_i5_2e_i_2e_i_2e_i_2e_i << 1) ^ llvm_cbe_l_2e_0_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i, 8)) ^ llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i) & 16711935;
  llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor2_2e_i8_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and5_2e_i10_2e_i_2e_i_2e_i_2e_i << 8) ^ llvm_cbe_xor1_2e_i6_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i, 2)) ^ llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i) & 858993459;
  llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor6_2e_i11_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and11_2e_i16_2e_i_2e_i_2e_i_2e_i << 2) ^ llvm_cbe_xor8_2e_i13_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i & 65535) ^ (llvm_lshr_u32(llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i, 16));
  llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor14_2e_i19_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and17_2e_i21_2e_i_2e_i_2e_i_2e_i << 16) ^ llvm_cbe_xor12_2e_i17_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i = ((llvm_lshr_u32(llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i, 4)) ^ llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i) & 252645135;
  llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i = llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i ^ llvm_cbe_xor18_2e_i22_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i = (llvm_cbe_and23_2e_i27_2e_i_2e_i_2e_i_2e_i << 4) ^ llvm_cbe_xor20_2e_i24_2e_i_2e_i_2e_i_2e_i;
  *llvm_cbe_buf_2e_021_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i, 24))));
  *llvm_cbe_arrayidx1_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i, 16))));
  *llvm_cbe_arrayidx4_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i, 8))));
  *llvm_cbe_arrayidx8_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint8_t)llvm_cbe_xor26_2e_i30_2e_i_2e_i_2e_i_2e_i));
  *llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i, 24))));
  *llvm_cbe_arrayidx1_2e_i26_2e_i_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i, 16))));
  *llvm_cbe_arrayidx4_2e_i30_2e_i_2e_i_2e_i_2e_i = (((uint8_t)(llvm_lshr_u32(llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i, 8))));
  *llvm_cbe_arrayidx8_2e_i34_2e_i_2e_i_2e_i_2e_i = (((uint8_t)llvm_cbe_xor24_2e_i28_2e_i_2e_i_2e_i_2e_i));
  _158 = __UNALIGNED_LOAD__(uint64_t, 1, (((uint64_t*)llvm_cbe_buf_2e_021_2e_i_2e_i)));
  __UNALIGNED_LOAD__(uint64_t, 1, _133) = _158;
  llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i = (&llvm_cbe_buf_2e_021_2e_i_2e_i[((int64_t)8)]);
  llvm_cbe_sub_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i, -8);
  if ((((llvm_cbe_sub_2e_i_2e_i_2e_i == UINT64_C(0))&1))) {
    goto llvm_cbe_branch_br_des_tab_cbcenc_run_2e_exit;
  } else {
    llvm_cbe_len_2e_addr_2e_022_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_sub_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_buf_2e_021_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_cond_2e_preheader_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.cond.preheader.i.i' */
llvm_cbe_branch_br_des_tab_cbcenc_run_2e_exit:
  return;
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
  uint32_t _159 = (uint32_t)argc;
  uint8_t** _160 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

