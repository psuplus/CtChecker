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
typedef void l_fptr_1(void);

typedef void l_fptr_6(uint64_t, uint64_t);

typedef uint32_t l_fptr_7(uint32_t, uint8_t**);

typedef void l_fptr_4(struct l_struct_struct_OC_twy_ctx*);

typedef void l_fptr_2(void);

typedef void l_fptr_5(uint32_t*);

typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);


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
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static void twy_key_OC_15(struct l_struct_struct_OC_twy_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
static void encrypt_OC_16(struct l_struct_struct_OC_twy_ctx*) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
static void rho_OC_21(void) __ATTRIBUTELIST__((noinline, nothrow));
static void theta_OC_22(void) __ATTRIBUTELIST__((noinline, nothrow));
static void theta_OC_23(void) __ATTRIBUTELIST__((noinline, nothrow));
static void pi_1_OC_24(void) __ATTRIBUTELIST__((noinline, nothrow));
static void gamma_OC_25(void) __ATTRIBUTELIST__((noinline, nothrow));
static void pi_2_OC_26(void) __ATTRIBUTELIST__((noinline, nothrow));
static void theta_OC_17(uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
static void mu_OC_18(uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
static void rndcon_gen_OC_19(uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
static void rndcon_gen_OC_20(uint32_t*) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(64) struct l_array_3_uint32_t in_key __attribute__((aligned(64))) = { { -1, -1, -1 } };
static __MSALIGN__(64) struct l_array_3_uint32_t in __attribute__((aligned(64)));


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
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


/* Function Bodies */

static void __main(void) {
  struct l_struct_struct_OC_twy_ctx llvm_cbe_gc;    /* Address-exposed local */
  uint64_t llvm_cbe_call;
  uint64_t llvm_cbe_call1;
  uint64_t llvm_cbe_call2;

  ;
  ;
// #line 176 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_call =  /*tail*/ read(0, ((uint8_t*)(&in_key)), 12);
// #line 177 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_call1 =  /*tail*/ read(0, ((uint8_t*)(&in)), 12);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 179 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  twy_key_OC_15((&llvm_cbe_gc));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 180 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  encrypt_OC_16((&llvm_cbe_gc));
// #line 181 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_call2 =  /*tail*/ write(1, ((uint8_t*)(&in)), 12);
}


static void twy_key_OC_15(struct l_struct_struct_OC_twy_ctx* llvm_cbe_c) {
  uint32_t _1;
  uint32_t* llvm_cbe_arrayidx2;
  uint32_t _2;
  uint32_t _3;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
  ;
// #line 133 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _1 = *((&in_key.array[((int64_t)0)]));
  *((&llvm_cbe_c->field0.array[((int64_t)0)])) = _1;
  llvm_cbe_arrayidx2 = (&llvm_cbe_c->field1.array[((int64_t)0)]);
  *llvm_cbe_arrayidx2 = _1;
// #line 134 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _2 = *((&in_key.array[((int64_t)1)]));
  *((&llvm_cbe_c->field0.array[((int64_t)1)])) = _2;
  *((&llvm_cbe_c->field1.array[((int64_t)1)])) = _2;
// #line 135 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _3 = *((&in_key.array[((int64_t)2)]));
  *((&llvm_cbe_c->field0.array[((int64_t)2)])) = _3;
  *((&llvm_cbe_c->field1.array[((int64_t)2)])) = _3;
// #line 136 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ theta_OC_17(llvm_cbe_arrayidx2);
// #line 137 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ mu_OC_18(llvm_cbe_arrayidx2);
// #line 138 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ rndcon_gen_OC_19(((&llvm_cbe_c->field2.array[((int64_t)0)])));
// #line 139 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ rndcon_gen_OC_20(((&llvm_cbe_c->field3.array[((int64_t)0)])));
}


static void encrypt_OC_16(struct l_struct_struct_OC_twy_ctx* llvm_cbe_c) {
  uint32_t* llvm_cbe_arrayidx;
  uint32_t _4;
  uint32_t* llvm_cbe_arrayidx62_2e_i;
  uint32_t* llvm_cbe_arrayidx103_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  uint32_t _5;
  uint32_t _5__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx2_2e_i;
  uint32_t _6;
  uint32_t _7;
  uint32_t _8;
  uint32_t _9;
  uint32_t _10;
  uint32_t _11;
  uint32_t _12;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i;
  uint32_t _13;
  uint32_t _14;
  uint32_t _15;
  uint32_t _16;
  uint32_t _17;
  uint32_t _18;
  uint32_t _19;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
  ;
  ;
  llvm_cbe_arrayidx = (&llvm_cbe_c->field0.array[((int64_t)0)]);
  _4 = *llvm_cbe_arrayidx;
  llvm_cbe_arrayidx62_2e_i = (&llvm_cbe_c->field0.array[((int64_t)1)]);
  llvm_cbe_arrayidx103_2e_i = (&llvm_cbe_c->field0.array[((int64_t)2)]);
  llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  _5__PHI_TEMPORARY = _4;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 98 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_indvars_2e_iv_2e_i = llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  _5 = _5__PHI_TEMPORARY;
// #line 100 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_arrayidx2_2e_i = (&llvm_cbe_c->field2.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i)]);
  _6 = *llvm_cbe_arrayidx2_2e_i;
  _7 = *((&in.array[((int64_t)0)]));
  *((&in.array[((int64_t)0)])) = (((_6 << 16) ^ _5) ^ _7);
// #line 101 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _8 = *llvm_cbe_arrayidx62_2e_i;
  _9 = *((&in.array[((int64_t)1)]));
  *((&in.array[((int64_t)1)])) = (_9 ^ _8);
// #line 102 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _10 = *llvm_cbe_arrayidx103_2e_i;
  _11 = *llvm_cbe_arrayidx2_2e_i;
  _12 = *((&in.array[((int64_t)2)]));
  *((&in.array[((int64_t)2)])) = ((_11 ^ _10) ^ _12);
// #line 103 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ rho_OC_21();
// #line 98 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i, 1);
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _13 = *llvm_cbe_arrayidx;
// #line 98 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i == UINT64_C(11))&1))) {
    goto llvm_cbe_loop_encrypt_2e_16_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i;   /* for PHI node */
    _5__PHI_TEMPORARY = _13;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_encrypt_2e_16_2e_exit:
// #line 106 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _14 = *((&llvm_cbe_c->field2.array[((int64_t)11)]));
  _15 = *((&in.array[((int64_t)0)]));
  *((&in.array[((int64_t)0)])) = (((_14 << 16) ^ _13) ^ _15);
// #line 107 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _16 = *llvm_cbe_arrayidx62_2e_i;
  _17 = *((&in.array[((int64_t)1)]));
  *((&in.array[((int64_t)1)])) = (_17 ^ _16);
// #line 108 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _18 = *llvm_cbe_arrayidx103_2e_i;
  _19 = *((&in.array[((int64_t)2)]));
  *((&in.array[((int64_t)2)])) = ((_18 ^ _14) ^ _19);
// #line 109 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ theta_OC_22();
}


static void rho_OC_21(void) {
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 78 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ theta_OC_23();
// #line 79 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ pi_1_OC_24();
// #line 80 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ gamma_OC_25();
// #line 81 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
   /*tail*/ pi_2_OC_26();
}


static void theta_OC_22(void) {
  uint32_t _20;
  uint32_t llvm_cbe_shr;
  uint32_t _21;
  uint32_t llvm_cbe_shl;
  uint32_t llvm_cbe_shr5;
  uint32_t _22;
  uint32_t llvm_cbe_shl8;
  uint32_t llvm_cbe_shr11;
  uint32_t llvm_cbe_shl14;
  uint32_t llvm_cbe_shr23;
  uint32_t llvm_cbe_shl26;
  uint32_t llvm_cbe_shr29;
  uint32_t llvm_cbe_shl32;
  uint32_t llvm_cbe_shr67;
  uint32_t llvm_cbe_shl70;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _20 = *((&in.array[((int64_t)0)]));
  llvm_cbe_shr = llvm_ashr_u32(_20, 16);
  _21 = *((&in.array[((int64_t)1)]));
  llvm_cbe_shl = _21 << 16;
  llvm_cbe_shr5 = llvm_ashr_u32(_21, 16);
  _22 = *((&in.array[((int64_t)2)]));
  llvm_cbe_shl8 = _22 << 16;
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr11 = llvm_ashr_u32(_21, 24);
  llvm_cbe_shl14 = _22 << 8;
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr23 = llvm_ashr_u32(_22, 16);
  llvm_cbe_shl26 = _20 << 16;
  llvm_cbe_shr29 = llvm_ashr_u32(_22, 24);
  llvm_cbe_shl32 = _20 << 8;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr67 = llvm_ashr_u32(_20, 24);
  llvm_cbe_shl70 = _21 << 8;
// #line 57 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 60 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 62 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 63 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *((&in.array[((int64_t)0)])) = ((((((((((((llvm_cbe_shr ^ _20) ^ (_20 << 24)) ^ llvm_cbe_shl26) ^ llvm_cbe_shl32) ^ llvm_cbe_shl) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14) ^ (llvm_ashr_u32(_22, 8))) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *((&in.array[((int64_t)1)])) = ((((((((((((llvm_cbe_shl26 ^ _21) ^ llvm_cbe_shl32) ^ (llvm_ashr_u32(_20, 8))) ^ llvm_cbe_shr) ^ llvm_cbe_shr67) ^ llvm_cbe_shr5) ^ (_21 << 24)) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ llvm_cbe_shl8) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *((&in.array[((int64_t)2)])) = ((((((((((((llvm_cbe_shr ^ llvm_cbe_shl26) ^ llvm_cbe_shr67) ^ _22) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ (llvm_ashr_u32(_21, 8))) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shr23) ^ (_22 << 24)) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14);
}


static void theta_OC_23(void) {
  uint32_t _23;
  uint32_t llvm_cbe_shr;
  uint32_t _24;
  uint32_t llvm_cbe_shl;
  uint32_t llvm_cbe_shr5;
  uint32_t _25;
  uint32_t llvm_cbe_shl8;
  uint32_t llvm_cbe_shr11;
  uint32_t llvm_cbe_shl14;
  uint32_t llvm_cbe_shr23;
  uint32_t llvm_cbe_shl26;
  uint32_t llvm_cbe_shr29;
  uint32_t llvm_cbe_shl32;
  uint32_t llvm_cbe_shr67;
  uint32_t llvm_cbe_shl70;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _23 = *((&in.array[((int64_t)0)]));
  llvm_cbe_shr = llvm_ashr_u32(_23, 16);
  _24 = *((&in.array[((int64_t)1)]));
  llvm_cbe_shl = _24 << 16;
  llvm_cbe_shr5 = llvm_ashr_u32(_24, 16);
  _25 = *((&in.array[((int64_t)2)]));
  llvm_cbe_shl8 = _25 << 16;
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr11 = llvm_ashr_u32(_24, 24);
  llvm_cbe_shl14 = _25 << 8;
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr23 = llvm_ashr_u32(_25, 16);
  llvm_cbe_shl26 = _23 << 16;
  llvm_cbe_shr29 = llvm_ashr_u32(_25, 24);
  llvm_cbe_shl32 = _23 << 8;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr67 = llvm_ashr_u32(_23, 24);
  llvm_cbe_shl70 = _24 << 8;
// #line 57 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 60 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 62 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 63 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *((&in.array[((int64_t)0)])) = ((((((((((((llvm_cbe_shr ^ _23) ^ (_23 << 24)) ^ llvm_cbe_shl26) ^ llvm_cbe_shl32) ^ llvm_cbe_shl) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14) ^ (llvm_ashr_u32(_25, 8))) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *((&in.array[((int64_t)1)])) = ((((((((((((llvm_cbe_shl26 ^ _24) ^ llvm_cbe_shl32) ^ (llvm_ashr_u32(_23, 8))) ^ llvm_cbe_shr) ^ llvm_cbe_shr67) ^ llvm_cbe_shr5) ^ (_24 << 24)) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ llvm_cbe_shl8) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *((&in.array[((int64_t)2)])) = ((((((((((((llvm_cbe_shr ^ llvm_cbe_shl26) ^ llvm_cbe_shr67) ^ _25) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ (llvm_ashr_u32(_24, 8))) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shr23) ^ (_25 << 24)) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14);
}


static void pi_1_OC_24(void) {
  uint32_t _26;
  uint32_t _27;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 67 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _26 = *((&in.array[((int64_t)0)]));
  *((&in.array[((int64_t)0)])) = ((llvm_ashr_u32(_26, 10)) ^ (_26 << 22));
// #line 68 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _27 = *((&in.array[((int64_t)2)]));
  *((&in.array[((int64_t)2)])) = ((_27 << 1) ^ (llvm_ashr_u32(_27, 31)));
}


static void gamma_OC_25(void) {
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 46 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _28 = *((&in.array[((int64_t)0)]));
  _29 = *((&in.array[((int64_t)1)]));
  _30 = *((&in.array[((int64_t)2)]));
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 47 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 48 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 49 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *((&in.array[((int64_t)0)])) = ((_29 | (~(_30))) ^ _28);
  *((&in.array[((int64_t)1)])) = ((_30 | (~(_28))) ^ _29);
  *((&in.array[((int64_t)2)])) = (_30 ^ (_28 | (~(_29))));
}


static void pi_2_OC_26(void) {
  uint32_t _31;
  uint32_t _32;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 72 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _31 = *((&in.array[((int64_t)0)]));
  *((&in.array[((int64_t)0)])) = ((_31 << 1) ^ (llvm_ashr_u32(_31, 31)));
// #line 73 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _32 = *((&in.array[((int64_t)2)]));
  *((&in.array[((int64_t)2)])) = ((llvm_ashr_u32(_32, 10)) ^ (_32 << 22));
}


static void theta_OC_17(uint32_t* llvm_cbe_a) {
  uint32_t _33;
  uint32_t llvm_cbe_shr;
  uint32_t* llvm_cbe_arrayidx2;
  uint32_t _34;
  uint32_t llvm_cbe_shl;
  uint32_t llvm_cbe_shr5;
  uint32_t* llvm_cbe_arrayidx7;
  uint32_t _35;
  uint32_t llvm_cbe_shl8;
  uint32_t llvm_cbe_shr11;
  uint32_t llvm_cbe_shl14;
  uint32_t llvm_cbe_shr23;
  uint32_t llvm_cbe_shl26;
  uint32_t llvm_cbe_shr29;
  uint32_t llvm_cbe_shl32;
  uint32_t llvm_cbe_shr67;
  uint32_t llvm_cbe_shl70;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _33 = *llvm_cbe_a;
  llvm_cbe_shr = llvm_ashr_u32(_33, 16);
  llvm_cbe_arrayidx2 = (&llvm_cbe_a[((int64_t)1)]);
  _34 = *llvm_cbe_arrayidx2;
  llvm_cbe_shl = _34 << 16;
  llvm_cbe_shr5 = llvm_ashr_u32(_34, 16);
  llvm_cbe_arrayidx7 = (&llvm_cbe_a[((int64_t)2)]);
  _35 = *llvm_cbe_arrayidx7;
  llvm_cbe_shl8 = _35 << 16;
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr11 = llvm_ashr_u32(_34, 24);
  llvm_cbe_shl14 = _35 << 8;
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr23 = llvm_ashr_u32(_35, 16);
  llvm_cbe_shl26 = _33 << 16;
  llvm_cbe_shr29 = llvm_ashr_u32(_35, 24);
  llvm_cbe_shl32 = _33 << 8;
// #line 54 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 55 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 56 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr67 = llvm_ashr_u32(_33, 24);
  llvm_cbe_shl70 = _34 << 8;
// #line 57 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 58 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 59 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 60 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 61 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 62 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
// #line 63 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *llvm_cbe_a = ((((((((((((llvm_cbe_shr ^ _33) ^ (_33 << 24)) ^ llvm_cbe_shl26) ^ llvm_cbe_shl32) ^ llvm_cbe_shl) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14) ^ (llvm_ashr_u32(_35, 8))) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *llvm_cbe_arrayidx2 = ((((((((((((llvm_cbe_shl26 ^ _34) ^ llvm_cbe_shl32) ^ (llvm_ashr_u32(_33, 8))) ^ llvm_cbe_shr) ^ llvm_cbe_shr67) ^ llvm_cbe_shr5) ^ (_34 << 24)) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ llvm_cbe_shl8) ^ llvm_cbe_shr23) ^ llvm_cbe_shr29);
  *llvm_cbe_arrayidx7 = ((((((((((((llvm_cbe_shr ^ llvm_cbe_shl26) ^ llvm_cbe_shr67) ^ _35) ^ llvm_cbe_shl) ^ llvm_cbe_shl70) ^ (llvm_ashr_u32(_34, 8))) ^ llvm_cbe_shr5) ^ llvm_cbe_shr11) ^ llvm_cbe_shr23) ^ (_35 << 24)) ^ llvm_cbe_shl8) ^ llvm_cbe_shl14);
}


static void mu_OC_18(uint32_t* llvm_cbe_a) {
  uint32_t* llvm_cbe_arrayidx10;
  uint32_t* llvm_cbe_arrayidx17;
  uint32_t llvm_cbe_a_2e_promoted;
  uint32_t llvm_cbe_arrayidx10_2e_promoted;
  uint32_t llvm_cbe_arrayidx17_2e_promoted;
  uint32_t llvm_cbe_shr2813_2e_i;
  uint32_t llvm_cbe_shr2813_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_shr2612_2e_i;
  uint32_t llvm_cbe_shr2612_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_shr11_2e_i;
  uint32_t llvm_cbe_shr11_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_i_2e_010_2e_i;
  uint32_t llvm_cbe_i_2e_010_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i;
  uint32_t llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i;
  uint32_t llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i;
  uint32_t llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i__PHI_TEMPORARY;
  uint32_t _36;
  uint32_t _37;
  uint32_t _38;
  uint32_t llvm_cbe_inc_2e_i_2e_1;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
  ;
  ;
  ;
  ;
  llvm_cbe_arrayidx10 = (&llvm_cbe_a[((int64_t)1)]);
  llvm_cbe_arrayidx17 = (&llvm_cbe_a[((int64_t)2)]);
// #line 39 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_a_2e_promoted = *llvm_cbe_a;
  llvm_cbe_arrayidx10_2e_promoted = *llvm_cbe_arrayidx10;
  llvm_cbe_arrayidx17_2e_promoted = *llvm_cbe_arrayidx17;
  llvm_cbe_shr2813_2e_i__PHI_TEMPORARY = llvm_cbe_arrayidx17_2e_promoted;   /* for PHI node */
  llvm_cbe_shr2612_2e_i__PHI_TEMPORARY = llvm_cbe_arrayidx10_2e_promoted;   /* for PHI node */
  llvm_cbe_shr11_2e_i__PHI_TEMPORARY = llvm_cbe_a_2e_promoted;   /* for PHI node */
  llvm_cbe_i_2e_010_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_shr2813_2e_i = llvm_cbe_shr2813_2e_i__PHI_TEMPORARY;
  llvm_cbe_shr2612_2e_i = llvm_cbe_shr2612_2e_i__PHI_TEMPORARY;
  llvm_cbe_shr11_2e_i = llvm_cbe_shr11_2e_i__PHI_TEMPORARY;
// #line 33 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_i_2e_010_2e_i = llvm_cbe_i_2e_010_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i = llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i = llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i__PHI_TEMPORARY;
  llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i = llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i__PHI_TEMPORARY;
// #line 35 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 36 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 37 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 38 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 39 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 35 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 36 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _36 = (((llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i << 1) | (llvm_cbe_shr11_2e_i & 1)) << 1) | ((llvm_lshr_u32(llvm_cbe_shr11_2e_i, 1)) & 1);
// #line 37 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _37 = (((llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i << 1) | (llvm_cbe_shr2612_2e_i & 1)) << 1) | ((llvm_lshr_u32(llvm_cbe_shr2612_2e_i, 1)) & 1);
// #line 38 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  _38 = (((llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i << 1) | (llvm_cbe_shr2813_2e_i & 1)) << 1) | ((llvm_lshr_u32(llvm_cbe_shr2813_2e_i, 1)) & 1);
// #line 39 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
// #line 33 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  llvm_cbe_inc_2e_i_2e_1 = llvm_add_u32(llvm_cbe_i_2e_010_2e_i, 2);
  if ((((llvm_cbe_inc_2e_i_2e_1 == 32u)&1))) {
    goto llvm_cbe_loop_mu_2e_18_2e_exit;
  } else {
    llvm_cbe_shr2813_2e_i__PHI_TEMPORARY = (llvm_ashr_u32(llvm_cbe_shr2813_2e_i, 2));   /* for PHI node */
    llvm_cbe_shr2612_2e_i__PHI_TEMPORARY = (llvm_ashr_u32(llvm_cbe_shr2612_2e_i, 2));   /* for PHI node */
    llvm_cbe_shr11_2e_i__PHI_TEMPORARY = (llvm_ashr_u32(llvm_cbe_shr11_2e_i, 2));   /* for PHI node */
    llvm_cbe_i_2e_010_2e_i__PHI_TEMPORARY = llvm_cbe_inc_2e_i_2e_1;   /* for PHI node */
    llvm_cbe_b_2e_sroa_2e_0_2e_09_2e_i__PHI_TEMPORARY = _38;   /* for PHI node */
    llvm_cbe_b_2e_sroa_2e_5_2e_08_2e_i__PHI_TEMPORARY = _37;   /* for PHI node */
    llvm_cbe_b_2e_sroa_2e_11_2e_07_2e_i__PHI_TEMPORARY = _36;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_mu_2e_18_2e_exit:
// #line 41 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *llvm_cbe_a = _38;
  *llvm_cbe_arrayidx10 = _37;
  *llvm_cbe_arrayidx17 = _36;
}


static void rndcon_gen_OC_19(uint32_t* llvm_cbe_rtab) {
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
  ;
  ;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *llvm_cbe_rtab = 2827;
  *((&llvm_cbe_rtab[((int64_t)1)])) = 5654;
  *((&llvm_cbe_rtab[((int64_t)2)])) = 11308;
  *((&llvm_cbe_rtab[((int64_t)3)])) = 22616;
  *((&llvm_cbe_rtab[((int64_t)4)])) = 45232;
  *((&llvm_cbe_rtab[((int64_t)5)])) = 29041;
  *((&llvm_cbe_rtab[((int64_t)6)])) = 58082;
  *((&llvm_cbe_rtab[((int64_t)7)])) = 54741;
  *((&llvm_cbe_rtab[((int64_t)8)])) = 48059;
  *((&llvm_cbe_rtab[((int64_t)9)])) = 26471;
  *((&llvm_cbe_rtab[((int64_t)10)])) = 52942;
  *((&llvm_cbe_rtab[((int64_t)11)])) = 36237;
}


static void rndcon_gen_OC_20(uint32_t* llvm_cbe_rtab) {
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  ;
  ;
  ;
// #line 89 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/appliedCryp/3way.c"
  *llvm_cbe_rtab = 45489;
  *((&llvm_cbe_rtab[((int64_t)1)])) = 29555;
  *((&llvm_cbe_rtab[((int64_t)2)])) = 59110;
  *((&llvm_cbe_rtab[((int64_t)3)])) = 56797;
  *((&llvm_cbe_rtab[((int64_t)4)])) = 43947;
  *((&llvm_cbe_rtab[((int64_t)5)])) = 18247;
  *((&llvm_cbe_rtab[((int64_t)6)])) = 36494;
  *((&llvm_cbe_rtab[((int64_t)7)])) = 3341;
  *((&llvm_cbe_rtab[((int64_t)8)])) = 6682;
  *((&llvm_cbe_rtab[((int64_t)9)])) = 13364;
  *((&llvm_cbe_rtab[((int64_t)10)])) = 26728;
  *((&llvm_cbe_rtab[((int64_t)11)])) = 53456;
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
  uint32_t _39 = (uint32_t)argc;
  uint8_t** _40 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

