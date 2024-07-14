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
struct l_array_8_uint8_t;
struct l_array_16_uint8_t;
struct l_unnamed_1;
struct l_array_32_uint8_t;
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc;

/* Function definitions */
typedef bool l_fptr_9(uint64_t*, uint64_t*, bool);

typedef void l_fptr_1(void);

typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);

typedef void l_fptr_10(uint64_t, uint64_t);

typedef uint16_t l_fptr_6(uint32_t);

typedef void l_fptr_4(struct l_struct_struct_OC_loki_ctx*);

typedef uint16_t l_fptr_8(uint16_t, uint16_t, uint16_t);

typedef void l_fptr_7(uint64_t, uint8_t*);

typedef void l_fptr_2(void);

typedef uint32_t l_fptr_11(uint32_t, uint8_t**);

typedef uint32_t l_fptr_5(uint32_t, uint32_t);


// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

// bool cfl_loop_exiting(uint64_t*, uint64_t*, bool);

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
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_1 {
  struct l_array_8_uint8_t field0;
  struct l_array_16_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc {
  struct l_struct_struct_OC_sfn_desc array[17];
};

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static void setlokikey_OC_21(struct l_struct_struct_OC_loki_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
static void enloki_OC_22(struct l_struct_struct_OC_loki_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
static uint32_t f_OC_28(uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
static uint32_t f_OC_29(uint32_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
static int16_t s_OC_58(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_59(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_60(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_61(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static void perm32_OC_62(void) __ATTRIBUTELIST__((noinline, nothrow));
static int16_t exp8_OC_82(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_90(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_91(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_81(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_78(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_79(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_80(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_67(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_68(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_77(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_99(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_100(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_53(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_54(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_55(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t s_OC_56(uint32_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static void perm32_OC_57(void) __ATTRIBUTELIST__((noinline, nothrow));
static int16_t exp8_OC_76(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_40(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_41(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_75(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_106(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_107(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_74(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_86(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_87(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t exp8_OC_73(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_112(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static int16_t __cfl_mult8_OC_113(int16_t, int16_t, int16_t) __ATTRIBUTELIST__((noinline, nothrow, const));
static bool cfl_loop_exiting(uint64_t*, uint64_t*, bool) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_unnamed_1 in_key __attribute__((aligned(64))) = { { "\x01#Eg\x89\xAB\xCD\xEF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };
static __MSALIGN__(4) struct l_array_8_uint8_t in __attribute__((aligned(4))) = { "\x01#Eg\x89\xAB\xCD\xE7" };
static __MSALIGN__(64) uint32_t promoted_stack_var_f_OC_29_0 __attribute__((aligned(64)));
static __MSALIGN__(64) uint32_t promoted_stack_var_f_OC_29_1 __attribute__((aligned(64)));
static const __MSALIGN__(64) struct l_array_32_uint8_t P __attribute__((aligned(64))) = { "\x1F\x17\x0F\a\x1E\x16\x0E\x06\x1D\x15\r\x05\x1C\x14\x0C\x04\x1B\x13\v\x03\x1A\x12\n\x02\x19\x11\t\x01\x18\x10\x08" };
static const __MSALIGN__(64) struct l_array_17_struct_AC_l_struct_struct_OC_sfn_desc sfn __attribute__((aligned(64))) = { { { 375, 31 }, { 379, 31 }, { 391, 31 }, { 395, 31 }, { 397, 31 }, { 415, 31 }, { 419, 31 }, { 425, 31 }, { 433, 31 }, { 445, 31 }, { 451, 31 }, { 463, 31 }, { 471, 31 }, { 477, 31 }, { 487, 31 }, { 499, 31 }, { 0, 0 } } };
static __MSALIGN__(64) uint32_t promoted_stack_var_f_OC_28_2 __attribute__((aligned(64)));
static __MSALIGN__(64) uint32_t promoted_stack_var_f_OC_28_3 __attribute__((aligned(64)));
static uint8_t taken = 1;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_330 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_931 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_922 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_293 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_1154 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_805 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_256 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_707 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_698 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_69 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10110 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10211 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_112 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10813 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10414 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1015 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11916 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11817 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1818 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_8819 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11620 = 15;
static uint64_t loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1421 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11722 = 15;
static uint64_t loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_12023 = 15;


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint8_t llvm_select_u8(bool condition, uint8_t iftrue, uint8_t ifnot) {
  uint8_t r;
  r = iftrue + ifnot + condition; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint16_t llvm_select_u16(bool condition, uint16_t iftrue, uint16_t ifnot) {
  uint16_t r;
  r = iftrue + ifnot + condition; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = iftrue + ifnot + condition; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t llvm_select_u64(bool condition, uint64_t iftrue, uint64_t ifnot) {
  uint64_t r;
  r = iftrue + ifnot + condition; //r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint8_t* llvm_select_pu8(bool condition, uint8_t* iftrue, uint8_t* ifnot) {
  uint8_t* r;
  r = iftrue + (int) ifnot + condition; //r = condition ? iftrue : ifnot;
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
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint16_t llvm_shl_u16(uint16_t a, uint16_t b) {
  uint16_t r = a << b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint16_t llvm_ashr_u16(int16_t a, int16_t b) {
  uint16_t r = a >> b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint16_t llvm_and_u16(uint16_t a, uint16_t b) {
  uint16_t r = a & b;
  return r;
}
static __forceinline uint16_t llvm_xor_u16(uint16_t a, uint16_t b) {
  uint16_t r = a ^ b;
  return r;
}


/* Function Bodies */

static void __main(void) {
  struct l_struct_struct_OC_loki_ctx llvm_cbe_lc;    /* Address-exposed local */
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call1;
  uint64_t llvm_cbe_call2;

  ;
  ;
// #line 232 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call =  /*tail*/ read(0, ((&in_key.field0.array[((int64_t)0)])), 24);
// #line 233 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call1 =  /*tail*/ read(0, ((&in.array[((int64_t)0)])), 8);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 235 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  setlokikey_OC_21((&llvm_cbe_lc));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 236 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  enloki_OC_22((&llvm_cbe_lc));
// #line 237 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call2 =  /*tail*/ write(1, ((&in.array[((int64_t)0)])), 8);
}


static void setlokikey_OC_21(struct l_struct_struct_OC_loki_ctx* llvm_cbe_c) {
  uint32_t _1;
  uint32_t _2;
  uint32_t llvm_cbe_or_2e_i;
  uint32_t llvm_cbe_or8_2e_i;
  uint32_t llvm_cbe_or15_2e_i;
  uint32_t llvm_cbe_or22_2e_i;
  uint32_t llvm_cbe_or_2e_1_2e_i;
  uint32_t llvm_cbe_or8_2e_1_2e_i;
  uint32_t llvm_cbe_or15_2e_1_2e_i;
  uint32_t llvm_cbe_or22_2e_1_2e_i;
  uint32_t llvm_cbe_or_2e_2_2e_i;
  uint32_t llvm_cbe_or8_2e_2_2e_i;
  uint32_t llvm_cbe_or15_2e_2_2e_i;
  uint32_t llvm_cbe_or22_2e_2_2e_i;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 62 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _1 = *((uint32_t*)(&in_key));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 63 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _2 = *((uint32_t*)((&in_key.field0.array[((int64_t)4)])));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
// #line 65 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)0)])) = _1;
// #line 66 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or_2e_i = (_1 << 12) | (llvm_ashr_u32(_1, 20));
// #line 67 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)1)])) = llvm_cbe_or_2e_i;
// #line 68 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or8_2e_i = (llvm_cbe_or_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or_2e_i, 19));
// #line 69 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)2)])) = _2;
// #line 70 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or15_2e_i = (_2 << 12) | (llvm_ashr_u32(_2, 20));
// #line 71 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)3)])) = llvm_cbe_or15_2e_i;
// #line 72 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or22_2e_i = (llvm_cbe_or15_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or15_2e_i, 19));
// #line 65 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)4)])) = llvm_cbe_or8_2e_i;
// #line 66 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or_2e_1_2e_i = (llvm_cbe_or8_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or8_2e_i, 20));
// #line 67 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)5)])) = llvm_cbe_or_2e_1_2e_i;
// #line 68 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or8_2e_1_2e_i = (llvm_cbe_or_2e_1_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or_2e_1_2e_i, 19));
// #line 69 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)6)])) = llvm_cbe_or22_2e_i;
// #line 70 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or15_2e_1_2e_i = (llvm_cbe_or22_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or22_2e_i, 20));
// #line 71 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)7)])) = llvm_cbe_or15_2e_1_2e_i;
// #line 72 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or22_2e_1_2e_i = (llvm_cbe_or15_2e_1_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or15_2e_1_2e_i, 19));
// #line 65 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)8)])) = llvm_cbe_or8_2e_1_2e_i;
// #line 66 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or_2e_2_2e_i = (llvm_cbe_or8_2e_1_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or8_2e_1_2e_i, 20));
// #line 67 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)9)])) = llvm_cbe_or_2e_2_2e_i;
// #line 68 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or8_2e_2_2e_i = (llvm_cbe_or_2e_2_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or_2e_2_2e_i, 19));
// #line 69 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)10)])) = llvm_cbe_or22_2e_1_2e_i;
// #line 70 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or15_2e_2_2e_i = (llvm_cbe_or22_2e_1_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or22_2e_1_2e_i, 20));
// #line 71 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)11)])) = llvm_cbe_or15_2e_2_2e_i;
// #line 72 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or22_2e_2_2e_i = (llvm_cbe_or15_2e_2_2e_i << 13) | (llvm_ashr_u32(llvm_cbe_or15_2e_2_2e_i, 19));
// #line 65 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)12)])) = llvm_cbe_or8_2e_2_2e_i;
// #line 66 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 67 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)13)])) = ((llvm_cbe_or8_2e_2_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or8_2e_2_2e_i, 20)));
// #line 69 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)14)])) = llvm_cbe_or22_2e_2_2e_i;
// #line 70 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 71 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((&llvm_cbe_c->field0.array[((int64_t)15)])) = ((llvm_cbe_or22_2e_2_2e_i << 12) | (llvm_ashr_u32(llvm_cbe_or22_2e_2_2e_i, 20)));
}


static void enloki_OC_22(struct l_struct_struct_OC_loki_ctx* llvm_cbe_c) {
  uint32_t _3;
  uint32_t _4;
  uint32_t _5;
  uint32_t llvm_cbe_call_2e_i;
  uint32_t llvm_cbe_xor_2e_i;
  uint32_t _6;
  uint32_t llvm_cbe_call6_2e_i;
  uint32_t llvm_cbe_xor7_2e_i;
  uint32_t _7;
  uint32_t llvm_cbe_call_2e_1_2e_i;
  uint32_t llvm_cbe_xor_2e_1_2e_i;
  uint32_t _8;
  uint32_t llvm_cbe_call6_2e_1_2e_i;
  uint32_t llvm_cbe_xor7_2e_1_2e_i;
  uint32_t _9;
  uint32_t llvm_cbe_call_2e_2_2e_i;
  uint32_t llvm_cbe_xor_2e_2_2e_i;
  uint32_t _10;
  uint32_t llvm_cbe_call6_2e_2_2e_i;
  uint32_t llvm_cbe_xor7_2e_2_2e_i;
  uint32_t _11;
  uint32_t llvm_cbe_call_2e_3_2e_i;
  uint32_t llvm_cbe_xor_2e_3_2e_i;
  uint32_t _12;
  uint32_t llvm_cbe_call6_2e_3_2e_i;
  uint32_t llvm_cbe_xor7_2e_3_2e_i;
  uint32_t _13;
  uint32_t llvm_cbe_call_2e_4_2e_i;
  uint32_t llvm_cbe_xor_2e_4_2e_i;
  uint32_t _14;
  uint32_t llvm_cbe_call6_2e_4_2e_i;
  uint32_t llvm_cbe_xor7_2e_4_2e_i;
  uint32_t _15;
  uint32_t llvm_cbe_call_2e_5_2e_i;
  uint32_t llvm_cbe_xor_2e_5_2e_i;
  uint32_t _16;
  uint32_t llvm_cbe_call6_2e_5_2e_i;
  uint32_t llvm_cbe_xor7_2e_5_2e_i;
  uint32_t _17;
  uint32_t llvm_cbe_call_2e_6_2e_i;
  uint32_t llvm_cbe_xor_2e_6_2e_i;
  uint32_t _18;
  uint32_t llvm_cbe_call6_2e_6_2e_i;
  uint32_t llvm_cbe_xor7_2e_6_2e_i;
  uint32_t _19;
  uint32_t llvm_cbe_call_2e_7_2e_i;
  uint32_t llvm_cbe_xor_2e_7_2e_i;
  uint32_t _20;
  uint32_t llvm_cbe_call6_2e_7_2e_i;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
// #line 86 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _3 = *((uint32_t*)(&in));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 87 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _4 = *((uint32_t*)((&in.array[((int64_t)4)])));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _5 = *((&llvm_cbe_c->field0.array[((int64_t)0)]));
  llvm_cbe_call_2e_i =  /*tail*/ f_OC_28(_4, _5);
  llvm_cbe_xor_2e_i = llvm_cbe_call_2e_i ^ _3;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _6 = *((&llvm_cbe_c->field0.array[((int64_t)1)]));
  llvm_cbe_call6_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_i, _6);
  llvm_cbe_xor7_2e_i = llvm_cbe_call6_2e_i ^ _4;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _7 = *((&llvm_cbe_c->field0.array[((int64_t)2)]));
  llvm_cbe_call_2e_1_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_i, _7);
  llvm_cbe_xor_2e_1_2e_i = llvm_cbe_call_2e_1_2e_i ^ llvm_cbe_xor_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _8 = *((&llvm_cbe_c->field0.array[((int64_t)3)]));
  llvm_cbe_call6_2e_1_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_1_2e_i, _8);
  llvm_cbe_xor7_2e_1_2e_i = llvm_cbe_call6_2e_1_2e_i ^ llvm_cbe_xor7_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _9 = *((&llvm_cbe_c->field0.array[((int64_t)4)]));
  llvm_cbe_call_2e_2_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_1_2e_i, _9);
  llvm_cbe_xor_2e_2_2e_i = llvm_cbe_call_2e_2_2e_i ^ llvm_cbe_xor_2e_1_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _10 = *((&llvm_cbe_c->field0.array[((int64_t)5)]));
  llvm_cbe_call6_2e_2_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_2_2e_i, _10);
  llvm_cbe_xor7_2e_2_2e_i = llvm_cbe_call6_2e_2_2e_i ^ llvm_cbe_xor7_2e_1_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _11 = *((&llvm_cbe_c->field0.array[((int64_t)6)]));
  llvm_cbe_call_2e_3_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_2_2e_i, _11);
  llvm_cbe_xor_2e_3_2e_i = llvm_cbe_call_2e_3_2e_i ^ llvm_cbe_xor_2e_2_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _12 = *((&llvm_cbe_c->field0.array[((int64_t)7)]));
  llvm_cbe_call6_2e_3_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_3_2e_i, _12);
  llvm_cbe_xor7_2e_3_2e_i = llvm_cbe_call6_2e_3_2e_i ^ llvm_cbe_xor7_2e_2_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _13 = *((&llvm_cbe_c->field0.array[((int64_t)8)]));
  llvm_cbe_call_2e_4_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_3_2e_i, _13);
  llvm_cbe_xor_2e_4_2e_i = llvm_cbe_call_2e_4_2e_i ^ llvm_cbe_xor_2e_3_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _14 = *((&llvm_cbe_c->field0.array[((int64_t)9)]));
  llvm_cbe_call6_2e_4_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_4_2e_i, _14);
  llvm_cbe_xor7_2e_4_2e_i = llvm_cbe_call6_2e_4_2e_i ^ llvm_cbe_xor7_2e_3_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _15 = *((&llvm_cbe_c->field0.array[((int64_t)10)]));
  llvm_cbe_call_2e_5_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_4_2e_i, _15);
  llvm_cbe_xor_2e_5_2e_i = llvm_cbe_call_2e_5_2e_i ^ llvm_cbe_xor_2e_4_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _16 = *((&llvm_cbe_c->field0.array[((int64_t)11)]));
  llvm_cbe_call6_2e_5_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_5_2e_i, _16);
  llvm_cbe_xor7_2e_5_2e_i = llvm_cbe_call6_2e_5_2e_i ^ llvm_cbe_xor7_2e_4_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _17 = *((&llvm_cbe_c->field0.array[((int64_t)12)]));
  llvm_cbe_call_2e_6_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_5_2e_i, _17);
  llvm_cbe_xor_2e_6_2e_i = llvm_cbe_call_2e_6_2e_i ^ llvm_cbe_xor_2e_5_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _18 = *((&llvm_cbe_c->field0.array[((int64_t)13)]));
  llvm_cbe_call6_2e_6_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_6_2e_i, _18);
  llvm_cbe_xor7_2e_6_2e_i = llvm_cbe_call6_2e_6_2e_i ^ llvm_cbe_xor7_2e_5_2e_i;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _19 = *((&llvm_cbe_c->field0.array[((int64_t)14)]));
  llvm_cbe_call_2e_7_2e_i =  /*tail*/ f_OC_28(llvm_cbe_xor7_2e_6_2e_i, _19);
  llvm_cbe_xor_2e_7_2e_i = llvm_cbe_call_2e_7_2e_i ^ llvm_cbe_xor_2e_6_2e_i;
// #line 90 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _20 = *((&llvm_cbe_c->field0.array[((int64_t)15)]));
  llvm_cbe_call6_2e_7_2e_i =  /*tail*/ f_OC_29(llvm_cbe_xor_2e_7_2e_i, _20);
// #line 92 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((uint32_t*)(&in)) = (llvm_cbe_call6_2e_7_2e_i ^ llvm_cbe_xor7_2e_6_2e_i);
// #line 93 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  *((uint32_t*)((&in.array[((int64_t)4)]))) = llvm_cbe_xor_2e_7_2e_i;
}


static uint32_t f_OC_28(uint32_t llvm_cbe_r, uint32_t llvm_cbe_k) {
  uint32_t llvm_cbe_xor;
  uint16_t llvm_cbe_call;
  uint16_t llvm_cbe_call2;
  uint16_t llvm_cbe_call6;
  uint16_t llvm_cbe_call14;
  uint32_t _21;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
// #line 145 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_xor = llvm_cbe_k ^ llvm_cbe_r;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call =  /*tail*/ s_OC_53((llvm_cbe_xor & 4095));
// #line 148 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call2 =  /*tail*/ s_OC_54(((llvm_lshr_u32(llvm_cbe_xor, 8)) & 4095));
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 149 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call6 =  /*tail*/ s_OC_55(((llvm_lshr_u32(llvm_cbe_xor, 16)) & 4095));
// #line 148 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 150 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call14 =  /*tail*/ s_OC_56((((llvm_ashr_u32(llvm_cbe_xor, 24)) | (llvm_cbe_xor << 8)) & 4095));
// #line 149 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  promoted_stack_var_f_OC_28_2 = (((((((int32_t)(int16_t)llvm_cbe_call2)) << 8) | (((int32_t)(int16_t)llvm_cbe_call))) | ((((uint32_t)(uint16_t)llvm_cbe_call6)) << 16)) | ((((uint32_t)(uint16_t)llvm_cbe_call14)) << 24));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
// #line 151 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
   /*tail*/ perm32_OC_57();
// #line 152 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _21 = promoted_stack_var_f_OC_28_3;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return _21;
}


static uint32_t f_OC_29(uint32_t llvm_cbe_r, uint32_t llvm_cbe_k) {
  uint32_t llvm_cbe_xor;
  uint16_t llvm_cbe_call;
  uint16_t llvm_cbe_call2;
  uint16_t llvm_cbe_call6;
  uint16_t llvm_cbe_call14;
  uint32_t _22;

  ;
  ;
// #line 145 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_xor = llvm_cbe_k ^ llvm_cbe_r;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call =  /*tail*/ s_OC_58((llvm_cbe_xor & 4095));
// #line 148 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call2 =  /*tail*/ s_OC_59(((llvm_lshr_u32(llvm_cbe_xor, 8)) & 4095));
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 149 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call6 =  /*tail*/ s_OC_60(((llvm_lshr_u32(llvm_cbe_xor, 16)) & 4095));
// #line 148 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 150 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call14 =  /*tail*/ s_OC_61((((llvm_ashr_u32(llvm_cbe_xor, 24)) | (llvm_cbe_xor << 8)) & 4095));
// #line 149 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 147 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  promoted_stack_var_f_OC_29_0 = (((((((int32_t)(int16_t)llvm_cbe_call2)) << 8) | (((int32_t)(int16_t)llvm_cbe_call))) | ((((uint32_t)(uint16_t)llvm_cbe_call6)) << 16)) | ((((uint32_t)(uint16_t)llvm_cbe_call14)) << 24));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
// #line 151 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
   /*tail*/ perm32_OC_62();
// #line 152 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _22 = promoted_stack_var_f_OC_29_1;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return _22;
}


static int16_t s_OC_58(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _23;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _24;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _25;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _26;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _23 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _24 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _23)&1)), _24, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _25 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _26 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _25)&1)), _26, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_77(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_59(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _27;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _28;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _29;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _30;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _27 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _28 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _27)&1)), _28, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _29 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _30 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _29)&1)), _30, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_80(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_60(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _31;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _32;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _33;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _34;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _31 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _32 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _31)&1)), _32, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _33 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _34 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _33)&1)), _34, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_81(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_61(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _35;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _36;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _37;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _38;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _35 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _36 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _35)&1)), _36, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _37 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _38 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _37)&1)), _38, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_82(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static void perm32_OC_62(void) {
  uint32_t _39;
  uint32_t _39__PHI_TEMPORARY;
  uint8_t* llvm_cbe_p_2e_06_2e_i;
  uint8_t* llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_mask_2e_03_2e_i;
  uint32_t llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_and_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _40;
  uint8_t llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_phitmp_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _41;
  uint8_t _42;
  bool llvm_cbe_tobool3_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or_2e_i_2e_i;
  uint32_t _43;
  uint8_t _44;
  uint32_t _45;
  uint32_t llvm_cbe_shr1_2e_i_2e_i;

  ;
  ;
  ;
  ;
  ;
// #line 128 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  promoted_stack_var_f_OC_29_1 = 0;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  _39__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY = ((&P.array[((int64_t)0)]));   /* for PHI node */
  llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY = 2147483648u;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _39 = _39__PHI_TEMPORARY;
  llvm_cbe_p_2e_06_2e_i = llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_mask_2e_03_2e_i = llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY;
// #line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_and_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_p_2e_06_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&P))) + ((uint64_t)95))))) - ((uint64_t)((uint64_t)(uintptr_t)(&P)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe___cfl_branch_perm32_2e_62_2e_exit_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i = (&P.array[((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _40 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i == llvm_cbe_p_2e_06_2e_i)&1)), _40, llvm_cbe_res_2e_028_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i) < ((uint64_t)((&((&P.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&P))) + ((uint64_t)95))))) - ((uint64_t)((uint64_t)(uintptr_t)(&P)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i' */
llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i:
// #line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_phitmp_2e_i_2e_i = ((int32_t)(int8_t)llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i);
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_phitmp_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe___cfl_branch_perm32_2e_62_2e_exit_2e_i;

llvm_cbe___cfl_branch_perm32_2e_62_2e_exit_2e_i:
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _41 = *(volatile uint32_t*)(&promoted_stack_var_f_OC_29_0);
  _42 = *(volatile uint8_t*)(&taken);
// #line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_tobool3_2e_i_2e_i_2e_i = (((((_42 != ((uint8_t)0))&1)) & (((((llvm_select_u32((((_42 == ((uint8_t)0))&1)), 0, _41)) & (1 << llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i)) != 0u)&1)))&1);
  taken = (((uint8_t)(bool)llvm_cbe_tobool3_2e_i_2e_i_2e_i));
  llvm_cbe_or_2e_i_2e_i = llvm_cbe_mask_2e_03_2e_i | _39;
  _43 = *(volatile uint32_t*)(&promoted_stack_var_f_OC_29_1);
  _44 = *(volatile uint8_t*)(&taken);
  *(volatile uint32_t*)(&promoted_stack_var_f_OC_29_1) = (llvm_select_u32(((((((_44 != ((uint8_t)0))&1)) & llvm_cbe_tobool3_2e_i_2e_i_2e_i)&1)), llvm_cbe_or_2e_i_2e_i, _43));
  _45 = llvm_select_u32((((((llvm_select_u32((((_42 == ((uint8_t)0))&1)), 0, _41)) & (1 << llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i)) != 0u)&1)), llvm_cbe_or_2e_i_2e_i, _39);
  taken = _42;
// #line 135 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr1_2e_i_2e_i = llvm_ashr_u32(llvm_cbe_mask_2e_03_2e_i, 1);
// #line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  if ((((llvm_cbe_p_2e_06_2e_i == ((&P.array[((int64_t)31)])))&1))) {
    goto llvm_cbe_loop_perm32_2e_62_2e_exit;
  } else {
    _39__PHI_TEMPORARY = _45;   /* for PHI node */
    llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY = ((&llvm_cbe_p_2e_06_2e_i[((int64_t)1)]));   /* for PHI node */
    llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_shr1_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_perm32_2e_62_2e_exit:
  return;
}


static int16_t exp8_OC_82(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _46;
  uint8_t* _47;
  uint8_t* _48;
  uint8_t* _49;
  uint8_t* _50;
  uint8_t* _51;
  uint8_t* _52;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _53;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _54;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _55;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _56;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _57;
  uint8_t _58;
  uint8_t _59;
  uint8_t _60;
  uint8_t _61;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _62;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _63;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _46 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_46 != ((uint8_t)0))&1)))&1))));
  _47 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _48 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _49 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _50 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _51 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _52 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _53 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_53 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _54 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_54 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _55 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_55 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _56 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_56 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _57 = *(volatile uint8_t*)(&taken);
  _58 = *(volatile uint8_t*)(&taken);
  _59 = *(volatile uint8_t*)(&taken);
  _60 = *(volatile uint8_t*)(&taken);
  _61 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_90(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_91(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _62 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_62 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _63 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_330), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_63) {
    goto llvm_cbe___cfl_branch_exp8_2e_82_2e_8_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_57 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _47));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_58 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _48));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_59 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _49));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_60 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _50));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_61 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _51));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_82_2e_8_2e_exit:
  taken = _46;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_90(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _64;
  uint8_t _65;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _66;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _67;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _64 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _65 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _66 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_66 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _67 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_922), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_67) {
    goto llvm_cbe___cfl_loop_mult8_2e_92_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_92_2e_exit:
  taken = _65;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_91(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _68;
  uint8_t _69;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _70;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _71;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _68 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _69 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _70 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_70 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _71 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_931), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_71) {
    goto llvm_cbe___cfl_loop_mult8_2e_93_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_93_2e_exit:
  taken = _69;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_81(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _72;
  uint8_t* _73;
  uint8_t* _74;
  uint8_t* _75;
  uint8_t* _76;
  uint8_t* _77;
  uint8_t* _78;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _79;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _80;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _81;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _82;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _83;
  uint8_t _84;
  uint8_t _85;
  uint8_t _86;
  uint8_t _87;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _88;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _89;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _72 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_72 != ((uint8_t)0))&1)))&1))));
  _73 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _74 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _75 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _76 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _77 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _78 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _79 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_79 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _80 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_80 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _81 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_81 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _82 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_82 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _83 = *(volatile uint8_t*)(&taken);
  _84 = *(volatile uint8_t*)(&taken);
  _85 = *(volatile uint8_t*)(&taken);
  _86 = *(volatile uint8_t*)(&taken);
  _87 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_78(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_79(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _88 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_88 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _89 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_293), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_89) {
    goto llvm_cbe___cfl_branch_exp8_2e_81_2e_7_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_83 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _73));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_84 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _74));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_85 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _75));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_86 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _76));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_87 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _77));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_81_2e_7_2e_exit:
  taken = _72;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_78(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _90;
  uint8_t _91;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _92;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _93;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _90 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _91 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _92 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_92 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _93 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_805), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_93) {
    goto llvm_cbe___cfl_loop_mult8_2e_80_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_80_2e_exit:
  taken = _91;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_79(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _94;
  uint8_t _95;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _96;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _97;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _94 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _95 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _96 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_96 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _97 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_1154), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_97) {
    goto llvm_cbe___cfl_loop_mult8_2e_115_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_115_2e_exit:
  taken = _95;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_80(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _98;
  uint8_t* _99;
  uint8_t* _100;
  uint8_t* _101;
  uint8_t* _102;
  uint8_t* _103;
  uint8_t* _104;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _105;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _106;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _107;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _108;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _109;
  uint8_t _110;
  uint8_t _111;
  uint8_t _112;
  uint8_t _113;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _114;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _115;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _98 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_98 != ((uint8_t)0))&1)))&1))));
  _99 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _100 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _101 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _102 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _103 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _104 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _105 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_105 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _106 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_106 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _107 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_107 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _108 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_108 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _109 = *(volatile uint8_t*)(&taken);
  _110 = *(volatile uint8_t*)(&taken);
  _111 = *(volatile uint8_t*)(&taken);
  _112 = *(volatile uint8_t*)(&taken);
  _113 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_67(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_68(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _114 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_114 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _115 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_256), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_115) {
    goto llvm_cbe___cfl_branch_exp8_2e_80_2e_6_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_109 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _99));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_110 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _100));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_111 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _101));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_112 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _102));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_113 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _103));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_80_2e_6_2e_exit:
  taken = _98;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_67(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _116;
  uint8_t _117;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _118;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _119;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _116 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _117 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _118 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_118 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _119 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_698), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_119) {
    goto llvm_cbe___cfl_loop_mult8_2e_69_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_69_2e_exit:
  taken = _117;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_68(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _120;
  uint8_t _121;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _122;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _123;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _120 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _121 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _122 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_122 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _123 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_707), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_123) {
    goto llvm_cbe___cfl_loop_mult8_2e_70_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_70_2e_exit:
  taken = _121;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_77(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _124;
  uint8_t* _125;
  uint8_t* _126;
  uint8_t* _127;
  uint8_t* _128;
  uint8_t* _129;
  uint8_t* _130;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _131;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _132;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _133;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _134;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _135;
  uint8_t _136;
  uint8_t _137;
  uint8_t _138;
  uint8_t _139;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _140;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _141;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _124 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_124 != ((uint8_t)0))&1)))&1))));
  _125 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _126 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _127 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _128 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _129 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _130 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _131 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_131 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _132 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_132 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _133 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_133 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _134 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_134 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _135 = *(volatile uint8_t*)(&taken);
  _136 = *(volatile uint8_t*)(&taken);
  _137 = *(volatile uint8_t*)(&taken);
  _138 = *(volatile uint8_t*)(&taken);
  _139 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_99(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_100(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _140 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_140 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _141 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_69), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_141) {
    goto llvm_cbe___cfl_branch_exp8_2e_77_2e_5_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_135 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _125));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_136 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _126));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_137 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _127));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_138 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _128));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_139 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _129));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_77_2e_5_2e_exit:
  taken = _124;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_99(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _142;
  uint8_t _143;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _144;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _145;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _142 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _143 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _144 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_144 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _145 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10211), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_145) {
    goto llvm_cbe___cfl_loop_mult8_2e_102_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_102_2e_exit:
  taken = _143;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_100(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _146;
  uint8_t _147;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _148;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _149;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _146 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _147 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _148 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_148 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _149 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10110), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_149) {
    goto llvm_cbe___cfl_loop_mult8_2e_101_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_101_2e_exit:
  taken = _147;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t s_OC_53(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _150;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _151;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _152;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _153;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _150 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _151 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _150)&1)), _151, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _152 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _153 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _152)&1)), _153, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_73(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_54(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _154;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _155;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _156;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _157;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _154 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _155 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _154)&1)), _155, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _156 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _157 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _156)&1)), _157, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_74(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_55(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _158;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _159;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _160;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _161;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _158 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _159 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _158)&1)), _159, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _160 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _161 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _160)&1)), _161, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_75(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static int16_t s_OC_56(uint32_t llvm_cbe_i) {
  uint32_t llvm_cbe_or;
  uint64_t llvm_cbe_conv;
  uint16_t llvm_cbe_conv8;
  uint16_t* llvm_cbe_exp;
  uint8_t* _162;
  uint64_t llvm_cbe_and_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i;
  uint16_t llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  uint16_t _163;
  uint16_t llvm_cbe_cond_2e_v_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  uint16_t* llvm_cbe_gen;
  uint8_t* _164;
  uint64_t llvm_cbe_and_2e_i1;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i3;
  uint16_t llvm_cbe_res_2e_030_2e_i6;
  uint16_t llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7;
  uint8_t* llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  uint16_t _165;
  uint16_t llvm_cbe_cond_2e_v_2e_i9;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i10;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5;
  uint16_t llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  uint16_t llvm_cbe_call;

  ;
// #line 198 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_or = ((llvm_lshr_u32(llvm_cbe_i, 8)) & 12) | (llvm_cbe_i & 3);
  llvm_cbe_conv = ((uint64_t)(uint32_t)llvm_cbe_or);
// #line 199 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 200 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_conv8 = llvm_and_u16((((uint16_t)(llvm_add_u32(((llvm_mul_u32(llvm_cbe_or, 17)) ^ 255), (llvm_lshr_u32(llvm_cbe_i, 2)))))), 255);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
// #line 201 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exp = (&sfn.array[((int64_t)llvm_cbe_conv)].field1);
  _162 = ((uint8_t*)llvm_cbe_exp);
  llvm_cbe_and_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_exp)) & 62;
  if ((((((int64_t)llvm_cbe_and_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i)]);
  llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_res_2e_030_2e_i = llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i = llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY;
  _163 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i));
  llvm_cbe_cond_2e_v_2e_i = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i == _162)&1)), _163, llvm_cbe_res_2e_030_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i = (&llvm_cbe__ptr_2e_029_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i__PHI_TEMPORARY;
  llvm_cbe_gen = (&sfn.array[((int64_t)llvm_cbe_conv)].field0);
  _164 = ((uint8_t*)llvm_cbe_gen);
  llvm_cbe_and_2e_i1 = (((uint64_t)(uintptr_t)llvm_cbe_gen)) & 60;
  if ((((((int64_t)llvm_cbe_and_2e_i1) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i4;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i4:
  llvm_cbe_add_2e_ptr6_2e_i3 = (&((uint8_t*)(&sfn))[((int64_t)llvm_cbe_and_2e_i1)]);
  llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i3;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i12;

  do {     /* Syntactic loop 'for.body.i12' to make GCC happy */
llvm_cbe_for_2e_body_2e_i12:
  llvm_cbe_res_2e_030_2e_i6 = llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_029_2e_i7 = llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY;
  _165 = *(volatile uint16_t*)(((uint16_t*)llvm_cbe__ptr_2e_029_2e_i7));
  llvm_cbe_cond_2e_v_2e_i9 = llvm_select_u16((((llvm_cbe__ptr_2e_029_2e_i7 == _164)&1)), _165, llvm_cbe_res_2e_030_2e_i6);
  llvm_cbe_add_2e_ptr10_2e_i10 = (&llvm_cbe__ptr_2e_029_2e_i7[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i10) < ((uint64_t)((&((uint8_t*)(&sfn))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&sfn))) + ((uint64_t)131))))) - ((uint64_t)((uint64_t)(uintptr_t)(&sfn)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_030_2e_i6__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    llvm_cbe__ptr_2e_029_2e_i7__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i10;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i12;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i9;   /* for PHI node */
    goto llvm_cbe_uint16_t_dfl_glob_load_2e_exit13;
  }

  } while (1); /* end of syntactic loop 'for.body.i12' */
llvm_cbe_uint16_t_dfl_glob_load_2e_exit13:
  llvm_cbe_res_2e_0_2e_lcssa_2e_i5 = llvm_cbe_res_2e_0_2e_lcssa_2e_i5__PHI_TEMPORARY;
  llvm_cbe_call =  /*tail*/ exp8_OC_76(llvm_cbe_conv8, llvm_cbe_res_2e_0_2e_lcssa_2e_i, llvm_cbe_res_2e_0_2e_lcssa_2e_i5);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  return llvm_cbe_call;
}


static void perm32_OC_57(void) {
  uint32_t _166;
  uint32_t _166__PHI_TEMPORARY;
  uint8_t* llvm_cbe_p_2e_06_2e_i;
  uint8_t* llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_mask_2e_03_2e_i;
  uint32_t llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_and_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i;
  uint8_t llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _167;
  uint8_t llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i;
  uint8_t* llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_phitmp_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _168;
  uint8_t _169;
  bool llvm_cbe_tobool3_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_or_2e_i_2e_i;
  uint32_t _170;
  uint8_t _171;
  uint32_t _172;
  uint32_t llvm_cbe_shr1_2e_i_2e_i;

  ;
  ;
  ;
  ;
  ;
// #line 128 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  promoted_stack_var_f_OC_28_3 = 0;
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  _166__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY = ((&P.array[((int64_t)0)]));   /* for PHI node */
  llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY = 2147483648u;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _166 = _166__PHI_TEMPORARY;
  llvm_cbe_p_2e_06_2e_i = llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_mask_2e_03_2e_i = llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY;
// #line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_and_2e_i_2e_i_2e_i = (((uint64_t)(uintptr_t)llvm_cbe_p_2e_06_2e_i)) & 63;
  if ((((((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i) < ((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&P))) + ((uint64_t)95))))) - ((uint64_t)((uint64_t)(uintptr_t)(&P)))))) & -64)))&1))) {
    goto llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i;
  } else {
    llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
    goto llvm_cbe___cfl_branch_perm32_2e_57_2e_exit_2e_i;
  }

llvm_cbe_for_2e_body_2e_preheader_2e_i_2e_i_2e_i:
  llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i = (&P.array[((int64_t)llvm_cbe_and_2e_i_2e_i_2e_i)]);
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr6_2e_i_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i_2e_i:
  llvm_cbe_res_2e_028_2e_i_2e_i_2e_i = llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i = llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _167 = *(volatile uint8_t*)llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i;
  llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i = llvm_select_u8((((llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i == llvm_cbe_p_2e_06_2e_i)&1)), _167, llvm_cbe_res_2e_028_2e_i_2e_i_2e_i);
  llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i = (&llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i[((int64_t)64)]);
  if ((((((uint64_t)llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i) < ((uint64_t)((&((&P.array[((int64_t)0)]))[((int64_t)((((uint64_t)(((uint64_t)(((uint64_t)(((uint64_t)((uint64_t)(uintptr_t)(&P))) + ((uint64_t)95))))) - ((uint64_t)((uint64_t)(uintptr_t)(&P)))))) & -64))]))))&1))) {
    llvm_cbe_res_2e_028_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe__ptr_2e_027_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_ptr10_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i_2e_i;
  } else {
    goto llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i.i' */
llvm_cbe_uint8_t_dfl_glob_load_2e_exit_2e_loopexit_2e_i_2e_i:
// #line 131 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_phitmp_2e_i_2e_i = ((int32_t)(int8_t)llvm_cbe_cond_2e_v_2e_i_2e_i_2e_i);
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_phitmp_2e_i_2e_i;   /* for PHI node */
  goto llvm_cbe___cfl_branch_perm32_2e_57_2e_exit_2e_i;

llvm_cbe___cfl_branch_perm32_2e_57_2e_exit_2e_i:
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i = llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  _168 = *(volatile uint32_t*)(&promoted_stack_var_f_OC_28_2);
  _169 = *(volatile uint8_t*)(&taken);
// #line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_tobool3_2e_i_2e_i_2e_i = (((((_169 != ((uint8_t)0))&1)) & (((((llvm_select_u32((((_169 == ((uint8_t)0))&1)), 0, _168)) & (1 << llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i)) != 0u)&1)))&1);
  taken = (((uint8_t)(bool)llvm_cbe_tobool3_2e_i_2e_i_2e_i));
  llvm_cbe_or_2e_i_2e_i = llvm_cbe_mask_2e_03_2e_i | _166;
  _170 = *(volatile uint32_t*)(&promoted_stack_var_f_OC_28_3);
  _171 = *(volatile uint8_t*)(&taken);
  *(volatile uint32_t*)(&promoted_stack_var_f_OC_28_3) = (llvm_select_u32(((((((_171 != ((uint8_t)0))&1)) & llvm_cbe_tobool3_2e_i_2e_i_2e_i)&1)), llvm_cbe_or_2e_i_2e_i, _170));
  _172 = llvm_select_u32((((((llvm_select_u32((((_169 == ((uint8_t)0))&1)), 0, _168)) & (1 << llvm_cbe_res_2e_0_2e_lcssa_2e_i_2e_i_2e_i)) != 0u)&1)), llvm_cbe_or_2e_i_2e_i, _166);
  taken = _169;
// #line 135 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr1_2e_i_2e_i = llvm_ashr_u32(llvm_cbe_mask_2e_03_2e_i, 1);
// #line 130 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  if ((((llvm_cbe_p_2e_06_2e_i == ((&P.array[((int64_t)31)])))&1))) {
    goto llvm_cbe_loop_perm32_2e_57_2e_exit;
  } else {
    _166__PHI_TEMPORARY = _172;   /* for PHI node */
    llvm_cbe_p_2e_06_2e_i__PHI_TEMPORARY = ((&llvm_cbe_p_2e_06_2e_i[((int64_t)1)]));   /* for PHI node */
    llvm_cbe_mask_2e_03_2e_i__PHI_TEMPORARY = llvm_cbe_shr1_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_perm32_2e_57_2e_exit:
  return;
}


static int16_t exp8_OC_76(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _173;
  uint8_t* _174;
  uint8_t* _175;
  uint8_t* _176;
  uint8_t* _177;
  uint8_t* _178;
  uint8_t* _179;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _180;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _181;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _182;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _183;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _184;
  uint8_t _185;
  uint8_t _186;
  uint8_t _187;
  uint8_t _188;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _189;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _190;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _173 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_173 != ((uint8_t)0))&1)))&1))));
  _174 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _175 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _176 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _177 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _178 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _179 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _180 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_180 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _181 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_181 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _182 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_182 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _183 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_183 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _184 = *(volatile uint8_t*)(&taken);
  _185 = *(volatile uint8_t*)(&taken);
  _186 = *(volatile uint8_t*)(&taken);
  _187 = *(volatile uint8_t*)(&taken);
  _188 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_40(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_41(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _189 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_189 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _190 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_112), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_190) {
    goto llvm_cbe___cfl_branch_exp8_2e_76_2e_4_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_184 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _174));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_185 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _175));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_186 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _176));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_187 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _177));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_188 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _178));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_76_2e_4_2e_exit:
  taken = _173;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_40(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _191;
  uint8_t _192;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _193;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _194;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _191 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _192 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _193 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_193 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _194 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10414), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_194) {
    goto llvm_cbe___cfl_loop_mult8_2e_104_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_104_2e_exit:
  taken = _192;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_41(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _195;
  uint8_t _196;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _197;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _198;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _195 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _196 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _197 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_197 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _198 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_10813), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_198) {
    goto llvm_cbe___cfl_loop_mult8_2e_108_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_108_2e_exit:
  taken = _196;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_75(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _199;
  uint8_t* _200;
  uint8_t* _201;
  uint8_t* _202;
  uint8_t* _203;
  uint8_t* _204;
  uint8_t* _205;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _206;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _207;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _208;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _209;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _210;
  uint8_t _211;
  uint8_t _212;
  uint8_t _213;
  uint8_t _214;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _215;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _216;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _199 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_199 != ((uint8_t)0))&1)))&1))));
  _200 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _201 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _202 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _203 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _204 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _205 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _206 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_206 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _207 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_207 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _208 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_208 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _209 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_209 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _210 = *(volatile uint8_t*)(&taken);
  _211 = *(volatile uint8_t*)(&taken);
  _212 = *(volatile uint8_t*)(&taken);
  _213 = *(volatile uint8_t*)(&taken);
  _214 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_106(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_107(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _215 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_215 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _216 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1015), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_216) {
    goto llvm_cbe___cfl_branch_exp8_2e_75_2e_1_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_210 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _200));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_211 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _201));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_212 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _202));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_213 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _203));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_214 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _204));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_75_2e_1_2e_exit:
  taken = _199;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_106(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _217;
  uint8_t _218;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _219;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _220;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _217 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _218 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _219 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_219 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _220 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11817), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_220) {
    goto llvm_cbe___cfl_loop_mult8_2e_118_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_118_2e_exit:
  taken = _218;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_107(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _221;
  uint8_t _222;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _223;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _224;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _221 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _222 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _223 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_223 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _224 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11916), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_224) {
    goto llvm_cbe___cfl_loop_mult8_2e_119_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_119_2e_exit:
  taken = _222;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_74(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _225;
  uint8_t* _226;
  uint8_t* _227;
  uint8_t* _228;
  uint8_t* _229;
  uint8_t* _230;
  uint8_t* _231;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _232;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _233;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _234;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _235;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _236;
  uint8_t _237;
  uint8_t _238;
  uint8_t _239;
  uint8_t _240;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _241;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _242;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _225 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_225 != ((uint8_t)0))&1)))&1))));
  _226 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _227 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _228 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _229 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _230 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _231 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _232 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_232 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _233 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_233 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _234 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_234 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _235 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_235 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _236 = *(volatile uint8_t*)(&taken);
  _237 = *(volatile uint8_t*)(&taken);
  _238 = *(volatile uint8_t*)(&taken);
  _239 = *(volatile uint8_t*)(&taken);
  _240 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_86(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_87(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _241 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_241 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _242 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1818), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_242) {
    goto llvm_cbe___cfl_branch_exp8_2e_74_2e_3_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_236 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _226));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_237 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _227));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_238 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _228));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_239 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _229));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_240 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _230));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_74_2e_3_2e_exit:
  taken = _225;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_86(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _243;
  uint8_t _244;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _245;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _246;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _243 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _244 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _245 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_245 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _246 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11620), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_246) {
    goto llvm_cbe___cfl_loop_mult8_2e_116_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_116_2e_exit:
  taken = _244;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_87(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _247;
  uint8_t _248;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _249;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _250;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _247 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _248 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _249 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_249 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _250 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_8819), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_250) {
    goto llvm_cbe___cfl_loop_mult8_2e_88_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_88_2e_exit:
  taken = _248;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t exp8_OC_73(int16_t llvm_cbe_base, int16_t llvm_cbe_exponent, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_shr_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint16_t llvm_cbe_call11_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint32_t llvm_cbe_inc_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  bool llvm_cbe_exitcond_2e_loc_2e_i_2e_i;    /* Address-exposed local */
  uint8_t _251;
  uint8_t* _252;
  uint8_t* _253;
  uint8_t* _254;
  uint8_t* _255;
  uint8_t* _256;
  uint8_t* _257;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i;
  uint16_t llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i;
  uint16_t llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i;
  uint32_t llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i;
  uint8_t* llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i;
  uint16_t llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  uint8_t _258;
  uint16_t llvm_cbe_escaping_val6_2e_i_2e_i;
  uint8_t _259;
  uint16_t llvm_cbe_escaping_val4_2e_i_2e_i;
  uint8_t _260;
  uint16_t llvm_cbe_escaping_val2_2e_i_2e_i;
  uint8_t _261;
  uint32_t llvm_cbe_escaping_val_2e_i_2e_i;
  uint8_t _262;
  uint8_t _263;
  uint8_t _264;
  uint8_t _265;
  uint8_t _266;
  uint16_t llvm_cbe_call_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_shr_2e_i_2e_i_2e_i;
  uint16_t llvm_cbe_call11_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_inc_2e_i_2e_i_2e_i;
  uint8_t _267;
  uint16_t llvm_cbe_escaping_val18_2e_i_2e_i;
  bool _268;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _251 = taken;
  taken = (((uint8_t)(bool)((((((llvm_cbe_base != ((uint16_t)0))&1)) & (((_251 != ((uint8_t)0))&1)))&1))));
  _252 = ((uint8_t*)(&llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i));
  _253 = ((uint8_t*)(&llvm_cbe_shr_2e_loc_2e_i_2e_i));
  _254 = ((uint8_t*)(&llvm_cbe_call11_2e_loc_2e_i_2e_i));
  _255 = ((uint8_t*)(&llvm_cbe_inc_2e_loc_2e_i_2e_i));
  _256 = ((uint8_t*)(&llvm_cbe_exitcond_2e_loc_2e_i_2e_i));
  _257 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i_2e_i));
  llvm_cbe_loop_cfl_count_2e_i_2e_i = 0;
  llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_exponent;   /* for PHI node */
  llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = 1;   /* for PHI node */
  llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_base;   /* for PHI node */
  llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
  llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body.i.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i_2e_i:
  llvm_cbe_i_2e_05_2e_i_2e_i = llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i = llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_result_2e_03_2e_i_2e_i = llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_accum_2e_02_2e_i_2e_i = llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i_2e_i = llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid1_2e_i_2e_i = llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid3_2e_i_2e_i = llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid5_2e_i_2e_i = llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid7_2e_i_2e_i = llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid9_2e_i_2e_i = llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid11_2e_i_2e_i = llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid13_2e_i_2e_i = llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid15_2e_i_2e_i = llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid17_2e_i_2e_i = llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY;
  _258 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val6_2e_i_2e_i = llvm_select_u16((((_258 == ((uint8_t)0))&1)), llvm_cbe_last_valid5_2e_i_2e_i, llvm_cbe_accum_2e_02_2e_i_2e_i);
  _259 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val4_2e_i_2e_i = llvm_select_u16((((_259 == ((uint8_t)0))&1)), llvm_cbe_last_valid3_2e_i_2e_i, llvm_cbe_result_2e_03_2e_i_2e_i);
  _260 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val2_2e_i_2e_i = llvm_select_u16((((_260 == ((uint8_t)0))&1)), llvm_cbe_last_valid1_2e_i_2e_i, llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i);
  _261 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i_2e_i = llvm_select_u32((((_261 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i_2e_i, llvm_cbe_i_2e_05_2e_i_2e_i);
  _262 = *(volatile uint8_t*)(&taken);
  _263 = *(volatile uint8_t*)(&taken);
  _264 = *(volatile uint8_t*)(&taken);
  _265 = *(volatile uint8_t*)(&taken);
  _266 = *(volatile uint8_t*)(&taken);
// #line 187 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_112(llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
  llvm_cbe_result_2e_1_2e_i_2e_i_2e_i = llvm_select_u16(((((llvm_and_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1)) == ((uint16_t)0))&1)), llvm_cbe_escaping_val4_2e_i_2e_i, llvm_cbe_call_2e_i_2e_i_2e_i);
  llvm_cbe_result_2e_1_2e_loc_2e_i_2e_i = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;
// #line 189 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_i_2e_i_2e_i = llvm_ashr_u16(llvm_cbe_escaping_val2_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shr_2e_loc_2e_i_2e_i = llvm_cbe_shr_2e_i_2e_i_2e_i;
// #line 190 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_i_2e_i_2e_i =  /*tail*/ __cfl_mult8_OC_113(llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_escaping_val6_2e_i_2e_i, llvm_cbe_gen);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_call11_2e_loc_2e_i_2e_i = llvm_cbe_call11_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i_2e_i_2e_i = llvm_add_u32(llvm_cbe_escaping_val_2e_i_2e_i, 1);
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_loc_2e_i_2e_i = llvm_cbe_inc_2e_i_2e_i_2e_i;
// #line 185 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 188 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_exitcond_2e_loc_2e_i_2e_i = (((((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))) & 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _267 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val18_2e_i_2e_i = llvm_select_u16((((_267 == ((uint8_t)0))&1)), llvm_cbe_last_valid17_2e_i_2e_i, llvm_cbe_result_2e_1_2e_i_2e_i_2e_i);
  _268 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i_2e_i), (&loop_cfl_glob_if_OC_end8_OC_split__cfl_loop_exp8_OC_1421), (((llvm_cbe_inc_2e_i_2e_i_2e_i == 16u)&1))))&1);
  if (_268) {
    goto llvm_cbe___cfl_branch_exp8_2e_73_2e_2_2e_exit;
  } else {
    llvm_cbe_i_2e_05_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_exponent_2e_addr_2e_04_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_shr_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_result_2e_03_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_result_2e_1_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_accum_2e_02_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_call11_2e_i_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid1_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val2_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid3_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val4_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val6_2e_i_2e_i;   /* for PHI node */
    llvm_cbe_last_valid7_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_262 == ((uint8_t)0))&1)), llvm_cbe_last_valid7_2e_i_2e_i, _252));   /* for PHI node */
    llvm_cbe_last_valid9_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_263 == ((uint8_t)0))&1)), llvm_cbe_last_valid9_2e_i_2e_i, _253));   /* for PHI node */
    llvm_cbe_last_valid11_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_264 == ((uint8_t)0))&1)), llvm_cbe_last_valid11_2e_i_2e_i, _254));   /* for PHI node */
    llvm_cbe_last_valid13_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_265 == ((uint8_t)0))&1)), llvm_cbe_last_valid13_2e_i_2e_i, _255));   /* for PHI node */
    llvm_cbe_last_valid15_2e_i_2e_i__PHI_TEMPORARY = (llvm_select_pu8((((_266 == ((uint8_t)0))&1)), llvm_cbe_last_valid15_2e_i_2e_i, _256));   /* for PHI node */
    llvm_cbe_last_valid17_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val18_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i.i' */
llvm_cbe___cfl_branch_exp8_2e_73_2e_2_2e_exit:
  taken = _251;
  return (llvm_select_u16((((llvm_cbe_base != ((uint16_t)0))&1)), llvm_cbe_escaping_val18_2e_i_2e_i, 0));
}


static int16_t __cfl_mult8_OC_112(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _269;
  uint8_t _270;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _271;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _272;

  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _269 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _270 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _271 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_271 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _272 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_12023), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_272) {
    goto llvm_cbe___cfl_loop_mult8_2e_120_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_120_2e_exit:
  taken = _270;
  return llvm_cbe_escaping_val_2e_i;
}


static int16_t __cfl_mult8_OC_113(int16_t llvm_cbe_a, int16_t llvm_cbe_b, int16_t llvm_cbe_gen) {
  uint64_t llvm_cbe_loop_cfl_count_2e_i;    /* Address-exposed local */
  uint8_t* _273;
  uint8_t _274;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i;
  uint16_t llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i;
  uint16_t llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_05_2e_i;
  uint32_t llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_product_2e_04_2e_i;
  uint16_t llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_last_valid_2e_i;
  uint16_t llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
  uint16_t llvm_cbe_spec_2e_select_2e_i;
  uint8_t _275;
  uint16_t llvm_cbe_escaping_val_2e_i;
  uint16_t llvm_cbe_shl_2e_i;
  uint32_t llvm_cbe_inc_2e_i;
  bool _276;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  ;
  ;
  ;
  ;
  ;
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _273 = ((uint8_t*)(&llvm_cbe_loop_cfl_count_2e_i));
  llvm_cbe_loop_cfl_count_2e_i = 0;
  _274 = taken;
  llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = llvm_cbe_a;   /* for PHI node */
  llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = llvm_cbe_b;   /* for PHI node */
  llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
  llvm_cbe_a_2e_addr_2e_07_2e_i = llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_addr_2e_06_2e_i = llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY;
  llvm_cbe_i_2e_05_2e_i = llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY;
  llvm_cbe_product_2e_04_2e_i = llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY;
  llvm_cbe_last_valid_2e_i = llvm_cbe_last_valid_2e_i__PHI_TEMPORARY;
// #line 165 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_spec_2e_select_2e_i = llvm_xor_u16((llvm_select_u16(((((llvm_and_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1)) == ((uint16_t)0))&1)), 0, llvm_cbe_a_2e_addr_2e_07_2e_i)), llvm_cbe_product_2e_04_2e_i);
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  _275 = *(volatile uint8_t*)(&taken);
  llvm_cbe_escaping_val_2e_i = llvm_select_u16((((_275 == ((uint8_t)0))&1)), llvm_cbe_last_valid_2e_i, llvm_cbe_spec_2e_select_2e_i);
// #line 167 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_shl_2e_i = llvm_shl_u16(llvm_cbe_a_2e_addr_2e_07_2e_i, 1);
// #line 168 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 170 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
// #line 163 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/loki91.c"
  llvm_cbe_inc_2e_i = llvm_add_u32(llvm_cbe_i_2e_05_2e_i, 1);
  _276 = ((cfl_loop_exiting((&llvm_cbe_loop_cfl_count_2e_i), (&loop_cfl_glob_for_OC_body__cfl_loop_mult8_OC_11722), (((llvm_cbe_inc_2e_i == 16u)&1))))&1);
  if (_276) {
    goto llvm_cbe___cfl_loop_mult8_2e_117_2e_exit;
  } else {
    llvm_cbe_a_2e_addr_2e_07_2e_i__PHI_TEMPORARY = (llvm_xor_u16((llvm_select_u16((((((int16_t)llvm_cbe_shl_2e_i) > ((int16_t)((uint16_t)255)))&1)), llvm_cbe_gen, 0)), llvm_cbe_shl_2e_i));   /* for PHI node */
    llvm_cbe_b_2e_addr_2e_06_2e_i__PHI_TEMPORARY = (llvm_ashr_u16(llvm_cbe_b_2e_addr_2e_06_2e_i, 1));   /* for PHI node */
    llvm_cbe_i_2e_05_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i;   /* for PHI node */
    llvm_cbe_product_2e_04_2e_i__PHI_TEMPORARY = llvm_cbe_spec_2e_select_2e_i;   /* for PHI node */
    llvm_cbe_last_valid_2e_i__PHI_TEMPORARY = llvm_cbe_escaping_val_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe___cfl_loop_mult8_2e_117_2e_exit:
  taken = _274;
  return llvm_cbe_escaping_val_2e_i;
}


static bool cfl_loop_exiting(uint64_t* llvm_cbe_count, uint64_t* llvm_cbe_max_count, bool llvm_cbe_would_exit) {
  uint8_t _277;
  bool llvm_cbe_tobool2;
  uint64_t _278;
  uint64_t llvm_cbe_inc;
  uint64_t _279;
  uint64_t llvm_cbe_cond;
  uint64_t _280;

  _277 = taken;
  llvm_cbe_tobool2 = (((((_277 != ((uint8_t)0))&1)) & (((~(llvm_cbe_would_exit))&1)))&1);
  taken = (((uint8_t)(bool)llvm_cbe_tobool2));
  _278 = *llvm_cbe_count;
  llvm_cbe_inc = llvm_add_u64(_278, 1);
  *llvm_cbe_count = llvm_cbe_inc;
  _279 = *llvm_cbe_max_count;
  llvm_cbe_cond = llvm_select_u64((((llvm_cbe_tobool2 & (((((uint64_t)llvm_cbe_inc) > ((uint64_t)_279))&1)))&1)), llvm_cbe_inc, _279);
  *llvm_cbe_max_count = llvm_cbe_cond;
  _280 = *llvm_cbe_count;
  return (((((((((~((((_277 != ((uint8_t)0))&1))))&1)) | llvm_cbe_would_exit)&1)) & (((((uint64_t)_280) > ((uint64_t)llvm_cbe_cond))&1)))&1));
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
  uint32_t _281 = (uint32_t)argc;
  uint8_t** _282 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

