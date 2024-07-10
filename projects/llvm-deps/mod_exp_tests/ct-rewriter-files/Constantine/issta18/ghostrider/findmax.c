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
struct l_array_1000_uint32_t;

/* Function definitions */
typedef uint32_t l_fptr_6(uint32_t, uint8_t**);

typedef void l_fptr_1(void);

typedef void l_fptr_2(void);

typedef uint32_t l_fptr_4(void);

typedef void l_fptr_5(uint64_t, uint64_t);

typedef uint64_t l_fptr_3(uint32_t, uint8_t*, uint64_t);


/* Types Definitions */
struct l_array_1000_uint32_t {
  uint32_t array[1000];
};
struct l_vector_4_uint32_t {
  uint32_t vector[4];
} __attribute__((aligned(16)));
struct l_vector_4_bool {
  bool vector[4];
} __attribute__((aligned(4)));

/* External Global Variable Declarations */

/* Function Declarations */
static void __main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t, uint8_t*, uint64_t);
static uint32_t max_OC_1(void) __ATTRIBUTELIST__((noinline, nothrow, pure));
uint64_t write(uint32_t, uint8_t*, uint64_t);
void dfl_init(void) __ATTRIBUTELIST__((noinline, nothrow));
void dfl_id_print(uint64_t, uint64_t) __ATTRIBUTELIST__((noinline, nothrow, const));
int main(int, char **) __ATTRIBUTELIST__((nothrow));


/* Global Variable Definitions and Initialization */
static __MSALIGN__(16) struct l_array_1000_uint32_t in __attribute__((aligned(16)));


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline struct l_vector_4_uint32_t llvm_select_u32x4(struct l_vector_4_bool condition, struct l_vector_4_uint32_t iftrue, struct l_vector_4_uint32_t ifnot) {
  struct l_vector_4_uint32_t r;
  r.vector[0] = condition.vector[0] ? iftrue.vector[0] : ifnot.vector[0];
  r.vector[1] = condition.vector[1] ? iftrue.vector[1] : ifnot.vector[1];
  r.vector[2] = condition.vector[2] ? iftrue.vector[2] : ifnot.vector[2];
  r.vector[3] = condition.vector[3] ? iftrue.vector[3] : ifnot.vector[3];
  return r;
}
static __forceinline __MSALIGN__(4) struct l_vector_4_bool llvm_icmp_sgt_i32x4(struct l_vector_4_uint32_t l, struct l_vector_4_uint32_t r) {
  __MSALIGN__(4) struct l_vector_4_bool c;
  c.vector[0] = l.vector[0] > r.vector[0];
  c.vector[1] = l.vector[1] > r.vector[1];
  c.vector[2] = l.vector[2] > r.vector[2];
  c.vector[3] = l.vector[3] > r.vector[3];
  return c;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
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
  uint32_t llvm_cbe_res;    /* Address-exposed local */
  uint64_t llvm_cbe_indvars_2e_iv_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
  uint64_t llvm_cbe_call_2e_i;
  uint64_t llvm_cbe_indvars_2e_iv_2e_next_2e_i;
  uint32_t llvm_cbe_call1_2e_i;
  uint64_t llvm_cbe_call2_2e_i;

  ;
  ;
  ;
  llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = 0;   /* for PHI node */
  goto llvm_cbe_for_2e_body_2e_i;

  do {     /* Syntactic loop 'for.body.i' to make GCC happy */
llvm_cbe_for_2e_body_2e_i:
// #line 22 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_indvars_2e_iv_2e_i = llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY;
// #line 23 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_call_2e_i =  /*tail*/ read(0, (((uint8_t*)((&in.array[((int64_t)llvm_cbe_indvars_2e_iv_2e_i)])))), 2);
// #line 22 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_indvars_2e_iv_2e_next_2e_i = llvm_add_u64(llvm_cbe_indvars_2e_iv_2e_i, 1);
  if ((((llvm_cbe_indvars_2e_iv_2e_next_2e_i == UINT64_C(1000))&1))) {
    goto llvm_cbe_loop_main_2e_exit;
  } else {
    llvm_cbe_indvars_2e_iv_2e_i__PHI_TEMPORARY = llvm_cbe_indvars_2e_iv_2e_next_2e_i;   /* for PHI node */
    goto llvm_cbe_for_2e_body_2e_i;
  }

  } while (1); /* end of syntactic loop 'for.body.i' */
llvm_cbe_loop_main_2e_exit:
// #line 25 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_call1_2e_i =  /*tail*/ max_OC_1();
  llvm_cbe_res = llvm_cbe_call1_2e_i;
// #line 26 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_call2_2e_i = write(1, (((uint8_t*)(&llvm_cbe_res))), 4);
}


static uint32_t max_OC_1(void) {
  uint64_t llvm_cbe_index;
  uint64_t llvm_cbe_index__PHI_TEMPORARY;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_vec_2e_phi;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_vec_2e_phi__PHI_TEMPORARY;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_vec_2e_phi3;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_vec_2e_phi3__PHI_TEMPORARY;
  uint32_t* _1;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_wide_2e_load;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_wide_2e_load4;
  __MSALIGN__(16) struct l_vector_4_uint32_t _2;
  __MSALIGN__(16) struct l_vector_4_uint32_t _3;
  uint64_t llvm_cbe_index_2e_next;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_rdx_2e_minmax_2e_select;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_rdx_2e_shuf;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_rdx_2e_minmax_2e_select6;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_rdx_2e_shuf7;
  uint32_t* _4;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_wide_2e_load_2e_1;
  __MSALIGN__(16) struct l_vector_4_uint32_t llvm_cbe_wide_2e_load4_2e_1;
  __MSALIGN__(16) struct l_vector_4_uint32_t _5;
  __MSALIGN__(16) struct l_vector_4_uint32_t _6;
  uint64_t llvm_cbe_index_2e_next_2e_1;

// #line 1"/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  ;
  ;
  ;
  llvm_cbe_index__PHI_TEMPORARY = 0;   /* for PHI node */
  llvm_cbe_vec_2e_phi__PHI_TEMPORARY = llvm_ctor_u32x4(0, 0, 0, 0);   /* for PHI node */
  llvm_cbe_vec_2e_phi3__PHI_TEMPORARY = llvm_ctor_u32x4(0, 0, 0, 0);   /* for PHI node */
  goto llvm_cbe_vector_2e_body;

  do {     /* Syntactic loop 'vector.body' to make GCC happy */
llvm_cbe_vector_2e_body:
// #line 10 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_index = llvm_cbe_index__PHI_TEMPORARY;
  llvm_cbe_vec_2e_phi = llvm_cbe_vec_2e_phi__PHI_TEMPORARY;
  llvm_cbe_vec_2e_phi3 = llvm_cbe_vec_2e_phi3__PHI_TEMPORARY;
// #line 11 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  _1 = (&in.array[((int64_t)llvm_cbe_index)]);
  llvm_cbe_wide_2e_load = *(((__MSALIGN__(16) struct l_vector_4_uint32_t*)_1));
  llvm_cbe_wide_2e_load4 = *(((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&_1[((int64_t)4)]))));
  _2 = llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_wide_2e_load, llvm_cbe_vec_2e_phi)), llvm_cbe_wide_2e_load, llvm_cbe_vec_2e_phi);
  _3 = llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_wide_2e_load4, llvm_cbe_vec_2e_phi3)), llvm_cbe_wide_2e_load4, llvm_cbe_vec_2e_phi3);
// #line 10 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_index_2e_next = llvm_cbe_index | 8;
  if ((((llvm_cbe_index_2e_next == UINT64_C(1000))&1))) {
    goto llvm_cbe_middle_2e_block;
  } else {
    goto llvm_cbe_vector_2e_body_2e_1;
  }

llvm_cbe_vector_2e_body_2e_1:
// #line 11 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  _4 = (&in.array[((int64_t)llvm_cbe_index_2e_next)]);
  llvm_cbe_wide_2e_load_2e_1 = *(((__MSALIGN__(16) struct l_vector_4_uint32_t*)_4));
  llvm_cbe_wide_2e_load4_2e_1 = *(((__MSALIGN__(16) struct l_vector_4_uint32_t*)((&_4[((int64_t)4)]))));
  _5 = llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_wide_2e_load_2e_1, _2)), llvm_cbe_wide_2e_load_2e_1, _2);
  _6 = llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_wide_2e_load4_2e_1, _3)), llvm_cbe_wide_2e_load4_2e_1, _3);
// #line 10 "/home/constantine/constantine/src/apps/issta2018-benchmarks-wu/examples/ghostrider/findmax.c"
  llvm_cbe_index_2e_next_2e_1 = llvm_add_u64(llvm_cbe_index, 16);
  llvm_cbe_index__PHI_TEMPORARY = llvm_cbe_index_2e_next_2e_1;   /* for PHI node */
  llvm_cbe_vec_2e_phi__PHI_TEMPORARY = _5;   /* for PHI node */
  llvm_cbe_vec_2e_phi3__PHI_TEMPORARY = _6;   /* for PHI node */
  goto llvm_cbe_vector_2e_body;

  } while (1); /* end of syntactic loop 'vector.body' */
llvm_cbe_middle_2e_block:
  llvm_cbe_rdx_2e_minmax_2e_select = llvm_select_u32x4((llvm_icmp_sgt_i32x4(_2, _3)), _2, _3);
  llvm_cbe_rdx_2e_shuf = llvm_ctor_u32x4((llvm_cbe_rdx_2e_minmax_2e_select).vector[2], (llvm_cbe_rdx_2e_minmax_2e_select).vector[3], /*undef*/0, /*undef*/0);
  llvm_cbe_rdx_2e_minmax_2e_select6 = llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_rdx_2e_minmax_2e_select, llvm_cbe_rdx_2e_shuf)), llvm_cbe_rdx_2e_minmax_2e_select, llvm_cbe_rdx_2e_shuf);
  llvm_cbe_rdx_2e_shuf7 = llvm_ctor_u32x4((llvm_cbe_rdx_2e_minmax_2e_select6).vector[1], /*undef*/0, /*undef*/0, /*undef*/0);
  return (((llvm_select_u32x4((llvm_icmp_sgt_i32x4(llvm_cbe_rdx_2e_minmax_2e_select6, llvm_cbe_rdx_2e_shuf7)), llvm_cbe_rdx_2e_minmax_2e_select6, llvm_cbe_rdx_2e_shuf7))).vector[0u]);
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
  uint32_t _7 = (uint32_t)argc;
  uint8_t** _8 = (uint8_t**)argv;
   /*tail*/ __main();
  return 0;
}

