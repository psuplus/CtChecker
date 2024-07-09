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
struct l_array_8_uint8_t;
struct l_struct_struct_OC_ssl3_state_st;
struct l_struct_struct_OC_evp_cipher_st;
struct l_struct_struct_OC_evp_cipher_ctx_st;
struct l_struct_struct_OC_ssl_st;
struct l_struct_struct_OC_ssl3_record_st;
struct l_array_63_uint8_t;

/* Function definitions */
typedef bool l_fptr_5(bool, bool);

typedef void l_fptr_2(void);

typedef void l_fptr_1(void);

typedef void l_fptr_3(uint64_t, uint8_t*);

typedef uint32_t l_fptr_8(uint32_t, uint8_t**);

typedef bool l_fptr_6(uint64_t*, bool);

typedef void l_fptr_7(uint64_t, uint64_t);

typedef uint64_t l_fptr_4(uint32_t, uint8_t*, uint64_t);


// bool cfl_loop_exiting(uint64_t*, bool);

// bool cfl_br_get_fixed(bool, bool);

/* Types Definitions */
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_struct_struct_OC_ssl3_state_st {
  uint64_t field0;
  struct l_array_8_uint8_t field1;
};
struct l_struct_struct_OC_evp_cipher_st {
  uint64_t field0;
};
struct l_struct_struct_OC_evp_cipher_ctx_st {
  struct l_struct_struct_OC_evp_cipher_st* field0;
};
struct l_struct_struct_OC_ssl_st {
  uint8_t* field0;
  uint64_t field1;
  struct l_struct_struct_OC_ssl3_state_st* field2;
  struct l_struct_struct_OC_evp_cipher_ctx_st* field3;
  uint32_t field4;
};
struct l_struct_struct_OC_ssl3_record_st {
  uint32_t field0;
  uint8_t* field1;
  uint32_t field2;
  uint8_t* field3;
};
struct l_array_63_uint8_t {
  uint8_t array[63];
};

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
uint64_t write(uint32_t, uint8_t*, uint64_t);
static bool cfl_br_get_fixed(bool, bool) __ATTRIBUTELIST__((noinline, nothrow, pure));
static bool cfl_loop_exiting(uint64_t*, bool) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_63_uint8_t promoted_stack_var_main_0 __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_struct_struct_OC_ssl3_state_st promoted_stack_var_main_1 __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_struct_struct_OC_ssl_st promoted_stack_var_main_2 __attribute__((aligned(64)));
static __MSALIGN__(64) struct l_struct_struct_OC_ssl3_record_st promoted_stack_var_main_3 __attribute__((aligned(64)));
static uint8_t taken = 1;
static uint64_t loop_cfl_glob_Flow_OC_split__cfl_loop_tls1_cbc_remove_padding_OC_90;


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline bool llvm_select_bool(bool condition, bool iftrue, bool ifnot) {
  bool r;
  r = iftrue + ifnot; //r = condition ? iftrue : ifnot;
  return r;
}
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
static __forceinline uint8_t* llvm_select_pu8(bool condition, uint8_t* iftrue, uint8_t* ifnot) {
  uint8_t* r;
  r = iftrue + (int) ifnot; //r = condition ? iftrue : ifnot;
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
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}


/* Function Bodies */

static void __main(void) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe__2e_loc6_2e_i_2e_i_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe__2e_inv_2e_loc_2e_i_2e_i_2e_i_2e_i;    /* Address-exposed local */
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_loc_2e_i_2e_i_2e_i_2e_i;    /* Address-exposed local */
  uint64_t llvm_cbe_options;    /* Address-exposed local */
  uint64_t llvm_cbe_s3_flags;    /* Address-exposed local */
  uint64_t llvm_cbe_flags;    /* Address-exposed local */
  uint32_t llvm_cbe_slicing_cheat;    /* Address-exposed local */
  uint32_t llvm_cbe_mac_size;    /* Address-exposed local */
  struct l_struct_struct_OC_evp_cipher_st llvm_cbe_cipher;    /* Address-exposed local */
  struct l_struct_struct_OC_evp_cipher_ctx_st llvm_cbe_cipher_ctx;    /* Address-exposed local */
  uint8_t llvm_cbe_dummy_expand;    /* Address-exposed local */
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call1;
  uint64_t llvm_cbe_call2;
  uint64_t llvm_cbe_call3;
  uint64_t llvm_cbe_call4;
  uint64_t llvm_cbe_call5;
  uint64_t _1;
  uint8_t* _2;
  uint64_t _3;
  uint8_t* _4;
  uint64_t _5;
  uint32_t _6;
  uint8_t _7;
  uint32_t llvm_cbe_conv_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  uint8_t _8;
  uint64_t _9;
  uint8_t _10;
  uint64_t llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i;
  uint64_t _11;
  uint8_t _12;
  uint64_t _13;
  uint8_t _14;
  uint64_t _15;
  uint8_t _16;
  uint64_t _17;
  uint8_t _18;
  uint32_t _19;
  bool llvm_cbe_tobool3_2e_i_2e_i2_2e_i;
  uint8_t llvm_cbe_frombool4_2e_i_2e_i3_2e_i;
  bool _20;
  uint8_t* _21;
  uint8_t* _22;
  uint8_t* _23;
  uint8_t* _24;
  uint64_t _25;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  bool llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i;
  bool llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _26;
  uint64_t llvm_cbe_escaping_val_2e_i_2e_i_2e_i_2e_i;
  uint8_t _27;
  uint8_t _28;
  uint8_t _29;
  uint8_t* llvm_cbe_arrayidx23_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _30;
  uint8_t llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i;
  bool _31;
  uint8_t _32;
  bool llvm_cbe_escaping_val8_2e_i_2e_i_2e_i_2e_i;
  bool _33;
  bool _34;
  bool _35;
  bool _35__PHI_TEMPORARY;
  bool _36;
  uint64_t _37;
  uint8_t _38;
  uint64_t _39;
  uint8_t _40;
  uint64_t _41;
  uint8_t _42;
  uint32_t _43;
  uint8_t _44;
  uint64_t llvm_cbe_call16;

  ;
  ;
// #line 8 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
// #line 9 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
// #line 10 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
// #line 11 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
// #line 12 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 15 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
// #line 18 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call =  /*tail*/ read(0, ((&promoted_stack_var_main_0.array[((int64_t)0)])), 63);
// #line 21 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call1 = read(0, (((uint8_t*)(&llvm_cbe_options))), 4);
// #line 22 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call2 = read(0, (((uint8_t*)(&llvm_cbe_s3_flags))), 4);
// #line 23 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call3 = read(0, (((uint8_t*)(&llvm_cbe_flags))), 4);
// #line 24 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call4 = read(0, (((uint8_t*)(&llvm_cbe_slicing_cheat))), 4);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 27 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call5 = read(0, (((uint8_t*)(&llvm_cbe_mac_size))), 4);
// #line 29 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  _1 = llvm_cbe_s3_flags;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 29 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&promoted_stack_var_main_1.field0)) = _1;
  *((uint64_t*)((&promoted_stack_var_main_1.field1.array[((int64_t)0)]))) = 0;
// #line 31 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  _2 = ((uint8_t*)(&llvm_cbe_cipher));
  _3 = llvm_cbe_flags;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 31 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&llvm_cbe_cipher.field0)) = _3;
// #line 32 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  _4 = ((uint8_t*)(&llvm_cbe_cipher_ctx));
  *((&llvm_cbe_cipher_ctx.field0)) = (&llvm_cbe_cipher);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 35 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&promoted_stack_var_main_2.field0)) = (&llvm_cbe_dummy_expand);
  _5 = llvm_cbe_options;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 35 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&promoted_stack_var_main_2.field1)) = _5;
  *((&promoted_stack_var_main_2.field2)) = (&promoted_stack_var_main_1);
  *((&promoted_stack_var_main_2.field3)) = (&llvm_cbe_cipher_ctx);
  _6 = llvm_cbe_slicing_cheat;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 35 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&promoted_stack_var_main_2.field4)) = _6;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 40 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  *((&promoted_stack_var_main_3.field0)) = 63;
  *((&promoted_stack_var_main_3.field1)) = ((&promoted_stack_var_main_0.array[((int64_t)0)]));
  *((&promoted_stack_var_main_3.field2)) = 0;
  *((&promoted_stack_var_main_3.field3)) = ((uint8_t*)/*NULL*/0);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
// #line 74 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _7 = *((&promoted_stack_var_main_0.array[((int64_t)62)]));
  llvm_cbe_conv_2e_i = ((uint32_t)(uint8_t)_7);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  ;
  ;
// #line 75 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_conv_2e_i, 1);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  ;
// #line 76 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 79 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _8 = taken;
  taken = (((uint8_t)(bool)(((((((_5 & 512) != UINT64_C(0))&1)) & (((_8 != ((uint8_t)0))&1)))&1))));
  _9 = *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_2.field2)));
  _10 = *(volatile uint8_t*)(&taken);
  llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i = llvm_select_u64((((_10 == ((uint8_t)0))&1)), 0, _9);
  _11 = *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_1.field1.array[((int64_t)0)])));
  _12 = *(volatile uint8_t*)(&taken);
  taken = (((uint8_t)(bool)((((((_12 != ((uint8_t)0))&1)) & (((((((llvm_cbe_conv_2e_i & 1) == 0u)&1)) & ((((((_12 == ((uint8_t)0))&1)) | ((((((_11 == UINT64_C(0))&1)) | ((((((struct l_struct_struct_OC_ssl3_state_st*)(uintptr_t)llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i)) != (&promoted_stack_var_main_1))&1)))&1)))&1)))&1)))&1))));
  _13 = *(volatile uint64_t*)((&promoted_stack_var_main_1.field0));
  _14 = *(volatile uint8_t*)(&taken);
// #line 80 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 79 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _15 = *(volatile uint64_t*)((&promoted_stack_var_main_1.field0));
  _16 = *(volatile uint8_t*)(&taken);
  *(volatile uint64_t*)((&promoted_stack_var_main_1.field0)) = (llvm_select_u64(((((((_16 != ((uint8_t)0))&1)) & ((((((uint8_t*)(uintptr_t)(llvm_mul_u64(llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i, (((uint64_t)(uint8_t)_14)))))) == ((uint8_t*)(&promoted_stack_var_main_1)))&1)))&1)), (llvm_select_u64((((_14 == ((uint8_t)0))&1)), 8, (llvm_select_u64(((((((uint8_t*)(uintptr_t)llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i)) == ((uint8_t*)(&promoted_stack_var_main_1)))&1)), (_13 | 8), 8)))), _15));
  taken = _12;
  _17 = *(volatile uint64_t*)((&promoted_stack_var_main_1.field0));
  _18 = *(volatile uint8_t*)(&taken);
// #line 81 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 79 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _19 = llvm_select_u32(((((_5 & 512) != UINT64_C(0))&1)), (llvm_select_u32(((((((_18 == ((uint8_t)0))&1)) | (((((((_17 & 8) == UINT64_C(0))&1)) | (((~(((((((uint8_t*)(uintptr_t)llvm_cbe_cond_2e_i_2e_i_2e_i_2e_i)) == ((uint8_t*)(&promoted_stack_var_main_1)))&1))))&1)))&1)))&1)), llvm_cbe_inc_2e_i, llvm_cbe_conv_2e_i)), llvm_cbe_inc_2e_i);
// #line 86 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_tobool3_2e_i_2e_i2_2e_i = (((((_8 != ((uint8_t)0))&1)) & (((((uint32_t)_19) < ((uint32_t)48u))&1)))&1);
  llvm_cbe_frombool4_2e_i_2e_i3_2e_i = ((uint8_t)(bool)llvm_cbe_tobool3_2e_i_2e_i2_2e_i);
  taken = llvm_cbe_frombool4_2e_i_2e_i3_2e_i;
// #line 95 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _20 = ((cfl_br_get_fixed((((_19 != 0u)&1)), 1))&1);
  if (_20) {
    goto llvm_cbe_codeRepl17_2e_i_2e_i_2e_i;
  } else {
    _35__PHI_TEMPORARY = 1;   /* for PHI node */
    goto llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_7_2e_exit_2e_i_2e_i;
  }

llvm_cbe_codeRepl17_2e_i_2e_i_2e_i:
  _21 = ((uint8_t*)(&llvm_cbe__2e_loc6_2e_i_2e_i_2e_i_2e_i));
  _22 = ((uint8_t*)(&llvm_cbe__2e_inv_2e_loc_2e_i_2e_i_2e_i_2e_i));
  _23 = ((uint8_t*)(&llvm_cbe_indvars_2e_iv_2e_next_2e_loc_2e_i_2e_i_2e_i_2e_i));
  _24 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i_2e_i_2e_i));
  _25 = ((int64_t)(int32_t)(llvm_sub_u32(63, _19)));
  llvm_cbe_loop_cfl_count_2e_i_2e_i_2e_i_2e_i = 0;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = _25;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i = ((llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY)&1);
  _26 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i_2e_i_2e_i = llvm_select_u64((((_26 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i, llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i);
  _27 = *(volatile uint8_t*)(&taken);
  _28 = *(volatile uint8_t*)(&taken);
  _29 = *(volatile uint8_t*)(&taken);
// #line 97 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_arrayidx23_2e_i_2e_i_2e_i_2e_i_2e_i = (&promoted_stack_var_main_0.array[((int64_t)llvm_cbe_escaping_val_2e_i_2e_i_2e_i_2e_i)]);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_arrayidx23_2e_i_2e_i_2e_i_2e_i_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)126))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_10_2e_exit_2e_i_2e_i_2e_i_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&promoted_stack_var_main_0.array[((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _30 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == llvm_cbe_arrayidx23_2e_i_2e_i_2e_i_2e_i_2e_i)&1)), _30, llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i) < ((uint64_t)((&((&promoted_stack_var_main_0.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0))) + ((uint64_t)126))))) - ((uint64_t)((uint64_t)(uintptr_t)(&promoted_stack_var_main_0)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_10_2e_exit_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i.i.i' */
llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_10_2e_exit_2e_i_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY;
// #line 97 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 95 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_escaping_val_2e_i_2e_i_2e_i_2e_i, 1);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_loc_2e_i_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i;
// #line 95 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _31 = ((((((((uint32_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i)) == 63u)&1)) | (((~((((llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _7)&1))))&1)))&1);
  llvm_cbe__2e_loc6_2e_i_2e_i_2e_i_2e_i = ((_31) & 1);
  llvm_cbe__2e_inv_2e_loc_2e_i_2e_i_2e_i_2e_i = (((((llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _7)&1))) & 1);
// #line 95 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _32 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val8_2e_i_2e_i_2e_i_2e_i = ((llvm_select_bool((((_32 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i, (((llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i_2e_i_2e_i_2e_i == _7)&1))))&1);
  _33 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i_2e_i_2e_i), _31))&1);
  if (_33) {
    goto llvm_cbe___cfl_loop_tls1_cbc_remove_padding_2e_9_2e_exit_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_27 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i_2e_i_2e_i, _21));   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_28 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i_2e_i_2e_i, _22));   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_29 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i_2e_i_2e_i, _23));   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val8_2e_i_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i.i' */
llvm_cbe___cfl_loop_tls1_cbc_remove_padding_2e_9_2e_exit_2e_i_2e_i_2e_i:
  taken = llvm_cbe_frombool4_2e_i_2e_i3_2e_i;
  _34 = ((cfl_br_get_fixed(llvm_cbe_escaping_val8_2e_i_2e_i_2e_i_2e_i, 0))&1);
  _35__PHI_TEMPORARY = _34;   /* for PHI node */
  goto llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_7_2e_exit_2e_i_2e_i;

llvm_cbe___cfl_branch_tls1_cbc_remove_padding_2e_7_2e_exit_2e_i_2e_i:
  _35 = ((_35__PHI_TEMPORARY)&1);
// #line 105 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _36 = ((cfl_br_get_fixed(_35, 0))&1);
  if (_36) {
    goto llvm_cbe_for_2e_end_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_tls1_cbc_remove_padding_2e_1_2e_exit;
  }

llvm_cbe_for_2e_end_2e_i_2e_i_2e_i:
  _37 = *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_3.field1)));
  _38 = *(volatile uint8_t*)(&taken);
  *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_3.field1))) = (llvm_select_u64((((llvm_cbe_tobool3_2e_i_2e_i2_2e_i & (((_38 != ((uint8_t)0))&1)))&1)), ((uint64_t)(uintptr_t)((&promoted_stack_var_main_0.array[((int64_t)16)]))), _37));
  _39 = *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_3.field3)));
  _40 = *(volatile uint8_t*)(&taken);
// #line 106 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 105 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _41 = *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_3.field3)));
  _42 = *(volatile uint8_t*)(&taken);
  *(volatile uint64_t*)((uint64_t*)((&promoted_stack_var_main_3.field3))) = (llvm_select_u64(((((((_42 != ((uint8_t)0))&1)) & ((((((uint8_t*)(uintptr_t)(llvm_mul_u64((((uint64_t)(uint8_t)_40)), ((uint64_t)(uintptr_t)((&promoted_stack_var_main_3.field3))))))) == ((uint8_t*)((&promoted_stack_var_main_3.field3))))&1)))&1)), (((uint64_t)(uintptr_t)((&(llvm_select_pu8((((_40 == ((uint8_t)0))&1)), ((uint8_t*)/*NULL*/0), (((uint8_t*)(uintptr_t)_39))))[((int64_t)16)])))), _41));
// #line 107 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
// #line 105 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  _43 = *(volatile uint32_t*)((&promoted_stack_var_main_3.field0));
  _44 = *(volatile uint8_t*)(&taken);
  *(volatile uint32_t*)((&promoted_stack_var_main_3.field0)) = (llvm_select_u32((((((((((uint8_t*)(uintptr_t)(llvm_mul_u64((((uint64_t)(uint8_t)_42)), ((uint64_t)(uintptr_t)(&promoted_stack_var_main_3)))))) == ((uint8_t*)(&promoted_stack_var_main_3)))&1)) & (((_44 != ((uint8_t)0))&1)))&1)), (llvm_sub_u32(47, _19)), _43));
  goto llvm_cbe_tls1_cbc_remove_padding_2e_1_2e_exit;

llvm_cbe_tls1_cbc_remove_padding_2e_1_2e_exit:
// #line 86 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13.c"
  taken = _8;
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
// #line 44 "/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  llvm_cbe_call16 = write(1, ((&promoted_stack_var_main_0.array[((int64_t)0)])), 63);
// #line 1"/home/constantine/constantine/src/apps/binsec/openssl/tls1_cbc_remove_padding_lucky13_wrapper.c"
  ;
}


static bool cfl_br_get_fixed(bool llvm_cbe_cmp, bool llvm_cbe_fixed_res) {
  uint8_t _45;

  _45 = taken;
  return (((llvm_select_bool((((_45 == ((uint8_t)0))&1)), llvm_cbe_fixed_res, llvm_cbe_cmp))&1));
}


static bool cfl_loop_exiting(uint64_t* llvm_cbe_count, bool llvm_cbe_would_exit) {
  uint8_t _46;
  bool llvm_cbe_tobool2;
  uint64_t _47;
  uint64_t llvm_cbe_inc;
  uint64_t _48;
  uint64_t llvm_cbe_cond;

  _46 = taken;
  llvm_cbe_tobool2 = (((((_46 != ((uint8_t)0))&1)) & (((~(llvm_cbe_would_exit))&1)))&1);
  taken = (((uint8_t)(bool)llvm_cbe_tobool2));
  _47 = *llvm_cbe_count;
  llvm_cbe_inc = llvm_add_u64(_47, 1);
  *llvm_cbe_count = llvm_cbe_inc;
  _48 = loop_cfl_glob_Flow_OC_split__cfl_loop_tls1_cbc_remove_padding_OC_90;
  llvm_cbe_cond = llvm_select_u64((((llvm_cbe_tobool2 & (((((uint64_t)llvm_cbe_inc) > ((uint64_t)_48))&1)))&1)), llvm_cbe_inc, _48);
  loop_cfl_glob_Flow_OC_split__cfl_loop_tls1_cbc_remove_padding_OC_90 = llvm_cbe_cond;
  return (((((((((~((((_46 != ((uint8_t)0))&1))))&1)) | llvm_cbe_would_exit)&1)) & (((((uint64_t)llvm_cbe_inc) > ((uint64_t)llvm_cbe_cond))&1)))&1));
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
  uint32_t _49 = (uint32_t)argc;
  uint8_t** _50 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

