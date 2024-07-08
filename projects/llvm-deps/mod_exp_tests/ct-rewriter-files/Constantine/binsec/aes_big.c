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

#if defined(__GNUC__) && defined(__LP64__) /* 128-bit integer types */
typedef int __attribute__((mode(TI))) int128_t;
typedef unsigned __attribute__((mode(TI))) uint128_t;
#define UINT128_C(hi, lo) (((uint128_t)(hi) << 64) | (uint128_t)(lo))
static __forceinline uint128_t llvm_ctor_u128(uint64_t hi, uint64_t lo) { return UINT128_C(hi, lo); }
static __forceinline bool llvm_icmp_eq_u128(uint128_t l, uint128_t r) { return l == r; }
static __forceinline bool llvm_icmp_ne_u128(uint128_t l, uint128_t r) { return l != r; }
static __forceinline bool llvm_icmp_ule_u128(uint128_t l, uint128_t r) { return l <= r; }
static __forceinline bool llvm_icmp_sle_i128(int128_t l, int128_t r) { return l <= r; }
static __forceinline bool llvm_icmp_uge_u128(uint128_t l, uint128_t r) { return l >= r; }
static __forceinline bool llvm_icmp_sge_i128(int128_t l, int128_t r) { return l >= r; }
static __forceinline bool llvm_icmp_ult_u128(uint128_t l, uint128_t r) { return l < r; }
static __forceinline bool llvm_icmp_slt_i128(int128_t l, int128_t r) { return l < r; }
static __forceinline bool llvm_icmp_ugt_u128(uint128_t l, uint128_t r) { return l > r; }
static __forceinline bool llvm_icmp_sgt_i128(int128_t l, int128_t r) { return l > r; }
#else /* manual 128-bit types */
typedef struct { uint64_t lo; uint64_t hi; } uint128_t;
typedef uint128_t int128_t;
#define UINT128_C(hi, lo) {(lo), (hi)}
static __forceinline uint128_t llvm_ctor_u128(uint64_t hi, uint64_t lo) { uint128_t r; r.lo = lo; r.hi = hi; return r; }
static __forceinline bool llvm_icmp_eq_u128(uint128_t l, uint128_t r) { return l.hi == r.hi && l.lo == r.lo; }
static __forceinline bool llvm_icmp_ne_u128(uint128_t l, uint128_t r) { return l.hi != r.hi || l.lo != r.lo; }
static __forceinline bool llvm_icmp_ule_u128(uint128_t l, uint128_t r) { return l.hi < r.hi ? 1 : (l.hi == r.hi ? l.lo <= l.lo : 0); }
static __forceinline bool llvm_icmp_sle_i128(int128_t l, int128_t r) { return (int64_t)l.hi < (int64_t)r.hi ? 1 : (l.hi == r.hi ? (int64_t)l.lo <= (int64_t)l.lo : 0); }
static __forceinline bool llvm_icmp_uge_u128(uint128_t l, uint128_t r) { return l.hi > r.hi ? 1 : (l.hi == r.hi ? l.lo >= l.hi : 0); }
static __forceinline bool llvm_icmp_sge_i128(int128_t l, int128_t r) { return (int64_t)l.hi > (int64_t)r.hi ? 1 : (l.hi == r.hi ? (int64_t)l.lo >= (int64_t)l.lo : 0); }
static __forceinline bool llvm_icmp_ult_u128(uint128_t l, uint128_t r) { return l.hi < r.hi ? 1 : (l.hi == r.hi ? l.lo < l.hi : 0); }
static __forceinline bool llvm_icmp_slt_i128(int128_t l, int128_t r) { return (int64_t)l.hi < (int64_t)r.hi ? 1 : (l.hi == r.hi ? (int64_t)l.lo < (int64_t)l.lo : 0); }
static __forceinline bool llvm_icmp_ugt_u128(uint128_t l, uint128_t r) { return l.hi > r.hi ? 1 : (l.hi == r.hi ? l.lo > l.hi : 0); }
static __forceinline bool llvm_icmp_sgt_i128(int128_t l, int128_t r) { return (int64_t)l.hi > (int64_t)r.hi ? 1 : (l.hi == r.hi ? (int64_t)l.lo > (int64_t)l.lo : 0); }
#define __emulate_i128
#endif



/* Global Declarations */

/* Types Declarations */
struct l_struct_struct_OC_br_block_cbcenc_class_;
struct l_array_60_uint32_t;
struct l_struct_struct_OC_br_aes_big_cbcenc_keys;
struct l_struct_struct_OC__IO_marker;
struct l_array_1_uint8_t;
struct l_array_20_uint8_t;
struct l_struct_struct_OC__IO_FILE;
struct l_array_64_uint16_t;
struct l_array_6_uint8_t;
struct l_array_16_uint8_t;
struct l_array_32_uint8_t;

/* Function definitions */
typedef void l_fptr_17(uint64_t, uint64_t*, uint8_t*, uint8_t*);

typedef void l_fptr_15(uint64_t, uint64_t*, uint64_t);

typedef uint64_t l_fptr_26(uint32_t, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t*);

typedef void l_fptr_31(uint64_t, uint64_t*, uint64_t, uint16_t, uint16_t, uint16_t);

typedef uint32_t l_fptr_3(uint32_t, uint8_t**);

typedef void l_fptr_6(struct l_struct_struct_OC_br_aes_big_cbcenc_keys*, uint8_t*, uint8_t*, uint64_t);

typedef void l_fptr_25(uint64_t, uint64_t*, uint64_t, uint8_t*, uint16_t, uint16_t, uint16_t, uint16_t);

typedef void l_fptr_21(uint64_t, uint64_t*, long double);

typedef void l_fptr_19(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t);

typedef void l_fptr_16(uint64_t, uint64_t*, uint8_t*);

typedef void l_fptr_20(uint64_t, uint64_t*, uint8_t*, uint8_t, uint64_t);

typedef uint32_t l_fptr_28(uint32_t, uint8_t**, uint16_t, uint16_t, uint16_t*);

typedef void l_fptr_1(struct l_struct_struct_OC_br_block_cbcenc_class_**, uint8_t*, uint64_t);

typedef void l_fptr_8(uint16_t, uint8_t*, uint64_t);

typedef void l_fptr_5(uint8_t*, uint8_t, uint64_t, bool);

typedef void l_fptr_2(struct l_struct_struct_OC_br_block_cbcenc_class_**, uint8_t*, uint8_t*, uint64_t);

typedef uint64_t l_fptr_11(uint64_t, uint64_t*, uint32_t, uint8_t*, uint64_t, uint64_t);

typedef uint32_t l_fptr_9(uint64_t, uint64_t*, uint32_t, uint8_t**);

typedef uint64_t l_fptr_12(uint64_t, uint64_t*, uint8_t*, uint64_t, uint64_t, struct l_struct_struct_OC__IO_FILE*);

typedef uint64_t l_fptr_13(uint8_t*, uint64_t, uint64_t, struct l_struct_struct_OC__IO_FILE*);

typedef void l_fptr_24(uint64_t, uint64_t*, uint8_t*, uint8_t, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);

typedef void l_fptr_23(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint16_t, uint16_t, uint16_t, uint16_t);

typedef uint8_t* l_fptr_34(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_33(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);

typedef void l_fptr_22(uint8_t*);

typedef void l_fptr_18(uint64_t, uint64_t*, uint64_t, uint8_t*);

typedef void l_fptr_4(void);

typedef uint64_t l_fptr_29(uint32_t, uint8_t*, uint64_t, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t*);

typedef void l_fptr_30(uint64_t, uint64_t*, bool, uint16_t, uint16_t, uint16_t);

typedef void l_fptr_32(uint64_t, uint64_t*, uint8_t*, uint16_t, uint16_t, uint16_t);

typedef void l_fptr_7(uint16_t);

typedef void l_fptr_14(uint64_t, uint64_t*, bool);

typedef uint64_t l_fptr_27(uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t*);

typedef uint64_t l_fptr_10(uint64_t, uint64_t*, uint32_t, uint8_t*, uint64_t);


/* Types Definitions */
struct l_struct_struct_OC_br_block_cbcenc_class_ {
  uint64_t field0;
  uint32_t field1;
  uint32_t field2;
  l_fptr_1* field3;
  l_fptr_2* field4;
};
struct l_array_60_uint32_t {
  uint32_t array[60];
};
struct l_struct_struct_OC_br_aes_big_cbcenc_keys {
  struct l_struct_struct_OC_br_block_cbcenc_class_* field0;
  struct l_array_60_uint32_t field1;
  uint32_t field2;
};
struct l_struct_struct_OC__IO_marker {
  struct l_struct_struct_OC__IO_marker* field0;
  struct l_struct_struct_OC__IO_FILE* field1;
  uint32_t field2;
};
struct l_array_1_uint8_t {
  uint8_t array[1];
};
struct l_array_20_uint8_t {
  uint8_t array[20];
};
struct l_struct_struct_OC__IO_FILE {
  uint32_t field0;
  uint8_t* field1;
  uint8_t* field2;
  uint8_t* field3;
  uint8_t* field4;
  uint8_t* field5;
  uint8_t* field6;
  uint8_t* field7;
  uint8_t* field8;
  uint8_t* field9;
  uint8_t* field10;
  uint8_t* field11;
  struct l_struct_struct_OC__IO_marker* field12;
  struct l_struct_struct_OC__IO_FILE* field13;
  uint32_t field14;
  uint32_t field15;
  uint64_t field16;
  uint16_t field17;
  uint8_t field18;
  struct l_array_1_uint8_t field19;
  uint8_t* field20;
  uint64_t field21;
  uint8_t* field22;
  uint8_t* field23;
  uint8_t* field24;
  uint8_t* field25;
  uint64_t field26;
  uint32_t field27;
  struct l_array_20_uint8_t field28;
};
struct l_array_64_uint16_t {
  uint16_t array[64];
};
struct l_array_6_uint8_t {
  uint8_t array[6];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};

/* External Global Variable Declarations */
const extern struct l_struct_struct_OC_br_block_cbcenc_class_ br_aes_big_cbcenc_vtable;
extern __thread struct l_array_64_uint16_t __dfsan_arg_tls;
extern __thread uint16_t __dfsan_retval_tls;

/* Function Declarations */
uint32_t dfs_EC___main(uint32_t, uint8_t**) __ATTRIBUTELIST__((noinline, nothrow));
void dfs_EC_br_aes_big_cbcenc_run(struct l_struct_struct_OC_br_aes_big_cbcenc_keys*, uint8_t*, uint8_t*, uint64_t);
void dfs_EC_dft_pass_init(uint16_t) __ATTRIBUTELIST__((noinline, nothrow));
void dfs_EC_wrap_dft_set_label(uint16_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfsan_set_label(uint16_t, uint8_t*, uint64_t);
uint32_t dfs_EC___hook_wrap_call___main(uint64_t, uint64_t*, uint32_t, uint8_t**) __ATTRIBUTELIST__((nothrow));
uint64_t dfs_EC___hook_wrap_call_read(uint64_t, uint64_t*, uint32_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
uint64_t dfs_EC___hook_wrap_call_pread(uint64_t, uint64_t*, uint32_t, uint8_t*, uint64_t, uint64_t) __ATTRIBUTELIST__((nothrow));
uint64_t dfs_EC___hook_wrap_call_fread(uint64_t, uint64_t*, uint8_t*, uint64_t, uint64_t, struct l_struct_struct_OC__IO_FILE*) __ATTRIBUTELIST__((nothrow));
uint64_t fread(uint8_t*, uint64_t, uint64_t, struct l_struct_struct_OC__IO_FILE*) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_icmp(uint64_t, uint64_t*, bool) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_fcmp(uint64_t, uint64_t*, bool) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_switch(uint64_t, uint64_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_br(uint64_t, uint64_t*, bool) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_icall(uint64_t, uint64_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_getelementptr(uint64_t, uint64_t*, uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_load(uint64_t, uint64_t*, uint8_t*) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_store(uint64_t, uint64_t*, uint64_t, uint8_t*) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memcpy(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memcpy_element_unordered_atomic(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memmove(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memmove_element_unordered_atomic(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memset(uint64_t, uint64_t*, uint8_t*, int8_t, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_pre_llvm_memset_element_unordered_atomic(uint64_t, uint64_t*, uint8_t*, int8_t, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_udiv(uint64_t, uint64_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_sdiv(uint64_t, uint64_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_fdiv(uint64_t, uint64_t*, long double) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_urem(uint64_t, uint64_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
void dfs_EC___hook_post_srem(uint64_t, uint64_t*, uint64_t) __ATTRIBUTELIST__((nothrow));
int main(int, char **);
void __dfsan_unimplemented(uint8_t*);
void __dfsan_set_label(uint16_t, uint8_t*, uint64_t);
void __dfsw___dft_getelementptr(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint16_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_memset(uint64_t, uint64_t*, uint8_t*, int8_t, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_store(uint64_t, uint64_t*, uint64_t, uint8_t*, uint16_t, uint16_t, uint16_t, uint16_t);
uint64_t __dfsw_read(uint32_t, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t*);
uint64_t __dfsw___dft_read(uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t*);
uint64_t __dfsw_write(uint32_t, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t*);
uint32_t __dfsw___dft_main(uint32_t, uint8_t**, uint16_t, uint16_t, uint16_t*);
uint64_t __dfsw_pread(uint32_t, uint8_t*, uint64_t, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t*);
void __dfsw___dft_cmp(uint64_t, uint64_t*, bool, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_switch(uint64_t, uint64_t*, uint64_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_br(uint64_t, uint64_t*, bool, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_icall(uint64_t, uint64_t*, uint8_t*, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_load(uint64_t, uint64_t*, uint8_t*, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_memcpy(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_memmove(uint64_t, uint64_t*, uint8_t*, uint8_t*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_div(uint64_t, uint64_t*, uint64_t, uint16_t, uint16_t, uint16_t);
void __dfsw___dft_rem(uint64_t, uint64_t*, uint64_t, uint16_t, uint16_t, uint16_t);
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static uint64_t __hook_arg_OC_i_NC_bid = 6;
static uint64_t __hook_arg_OC_i_NC_bid_OC_1 = 8;
static uint64_t __hook_arg_OC_i_NC_bid_OC_2 = 9;
static uint64_t __hook_arg_OC_i_NC_bid_OC_3 = 10;
static uint64_t __hook_arg_OC_i_NC_bid_OC_4 = 11;
static uint64_t __hook_arg_OC_i_NC_bid_OC_5 = 12;
static uint64_t __hook_arg_OC_i_NC_bid_OC_6 = 14;
static uint64_t __hook_arg_OC_i_NC_bid_OC_7 = 15;
static uint64_t __hook_arg_OC_i_NC_bid_OC_8 = 17;
static uint64_t __hook_arg_OC_i_NC_bid_OC_9 = 18;
static uint64_t __hook_arg_OC_i_NC_bid_OC_10 = 19;
static const struct l_array_6_uint8_t _39 = { "fread" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline int64_t llvm_fptosi_f80_u64(long double in) {
#ifndef __emulate_i128
  return in;
#else
  int64_t out;
  LLVMFPtoSI(80, &in, 64, &out);
  return out;
#endif
}


/* Function Bodies */

uint32_t dfs_EC___main(uint32_t llvm_cbe_argc, uint8_t** llvm_cbe_argv) {
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  struct l_struct_struct_OC_br_aes_big_cbcenc_keys llvm_cbe_ctx;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_16_uint8_t llvm_cbe_iv __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_32_uint8_t llvm_cbe_data __attribute__((aligned(16)));    /* Address-exposed local */
  uint8_t* _1;
  uint8_t* _2;
  uint8_t* _3;
  uint32_t* llvm_cbe_num_rounds;
  uint8_t* _4;
  uint8_t* _5;
  uint8_t* _6;
  uint8_t* _7;
  uint8_t* _8;
  uint8_t* _9;
  uint64_t _10;
  uint16_t _11;
  uint64_t _12;
  uint64_t _13;
  uint16_t _14;
  uint64_t _15;
  uint64_t _16;

  ;
  ;
  _1 = ((uint8_t*)(&llvm_cbe_ctx));
// #line 11 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  _2 = ((uint8_t*)((&llvm_cbe_ctx.field1)));
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid), _2, _1, 0, 0, 0, 0);
  __dfsw___dft_memset(1, (&__hook_arg_OC_i_NC_bid_OC_1), _2, 0, 248, 0, 0, 0, 0, 0);
  __dfsan_set_label(0, _2, 248);
  _3 = memset(_2, 0, 248);
// #line 12 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid_OC_2), _1, _1, 0, 0, 0, 0);
  __dfsw___dft_store(1, (&__hook_arg_OC_i_NC_bid_OC_3), ((uint64_t)(uintptr_t)(&br_aes_big_cbcenc_vtable)), _1, 0, 0, 0, 0);
  *(((uint128_t*)(uintptr_t)(((((uint64_t)(uintptr_t)(&llvm_cbe_ctx))) << 1) & INT64_C(-246290604621840)))) = llvm_ctor_u128(UINT64_C(0), UINT64_C(0));
  *((&llvm_cbe_ctx.field0)) = (&br_aes_big_cbcenc_vtable);
// #line 13 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  llvm_cbe_num_rounds = (&llvm_cbe_ctx.field2);
  _4 = ((uint8_t*)llvm_cbe_num_rounds);
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid_OC_4), _4, _1, 0, 0, 0, 0);
  __dfsw___dft_store(1, (&__hook_arg_OC_i_NC_bid_OC_5), 2, _4, 0, 0, 0, 0);
  *(((uint64_t*)(uintptr_t)(((((uint64_t)(uintptr_t)llvm_cbe_num_rounds)) << 1) & INT64_C(-246290604621840)))) = 0;
  *llvm_cbe_num_rounds = 2;
// #line 14 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  ;
  _5 = (&llvm_cbe_iv.array[((int64_t)0)]);
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid_OC_6), _5, _5, 0, 0, 0, 0);
  __dfsw___dft_memset(1, (&__hook_arg_OC_i_NC_bid_OC_7), _5, 0, 16, 0, 0, 0, 0, 0);
  __dfsan_set_label(0, _5, 16);
  _6 = memset(_5, 0, 16);
// #line 15 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  ;
  _7 = (&llvm_cbe_data.array[((int64_t)0)]);
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid_OC_8), _7, _7, 0, 0, 0, 0);
  __dfsw___dft_memset(1, (&__hook_arg_OC_i_NC_bid_OC_9), _7, 0, 32, 0, 0, 0, 0, 0);
  __dfsan_set_label(0, _7, 32);
  _8 = memset(_7, 0, 32);
// #line 17 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  _9 = ((uint8_t*)((&llvm_cbe_ctx.field1.array[((int64_t)0)])));
  __dfsw___dft_getelementptr(1, (&__hook_arg_OC_i_NC_bid_OC_10), _9, _1, 0, 0, 0, 0);
  _10 = __dfsw_read(0, _9, 240, 0, 0, 0, (&llvm_cbe_labelreturn));
  _11 = llvm_cbe_labelreturn;
  _12 = __dfsw___dft_read(_9, _10, 0, _11, (&llvm_cbe_labelreturn));
  _13 = __dfsw_read(0, _7, 32, 0, 0, 0, (&llvm_cbe_labelreturn));
  _14 = llvm_cbe_labelreturn;
  _15 = __dfsw___dft_read(_7, _13, 0, _14, (&llvm_cbe_labelreturn));
// #line 1"/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  ;
// #line 20 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  __UNALIGNED_LOAD__(uint64_t, 2, ((uint64_t*)(&__dfsan_arg_tls))) = 0;
  dfs_EC_br_aes_big_cbcenc_run((&llvm_cbe_ctx), _5, _7, 32);
// #line 21 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  _16 = __dfsw_write(1, _7, 32, 0, 0, 0, (&llvm_cbe_labelreturn));
// #line 22 "/home/constantine/constantine/src/apps/binsec/bearssl/aes_big_wrapper.c"
  __dfsan_retval_tls = 0;
  return 0;
}


void dfs_EC_dft_pass_init(uint16_t llvm_cbe_label) {
  __asm__ volatile (""
        :
        :);
}


void dfs_EC_wrap_dft_set_label(uint16_t llvm_cbe_label, uint8_t* llvm_cbe_addr, uint64_t llvm_cbe_size) {
   /*tail*/ dfsan_set_label(llvm_cbe_label, llvm_cbe_addr, llvm_cbe_size);
}


uint32_t dfs_EC___hook_wrap_call___main(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint32_t llvm_cbe_argc, uint8_t** llvm_cbe_argv) {
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  uint16_t _17;
  uint16_t _18;
  uint32_t _19;
  uint16_t _20;

  _17 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _18 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _19 = __dfsw___dft_main(llvm_cbe_argc, llvm_cbe_argv, _18, _17, (&llvm_cbe_labelreturn));
  _20 = llvm_cbe_labelreturn;
  __dfsan_retval_tls = _20;
  return _19;
}


uint64_t dfs_EC___hook_wrap_call_read(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint32_t llvm_cbe_fd, uint8_t* llvm_cbe_buf, uint64_t llvm_cbe_count) {
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  uint16_t _21;
  uint16_t _22;
  uint16_t _23;
  uint64_t _24;
  uint16_t _25;
  uint64_t _26;
  uint16_t _27;

  _21 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _22 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _23 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _24 = __dfsw_read(llvm_cbe_fd, llvm_cbe_buf, llvm_cbe_count, _23, _22, _21, (&llvm_cbe_labelreturn));
  _25 = llvm_cbe_labelreturn;
  _26 = __dfsw___dft_read(llvm_cbe_buf, _24, _22, _25, (&llvm_cbe_labelreturn));
  _27 = llvm_cbe_labelreturn;
  __dfsan_retval_tls = _27;
  return _26;
}


uint64_t dfs_EC___hook_wrap_call_pread(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint32_t llvm_cbe_fd, uint8_t* llvm_cbe_buf, uint64_t llvm_cbe_count, uint64_t llvm_cbe_offset) {
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  uint16_t _28;
  uint16_t _29;
  uint16_t _30;
  uint16_t _31;
  uint64_t _32;
  uint16_t _33;
  uint64_t _34;
  uint16_t _35;

  _28 = *((&__dfsan_arg_tls.array[((int64_t)5)]));
  _29 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _30 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _31 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _32 = __dfsw_pread(llvm_cbe_fd, llvm_cbe_buf, llvm_cbe_count, llvm_cbe_offset, _31, _30, _29, _28, (&llvm_cbe_labelreturn));
  _33 = llvm_cbe_labelreturn;
  _34 = __dfsw___dft_read(llvm_cbe_buf, _32, _30, _33, (&llvm_cbe_labelreturn));
  _35 = llvm_cbe_labelreturn;
  __dfsan_retval_tls = _35;
  return _34;
}


uint64_t dfs_EC___hook_wrap_call_fread(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_buf, uint64_t llvm_cbe_count, uint64_t llvm_cbe_n, struct l_struct_struct_OC__IO_FILE* llvm_cbe_stream) {
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  uint16_t _36;
  uint64_t llvm_cbe_call;
  uint64_t _37;
  uint16_t _38;

  _36 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
   /*tail*/ __dfsan_unimplemented(((&_39.array[((int64_t)0)])));
  llvm_cbe_call =  /*tail*/ fread(llvm_cbe_buf, llvm_cbe_count, llvm_cbe_n, llvm_cbe_stream);
  _37 = __dfsw___dft_read(llvm_cbe_buf, llvm_cbe_call, _36, 0, (&llvm_cbe_labelreturn));
  _38 = llvm_cbe_labelreturn;
  __dfsan_retval_tls = _38;
  return _37;
}


void dfs_EC___hook_post_icmp(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, bool llvm_cbe_cmp) {
  uint16_t _40;
  uint16_t _41;
  uint16_t _42;

  _40 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _41 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _42 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_cmp(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_cmp, _42, _41, _40);
}


void dfs_EC___hook_post_fcmp(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, bool llvm_cbe_cmp) {
  uint16_t _43;
  uint16_t _44;
  uint16_t _45;

  _43 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _44 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _45 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_cmp(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_cmp, _45, _44, _43);
}


void dfs_EC___hook_pre_switch(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value) {
  uint16_t _46;
  uint16_t _47;
  uint16_t _48;

  _46 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _47 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _48 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_switch(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, _48, _47, _46);
}


void dfs_EC___hook_pre_br(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, bool llvm_cbe_taken) {
  uint16_t _49;
  uint16_t _50;
  uint16_t _51;

  _49 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _50 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _51 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_br(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_taken, _51, _50, _49);
}


void dfs_EC___hook_pre_icall(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_fptr) {
  uint16_t _52;
  uint16_t _53;
  uint16_t _54;

  _52 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _53 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _54 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_icall(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_fptr, _54, _53, _52);
}


void dfs_EC___hook_post_getelementptr(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_gep, uint8_t* llvm_cbe_ptr) {
  uint16_t _55;
  uint16_t _56;
  uint16_t _57;
  uint16_t _58;

  _55 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _56 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _57 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _58 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_getelementptr(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_gep, llvm_cbe_ptr, _58, _57, _56, _55);
}


void dfs_EC___hook_pre_load(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_ptr) {
  uint16_t _59;
  uint16_t _60;
  uint16_t _61;

  _59 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _60 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _61 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_load(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_ptr, _61, _60, _59);
}


void dfs_EC___hook_pre_store(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value, uint8_t* llvm_cbe_ptr) {
  uint16_t _62;
  uint16_t _63;
  uint16_t _64;
  uint16_t _65;

  _62 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _63 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _64 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _65 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_store(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, llvm_cbe_ptr, _65, _64, _63, _62);
}


void dfs_EC___hook_pre_llvm_memcpy(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, uint8_t* llvm_cbe_src, uint64_t llvm_cbe_len) {
  uint16_t _66;
  uint16_t _67;
  uint16_t _68;
  uint16_t _69;
  uint16_t _70;

  _66 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _67 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _68 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _69 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _70 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memcpy(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_src, llvm_cbe_len, _70, _69, _68, _67, _66);
}


void dfs_EC___hook_pre_llvm_memcpy_element_unordered_atomic(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, uint8_t* llvm_cbe_src, uint64_t llvm_cbe_len) {
  uint16_t _71;
  uint16_t _72;
  uint16_t _73;
  uint16_t _74;
  uint16_t _75;

  _71 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _72 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _73 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _74 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _75 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memcpy(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_src, llvm_cbe_len, _75, _74, _73, _72, _71);
}


void dfs_EC___hook_pre_llvm_memmove(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, uint8_t* llvm_cbe_src, uint64_t llvm_cbe_len) {
  uint16_t _76;
  uint16_t _77;
  uint16_t _78;
  uint16_t _79;
  uint16_t _80;

  _76 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _77 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _78 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _79 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _80 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memmove(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_src, llvm_cbe_len, _80, _79, _78, _77, _76);
}


void dfs_EC___hook_pre_llvm_memmove_element_unordered_atomic(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, uint8_t* llvm_cbe_src, uint64_t llvm_cbe_len) {
  uint16_t _81;
  uint16_t _82;
  uint16_t _83;
  uint16_t _84;
  uint16_t _85;

  _81 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _82 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _83 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _84 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _85 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memmove(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_src, llvm_cbe_len, _85, _84, _83, _82, _81);
}


void dfs_EC___hook_pre_llvm_memset(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, int8_t llvm_cbe_val, uint64_t llvm_cbe_len) {
  uint16_t _86;
  uint16_t _87;
  uint16_t _88;
  uint16_t _89;
  uint16_t _90;

  _86 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _87 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _88 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _89 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _90 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memset(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_val, llvm_cbe_len, _90, _89, _88, _87, _86);
}


void dfs_EC___hook_pre_llvm_memset_element_unordered_atomic(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint8_t* llvm_cbe_dst, int8_t llvm_cbe_val, uint64_t llvm_cbe_len) {
  uint16_t _91;
  uint16_t _92;
  uint16_t _93;
  uint16_t _94;
  uint16_t _95;

  _91 = *((&__dfsan_arg_tls.array[((int64_t)4)]));
  _92 = *((&__dfsan_arg_tls.array[((int64_t)3)]));
  _93 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _94 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _95 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_memset(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_dst, llvm_cbe_val, llvm_cbe_len, _95, _94, _93, _92, _91);
}


void dfs_EC___hook_post_udiv(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value) {
  uint16_t _96;
  uint16_t _97;
  uint16_t _98;

  _96 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _97 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _98 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_div(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, _98, _97, _96);
}


void dfs_EC___hook_post_sdiv(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value) {
  uint16_t _99;
  uint16_t _100;
  uint16_t _101;

  _99 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _100 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _101 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_div(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, _101, _100, _99);
}


void dfs_EC___hook_post_fdiv(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, long double llvm_cbe_value) {
  uint16_t _102;
  uint16_t _103;
  uint16_t _104;

  _102 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _103 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
  _104 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
   /*tail*/ __dfsw___dft_div(llvm_cbe_ID1, llvm_cbe_ID2, (llvm_fptosi_f80_u64(llvm_cbe_value)), _103, _102, _104);
}


void dfs_EC___hook_post_urem(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value) {
  uint16_t _105;
  uint16_t _106;
  uint16_t _107;

  _105 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _106 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _107 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_rem(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, _107, _106, _105);
}


void dfs_EC___hook_post_srem(uint64_t llvm_cbe_ID1, uint64_t* llvm_cbe_ID2, uint64_t llvm_cbe_value) {
  uint16_t _108;
  uint16_t _109;
  uint16_t _110;

  _108 = *((&__dfsan_arg_tls.array[((int64_t)2)]));
  _109 = *((&__dfsan_arg_tls.array[((int64_t)1)]));
  _110 = *((&__dfsan_arg_tls.array[((int64_t)0)]));
   /*tail*/ __dfsw___dft_rem(llvm_cbe_ID1, llvm_cbe_ID2, llvm_cbe_value, _110, _109, _108);
}


int main(int argc, char ** argv) {
  uint32_t _111 = (uint32_t)argc;
  uint8_t** _112 = (uint8_t**)argv;
  uint16_t llvm_cbe_labelreturn;    /* Address-exposed local */
  uint32_t _113;

  _113 = __dfsw___dft_main(_111, _112, 0, 0, (&llvm_cbe_labelreturn));
  return _113;
}

