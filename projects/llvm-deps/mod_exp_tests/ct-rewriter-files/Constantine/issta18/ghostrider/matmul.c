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
struct l_array_128_uint32_t;
struct l_array_128_struct_AC_l_array_128_uint32_t;

/* Function definitions */
typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);

typedef uint32_t l_fptr_5(uint32_t, uint8_t**);

typedef void l_fptr_4(uint64_t, uint64_t);

typedef void l_fptr_2(void);

typedef void l_fptr_1(void);


/* Types Definitions */
struct l_array_128_uint32_t {
  uint32_t array[128];
};
struct l_array_128_struct_AC_l_array_128_uint32_t {
  struct l_array_128_uint32_t array[128];
};

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
static void matmul_OC_1(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t write(uint32_t, uint8_t*, uint64_t);
uint64_t read(uint32_t, uint8_t*, uint64_t);
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(16) struct l_array_128_struct_AC_l_array_128_uint32_t out __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_128_struct_AC_l_array_128_uint32_t in1 __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_128_struct_AC_l_array_128_uint32_t in2 __attribute__((aligned(16)));


/* LLVM Intrinsic Builtin Function Bodies */
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


/* Function Bodies */

static void __main(void) {
  uint64_t llvm_cbe_indvars_2e_iv3_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv3_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_call_2e_i_2e_i;
  uint64_t llvm_cbe_call10_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next4_2e_i_2e_i;
  uint64_t llvm_cbe_call14_2e_i;

  ;
  ;
  ;
  llvm_cbe_indvars_2e_iv3_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_cond1_2e_preheader_2e_i;

  do {     /* Syntactic loop 'for.cond1.preheader.i' to make GCC happy */
llvm_cbe_for_2e_cond1_2e_preheader_2e_i:
// #line 22 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv3_2e_i = llvm_cbe_indvars_2e_iv3_2e_i__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body3_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body3.i.i' to make GCC happy */
llvm_cbe_for_2e_body3_2e_i_2e_i:
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i__PHI_TEMPORARY;
// #line 24 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_call_2e_i_2e_i =  /*tail*/ read(0, (((uint8_t*)((&in1.array[((int64_t)llvm_cbe_indvars_2e_iv3_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i)])))), 1);
// #line 25 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_call10_2e_i_2e_i =  /*tail*/ read(0, (((uint8_t*)((&in2.array[((int64_t)llvm_cbe_indvars_2e_iv3_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i)])))), 1);
// #line 23 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i == UINT64_C(128))&1))) {
    goto llvm_cbe_loop_main_2e_exit_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body3_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body3.i.i' */
llvm_cbe_loop_main_2e_exit_2e_i:
// #line 22 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_next4_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv3_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next4_2e_i_2e_i == UINT64_C(128))&1))) {
    goto llvm_cbe_loop_main_2e_1_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv3_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next4_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_cond1_2e_preheader_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.cond1.preheader.i' */
llvm_cbe_loop_main_2e_1_2e_exit:
// #line 28 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
   /*tail*/ matmul_OC_1();
// #line 29 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_call14_2e_i =  /*tail*/ write(1, ((uint8_t*)(&out)), 65536);
}


static void matmul_OC_1(void) {
  uint64_t llvm_cbe_indvar_2e_i;
  uint64_t llvm_cbe_indvar_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_indvars_2e_iv5_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv5_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t* llvm_cbe_arrayidx5_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t llvm_cbe_add2_2e_i_2e_i_2e_i;
  uint32_t llvm_cbe_add2_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  uint32_t _1;
  uint32_t _2;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i;
  uint32_t _3;
  uint32_t _4;
  uint32_t llvm_cbe_add_2e_i_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_1;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next6_2e_i_2e_i_2e_i;
  uint64_t llvm_cbe_indvar_2e_next_2e_i_2e_i;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  ;
  ;
  llvm_cbe_indvar_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_cond1_2e_preheader_2e_i;

  do {     /* Syntactic loop 'for.cond1.preheader.i' to make GCC happy */
llvm_cbe_for_2e_cond1_2e_preheader_2e_i:
// #line 8 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvar_2e_i = llvm_cbe_indvar_2e_i__PHI_TEMPORARY;
  llvm_cbe_indvars_2e_iv5_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body3_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body3.i.i' to make GCC happy */
llvm_cbe_for_2e_body3_2e_i_2e_i:
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv5_2e_i_2e_i = llvm_cbe_indvars_2e_iv5_2e_i_2e_i__PHI_TEMPORARY;
// #line 10 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_arrayidx5_2e_i_2e_i_2e_i = (&out.array[((int64_t)llvm_cbe_indvar_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv5_2e_i_2e_i)]);
  *llvm_cbe_arrayidx5_2e_i_2e_i_2e_i = 0;
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_add2_2e_i_2e_i_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body8_2e_i_2e_i_2e_i;

  do {     /* Syntactic loop 'for.body8.i.i.i' to make GCC happy */
llvm_cbe_for_2e_body8_2e_i_2e_i_2e_i:
// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY;
  llvm_cbe_add2_2e_i_2e_i_2e_i = llvm_cbe_add2_2e_i_2e_i_2e_i__PHI_TEMPORARY;
// #line 12 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  _1 = *((&in1.array[((int64_t)llvm_cbe_indvar_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i)]));
  _2 = *((&in2.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv5_2e_i_2e_i)]));
// #line 11 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i = llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i | 1;
// #line 12 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  _3 = *((&in1.array[((int64_t)llvm_cbe_indvar_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i)]));
  _4 = *((&in2.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i)].array[((int64_t)llvm_cbe_indvars_2e_iv5_2e_i_2e_i)]));
  llvm_cbe_add_2e_i_2e_i_2e_i_2e_1 = llvm_add_u32((llvm_mul_u32(_4, _3)), (llvm_add_u32((llvm_mul_u32(_2, _1)), llvm_cbe_add2_2e_i_2e_i_2e_i)));
// #line 11 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_1 = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i, 2);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_1 == UINT64_C(128))&1))) {
    goto llvm_cbe_loop_matmul_2e_1_2e_exit_2e_i_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i_2e_i_2e_i_2e_1;   /* for PHI node */
    llvm_cbe_add2_2e_i_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_add_2e_i_2e_i_2e_i_2e_1;   /* for PHI node */
    goto llvm_cbe_for_2e_body8_2e_i_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body8.i.i.i' */
llvm_cbe_loop_matmul_2e_1_2e_exit_2e_i_2e_i:
// #line 12 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  *llvm_cbe_arrayidx5_2e_i_2e_i_2e_i = llvm_cbe_add_2e_i_2e_i_2e_i_2e_1;
// #line 9 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvars_2e_iv_2e_next6_2e_i_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv5_2e_i_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next6_2e_i_2e_i_2e_i == UINT64_C(128))&1))) {
    goto llvm_cbe_loop_matmul_2e_1_2e_2_2e_exit_2e_i;
  } else {
    llvm_cbe_indvars_2e_iv5_2e_i_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next6_2e_i_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body3_2e_i_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body3.i.i' */
llvm_cbe_loop_matmul_2e_1_2e_2_2e_exit_2e_i:
// #line 8 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/matmul.c"
  llvm_cbe_indvar_2e_next_2e_i_2e_i = llvm_add_u64(llvm_cbe_indvar_2e_i, 1);
  if ((((llvm_cbe_indvar_2e_next_2e_i_2e_i == UINT64_C(128))&1))) {
    goto llvm_cbe_loop_matmul_2e_1_2e_3_2e_exit;
  } else {
    llvm_cbe_indvar_2e_i__PHI_TEMPORARY = llvm_cbe_indvar_2e_next_2e_i_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_cond1_2e_preheader_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.cond1.preheader.i' */
llvm_cbe_loop_matmul_2e_1_2e_3_2e_exit:
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
  uint32_t _5 = (uint32_t)argc;
  uint8_t** _6 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

