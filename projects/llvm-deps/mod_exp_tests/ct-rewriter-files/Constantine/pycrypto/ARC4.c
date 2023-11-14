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
struct l_array_256_uint8_t;
struct l_struct_struct_OC_stream_state;
struct l_array_32_uint8_t;

/* Function definitions */
typedef void l_fptr_2(void);

typedef void l_fptr_6(uint64_t, uint64_t);

typedef uint32_t l_fptr_7(uint32_t, uint8_t**);

typedef void l_fptr_1(void);

typedef void l_fptr_5(uint8_t*);

typedef uint64_t l_fptr_4(uint32_t, uint8_t*, uint64_t);

typedef void l_fptr_3(uint8_t*, uint8_t, uint64_t, bool);

typedef uint8_t* l_fptr_8(uint8_t*, uint32_t, uint64_t);


/* Types Definitions */
struct l_array_256_uint8_t {
  uint8_t array[256];
};
struct l_struct_struct_OC_stream_state {
  struct l_array_256_uint8_t field0;
  uint8_t field1;
  uint8_t field2;
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_vector_16_uint8_t {
  uint8_t vector[16];
} __attribute__((aligned(16)));

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static void stream_init_OC_1(uint8_t*) __ATTRIBUTELIST__((noinline, nothrow));
static void stream_encrypt_OC_2(uint8_t*) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_struct_struct_OC_stream_state promoted_stack_var_main_0 __attribute__((aligned(64)));


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint8_t llvm_select_u8(bool condition, uint8_t iftrue, uint8_t ifnot) {
  uint8_t r;
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
static __forceinline uint32_t llvm_srem_u32(int32_t a, int32_t b) {
  uint32_t r = a % b;
  return r;
}
static __forceinline uint8_t llvm_xor_u8(uint8_t a, uint8_t b) {
  uint8_t r = a ^ b;
  return r;
}
static __forceinline __MSALIGN__(16) struct l_vector_16_uint8_t llvm_ctor_u8x16(uint8_t x0, uint8_t x1, uint8_t x2, uint8_t x3, uint8_t x4, uint8_t x5, uint8_t x6, uint8_t x7, uint8_t x8, uint8_t x9, uint8_t x10, uint8_t x11, uint8_t x12, uint8_t x13, uint8_t x14, uint8_t x15) {
  __MSALIGN__(16) struct l_vector_16_uint8_t r;
  r.vector[0] = x0;
  r.vector[1] = x1;
  r.vector[2] = x2;
  r.vector[3] = x3;
  r.vector[4] = x4;
  r.vector[5] = x5;
  r.vector[6] = x6;
  r.vector[7] = x7;
  r.vector[8] = x8;
  r.vector[9] = x9;
  r.vector[10] = x10;
  r.vector[11] = x11;
  r.vector[12] = x12;
  r.vector[13] = x13;
  r.vector[14] = x14;
  r.vector[15] = x15;
  return r;
}


/* Function Bodies */

static void __main(void) {
  __MSALIGN__(16) struct l_array_32_uint8_t llvm_cbe_key __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_32_uint8_t llvm_cbe_in __attribute__((aligned(16)));    /* Address-exposed local */
  uint8_t* _1;
  uint8_t* _2;
  uint8_t* _3;
  uint8_t* _4;
  uint8_t* _5;
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call4;

  ;
  ;
// #line 58 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  _1 = memset(((&promoted_stack_var_main_0.field0.array[((int64_t)0)])), 0, 258);
// #line 59 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  ;
  _2 = (&llvm_cbe_key.array[((int64_t)0)]);
  _3 = memset(_2, 0, 32);
// #line 60 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  ;
  _4 = (&llvm_cbe_in.array[((int64_t)0)]);
  _5 = memset(_4, 0, 32);
// #line 62 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  llvm_cbe_call = read(0, _2, 32);
// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  ;
// #line 63 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  stream_init_OC_1(_2);
// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  ;
// #line 64 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  stream_encrypt_OC_2(_4);
// #line 65 "/home/constantine/constantine/src/apps/pycrypto/src/stream_template.c"
  llvm_cbe_call4 = write(1, _4, 32);
}


static void stream_init_OC_1(uint8_t* llvm_cbe_key) {
  uint64_t llvm_cbe_indvars_2e_iv_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_index2_2e_03_2e_i;
  uint32_t llvm_cbe_index2_2e_03_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_index1_2e_02_2e_i;
  uint32_t llvm_cbe_index1_2e_02_2e_i__PHI_TEMPORARY;
  uint8_t _6;
  uint8_t* llvm_cbe_arrayidx10_2e_i;
  uint8_t _7;
  uint32_t llvm_cbe_rem_2e_i;
  uint8_t* llvm_cbe_arrayidx19_2e_i;
  uint64_t llvm_cbe_and_2e_i2_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i4_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i6_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i6_2e_i__PHI_TEMPORARY;
  uint8_t _8;
  uint8_t llvm_cbe_cond_2e_v_2e_i8_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i9_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i;
  uint32_t llvm_cbe_rem28_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i;

// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  ;
  ;
  ;
  ;
// #line 74 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)(&promoted_stack_var_main_0)) = llvm_ctor_u8x16(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)16)]))) = llvm_ctor_u8x16(16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)32)]))) = llvm_ctor_u8x16(32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)48)]))) = llvm_ctor_u8x16(48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)64)]))) = llvm_ctor_u8x16(64u, 65u, 66u, 67u, 68u, 69u, 70u, 71u, 72u, 73u, 74u, 75u, 76u, 77u, 78u, 79u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)80)]))) = llvm_ctor_u8x16(80u, 81u, 82u, 83u, 84u, 85u, 86u, 87u, 88u, 89u, 90u, 91u, 92u, 93u, 94u, 95u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)96)]))) = llvm_ctor_u8x16(96u, 97u, 98u, 99u, 100u, 101u, 102u, 103u, 104u, 105u, 106u, 107u, 108u, 109u, 110u, 111u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)112)]))) = llvm_ctor_u8x16(112u, 113u, 114u, 115u, 116u, 117u, 118u, 119u, 120u, 121u, 122u, 123u, 124u, 125u, 126u, 127u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)128)]))) = llvm_ctor_u8x16(128u, 129u, 130u, 131u, 132u, 133u, 134u, 135u, 136u, 137u, 138u, 139u, 140u, 141u, 142u, 143u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)144)]))) = llvm_ctor_u8x16(144u, 145u, 146u, 147u, 148u, 149u, 150u, 151u, 152u, 153u, 154u, 155u, 156u, 157u, 158u, 159u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)160)]))) = llvm_ctor_u8x16(160u, 161u, 162u, 163u, 164u, 165u, 166u, 167u, 168u, 169u, 170u, 171u, 172u, 173u, 174u, 175u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)176)]))) = llvm_ctor_u8x16(176u, 177u, 178u, 179u, 180u, 181u, 182u, 183u, 184u, 185u, 186u, 187u, 188u, 189u, 190u, 191u);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)192)]))) = llvm_ctor_u8x16(-64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)208)]))) = llvm_ctor_u8x16(-48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)224)]))) = llvm_ctor_u8x16(-32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17);
  *((__MSALIGN__(16) struct l_vector_16_uint8_t*)((&promoted_stack_var_main_0.field0.array[((int64_t)240)]))) = llvm_ctor_u8x16(-16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1);
// #line 75 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *((&promoted_stack_var_main_0.field1)) = 0;
  *((&promoted_stack_var_main_0.field2)) = 0;
  llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_index2_2e_03_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_index1_2e_02_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body4_2e_i;

  do {     /* Syntactic loop 'for.body4.i' to make GCC happy */
llvm_cbe_for_2e_body4_2e_i:
// #line 74 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_indvars_2e_iv_2e_i = llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  llvm_cbe_index2_2e_03_2e_i = llvm_cbe_index2_2e_03_2e_i__PHI_TEMPORARY;
  llvm_cbe_index1_2e_02_2e_i = llvm_cbe_index1_2e_02_2e_i__PHI_TEMPORARY;
// #line 80 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  _6 = *((&llvm_cbe_key[((int64_t)(((int64_t)(int32_t)llvm_cbe_index1_2e_02_2e_i)))]));
  llvm_cbe_arrayidx10_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i)]);
  _7 = *llvm_cbe_arrayidx10_2e_i;
  llvm_cbe_rem_2e_i = llvm_srem_u32((llvm_add_u32((llvm_add_u32(llvm_cbe_index2_2e_03_2e_i, (((uint32_t)(uint8_t)_6)))), (((uint32_t)(uint8_t)_7)))), 256);
// #line 82 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_arrayidx19_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)(((int64_t)(int32_t)llvm_cbe_rem_2e_i)))]);
// #line 74 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_and_2e_i2_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx19_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i2_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i5_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_thread_2e_i;
  }

llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_thread_2e_i:
// #line 82 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *llvm_cbe_arrayidx10_2e_i = 0;
  goto llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i;

llvm_cbe_for_2e_body_2e_preheader_2e_i5_2e_i:
// #line 74 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_add_2e_ptr6_2e_i4_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)llvm_cbe_and_2e_i2_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i6_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i4_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i11_2e_i;

  do {     /* Syntactic loop 'for.body.i11.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i11_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i6_2e_i = llvm_cbe__ptr_2e_027_2e_i6_2e_i__PHI_TEMPORARY;
  _8 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i6_2e_i;
  llvm_cbe_cond_2e_v_2e_i8_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i6_2e_i == llvm_cbe_arrayidx19_2e_i)&1)), _8, llvm_cbe_res_2e_028_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i9_2e_i = (&llvm_cbe__ptr_2e_027_2e_i6_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i9_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.field0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i8_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i6_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i9_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i11_2e_i;
  } else {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i11.i' */
llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i:
// #line 82 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *llvm_cbe_arrayidx10_2e_i = llvm_cbe_cond_2e_v_2e_i8_2e_i;
  llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i4_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i1_2e_i;

  do {     /* Syntactic loop 'for.body.i1.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i1_2e_i:
// #line 74 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe__ptr_2e_027_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  _9 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i;
  *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i = (llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i == llvm_cbe_arrayidx19_2e_i)&1)), _7, _9));
  llvm_cbe_add_2e_ptr10_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.field0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i1_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i1.i' */
llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i:
// #line 84 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_rem28_2e_i = llvm_srem_u32((llvm_add_u32(llvm_cbe_index1_2e_02_2e_i, 1)), 32);
// #line 77 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i == UINT64_C(256))&1))) {
    goto llvm_cbe_loop_stream_init_2e_1_2e_1_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i;   /* for PHI node */
    llvm_cbe_index2_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_rem_2e_i;   /* for PHI node */
    llvm_cbe_index1_2e_02_2e_i__PHI_TEMPORARY = llvm_cbe_rem28_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body4_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body4.i' */
llvm_cbe_loop_stream_init_2e_1_2e_1_2e_exit:
  return;
}


static void stream_encrypt_OC_2(uint8_t* llvm_cbe_block) {
  uint8_t _10;
  uint32_t llvm_cbe_conv;
  uint8_t _11;
  uint32_t llvm_cbe_conv3;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_y_2e_04_2e_i;
  uint32_t llvm_cbe_y_2e_04_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_x_2e_03_2e_i;
  uint32_t llvm_cbe_x_2e_03_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_rem_2e_i;
  uint8_t* llvm_cbe_arrayidx_2e_i;
  uint8_t _12;
  uint32_t llvm_cbe_conv5_2e_i;
  uint32_t llvm_cbe_rem7_2e_i;
  uint8_t* llvm_cbe_arrayidx14_2e_i;
  uint64_t llvm_cbe_and_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _13;
  uint8_t llvm_cbe_cond_2e_v_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i18_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i18_2e_i__PHI_TEMPORARY;
  uint8_t _14;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i21_2e_i;
  uint8_t llvm_cbe__2e_pre_2e_i;
  uint8_t _15;
  uint8_t _15__PHI_TEMPORARY;
  uint8_t* llvm_cbe_arrayidx34_2e_i;
  uint64_t llvm_cbe_and_2e_i1_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i6_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY;
  uint8_t _16;
  uint8_t llvm_cbe_cond_2e_v_2e_i9_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10_2e_i;
  uint8_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i;
  uint8_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_arrayidx37_2e_i;
  uint8_t _17;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i;

// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  ;
  ;
  ;
// #line 47 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  _10 = *((&promoted_stack_var_main_0.field1));
  llvm_cbe_conv = ((uint32_t)(uint8_t)_10);
// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  ;
// #line 47 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  _11 = *((&promoted_stack_var_main_0.field2));
  llvm_cbe_conv3 = ((uint32_t)(uint8_t)_11);
// #line 1"/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  ;
  ;
  ;
  llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_y_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_conv3;   /* for PHI node */
  llvm_cbe_x_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_conv;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_indvars_2e_iv_2e_i = llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  llvm_cbe_y_2e_04_2e_i = llvm_cbe_y_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_x_2e_03_2e_i = llvm_cbe_x_2e_03_2e_i__PHI_TEMPORARY;
// #line 51 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_rem_2e_i = llvm_srem_u32((llvm_add_u32(llvm_cbe_x_2e_03_2e_i, 1)), 256);
// #line 52 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_arrayidx_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)(((int64_t)(int32_t)llvm_cbe_rem_2e_i)))]);
  _12 = *llvm_cbe_arrayidx_2e_i;
  llvm_cbe_conv5_2e_i = ((uint32_t)(uint8_t)_12);
  llvm_cbe_rem7_2e_i = llvm_srem_u32((llvm_add_u32(llvm_cbe_y_2e_04_2e_i, llvm_cbe_conv5_2e_i)), 256);
// #line 56 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_arrayidx14_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)(((int64_t)(int32_t)llvm_cbe_rem7_2e_i)))]);
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_and_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx14_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_thread_2e_i;
  }

llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_thread_2e_i:
// #line 56 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *llvm_cbe_arrayidx_2e_i = 0;
  _15__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i;

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i:
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_add_2e_ptr6_2e_i_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)llvm_cbe_and_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY;
  _13 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i == llvm_cbe_arrayidx14_2e_i)&1)), _13, llvm_cbe_res_2e_028_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.field0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  } else {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i17_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe_for_2e_body_2e_preheader_2e_i17_2e_i:
// #line 56 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *llvm_cbe_arrayidx_2e_i = llvm_cbe_cond_2e_v_2e_i_2e_i;
  llvm_cbe__ptr_2e_027_2e_i18_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i23_2e_i;

  do {     /* Syntactic loop 'for.body.i23.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i23_2e_i:
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe__ptr_2e_027_2e_i18_2e_i = llvm_cbe__ptr_2e_027_2e_i18_2e_i__PHI_TEMPORARY;
  _14 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i18_2e_i;
  *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i18_2e_i = (llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i18_2e_i == llvm_cbe_arrayidx14_2e_i)&1)), _12, _14));
  llvm_cbe_add_2e_ptr10_2e_i21_2e_i = (&llvm_cbe__ptr_2e_027_2e_i18_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i21_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.field0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe__ptr_2e_027_2e_i18_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i21_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i23_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_loopexit_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i23.i' */
llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_loopexit_2e_i:
// #line 61 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe__2e_pre_2e_i = *llvm_cbe_arrayidx_2e_i;
  _15__PHI_TEMPORARY = llvm_cbe__2e_pre_2e_i;   /* for PHI node */
  goto llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i;

llvm_cbe_uint8_t_dfl_glob_store_2e_exit_2e_i:
  _15 = _15__PHI_TEMPORARY;
// #line 62 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_arrayidx34_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)(((uint64_t)(uint32_t)((llvm_add_u32((((uint32_t)(uint8_t)_15)), llvm_cbe_conv5_2e_i)) & 255))))]);
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_and_2e_i1_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx34_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i1_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit13_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i3_2e_i = (&promoted_stack_var_main_0.field0.array[((int64_t)llvm_cbe_and_2e_i1_2e_i)]);
  llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12_2e_i;

  do {     /* Syntactic loop 'for.body.i12.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12_2e_i:
  llvm_cbe_res_2e_028_2e_i6_2e_i = llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i7_2e_i = llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY;
  _16 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i7_2e_i;
  llvm_cbe_cond_2e_v_2e_i9_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i7_2e_i == llvm_cbe_arrayidx34_2e_i)&1)), _16, llvm_cbe_res_2e_028_2e_i6_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i10_2e_i = (&llvm_cbe__ptr_2e_027_2e_i7_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.field0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)319))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i6_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i7_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9_2e_i;   /* for PHI node */
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit13_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i12.i' */
llvm_cbe_uint8_t_dfl_glob_load_2e_exit13_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i__PHI_TEMPORARY;
// #line 62 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_arrayidx37_2e_i = (&llvm_cbe_block[((int64_t)llvm_cbe_indvars_2e_iv_2e_i)]);
  _17 = *llvm_cbe_arrayidx37_2e_i;
  *llvm_cbe_arrayidx37_2e_i = (llvm_xor_u8(_17, llvm_cbe_res_2e_0_2e_lcssa_2e_i5_2e_i));
// #line 49 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i == UINT64_C(32))&1))) {
    goto llvm_cbe_loop_stream_encrypt_2e_2_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i;   /* for PHI node */
    llvm_cbe_y_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_rem7_2e_i;   /* for PHI node */
    llvm_cbe_x_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_rem_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_stream_encrypt_2e_2_2e_exit:
// #line 65 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *((&promoted_stack_var_main_0.field1)) = (((uint8_t)llvm_cbe_rem_2e_i));
// #line 66 "/home/constantine/constantine/src/apps/pycrypto/src/ARC4.c"
  *((&promoted_stack_var_main_0.field2)) = (((uint8_t)llvm_cbe_rem7_2e_i));
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
  uint32_t _18 = (uint32_t)argc;
  uint8_t** _19 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

