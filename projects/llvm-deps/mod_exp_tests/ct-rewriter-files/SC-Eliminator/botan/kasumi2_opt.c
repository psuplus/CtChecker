/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifdef _MSC_VER
#define __builtin_unreachable() __assume(0)
#endif
#ifdef _MSC_VER
#define __noreturn __declspec(noreturn)
#else
#define __noreturn __attribute__((noreturn))
#endif
#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
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
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl;
struct l_struct_struct_OC_std_KD__KD__Vector_base;
struct l_struct_class_OC_std_KD__KD_vector;
struct l_struct_class_OC_std_KD__KD_allocator;
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator;
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator;
struct l_array_8_uint16_t;
struct l_array_24_uint8_t;
struct l_array_64_uint8_t;
struct l_array_512_uint16_t;
struct l_array_128_uint8_t;
struct l_array_23_uint8_t;

/* Function definitions */
typedef void l_fptr_1(struct l_struct_class_OC_std_KD__KD_vector*, uint8_t*, uint8_t*);

typedef void l_fptr_26(uint16_t*, uint64_t, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint16_t* l_fptr_30(uint16_t*);

typedef uint16_t* l_fptr_29(uint16_t*, uint64_t, uint16_t*);

typedef uint64_t* l_fptr_45(uint64_t*, uint64_t*);

typedef void l_fptr_11(void);

typedef void l_fptr_15(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t*);

typedef void l_fptr_19(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl*);

typedef struct l_struct_class_OC_std_KD__KD_allocator* l_fptr_27(struct l_struct_struct_OC_std_KD__KD__Vector_base*);

typedef void l_fptr_14(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_7(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t);

typedef uint16_t** l_fptr_42(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*);

typedef uint64_t l_fptr_39(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*);

typedef uint16_t* l_fptr_40(uint16_t*, uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_4(struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint8_t* l_fptr_49(uint8_t*, uint8_t*, uint64_t);

typedef uint16_t* l_fptr_41(uint16_t*, uint16_t*, uint16_t*);

typedef uint16_t* l_fptr_23(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint64_t, uint8_t*);

typedef void l_fptr_20(struct l_struct_class_OC_std_KD__KD_allocator*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint64_t l_fptr_35(struct l_struct_class_OC_std_KD__KD_vector*);

typedef void l_fptr_3(uint8_t*, struct l_struct_class_OC_std_KD__KD_vector*, uint64_t);

typedef void l_fptr_18(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t);

typedef void l_fptr_28(uint16_t*, uint64_t, uint16_t*);

typedef uint16_t* l_fptr_37(struct l_struct_class_OC_std_KD__KD_vector*);

typedef void l_fptr_16(struct l_struct_struct_OC_std_KD__KD__Vector_base*);

typedef void l_fptr_5(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint64_t l_fptr_24(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef void l_fptr_33(uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint16_t* l_fptr_22(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t);

typedef void l_fptr_47(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, uint16_t**);

typedef void l_fptr_48(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_21(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef void l_fptr_34(uint16_t*, uint16_t*);

typedef void l_fptr_9(uint8_t*);

typedef uint32_t l_fptr_6(int, ...);

typedef void l_fptr_13(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef void l_fptr_32(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint16_t*, uint64_t);

typedef uint8_t* l_fptr_10(uint8_t*);

typedef uint8_t* l_fptr_25(uint64_t);

typedef uint64_t l_fptr_46(struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_31(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint16_t*, uint64_t);

typedef uint64_t l_fptr_44(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint8_t*);

typedef void l_fptr_36(struct l_struct_class_OC_std_KD__KD_vector*, uint16_t*, uint64_t, uint16_t*);

typedef uint32_t l_fptr_12(void);

typedef void l_fptr_8(struct l_struct_class_OC_std_KD__KD_vector*);

typedef uint16_t* l_fptr_2(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t);

typedef void l_fptr_38(struct l_struct_class_OC_std_KD__KD_vector*, uint16_t*);

typedef void l_fptr_43(uint16_t*, uint16_t*, uint16_t*);

typedef void l_fptr_17(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl*, struct l_struct_class_OC_std_KD__KD_allocator*);


/* Types Definitions */
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl {
  uint16_t* field0;
  uint16_t* field1;
  uint16_t* field2;
};
struct l_struct_struct_OC_std_KD__KD__Vector_base {
  struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl field0;
};
struct l_struct_class_OC_std_KD__KD_vector {
  struct l_struct_struct_OC_std_KD__KD__Vector_base field0;
};
struct l_struct_class_OC_std_KD__KD_allocator {
  uint8_t field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator {
  uint8_t field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator {
  uint16_t* field0;
};
struct l_array_8_uint16_t {
  uint16_t array[8];
};
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};
struct l_array_512_uint16_t {
  uint16_t array[512];
};
struct l_array_128_uint8_t {
  uint8_t array[128];
};
struct l_array_23_uint8_t {
  uint8_t array[23];
};

/* External Global Variable Declarations */

/* Function Declarations */
void _Z9encrypt_nRSt6vectorItSaItEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector*, uint8_t*, uint8_t*);
uint16_t* _ZNSt6vectorItSaItEEixEm(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _Z9decrypt_nRSt6vectorItSaItEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector*, uint8_t*, uint8_t*);
void _Z12key_schedulePKhRSt6vectorItSaItEEm(uint8_t*, struct l_struct_class_OC_std_KD__KD_vector*, uint64_t);
void _ZNSaItEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEEC2EmRKtRKS0_(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint32_t __gxx_personality_v0(int, ...);
void _ZNSaItED2Ev(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEE6resizeEmt(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEED2Ev(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
__noreturn void __clang_call_terminate(uint8_t*) __ATTRIBUTELIST__((noinline, nothrow)) __ATTRIBUTE_WEAK__ __HIDDEN__;
uint8_t* __cxa_begin_catch(uint8_t*);
void _ZSt9terminatev(void);
int main(void);
void _ZNSt6vectorItSaItEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorItEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorItED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEEC2EmRKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEE18_M_fill_initializeEmRKt(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEE12_Vector_implC2ERKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEE17_M_create_storageEm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSaItEC2ERKS_(struct l_struct_class_OC_std_KD__KD_allocator*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorItEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt12_Vector_baseItSaItEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t) __ATTRIBUTE_WEAK__;
uint16_t* _ZN9__gnu_cxx13new_allocatorItE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint64_t _ZNK9__gnu_cxx13new_allocatorItE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
__noreturn void _ZSt17__throw_bad_allocv(void);
uint8_t* _Znwm(uint64_t);
void _ZSt24__uninitialized_fill_n_aIPtmttEvT_T0_RKT1_RSaIT2_E(uint16_t*, uint64_t, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator* _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt20uninitialized_fill_nIPtmtEvT_T0_RKT1_(uint16_t*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPtmtEEvT_T0_RKT1_(uint16_t*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt6fill_nIPtmtET_S1_T0_RKT1_(uint16_t*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt10__fill_n_aIPtmtEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(uint16_t*, uint64_t, uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt10_Iter_baseIPtLb0EE7_S_baseES0_(uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEE13_M_deallocateEPtm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint16_t*, uint64_t) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorItE10deallocateEPtm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint16_t*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZdlPv(uint8_t*) __ATTRIBUTELIST__((nothrow));
void _ZSt8_DestroyIPttEvT_S1_RSaIT0_E(uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void _ZSt8_DestroyIPtEvT_S1_(uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Destroy_auxILb1EE9__destroyIPtEEvT_S3_(uint16_t*, uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorItSaItEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEE6insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(struct l_struct_class_OC_std_KD__KD_vector*, uint16_t*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt6vectorItSaItEE3endEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEE15_M_erase_at_endEPt(struct l_struct_class_OC_std_KD__KD_vector*, uint16_t*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorItSaItEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(struct l_struct_class_OC_std_KD__KD_vector*, uint16_t*, uint64_t, uint16_t*) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxxmiIPtSt6vectorItSaItEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt22__uninitialized_move_aIPtS0_SaItEET0_T_S3_S2_RT1_(uint16_t*, uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt13copy_backwardIPtS0_ET0_T_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t** _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt4fillIPttEvT_S1_RKT0_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorItSaItEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt6vectorItSaItEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt34__uninitialized_move_if_noexcept_aIPtS0_SaItEET0_T_S3_S2_RT1_(uint16_t*, uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void __cxa_rethrow(void);
void __cxa_end_catch(void);
uint16_t* _ZSt22__uninitialized_copy_aIPtS0_tET0_T_S2_S1_RSaIT1_E(uint16_t*, uint16_t*, uint16_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt18uninitialized_copyIPtS0_ET0_T_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPtS2_EET0_T_S4_S3_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt4copyIPtS0_ET0_T_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt14__copy_move_a2ILb0EPtS0_ET1_T0_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt13__copy_move_aILb0EPtS0_ET1_T0_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mItEEPT_PKS3_S6_S4_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt23__copy_move_backward_a2ILb0EPtS0_ET1_T0_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZSt22__copy_move_backward_aILb0EPtS0_ET1_T0_S2_S1_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTE_WEAK__;
uint16_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bItEEPT_PKS3_S6_S4_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt8__fill_aIPttEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(uint16_t*, uint16_t*, uint16_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorItSaItEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
__noreturn void _ZSt20__throw_length_errorPKc(uint8_t*);
uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t*, uint64_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxx14__alloc_traitsISaItEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator* _ZNKSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, uint16_t**) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseItSaItEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);
uint8_t* memmove(uint8_t*, uint8_t*, uint64_t);


/* Global Variable Definitions and Initialization */
static const __MSALIGN__(16) struct l_array_8_uint16_t _ZZ12key_schedulePKhRSt6vectorItSaItEEmE2RC __attribute__((aligned(16))) = { { 291, 17767u, 35243u, -12817, -292, 47768u, 30292u, 12816 } };
static __MSALIGN__(16) struct l_array_24_uint8_t _ZL6in_key __attribute__((aligned(16))) = { "\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" };
static __MSALIGN__(16) struct l_array_64_uint8_t _ZL2in __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_64_uint8_t _ZL3out __attribute__((aligned(16)));
static const __MSALIGN__(64) struct l_array_512_uint16_t _ZL14KASUMI_SBOX_S9 __attribute__((aligned(64))) = { { 167, 239, 161, 379, 391, 334, 9, 338, 38, 226, 48, 358, 452, 385, 90, 397, 183, 253, 147, 331, 415, 340, 51, 362, 306, 500, 262, 82, 216, 159, 356, 177, 175, 241, 489, 37, 206, 17, 0, 333, 44, 254, 378, 58, 143, 220, 81, 400, 95, 3, 315, 245, 54, 235, 218, 405, 472, 264, 172, 494, 371, 290, 399, 76, 165, 197, 395, 121, 257, 480, 423, 212, 240, 28, 462, 176, 406, 507, 288, 223, 501, 407, 249, 265, 89, 186, 221, 428, 164, 74, 440, 196, 458, 421, 350, 163, 232, 158, 134, 354, 13, 250, 491, 142, 191, 69, 193, 425, 152, 227, 366, 135, 344, 300, 276, 242, 437, 320, 113, 278, 11, 243, 87, 317, 36, 93, 496, 27, 487, 446, 482, 41, 68, 156, 457, 131, 326, 403, 339, 20, 39, 115, 442, 124, 475, 384, 508, 53, 112, 170, 479, 151, 126, 169, 73, 268, 279, 321, 168, 364, 363, 292, 46, 499, 393, 327, 324, 24, 456, 267, 157, 460, 488, 426, 309, 229, 439, 506, 208, 271, 349, 401, 434, 236, 16, 209, 359, 52, 56, 120, 199, 277, 465, 416, 252, 287, 246, 6, 83, 305, 420, 345, 153, 502, 65, 61, 244, 282, 173, 222, 418, 67, 386, 368, 261, 101, 476, 291, 195, 430, 49, 79, 166, 330, 280, 383, 373, 128, 382, 408, 155, 495, 367, 388, 274, 107, 459, 417, 62, 454, 132, 225, 203, 316, 234, 14, 301, 91, 503, 286, 424, 211, 347, 307, 140, 374, 35, 103, 125, 427, 19, 214, 453, 146, 498, 314, 444, 230, 256, 329, 198, 285, 50, 116, 78, 410, 10, 205, 510, 171, 231, 45, 139, 467, 29, 86, 505, 32, 72, 26, 342, 150, 313, 490, 431, 238, 411, 325, 149, 473, 40, 119, 174, 355, 185, 233, 389, 71, 448, 273, 372, 55, 110, 178, 322, 12, 469, 392, 369, 190, 1, 109, 375, 137, 181, 88, 75, 308, 260, 484, 98, 272, 370, 275, 412, 111, 336, 318, 4, 504, 492, 259, 304, 77, 337, 435, 21, 357, 303, 332, 483, 18, 47, 85, 25, 497, 474, 289, 100, 269, 296, 478, 270, 106, 31, 104, 433, 84, 414, 486, 394, 96, 99, 154, 511, 148, 413, 361, 409, 255, 162, 215, 302, 201, 266, 351, 343, 144, 441, 365, 108, 298, 251, 34, 182, 509, 138, 210, 335, 133, 311, 352, 328, 141, 396, 346, 123, 319, 450, 281, 429, 228, 443, 481, 92, 404, 485, 422, 248, 297, 23, 213, 130, 466, 22, 217, 283, 70, 294, 360, 419, 127, 312, 377, 7, 468, 194, 2, 117, 295, 463, 258, 224, 447, 247, 187, 80, 398, 284, 353, 105, 390, 299, 471, 470, 184, 57, 200, 348, 63, 204, 188, 33, 451, 97, 30, 310, 219, 94, 160, 129, 493, 64, 179, 263, 102, 189, 207, 114, 402, 438, 477, 387, 122, 192, 42, 381, 5, 145, 118, 180, 449, 293, 323, 136, 380, 43, 66, 60, 455, 341, 445, 202, 432, 8, 237, 15, 376, 436, 464, 59, 461 } };
static const __MSALIGN__(64) struct l_array_128_uint8_t _ZL14KASUMI_SBOX_S7 __attribute__((aligned(64))) = { "62>8\x16\"^`&\x06?]\x02\x12{!7q'r\x15\x43\x41\x0C/I.\x1B\x19o|Q5\tyO4<:0e\x7F(xhFG+\x14zH=\x17m\rdM\x01\x10\aR\nibutL\vYj\x00}vcVE\x1E\x39~Wp3\x11\x05_\x0EZT[\x08#g a\x1C\x42\x66\x1F\x1A-K\x04U\\%JP1D\x1Ds,@kl\x18nS$N*\x13\x0F)Xw;\x03" };
static const struct l_array_23_uint8_t _OC_str = { "vector::_M_fill_insert" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint16_t llvm_select_u16(bool condition, uint16_t iftrue, uint16_t ifnot) {
  uint16_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t* llvm_select_pu64(bool condition, uint64_t* iftrue, uint64_t* ifnot) {
  uint64_t* r;
  r = condition ? iftrue : ifnot;
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
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_sdiv_u64(int64_t a, int64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint64_t llvm_urem_u64(uint64_t a, uint64_t b) {
  uint64_t r = a % b;
  return r;
}
static __forceinline uint64_t llvm_srem_u64(int64_t a, int64_t b) {
  uint64_t r = a % b;
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
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint64_t llvm_neg_u64(uint64_t a) {
  uint64_t r = -a;
  return r;
}


/* Function Bodies */

void _Z9encrypt_nRSt6vectorItSaItEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector* _1, uint8_t* _2, uint8_t* _3) {
  uint8_t* _4;
  uint8_t _5;
  uint8_t _6;
  uint16_t _7;
  uint8_t* _8;
  uint8_t _9;
  uint8_t _10;
  uint16_t _11;
  uint8_t* _12;
  uint8_t _13;
  uint8_t _14;
  uint16_t _15;
  uint8_t* _16;
  uint8_t _17;
  uint8_t _18;
  uint16_t _19;
  uint16_t* _20;
  uint16_t _21;
  uint16_t _22;
  uint16_t _23;
  uint16_t _24;
  uint16_t _25;
  uint16_t _26;
  uint8_t _27;
  uint64_t _28;
  uint64_t _29;
  uint16_t _30;
  uint64_t _31;
  uint16_t _32;
  uint64_t _33;
  uint16_t _34;
  uint64_t _35;
  uint16_t _36;
  uint64_t _37;
  uint16_t _38;
  uint64_t _39;
  uint16_t _40;
  uint64_t _41;
  uint16_t _42;
  uint64_t _43;
  uint16_t _44;
  uint64_t _45;
  uint16_t _46;
  uint64_t _47;
  uint16_t _48;
  uint64_t _49;
  uint16_t _50;
  uint64_t _51;
  uint16_t _52;
  uint64_t _53;
  uint16_t _54;
  uint64_t _55;
  uint16_t _56;
  uint64_t _57;
  uint16_t _58;
  uint64_t _59;
  uint16_t _60;
  uint16_t _61;
  uint64_t _62;
  uint64_t _63;
  uint8_t _64;
  uint64_t _65;
  uint8_t _66;
  uint8_t _67;
  uint16_t _68;
  uint16_t _69;
  uint8_t _70;
  uint16_t _71;
  uint16_t _72;
  uint16_t _73;
  uint16_t _74;
  uint8_t _75;
  uint16_t _76;
  uint16_t _77;
  uint8_t _78;
  uint8_t _79;
  uint16_t _80;
  uint16_t _81;
  uint8_t _82;
  uint16_t _83;
  uint16_t _84;
  uint16_t _85;
  uint16_t _86;
  uint8_t _87;
  uint16_t _88;
  uint16_t _89;
  uint8_t _90;
  uint8_t _91;
  uint16_t _92;
  uint16_t _93;
  uint8_t _94;
  uint16_t _95;
  uint16_t _96;
  uint16_t _97;
  uint16_t _98;
  uint16_t _99;
  uint8_t _100;
  uint16_t _101;
  uint16_t _102;
  uint8_t _103;
  uint8_t _104;
  uint16_t _105;
  uint16_t _106;
  uint8_t _107;
  uint16_t _108;
  uint16_t _109;
  uint16_t _110;
  uint16_t _111;
  uint8_t _112;
  uint16_t _113;
  uint16_t _114;
  uint8_t _115;
  uint8_t _116;
  uint16_t _117;
  uint16_t _118;
  uint8_t _119;
  uint16_t _120;
  uint16_t _121;
  uint16_t _122;
  uint16_t _123;
  uint8_t _124;
  uint16_t _125;
  uint16_t _126;
  uint8_t _127;
  uint8_t _128;
  uint16_t _129;
  uint16_t _130;
  uint8_t _131;
  uint16_t _132;
  uint16_t _133;
  uint16_t _134;
  uint16_t _135;
  uint16_t _136;
  uint16_t* _137;
  uint16_t _138;
  uint16_t _139;
  uint16_t _140;
  uint16_t _141;
  uint16_t _142;
  uint16_t _143;
  uint8_t _144;
  uint16_t _145;
  uint16_t _146;
  uint8_t _147;
  uint8_t _148;
  uint16_t _149;
  uint16_t _150;
  uint8_t _151;
  uint16_t _152;
  uint16_t _153;
  uint16_t _154;
  uint16_t _155;
  uint8_t _156;
  uint16_t _157;
  uint16_t _158;
  uint8_t _159;
  uint8_t _160;
  uint16_t _161;
  uint16_t _162;
  uint8_t _163;
  uint16_t _164;
  uint16_t _165;
  uint16_t _166;
  uint16_t _167;
  uint8_t _168;
  uint16_t _169;
  uint16_t _170;
  uint8_t _171;
  uint8_t _172;
  uint16_t _173;
  uint16_t _174;
  uint8_t _175;
  uint16_t _176;
  uint16_t _177;
  uint16_t _178;
  uint16_t _179;
  uint16_t _180;
  uint8_t _181;
  uint16_t _182;
  uint16_t _183;
  uint8_t _184;
  uint8_t _185;
  uint16_t _186;
  uint16_t _187;
  uint8_t _188;
  uint16_t _189;
  uint16_t _190;
  uint16_t _191;
  uint16_t _192;
  uint8_t _193;
  uint16_t _194;
  uint16_t _195;
  uint8_t _196;
  uint8_t _197;
  uint16_t _198;
  uint16_t _199;
  uint8_t _200;
  uint16_t _201;
  uint16_t _202;
  uint16_t _203;
  uint16_t _204;
  uint8_t _205;
  uint16_t _206;
  uint16_t _207;
  uint8_t _208;
  uint8_t _209;
  uint16_t _210;
  uint16_t _211;
  uint8_t _212;
  uint16_t _213;
  uint16_t _214;
  uint16_t _215;
  uint16_t _216;
  uint16_t _217;
  uint16_t* _218;
  uint16_t _219;
  uint16_t _220;
  uint16_t _221;
  uint16_t _222;
  uint16_t _223;
  uint16_t _224;
  uint8_t _225;
  uint16_t _226;
  uint16_t _227;
  uint8_t _228;
  uint8_t _229;
  uint16_t _230;
  uint16_t _231;
  uint8_t _232;
  uint16_t _233;
  uint16_t _234;
  uint16_t _235;
  uint16_t _236;
  uint8_t _237;
  uint16_t _238;
  uint16_t _239;
  uint8_t _240;
  uint8_t _241;
  uint16_t _242;
  uint16_t _243;
  uint8_t _244;
  uint16_t _245;
  uint16_t _246;
  uint16_t _247;
  uint16_t _248;
  uint8_t _249;
  uint16_t _250;
  uint16_t _251;
  uint8_t _252;
  uint8_t _253;
  uint16_t _254;
  uint16_t _255;
  uint8_t _256;
  uint16_t _257;
  uint16_t _258;
  uint16_t _259;
  uint16_t _260;
  uint16_t _261;
  uint8_t _262;
  uint16_t _263;
  uint16_t _264;
  uint8_t _265;
  uint8_t _266;
  uint16_t _267;
  uint16_t _268;
  uint8_t _269;
  uint16_t _270;
  uint16_t _271;
  uint16_t _272;
  uint16_t _273;
  uint8_t _274;
  uint16_t _275;
  uint16_t _276;
  uint8_t _277;
  uint8_t _278;
  uint16_t _279;
  uint16_t _280;
  uint8_t _281;
  uint16_t _282;
  uint16_t _283;
  uint16_t _284;
  uint16_t _285;
  uint8_t _286;
  uint16_t _287;
  uint16_t _288;
  uint8_t _289;
  uint8_t _290;
  uint16_t _291;
  uint16_t _292;
  uint8_t _293;
  uint16_t _294;
  uint16_t _295;
  uint16_t _296;
  uint16_t _297;
  uint16_t _298;
  uint16_t* _299;
  uint16_t _300;
  uint16_t _301;
  uint16_t _302;
  uint16_t _303;
  uint16_t _304;
  uint16_t _305;
  uint8_t _306;
  uint16_t _307;
  uint16_t _308;
  uint8_t _309;
  uint8_t _310;
  uint16_t _311;
  uint16_t _312;
  uint8_t _313;
  uint16_t _314;
  uint16_t _315;
  uint16_t _316;
  uint16_t _317;
  uint8_t _318;
  uint16_t _319;
  uint16_t _320;
  uint8_t _321;
  uint8_t _322;
  uint16_t _323;
  uint16_t _324;
  uint8_t _325;
  uint16_t _326;
  uint16_t _327;
  uint16_t _328;
  uint16_t _329;
  uint8_t _330;
  uint16_t _331;
  uint16_t _332;
  uint8_t _333;
  uint8_t _334;
  uint16_t _335;
  uint16_t _336;
  uint8_t _337;
  uint16_t _338;
  uint16_t _339;
  uint16_t _340;
  uint16_t _341;
  uint16_t _342;
  uint8_t _343;
  uint16_t _344;
  uint16_t _345;
  uint8_t _346;
  uint8_t _347;
  uint16_t _348;
  uint16_t _349;
  uint8_t _350;
  uint16_t _351;
  uint16_t _352;
  uint16_t _353;
  uint16_t _354;
  uint8_t _355;
  uint16_t _356;
  uint16_t _357;
  uint8_t _358;
  uint8_t _359;
  uint16_t _360;
  uint16_t _361;
  uint8_t _362;
  uint16_t _363;
  uint16_t _364;
  uint16_t _365;
  uint16_t _366;
  uint8_t _367;
  uint16_t _368;
  uint16_t _369;
  uint8_t _370;
  uint8_t _371;
  uint16_t _372;
  uint16_t _373;
  uint8_t _374;
  uint16_t _375;
  uint16_t _376;
  uint16_t _377;
  uint16_t _378;
  uint16_t _379;

  _4 = (&_2[((int64_t)(llvm_mul_u64(0, 2)))]);
  goto _380;

_380:
  _5 = *_4;
  _6 = *((&_4[((int64_t)1)]));
  _7 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_5)))))) << 8) | (((uint32_t)(uint8_t)_6))));
  _8 = (&_2[((int64_t)2)]);
  goto _381;

_381:
  _9 = *_8;
  _10 = *((&_8[((int64_t)1)]));
  _11 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_9)))))) << 8) | (((uint32_t)(uint8_t)_10))));
  _12 = (&_2[((int64_t)4)]);
  goto _382;

_382:
  _13 = *_12;
  _14 = *((&_12[((int64_t)1)]));
  _15 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_13)))))) << 8) | (((uint32_t)(uint8_t)_14))));
  _16 = (&_2[((int64_t)6)]);
  goto llvm_cbe__2e_preheader20;

llvm_cbe__2e_preheader20:
  _17 = *_16;
  _18 = *((&_16[((int64_t)1)]));
  _19 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_17)))))) << 8) | (((uint32_t)(uint8_t)_18))));
  goto _383;

_383:
  _20 = _ZNSt6vectorItSaItEEixEm(_1, 0);
  _21 = *_20;
  _22 = ((uint16_t)((((uint32_t)(uint16_t)_11)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_7)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_7)), 15))))))) & (((uint32_t)(uint16_t)_21)))));
  _23 = *((&_20[((int64_t)1)]));
  _24 = *((&_20[((int64_t)2)]));
  _25 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_7)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_22)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_22)), 15))))))) | (((uint32_t)(uint16_t)_23)))))))) ^ (((uint32_t)(uint16_t)_24))));
  _26 = *((&_20[((int64_t)3)]));
  _27 = ((uint8_t)((((uint32_t)(uint16_t)_25)) & 127));
  _28 = ((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_25)), 7)))));
  _29 = llvm_srem_u64(_28, 32);
  _30 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_29)]));
  _31 = llvm_add_u64(_29, 32);
  _32 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_31)]));
  _33 = llvm_add_u64(_31, 32);
  _34 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_33)]));
  _35 = llvm_add_u64(_33, 32);
  _36 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_35)]));
  _37 = llvm_add_u64(_35, 32);
  _38 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_37)]));
  _39 = llvm_add_u64(_37, 32);
  _40 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_39)]));
  _41 = llvm_add_u64(_39, 32);
  _42 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_41)]));
  _43 = llvm_add_u64(_41, 32);
  _44 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_43)]));
  _45 = llvm_add_u64(_43, 32);
  _46 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_45)]));
  _47 = llvm_add_u64(_45, 32);
  _48 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_47)]));
  _49 = llvm_add_u64(_47, 32);
  _50 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_49)]));
  _51 = llvm_add_u64(_49, 32);
  _52 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_51)]));
  _53 = llvm_add_u64(_51, 32);
  _54 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_53)]));
  _55 = llvm_add_u64(_53, 32);
  _56 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_55)]));
  _57 = llvm_add_u64(_55, 32);
  _58 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_57)]));
  _59 = llvm_add_u64(_57, 32);
  _60 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_59)]));
  _61 = ((uint16_t)((((uint32_t)(uint16_t)(llvm_select_u16((((_28 == _59)&1)), _60, (llvm_select_u16((((_28 == _57)&1)), _58, (llvm_select_u16((((_28 == _55)&1)), _56, (llvm_select_u16((((_28 == _53)&1)), _54, (llvm_select_u16((((_28 == _51)&1)), _52, (llvm_select_u16((((_28 == _49)&1)), _50, (llvm_select_u16((((_28 == _47)&1)), _48, (llvm_select_u16((((_28 == _45)&1)), _46, (llvm_select_u16((((_28 == _43)&1)), _44, (llvm_select_u16((((_28 == _41)&1)), _42, (llvm_select_u16((((_28 == _39)&1)), _40, (llvm_select_u16((((_28 == _37)&1)), _38, (llvm_select_u16((((_28 == _35)&1)), _36, (llvm_select_u16((((_28 == _33)&1)), _34, (llvm_select_u16((((_28 == _31)&1)), _32, (llvm_select_u16((((_28 == _29)&1)), _30, 0)))))))))))))))))))))))))))))))))) ^ (((uint32_t)(uint8_t)_27))));
  _62 = ((uint64_t)(uint8_t)_27);
  _63 = llvm_srem_u64(_62, 64);
  _64 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)_63)]));
  _65 = llvm_add_u64(_63, 64);
  _66 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)_65)]));
  _67 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)(llvm_select_u16((((_62 == _65)&1)), (((uint16_t)(uint8_t)_66)), (llvm_select_u16((((_62 == _63)&1)), (((uint16_t)(uint8_t)_64)), 0)))))))) ^ ((((uint32_t)(uint16_t)_61)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_26)), 9))));
  _68 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_61)) ^ ((((uint32_t)(uint16_t)_26)) & 511)))))]));
  _69 = ((uint16_t)((((uint32_t)(uint16_t)_68)) ^ (((uint32_t)(uint8_t)_67))));
  _70 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_67)))]));
  _71 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_70)) ^ ((((uint32_t)(uint16_t)_69)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_69))))))) ^ (((uint32_t)(uint16_t)_22))));
  _72 = *((&_20[((int64_t)4)]));
  _73 = ((uint16_t)((((uint32_t)(uint16_t)_22)) ^ (((uint32_t)(uint16_t)_72))));
  _74 = *((&_20[((int64_t)5)]));
  _75 = ((uint8_t)((((uint32_t)(uint16_t)_73)) & 127));
  _76 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_73)), 7)))))))]));
  _77 = ((uint16_t)((((uint32_t)(uint16_t)_76)) ^ (((uint32_t)(uint8_t)_75))));
  _78 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_75)))]));
  _79 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_78)) ^ ((((uint32_t)(uint16_t)_77)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_74)), 9))));
  _80 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_77)) ^ ((((uint32_t)(uint16_t)_74)) & 511)))))]));
  _81 = ((uint16_t)((((uint32_t)(uint16_t)_80)) ^ (((uint32_t)(uint8_t)_79))));
  _82 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_79)))]));
  _83 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_82)) ^ ((((uint32_t)(uint16_t)_81)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_81))))))) ^ (((uint32_t)(uint16_t)_71))));
  _84 = *((&_20[((int64_t)6)]));
  _85 = ((uint16_t)((((uint32_t)(uint16_t)_71)) ^ (((uint32_t)(uint16_t)_84))));
  _86 = *((&_20[((int64_t)7)]));
  _87 = ((uint8_t)((((uint32_t)(uint16_t)_85)) & 127));
  _88 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_85)), 7)))))))]));
  _89 = ((uint16_t)((((uint32_t)(uint16_t)_88)) ^ (((uint32_t)(uint8_t)_87))));
  _90 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_87)))]));
  _91 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_90)) ^ ((((uint32_t)(uint16_t)_89)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_86)), 9))));
  _92 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_89)) ^ ((((uint32_t)(uint16_t)_86)) & 511)))))]));
  _93 = ((uint16_t)((((uint32_t)(uint16_t)_92)) ^ (((uint32_t)(uint8_t)_91))));
  _94 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_91)))]));
  _95 = ((uint16_t)((((uint32_t)(uint16_t)_15)) ^ (((uint32_t)(uint16_t)_83))));
  _96 = ((uint16_t)((((uint32_t)(uint16_t)_19)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_94)) ^ ((((uint32_t)(uint16_t)_93)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_93))))))) ^ (((uint32_t)(uint16_t)_83)))))))));
  _97 = *((&_20[((int64_t)10)]));
  _98 = ((uint16_t)((((uint32_t)(uint16_t)_95)) ^ (((uint32_t)(uint16_t)_97))));
  _99 = *((&_20[((int64_t)11)]));
  _100 = ((uint8_t)((((uint32_t)(uint16_t)_98)) & 127));
  _101 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_98)), 7)))))))]));
  _102 = ((uint16_t)((((uint32_t)(uint16_t)_101)) ^ (((uint32_t)(uint8_t)_100))));
  _103 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_100)))]));
  _104 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_103)) ^ ((((uint32_t)(uint16_t)_102)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_99)), 9))));
  _105 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_102)) ^ ((((uint32_t)(uint16_t)_99)) & 511)))))]));
  _106 = ((uint16_t)((((uint32_t)(uint16_t)_105)) ^ (((uint32_t)(uint8_t)_104))));
  _107 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_104)))]));
  _108 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_107)) ^ ((((uint32_t)(uint16_t)_106)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_106))))))) ^ (((uint32_t)(uint16_t)_96))));
  _109 = *((&_20[((int64_t)12)]));
  _110 = ((uint16_t)((((uint32_t)(uint16_t)_96)) ^ (((uint32_t)(uint16_t)_109))));
  _111 = *((&_20[((int64_t)13)]));
  _112 = ((uint8_t)((((uint32_t)(uint16_t)_110)) & 127));
  _113 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_110)), 7)))))))]));
  _114 = ((uint16_t)((((uint32_t)(uint16_t)_113)) ^ (((uint32_t)(uint8_t)_112))));
  _115 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_112)))]));
  _116 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_115)) ^ ((((uint32_t)(uint16_t)_114)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_111)), 9))));
  _117 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_114)) ^ ((((uint32_t)(uint16_t)_111)) & 511)))))]));
  _118 = ((uint16_t)((((uint32_t)(uint16_t)_117)) ^ (((uint32_t)(uint8_t)_116))));
  _119 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_116)))]));
  _120 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_119)) ^ ((((uint32_t)(uint16_t)_118)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_118))))))) ^ (((uint32_t)(uint16_t)_108))));
  _121 = *((&_20[((int64_t)14)]));
  _122 = ((uint16_t)((((uint32_t)(uint16_t)_108)) ^ (((uint32_t)(uint16_t)_121))));
  _123 = *((&_20[((int64_t)15)]));
  _124 = ((uint8_t)((((uint32_t)(uint16_t)_122)) & 127));
  _125 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_122)), 7)))))))]));
  _126 = ((uint16_t)((((uint32_t)(uint16_t)_125)) ^ (((uint32_t)(uint8_t)_124))));
  _127 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_124)))]));
  _128 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_127)) ^ ((((uint32_t)(uint16_t)_126)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_123)), 9))));
  _129 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_126)) ^ ((((uint32_t)(uint16_t)_123)) & 511)))))]));
  _130 = ((uint16_t)((((uint32_t)(uint16_t)_129)) ^ (((uint32_t)(uint8_t)_128))));
  _131 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_128)))]));
  _132 = *((&_20[((int64_t)8)]));
  _133 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_131)) ^ ((((uint32_t)(uint16_t)_130)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_130))))))) ^ (((uint32_t)(uint16_t)_120))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_120)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_120)), 15))))))) & (((uint32_t)(uint16_t)_132)))));
  _134 = *((&_20[((int64_t)9)]));
  _135 = ((uint16_t)((((uint32_t)(uint16_t)_7)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_120)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_133)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_133)), 15))))))) | (((uint32_t)(uint16_t)_134))))))))));
  _136 = ((uint16_t)((((uint32_t)(uint16_t)_11)) ^ (((uint32_t)(uint16_t)_133))));
  _137 = _ZNSt6vectorItSaItEEixEm(_1, 16);
  _138 = *_137;
  _139 = ((uint16_t)((((uint32_t)(uint16_t)_136)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_135)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_135)), 15))))))) & (((uint32_t)(uint16_t)_138)))));
  _140 = *((&_137[((int64_t)1)]));
  _141 = *((&_137[((int64_t)2)]));
  _142 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_135)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_139)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_139)), 15))))))) | (((uint32_t)(uint16_t)_140)))))))) ^ (((uint32_t)(uint16_t)_141))));
  _143 = *((&_137[((int64_t)3)]));
  _144 = ((uint8_t)((((uint32_t)(uint16_t)_142)) & 127));
  _145 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_142)), 7)))))))]));
  _146 = ((uint16_t)((((uint32_t)(uint16_t)_145)) ^ (((uint32_t)(uint8_t)_144))));
  _147 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_144)))]));
  _148 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_147)) ^ ((((uint32_t)(uint16_t)_146)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_143)), 9))));
  _149 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_146)) ^ ((((uint32_t)(uint16_t)_143)) & 511)))))]));
  _150 = ((uint16_t)((((uint32_t)(uint16_t)_149)) ^ (((uint32_t)(uint8_t)_148))));
  _151 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_148)))]));
  _152 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_151)) ^ ((((uint32_t)(uint16_t)_150)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_150))))))) ^ (((uint32_t)(uint16_t)_139))));
  _153 = *((&_137[((int64_t)4)]));
  _154 = ((uint16_t)((((uint32_t)(uint16_t)_139)) ^ (((uint32_t)(uint16_t)_153))));
  _155 = *((&_137[((int64_t)5)]));
  _156 = ((uint8_t)((((uint32_t)(uint16_t)_154)) & 127));
  _157 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_154)), 7)))))))]));
  _158 = ((uint16_t)((((uint32_t)(uint16_t)_157)) ^ (((uint32_t)(uint8_t)_156))));
  _159 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_156)))]));
  _160 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_159)) ^ ((((uint32_t)(uint16_t)_158)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_155)), 9))));
  _161 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_158)) ^ ((((uint32_t)(uint16_t)_155)) & 511)))))]));
  _162 = ((uint16_t)((((uint32_t)(uint16_t)_161)) ^ (((uint32_t)(uint8_t)_160))));
  _163 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_160)))]));
  _164 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_163)) ^ ((((uint32_t)(uint16_t)_162)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_162))))))) ^ (((uint32_t)(uint16_t)_152))));
  _165 = *((&_137[((int64_t)6)]));
  _166 = ((uint16_t)((((uint32_t)(uint16_t)_152)) ^ (((uint32_t)(uint16_t)_165))));
  _167 = *((&_137[((int64_t)7)]));
  _168 = ((uint8_t)((((uint32_t)(uint16_t)_166)) & 127));
  _169 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_166)), 7)))))))]));
  _170 = ((uint16_t)((((uint32_t)(uint16_t)_169)) ^ (((uint32_t)(uint8_t)_168))));
  _171 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_168)))]));
  _172 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_171)) ^ ((((uint32_t)(uint16_t)_170)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_167)), 9))));
  _173 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_170)) ^ ((((uint32_t)(uint16_t)_167)) & 511)))))]));
  _174 = ((uint16_t)((((uint32_t)(uint16_t)_173)) ^ (((uint32_t)(uint8_t)_172))));
  _175 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_172)))]));
  _176 = ((uint16_t)((((uint32_t)(uint16_t)_95)) ^ (((uint32_t)(uint16_t)_164))));
  _177 = ((uint16_t)((((uint32_t)(uint16_t)_96)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_175)) ^ ((((uint32_t)(uint16_t)_174)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_174))))))) ^ (((uint32_t)(uint16_t)_164)))))))));
  _178 = *((&_137[((int64_t)10)]));
  _179 = ((uint16_t)((((uint32_t)(uint16_t)_176)) ^ (((uint32_t)(uint16_t)_178))));
  _180 = *((&_137[((int64_t)11)]));
  _181 = ((uint8_t)((((uint32_t)(uint16_t)_179)) & 127));
  _182 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_179)), 7)))))))]));
  _183 = ((uint16_t)((((uint32_t)(uint16_t)_182)) ^ (((uint32_t)(uint8_t)_181))));
  _184 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_181)))]));
  _185 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_184)) ^ ((((uint32_t)(uint16_t)_183)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_180)), 9))));
  _186 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_183)) ^ ((((uint32_t)(uint16_t)_180)) & 511)))))]));
  _187 = ((uint16_t)((((uint32_t)(uint16_t)_186)) ^ (((uint32_t)(uint8_t)_185))));
  _188 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_185)))]));
  _189 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_188)) ^ ((((uint32_t)(uint16_t)_187)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_187))))))) ^ (((uint32_t)(uint16_t)_177))));
  _190 = *((&_137[((int64_t)12)]));
  _191 = ((uint16_t)((((uint32_t)(uint16_t)_177)) ^ (((uint32_t)(uint16_t)_190))));
  _192 = *((&_137[((int64_t)13)]));
  _193 = ((uint8_t)((((uint32_t)(uint16_t)_191)) & 127));
  _194 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_191)), 7)))))))]));
  _195 = ((uint16_t)((((uint32_t)(uint16_t)_194)) ^ (((uint32_t)(uint8_t)_193))));
  _196 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_193)))]));
  _197 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_196)) ^ ((((uint32_t)(uint16_t)_195)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_192)), 9))));
  _198 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_195)) ^ ((((uint32_t)(uint16_t)_192)) & 511)))))]));
  _199 = ((uint16_t)((((uint32_t)(uint16_t)_198)) ^ (((uint32_t)(uint8_t)_197))));
  _200 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_197)))]));
  _201 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_200)) ^ ((((uint32_t)(uint16_t)_199)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_199))))))) ^ (((uint32_t)(uint16_t)_189))));
  _202 = *((&_137[((int64_t)14)]));
  _203 = ((uint16_t)((((uint32_t)(uint16_t)_189)) ^ (((uint32_t)(uint16_t)_202))));
  _204 = *((&_137[((int64_t)15)]));
  _205 = ((uint8_t)((((uint32_t)(uint16_t)_203)) & 127));
  _206 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_203)), 7)))))))]));
  _207 = ((uint16_t)((((uint32_t)(uint16_t)_206)) ^ (((uint32_t)(uint8_t)_205))));
  _208 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_205)))]));
  _209 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_208)) ^ ((((uint32_t)(uint16_t)_207)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_204)), 9))));
  _210 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_207)) ^ ((((uint32_t)(uint16_t)_204)) & 511)))))]));
  _211 = ((uint16_t)((((uint32_t)(uint16_t)_210)) ^ (((uint32_t)(uint8_t)_209))));
  _212 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_209)))]));
  _213 = *((&_137[((int64_t)8)]));
  _214 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_212)) ^ ((((uint32_t)(uint16_t)_211)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_211))))))) ^ (((uint32_t)(uint16_t)_201))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_201)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_201)), 15))))))) & (((uint32_t)(uint16_t)_213)))));
  _215 = *((&_137[((int64_t)9)]));
  _216 = ((uint16_t)((((uint32_t)(uint16_t)_135)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_201)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_214)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_214)), 15))))))) | (((uint32_t)(uint16_t)_215))))))))));
  _217 = ((uint16_t)((((uint32_t)(uint16_t)_136)) ^ (((uint32_t)(uint16_t)_214))));
  _218 = _ZNSt6vectorItSaItEEixEm(_1, 32);
  _219 = *_218;
  _220 = ((uint16_t)((((uint32_t)(uint16_t)_217)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_216)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_216)), 15))))))) & (((uint32_t)(uint16_t)_219)))));
  _221 = *((&_218[((int64_t)1)]));
  _222 = *((&_218[((int64_t)2)]));
  _223 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_216)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_220)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_220)), 15))))))) | (((uint32_t)(uint16_t)_221)))))))) ^ (((uint32_t)(uint16_t)_222))));
  _224 = *((&_218[((int64_t)3)]));
  _225 = ((uint8_t)((((uint32_t)(uint16_t)_223)) & 127));
  _226 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_223)), 7)))))))]));
  _227 = ((uint16_t)((((uint32_t)(uint16_t)_226)) ^ (((uint32_t)(uint8_t)_225))));
  _228 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_225)))]));
  _229 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_228)) ^ ((((uint32_t)(uint16_t)_227)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_224)), 9))));
  _230 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_227)) ^ ((((uint32_t)(uint16_t)_224)) & 511)))))]));
  _231 = ((uint16_t)((((uint32_t)(uint16_t)_230)) ^ (((uint32_t)(uint8_t)_229))));
  _232 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_229)))]));
  _233 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_232)) ^ ((((uint32_t)(uint16_t)_231)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_231))))))) ^ (((uint32_t)(uint16_t)_220))));
  _234 = *((&_218[((int64_t)4)]));
  _235 = ((uint16_t)((((uint32_t)(uint16_t)_220)) ^ (((uint32_t)(uint16_t)_234))));
  _236 = *((&_218[((int64_t)5)]));
  _237 = ((uint8_t)((((uint32_t)(uint16_t)_235)) & 127));
  _238 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_235)), 7)))))))]));
  _239 = ((uint16_t)((((uint32_t)(uint16_t)_238)) ^ (((uint32_t)(uint8_t)_237))));
  _240 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_237)))]));
  _241 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_240)) ^ ((((uint32_t)(uint16_t)_239)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_236)), 9))));
  _242 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_239)) ^ ((((uint32_t)(uint16_t)_236)) & 511)))))]));
  _243 = ((uint16_t)((((uint32_t)(uint16_t)_242)) ^ (((uint32_t)(uint8_t)_241))));
  _244 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_241)))]));
  _245 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_244)) ^ ((((uint32_t)(uint16_t)_243)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_243))))))) ^ (((uint32_t)(uint16_t)_233))));
  _246 = *((&_218[((int64_t)6)]));
  _247 = ((uint16_t)((((uint32_t)(uint16_t)_233)) ^ (((uint32_t)(uint16_t)_246))));
  _248 = *((&_218[((int64_t)7)]));
  _249 = ((uint8_t)((((uint32_t)(uint16_t)_247)) & 127));
  _250 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_247)), 7)))))))]));
  _251 = ((uint16_t)((((uint32_t)(uint16_t)_250)) ^ (((uint32_t)(uint8_t)_249))));
  _252 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_249)))]));
  _253 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_252)) ^ ((((uint32_t)(uint16_t)_251)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_248)), 9))));
  _254 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_251)) ^ ((((uint32_t)(uint16_t)_248)) & 511)))))]));
  _255 = ((uint16_t)((((uint32_t)(uint16_t)_254)) ^ (((uint32_t)(uint8_t)_253))));
  _256 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_253)))]));
  _257 = ((uint16_t)((((uint32_t)(uint16_t)_176)) ^ (((uint32_t)(uint16_t)_245))));
  _258 = ((uint16_t)((((uint32_t)(uint16_t)_177)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_256)) ^ ((((uint32_t)(uint16_t)_255)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_255))))))) ^ (((uint32_t)(uint16_t)_245)))))))));
  _259 = *((&_218[((int64_t)10)]));
  _260 = ((uint16_t)((((uint32_t)(uint16_t)_257)) ^ (((uint32_t)(uint16_t)_259))));
  _261 = *((&_218[((int64_t)11)]));
  _262 = ((uint8_t)((((uint32_t)(uint16_t)_260)) & 127));
  _263 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_260)), 7)))))))]));
  _264 = ((uint16_t)((((uint32_t)(uint16_t)_263)) ^ (((uint32_t)(uint8_t)_262))));
  _265 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_262)))]));
  _266 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_265)) ^ ((((uint32_t)(uint16_t)_264)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_261)), 9))));
  _267 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_264)) ^ ((((uint32_t)(uint16_t)_261)) & 511)))))]));
  _268 = ((uint16_t)((((uint32_t)(uint16_t)_267)) ^ (((uint32_t)(uint8_t)_266))));
  _269 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_266)))]));
  _270 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_269)) ^ ((((uint32_t)(uint16_t)_268)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_268))))))) ^ (((uint32_t)(uint16_t)_258))));
  _271 = *((&_218[((int64_t)12)]));
  _272 = ((uint16_t)((((uint32_t)(uint16_t)_258)) ^ (((uint32_t)(uint16_t)_271))));
  _273 = *((&_218[((int64_t)13)]));
  _274 = ((uint8_t)((((uint32_t)(uint16_t)_272)) & 127));
  _275 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_272)), 7)))))))]));
  _276 = ((uint16_t)((((uint32_t)(uint16_t)_275)) ^ (((uint32_t)(uint8_t)_274))));
  _277 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_274)))]));
  _278 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_277)) ^ ((((uint32_t)(uint16_t)_276)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_273)), 9))));
  _279 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_276)) ^ ((((uint32_t)(uint16_t)_273)) & 511)))))]));
  _280 = ((uint16_t)((((uint32_t)(uint16_t)_279)) ^ (((uint32_t)(uint8_t)_278))));
  _281 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_278)))]));
  _282 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_281)) ^ ((((uint32_t)(uint16_t)_280)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_280))))))) ^ (((uint32_t)(uint16_t)_270))));
  _283 = *((&_218[((int64_t)14)]));
  _284 = ((uint16_t)((((uint32_t)(uint16_t)_270)) ^ (((uint32_t)(uint16_t)_283))));
  _285 = *((&_218[((int64_t)15)]));
  _286 = ((uint8_t)((((uint32_t)(uint16_t)_284)) & 127));
  _287 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_284)), 7)))))))]));
  _288 = ((uint16_t)((((uint32_t)(uint16_t)_287)) ^ (((uint32_t)(uint8_t)_286))));
  _289 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_286)))]));
  _290 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_289)) ^ ((((uint32_t)(uint16_t)_288)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_285)), 9))));
  _291 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_288)) ^ ((((uint32_t)(uint16_t)_285)) & 511)))))]));
  _292 = ((uint16_t)((((uint32_t)(uint16_t)_291)) ^ (((uint32_t)(uint8_t)_290))));
  _293 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_290)))]));
  _294 = *((&_218[((int64_t)8)]));
  _295 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_293)) ^ ((((uint32_t)(uint16_t)_292)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_292))))))) ^ (((uint32_t)(uint16_t)_282))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_282)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_282)), 15))))))) & (((uint32_t)(uint16_t)_294)))));
  _296 = *((&_218[((int64_t)9)]));
  _297 = ((uint16_t)((((uint32_t)(uint16_t)_216)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_282)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_295)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_295)), 15))))))) | (((uint32_t)(uint16_t)_296))))))))));
  _298 = ((uint16_t)((((uint32_t)(uint16_t)_217)) ^ (((uint32_t)(uint16_t)_295))));
  _299 = _ZNSt6vectorItSaItEEixEm(_1, 48);
  _300 = *_299;
  _301 = ((uint16_t)((((uint32_t)(uint16_t)_298)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_297)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_297)), 15))))))) & (((uint32_t)(uint16_t)_300)))));
  _302 = *((&_299[((int64_t)1)]));
  _303 = *((&_299[((int64_t)2)]));
  _304 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_297)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_301)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_301)), 15))))))) | (((uint32_t)(uint16_t)_302)))))))) ^ (((uint32_t)(uint16_t)_303))));
  _305 = *((&_299[((int64_t)3)]));
  _306 = ((uint8_t)((((uint32_t)(uint16_t)_304)) & 127));
  _307 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_304)), 7)))))))]));
  _308 = ((uint16_t)((((uint32_t)(uint16_t)_307)) ^ (((uint32_t)(uint8_t)_306))));
  _309 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_306)))]));
  _310 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_309)) ^ ((((uint32_t)(uint16_t)_308)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_305)), 9))));
  _311 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_308)) ^ ((((uint32_t)(uint16_t)_305)) & 511)))))]));
  _312 = ((uint16_t)((((uint32_t)(uint16_t)_311)) ^ (((uint32_t)(uint8_t)_310))));
  _313 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_310)))]));
  _314 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_313)) ^ ((((uint32_t)(uint16_t)_312)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_312))))))) ^ (((uint32_t)(uint16_t)_301))));
  _315 = *((&_299[((int64_t)4)]));
  _316 = ((uint16_t)((((uint32_t)(uint16_t)_301)) ^ (((uint32_t)(uint16_t)_315))));
  _317 = *((&_299[((int64_t)5)]));
  _318 = ((uint8_t)((((uint32_t)(uint16_t)_316)) & 127));
  _319 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_316)), 7)))))))]));
  _320 = ((uint16_t)((((uint32_t)(uint16_t)_319)) ^ (((uint32_t)(uint8_t)_318))));
  _321 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_318)))]));
  _322 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_321)) ^ ((((uint32_t)(uint16_t)_320)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_317)), 9))));
  _323 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_320)) ^ ((((uint32_t)(uint16_t)_317)) & 511)))))]));
  _324 = ((uint16_t)((((uint32_t)(uint16_t)_323)) ^ (((uint32_t)(uint8_t)_322))));
  _325 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_322)))]));
  _326 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_325)) ^ ((((uint32_t)(uint16_t)_324)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_324))))))) ^ (((uint32_t)(uint16_t)_314))));
  _327 = *((&_299[((int64_t)6)]));
  _328 = ((uint16_t)((((uint32_t)(uint16_t)_314)) ^ (((uint32_t)(uint16_t)_327))));
  _329 = *((&_299[((int64_t)7)]));
  _330 = ((uint8_t)((((uint32_t)(uint16_t)_328)) & 127));
  _331 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_328)), 7)))))))]));
  _332 = ((uint16_t)((((uint32_t)(uint16_t)_331)) ^ (((uint32_t)(uint8_t)_330))));
  _333 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_330)))]));
  _334 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_333)) ^ ((((uint32_t)(uint16_t)_332)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_329)), 9))));
  _335 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_332)) ^ ((((uint32_t)(uint16_t)_329)) & 511)))))]));
  _336 = ((uint16_t)((((uint32_t)(uint16_t)_335)) ^ (((uint32_t)(uint8_t)_334))));
  _337 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_334)))]));
  _338 = ((uint16_t)((((uint32_t)(uint16_t)_257)) ^ (((uint32_t)(uint16_t)_326))));
  _339 = ((uint16_t)((((uint32_t)(uint16_t)_258)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_337)) ^ ((((uint32_t)(uint16_t)_336)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_336))))))) ^ (((uint32_t)(uint16_t)_326)))))))));
  _340 = *((&_299[((int64_t)10)]));
  _341 = ((uint16_t)((((uint32_t)(uint16_t)_338)) ^ (((uint32_t)(uint16_t)_340))));
  _342 = *((&_299[((int64_t)11)]));
  _343 = ((uint8_t)((((uint32_t)(uint16_t)_341)) & 127));
  _344 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_341)), 7)))))))]));
  _345 = ((uint16_t)((((uint32_t)(uint16_t)_344)) ^ (((uint32_t)(uint8_t)_343))));
  _346 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_343)))]));
  _347 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_346)) ^ ((((uint32_t)(uint16_t)_345)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_342)), 9))));
  _348 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_345)) ^ ((((uint32_t)(uint16_t)_342)) & 511)))))]));
  _349 = ((uint16_t)((((uint32_t)(uint16_t)_348)) ^ (((uint32_t)(uint8_t)_347))));
  _350 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_347)))]));
  _351 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_350)) ^ ((((uint32_t)(uint16_t)_349)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_349))))))) ^ (((uint32_t)(uint16_t)_339))));
  _352 = *((&_299[((int64_t)12)]));
  _353 = ((uint16_t)((((uint32_t)(uint16_t)_339)) ^ (((uint32_t)(uint16_t)_352))));
  _354 = *((&_299[((int64_t)13)]));
  _355 = ((uint8_t)((((uint32_t)(uint16_t)_353)) & 127));
  _356 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_353)), 7)))))))]));
  _357 = ((uint16_t)((((uint32_t)(uint16_t)_356)) ^ (((uint32_t)(uint8_t)_355))));
  _358 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_355)))]));
  _359 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_358)) ^ ((((uint32_t)(uint16_t)_357)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_354)), 9))));
  _360 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_357)) ^ ((((uint32_t)(uint16_t)_354)) & 511)))))]));
  _361 = ((uint16_t)((((uint32_t)(uint16_t)_360)) ^ (((uint32_t)(uint8_t)_359))));
  _362 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_359)))]));
  _363 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_362)) ^ ((((uint32_t)(uint16_t)_361)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_361))))))) ^ (((uint32_t)(uint16_t)_351))));
  _364 = *((&_299[((int64_t)14)]));
  _365 = ((uint16_t)((((uint32_t)(uint16_t)_351)) ^ (((uint32_t)(uint16_t)_364))));
  _366 = *((&_299[((int64_t)15)]));
  _367 = ((uint8_t)((((uint32_t)(uint16_t)_365)) & 127));
  _368 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_365)), 7)))))))]));
  _369 = ((uint16_t)((((uint32_t)(uint16_t)_368)) ^ (((uint32_t)(uint8_t)_367))));
  _370 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_367)))]));
  _371 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_370)) ^ ((((uint32_t)(uint16_t)_369)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_366)), 9))));
  _372 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_369)) ^ ((((uint32_t)(uint16_t)_366)) & 511)))))]));
  _373 = ((uint16_t)((((uint32_t)(uint16_t)_372)) ^ (((uint32_t)(uint8_t)_371))));
  _374 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_371)))]));
  _375 = *((&_299[((int64_t)8)]));
  _376 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_374)) ^ ((((uint32_t)(uint16_t)_373)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_373))))))) ^ (((uint32_t)(uint16_t)_363))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_363)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_363)), 15))))))) & (((uint32_t)(uint16_t)_375)))));
  _377 = *((&_299[((int64_t)9)]));
  _378 = ((uint16_t)((((uint32_t)(uint16_t)_297)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_363)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_376)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_376)), 15))))))) | (((uint32_t)(uint16_t)_377))))))))));
  _379 = ((uint16_t)((((uint32_t)(uint16_t)_298)) ^ (((uint32_t)(uint16_t)_376))));
  *_3 = (((uint8_t)(((uint32_t)(uint16_t)_378))));
  *((&_3[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_378)), 8))));
  *((&_3[((int64_t)2)])) = (((uint8_t)(((uint32_t)(uint16_t)_379))));
  *((&_3[((int64_t)3)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_379)), 8))));
  *((&_3[((int64_t)4)])) = (((uint8_t)(((uint32_t)(uint16_t)_338))));
  *((&_3[((int64_t)5)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_338)), 8))));
  *((&_3[((int64_t)6)])) = (((uint8_t)(((uint32_t)(uint16_t)_339))));
  *((&_3[((int64_t)7)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_339)), 8))));
}


uint16_t* _ZNSt6vectorItSaItEEixEm(struct l_struct_class_OC_std_KD__KD_vector* _384, uint64_t _385) {
  uint16_t* _386;

  _386 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_384))->field0))->field0));
  return ((&_386[((int64_t)_385)]));
}


void _Z9decrypt_nRSt6vectorItSaItEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector* _387, uint8_t* _388, uint8_t* _389) {
  uint8_t* _390;
  uint8_t _391;
  uint8_t _392;
  uint16_t _393;
  uint8_t* _394;
  uint8_t _395;
  uint8_t _396;
  uint16_t _397;
  uint8_t* _398;
  uint8_t _399;
  uint8_t _400;
  uint16_t _401;
  uint8_t* _402;
  uint8_t _403;
  uint8_t _404;
  uint16_t _405;
  uint16_t* _406;
  uint16_t _407;
  uint16_t _408;
  uint16_t _409;
  uint8_t _410;
  uint64_t _411;
  uint64_t _412;
  uint16_t _413;
  uint64_t _414;
  uint16_t _415;
  uint64_t _416;
  uint16_t _417;
  uint64_t _418;
  uint16_t _419;
  uint64_t _420;
  uint16_t _421;
  uint64_t _422;
  uint16_t _423;
  uint64_t _424;
  uint16_t _425;
  uint64_t _426;
  uint16_t _427;
  uint64_t _428;
  uint16_t _429;
  uint64_t _430;
  uint16_t _431;
  uint64_t _432;
  uint16_t _433;
  uint64_t _434;
  uint16_t _435;
  uint64_t _436;
  uint16_t _437;
  uint64_t _438;
  uint16_t _439;
  uint64_t _440;
  uint16_t _441;
  uint64_t _442;
  uint16_t _443;
  uint16_t _444;
  uint64_t _445;
  uint64_t _446;
  uint8_t _447;
  uint64_t _448;
  uint8_t _449;
  uint8_t _450;
  uint16_t _451;
  uint16_t _452;
  uint8_t _453;
  uint16_t _454;
  uint16_t _455;
  uint16_t _456;
  uint16_t _457;
  uint8_t _458;
  uint16_t _459;
  uint16_t _460;
  uint8_t _461;
  uint8_t _462;
  uint16_t _463;
  uint16_t _464;
  uint8_t _465;
  uint16_t _466;
  uint16_t _467;
  uint16_t _468;
  uint16_t _469;
  uint8_t _470;
  uint16_t _471;
  uint16_t _472;
  uint8_t _473;
  uint8_t _474;
  uint16_t _475;
  uint16_t _476;
  uint8_t _477;
  uint16_t _478;
  uint16_t _479;
  uint16_t _480;
  uint16_t _481;
  uint16_t _482;
  uint16_t _483;
  uint16_t _484;
  uint16_t _485;
  uint16_t _486;
  uint16_t _487;
  uint16_t _488;
  uint8_t _489;
  uint16_t _490;
  uint16_t _491;
  uint8_t _492;
  uint8_t _493;
  uint16_t _494;
  uint16_t _495;
  uint8_t _496;
  uint16_t _497;
  uint16_t _498;
  uint16_t _499;
  uint16_t _500;
  uint8_t _501;
  uint16_t _502;
  uint16_t _503;
  uint8_t _504;
  uint8_t _505;
  uint16_t _506;
  uint16_t _507;
  uint8_t _508;
  uint16_t _509;
  uint16_t _510;
  uint16_t _511;
  uint16_t _512;
  uint8_t _513;
  uint16_t _514;
  uint16_t _515;
  uint8_t _516;
  uint8_t _517;
  uint16_t _518;
  uint16_t _519;
  uint8_t _520;
  uint16_t _521;
  uint16_t _522;
  uint16_t* _523;
  uint16_t _524;
  uint16_t _525;
  uint16_t _526;
  uint8_t _527;
  uint16_t _528;
  uint16_t _529;
  uint8_t _530;
  uint8_t _531;
  uint16_t _532;
  uint16_t _533;
  uint8_t _534;
  uint16_t _535;
  uint16_t _536;
  uint16_t _537;
  uint16_t _538;
  uint8_t _539;
  uint16_t _540;
  uint16_t _541;
  uint8_t _542;
  uint8_t _543;
  uint16_t _544;
  uint16_t _545;
  uint8_t _546;
  uint16_t _547;
  uint16_t _548;
  uint16_t _549;
  uint16_t _550;
  uint8_t _551;
  uint16_t _552;
  uint16_t _553;
  uint8_t _554;
  uint8_t _555;
  uint16_t _556;
  uint16_t _557;
  uint8_t _558;
  uint16_t _559;
  uint16_t _560;
  uint16_t _561;
  uint16_t _562;
  uint16_t _563;
  uint16_t _564;
  uint16_t _565;
  uint16_t _566;
  uint16_t _567;
  uint16_t _568;
  uint16_t _569;
  uint8_t _570;
  uint16_t _571;
  uint16_t _572;
  uint8_t _573;
  uint8_t _574;
  uint16_t _575;
  uint16_t _576;
  uint8_t _577;
  uint16_t _578;
  uint16_t _579;
  uint16_t _580;
  uint16_t _581;
  uint8_t _582;
  uint16_t _583;
  uint16_t _584;
  uint8_t _585;
  uint8_t _586;
  uint16_t _587;
  uint16_t _588;
  uint8_t _589;
  uint16_t _590;
  uint16_t _591;
  uint16_t _592;
  uint16_t _593;
  uint8_t _594;
  uint16_t _595;
  uint16_t _596;
  uint8_t _597;
  uint8_t _598;
  uint16_t _599;
  uint16_t _600;
  uint8_t _601;
  uint16_t _602;
  uint16_t _603;
  uint16_t* _604;
  uint16_t _605;
  uint16_t _606;
  uint16_t _607;
  uint8_t _608;
  uint16_t _609;
  uint16_t _610;
  uint8_t _611;
  uint8_t _612;
  uint16_t _613;
  uint16_t _614;
  uint8_t _615;
  uint16_t _616;
  uint16_t _617;
  uint16_t _618;
  uint16_t _619;
  uint8_t _620;
  uint16_t _621;
  uint16_t _622;
  uint8_t _623;
  uint8_t _624;
  uint16_t _625;
  uint16_t _626;
  uint8_t _627;
  uint16_t _628;
  uint16_t _629;
  uint16_t _630;
  uint16_t _631;
  uint8_t _632;
  uint16_t _633;
  uint16_t _634;
  uint8_t _635;
  uint8_t _636;
  uint16_t _637;
  uint16_t _638;
  uint8_t _639;
  uint16_t _640;
  uint16_t _641;
  uint16_t _642;
  uint16_t _643;
  uint16_t _644;
  uint16_t _645;
  uint16_t _646;
  uint16_t _647;
  uint16_t _648;
  uint16_t _649;
  uint16_t _650;
  uint8_t _651;
  uint16_t _652;
  uint16_t _653;
  uint8_t _654;
  uint8_t _655;
  uint16_t _656;
  uint16_t _657;
  uint8_t _658;
  uint16_t _659;
  uint16_t _660;
  uint16_t _661;
  uint16_t _662;
  uint8_t _663;
  uint16_t _664;
  uint16_t _665;
  uint8_t _666;
  uint8_t _667;
  uint16_t _668;
  uint16_t _669;
  uint8_t _670;
  uint16_t _671;
  uint16_t _672;
  uint16_t _673;
  uint16_t _674;
  uint8_t _675;
  uint16_t _676;
  uint16_t _677;
  uint8_t _678;
  uint8_t _679;
  uint16_t _680;
  uint16_t _681;
  uint8_t _682;
  uint16_t _683;
  uint16_t _684;
  uint16_t* _685;
  uint16_t _686;
  uint16_t _687;
  uint16_t _688;
  uint8_t _689;
  uint16_t _690;
  uint16_t _691;
  uint8_t _692;
  uint8_t _693;
  uint16_t _694;
  uint16_t _695;
  uint8_t _696;
  uint16_t _697;
  uint16_t _698;
  uint16_t _699;
  uint16_t _700;
  uint8_t _701;
  uint16_t _702;
  uint16_t _703;
  uint8_t _704;
  uint8_t _705;
  uint16_t _706;
  uint16_t _707;
  uint8_t _708;
  uint16_t _709;
  uint16_t _710;
  uint16_t _711;
  uint16_t _712;
  uint8_t _713;
  uint16_t _714;
  uint16_t _715;
  uint8_t _716;
  uint8_t _717;
  uint16_t _718;
  uint16_t _719;
  uint8_t _720;
  uint16_t _721;
  uint16_t _722;
  uint16_t _723;
  uint16_t _724;
  uint16_t _725;
  uint16_t _726;
  uint16_t _727;
  uint16_t _728;
  uint16_t _729;
  uint16_t _730;
  uint16_t _731;
  uint8_t _732;
  uint16_t _733;
  uint16_t _734;
  uint8_t _735;
  uint8_t _736;
  uint16_t _737;
  uint16_t _738;
  uint8_t _739;
  uint16_t _740;
  uint16_t _741;
  uint16_t _742;
  uint16_t _743;
  uint8_t _744;
  uint16_t _745;
  uint16_t _746;
  uint8_t _747;
  uint8_t _748;
  uint16_t _749;
  uint16_t _750;
  uint8_t _751;
  uint16_t _752;
  uint16_t _753;
  uint16_t _754;
  uint16_t _755;
  uint8_t _756;
  uint16_t _757;
  uint16_t _758;
  uint8_t _759;
  uint8_t _760;
  uint16_t _761;
  uint16_t _762;
  uint8_t _763;
  uint16_t _764;
  uint16_t _765;

  _390 = (&_388[((int64_t)(llvm_mul_u64(0, 2)))]);
  goto _766;

_766:
  _391 = *_390;
  _392 = *((&_390[((int64_t)1)]));
  _393 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_391)))))) << 8) | (((uint32_t)(uint8_t)_392))));
  _394 = (&_388[((int64_t)2)]);
  goto _767;

_767:
  _395 = *_394;
  _396 = *((&_394[((int64_t)1)]));
  _397 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_395)))))) << 8) | (((uint32_t)(uint8_t)_396))));
  _398 = (&_388[((int64_t)4)]);
  goto _768;

_768:
  _399 = *_398;
  _400 = *((&_398[((int64_t)1)]));
  _401 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_399)))))) << 8) | (((uint32_t)(uint8_t)_400))));
  _402 = (&_388[((int64_t)6)]);
  goto llvm_cbe__2e_preheader20;

llvm_cbe__2e_preheader20:
  _403 = *_402;
  _404 = *((&_402[((int64_t)1)]));
  _405 = ((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_403)))))) << 8) | (((uint32_t)(uint8_t)_404))));
  goto _769;

_769:
  _406 = _ZNSt6vectorItSaItEEixEm(_387, 48);
  _407 = *((&_406[((int64_t)10)]));
  _408 = ((uint16_t)((((uint32_t)(uint16_t)_401)) ^ (((uint32_t)(uint16_t)_407))));
  _409 = *((&_406[((int64_t)11)]));
  _410 = ((uint8_t)((((uint32_t)(uint16_t)_408)) & 127));
  _411 = ((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_408)), 7)))));
  _412 = llvm_srem_u64(_411, 32);
  _413 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_412)]));
  _414 = llvm_add_u64(_412, 32);
  _415 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_414)]));
  _416 = llvm_add_u64(_414, 32);
  _417 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_416)]));
  _418 = llvm_add_u64(_416, 32);
  _419 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_418)]));
  _420 = llvm_add_u64(_418, 32);
  _421 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_420)]));
  _422 = llvm_add_u64(_420, 32);
  _423 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_422)]));
  _424 = llvm_add_u64(_422, 32);
  _425 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_424)]));
  _426 = llvm_add_u64(_424, 32);
  _427 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_426)]));
  _428 = llvm_add_u64(_426, 32);
  _429 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_428)]));
  _430 = llvm_add_u64(_428, 32);
  _431 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_430)]));
  _432 = llvm_add_u64(_430, 32);
  _433 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_432)]));
  _434 = llvm_add_u64(_432, 32);
  _435 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_434)]));
  _436 = llvm_add_u64(_434, 32);
  _437 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_436)]));
  _438 = llvm_add_u64(_436, 32);
  _439 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_438)]));
  _440 = llvm_add_u64(_438, 32);
  _441 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_440)]));
  _442 = llvm_add_u64(_440, 32);
  _443 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)_442)]));
  _444 = ((uint16_t)((((uint32_t)(uint16_t)(llvm_select_u16((((_411 == _442)&1)), _443, (llvm_select_u16((((_411 == _440)&1)), _441, (llvm_select_u16((((_411 == _438)&1)), _439, (llvm_select_u16((((_411 == _436)&1)), _437, (llvm_select_u16((((_411 == _434)&1)), _435, (llvm_select_u16((((_411 == _432)&1)), _433, (llvm_select_u16((((_411 == _430)&1)), _431, (llvm_select_u16((((_411 == _428)&1)), _429, (llvm_select_u16((((_411 == _426)&1)), _427, (llvm_select_u16((((_411 == _424)&1)), _425, (llvm_select_u16((((_411 == _422)&1)), _423, (llvm_select_u16((((_411 == _420)&1)), _421, (llvm_select_u16((((_411 == _418)&1)), _419, (llvm_select_u16((((_411 == _416)&1)), _417, (llvm_select_u16((((_411 == _414)&1)), _415, (llvm_select_u16((((_411 == _412)&1)), _413, 0)))))))))))))))))))))))))))))))))) ^ (((uint32_t)(uint8_t)_410))));
  _445 = ((uint64_t)(uint8_t)_410);
  _446 = llvm_srem_u64(_445, 64);
  _447 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)_446)]));
  _448 = llvm_add_u64(_446, 64);
  _449 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)_448)]));
  _450 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)(llvm_select_u16((((_445 == _448)&1)), (((uint16_t)(uint8_t)_449)), (llvm_select_u16((((_445 == _446)&1)), (((uint16_t)(uint8_t)_447)), 0)))))))) ^ ((((uint32_t)(uint16_t)_444)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_409)), 9))));
  _451 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_444)) ^ ((((uint32_t)(uint16_t)_409)) & 511)))))]));
  _452 = ((uint16_t)((((uint32_t)(uint16_t)_451)) ^ (((uint32_t)(uint8_t)_450))));
  _453 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_450)))]));
  _454 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_453)) ^ ((((uint32_t)(uint16_t)_452)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_452))))))) ^ (((uint32_t)(uint16_t)_405))));
  _455 = *((&_406[((int64_t)12)]));
  _456 = ((uint16_t)((((uint32_t)(uint16_t)_405)) ^ (((uint32_t)(uint16_t)_455))));
  _457 = *((&_406[((int64_t)13)]));
  _458 = ((uint8_t)((((uint32_t)(uint16_t)_456)) & 127));
  _459 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_456)), 7)))))))]));
  _460 = ((uint16_t)((((uint32_t)(uint16_t)_459)) ^ (((uint32_t)(uint8_t)_458))));
  _461 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_458)))]));
  _462 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_461)) ^ ((((uint32_t)(uint16_t)_460)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_457)), 9))));
  _463 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_460)) ^ ((((uint32_t)(uint16_t)_457)) & 511)))))]));
  _464 = ((uint16_t)((((uint32_t)(uint16_t)_463)) ^ (((uint32_t)(uint8_t)_462))));
  _465 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_462)))]));
  _466 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_465)) ^ ((((uint32_t)(uint16_t)_464)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_464))))))) ^ (((uint32_t)(uint16_t)_454))));
  _467 = *((&_406[((int64_t)14)]));
  _468 = ((uint16_t)((((uint32_t)(uint16_t)_454)) ^ (((uint32_t)(uint16_t)_467))));
  _469 = *((&_406[((int64_t)15)]));
  _470 = ((uint8_t)((((uint32_t)(uint16_t)_468)) & 127));
  _471 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_468)), 7)))))))]));
  _472 = ((uint16_t)((((uint32_t)(uint16_t)_471)) ^ (((uint32_t)(uint8_t)_470))));
  _473 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_470)))]));
  _474 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_473)) ^ ((((uint32_t)(uint16_t)_472)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_469)), 9))));
  _475 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_472)) ^ ((((uint32_t)(uint16_t)_469)) & 511)))))]));
  _476 = ((uint16_t)((((uint32_t)(uint16_t)_475)) ^ (((uint32_t)(uint8_t)_474))));
  _477 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_474)))]));
  _478 = *((&_406[((int64_t)8)]));
  _479 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_477)) ^ ((((uint32_t)(uint16_t)_476)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_476))))))) ^ (((uint32_t)(uint16_t)_466))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_466)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_466)), 15))))))) & (((uint32_t)(uint16_t)_478)))));
  _480 = *((&_406[((int64_t)9)]));
  _481 = ((uint16_t)((((uint32_t)(uint16_t)_393)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_466)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_479)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_479)), 15))))))) | (((uint32_t)(uint16_t)_480))))))))));
  _482 = ((uint16_t)((((uint32_t)(uint16_t)_397)) ^ (((uint32_t)(uint16_t)_479))));
  _483 = *_406;
  _484 = ((uint16_t)((((uint32_t)(uint16_t)_482)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_481)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_481)), 15))))))) & (((uint32_t)(uint16_t)_483)))));
  _485 = *((&_406[((int64_t)1)]));
  _486 = *((&_406[((int64_t)2)]));
  _487 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_481)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_484)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_484)), 15))))))) | (((uint32_t)(uint16_t)_485)))))))) ^ (((uint32_t)(uint16_t)_486))));
  _488 = *((&_406[((int64_t)3)]));
  _489 = ((uint8_t)((((uint32_t)(uint16_t)_487)) & 127));
  _490 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_487)), 7)))))))]));
  _491 = ((uint16_t)((((uint32_t)(uint16_t)_490)) ^ (((uint32_t)(uint8_t)_489))));
  _492 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_489)))]));
  _493 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_492)) ^ ((((uint32_t)(uint16_t)_491)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_488)), 9))));
  _494 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_491)) ^ ((((uint32_t)(uint16_t)_488)) & 511)))))]));
  _495 = ((uint16_t)((((uint32_t)(uint16_t)_494)) ^ (((uint32_t)(uint8_t)_493))));
  _496 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_493)))]));
  _497 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_496)) ^ ((((uint32_t)(uint16_t)_495)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_495))))))) ^ (((uint32_t)(uint16_t)_484))));
  _498 = *((&_406[((int64_t)4)]));
  _499 = ((uint16_t)((((uint32_t)(uint16_t)_484)) ^ (((uint32_t)(uint16_t)_498))));
  _500 = *((&_406[((int64_t)5)]));
  _501 = ((uint8_t)((((uint32_t)(uint16_t)_499)) & 127));
  _502 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_499)), 7)))))))]));
  _503 = ((uint16_t)((((uint32_t)(uint16_t)_502)) ^ (((uint32_t)(uint8_t)_501))));
  _504 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_501)))]));
  _505 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_504)) ^ ((((uint32_t)(uint16_t)_503)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_500)), 9))));
  _506 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_503)) ^ ((((uint32_t)(uint16_t)_500)) & 511)))))]));
  _507 = ((uint16_t)((((uint32_t)(uint16_t)_506)) ^ (((uint32_t)(uint8_t)_505))));
  _508 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_505)))]));
  _509 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_508)) ^ ((((uint32_t)(uint16_t)_507)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_507))))))) ^ (((uint32_t)(uint16_t)_497))));
  _510 = *((&_406[((int64_t)6)]));
  _511 = ((uint16_t)((((uint32_t)(uint16_t)_497)) ^ (((uint32_t)(uint16_t)_510))));
  _512 = *((&_406[((int64_t)7)]));
  _513 = ((uint8_t)((((uint32_t)(uint16_t)_511)) & 127));
  _514 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_511)), 7)))))))]));
  _515 = ((uint16_t)((((uint32_t)(uint16_t)_514)) ^ (((uint32_t)(uint8_t)_513))));
  _516 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_513)))]));
  _517 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_516)) ^ ((((uint32_t)(uint16_t)_515)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_512)), 9))));
  _518 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_515)) ^ ((((uint32_t)(uint16_t)_512)) & 511)))))]));
  _519 = ((uint16_t)((((uint32_t)(uint16_t)_518)) ^ (((uint32_t)(uint8_t)_517))));
  _520 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_517)))]));
  _521 = ((uint16_t)((((uint32_t)(uint16_t)_401)) ^ (((uint32_t)(uint16_t)_509))));
  _522 = ((uint16_t)((((uint32_t)(uint16_t)_405)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_520)) ^ ((((uint32_t)(uint16_t)_519)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_519))))))) ^ (((uint32_t)(uint16_t)_509)))))))));
  _523 = _ZNSt6vectorItSaItEEixEm(_387, 32);
  _524 = *((&_523[((int64_t)10)]));
  _525 = ((uint16_t)((((uint32_t)(uint16_t)_521)) ^ (((uint32_t)(uint16_t)_524))));
  _526 = *((&_523[((int64_t)11)]));
  _527 = ((uint8_t)((((uint32_t)(uint16_t)_525)) & 127));
  _528 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_525)), 7)))))))]));
  _529 = ((uint16_t)((((uint32_t)(uint16_t)_528)) ^ (((uint32_t)(uint8_t)_527))));
  _530 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_527)))]));
  _531 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_530)) ^ ((((uint32_t)(uint16_t)_529)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_526)), 9))));
  _532 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_529)) ^ ((((uint32_t)(uint16_t)_526)) & 511)))))]));
  _533 = ((uint16_t)((((uint32_t)(uint16_t)_532)) ^ (((uint32_t)(uint8_t)_531))));
  _534 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_531)))]));
  _535 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_534)) ^ ((((uint32_t)(uint16_t)_533)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_533))))))) ^ (((uint32_t)(uint16_t)_522))));
  _536 = *((&_523[((int64_t)12)]));
  _537 = ((uint16_t)((((uint32_t)(uint16_t)_522)) ^ (((uint32_t)(uint16_t)_536))));
  _538 = *((&_523[((int64_t)13)]));
  _539 = ((uint8_t)((((uint32_t)(uint16_t)_537)) & 127));
  _540 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_537)), 7)))))))]));
  _541 = ((uint16_t)((((uint32_t)(uint16_t)_540)) ^ (((uint32_t)(uint8_t)_539))));
  _542 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_539)))]));
  _543 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_542)) ^ ((((uint32_t)(uint16_t)_541)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_538)), 9))));
  _544 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_541)) ^ ((((uint32_t)(uint16_t)_538)) & 511)))))]));
  _545 = ((uint16_t)((((uint32_t)(uint16_t)_544)) ^ (((uint32_t)(uint8_t)_543))));
  _546 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_543)))]));
  _547 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_546)) ^ ((((uint32_t)(uint16_t)_545)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_545))))))) ^ (((uint32_t)(uint16_t)_535))));
  _548 = *((&_523[((int64_t)14)]));
  _549 = ((uint16_t)((((uint32_t)(uint16_t)_535)) ^ (((uint32_t)(uint16_t)_548))));
  _550 = *((&_523[((int64_t)15)]));
  _551 = ((uint8_t)((((uint32_t)(uint16_t)_549)) & 127));
  _552 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_549)), 7)))))))]));
  _553 = ((uint16_t)((((uint32_t)(uint16_t)_552)) ^ (((uint32_t)(uint8_t)_551))));
  _554 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_551)))]));
  _555 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_554)) ^ ((((uint32_t)(uint16_t)_553)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_550)), 9))));
  _556 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_553)) ^ ((((uint32_t)(uint16_t)_550)) & 511)))))]));
  _557 = ((uint16_t)((((uint32_t)(uint16_t)_556)) ^ (((uint32_t)(uint8_t)_555))));
  _558 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_555)))]));
  _559 = *((&_523[((int64_t)8)]));
  _560 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_558)) ^ ((((uint32_t)(uint16_t)_557)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_557))))))) ^ (((uint32_t)(uint16_t)_547))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_547)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_547)), 15))))))) & (((uint32_t)(uint16_t)_559)))));
  _561 = *((&_523[((int64_t)9)]));
  _562 = ((uint16_t)((((uint32_t)(uint16_t)_481)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_547)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_560)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_560)), 15))))))) | (((uint32_t)(uint16_t)_561))))))))));
  _563 = ((uint16_t)((((uint32_t)(uint16_t)_482)) ^ (((uint32_t)(uint16_t)_560))));
  _564 = *_523;
  _565 = ((uint16_t)((((uint32_t)(uint16_t)_563)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_562)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_562)), 15))))))) & (((uint32_t)(uint16_t)_564)))));
  _566 = *((&_523[((int64_t)1)]));
  _567 = *((&_523[((int64_t)2)]));
  _568 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_562)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_565)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_565)), 15))))))) | (((uint32_t)(uint16_t)_566)))))))) ^ (((uint32_t)(uint16_t)_567))));
  _569 = *((&_523[((int64_t)3)]));
  _570 = ((uint8_t)((((uint32_t)(uint16_t)_568)) & 127));
  _571 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_568)), 7)))))))]));
  _572 = ((uint16_t)((((uint32_t)(uint16_t)_571)) ^ (((uint32_t)(uint8_t)_570))));
  _573 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_570)))]));
  _574 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_573)) ^ ((((uint32_t)(uint16_t)_572)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_569)), 9))));
  _575 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_572)) ^ ((((uint32_t)(uint16_t)_569)) & 511)))))]));
  _576 = ((uint16_t)((((uint32_t)(uint16_t)_575)) ^ (((uint32_t)(uint8_t)_574))));
  _577 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_574)))]));
  _578 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_577)) ^ ((((uint32_t)(uint16_t)_576)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_576))))))) ^ (((uint32_t)(uint16_t)_565))));
  _579 = *((&_523[((int64_t)4)]));
  _580 = ((uint16_t)((((uint32_t)(uint16_t)_565)) ^ (((uint32_t)(uint16_t)_579))));
  _581 = *((&_523[((int64_t)5)]));
  _582 = ((uint8_t)((((uint32_t)(uint16_t)_580)) & 127));
  _583 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_580)), 7)))))))]));
  _584 = ((uint16_t)((((uint32_t)(uint16_t)_583)) ^ (((uint32_t)(uint8_t)_582))));
  _585 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_582)))]));
  _586 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_585)) ^ ((((uint32_t)(uint16_t)_584)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_581)), 9))));
  _587 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_584)) ^ ((((uint32_t)(uint16_t)_581)) & 511)))))]));
  _588 = ((uint16_t)((((uint32_t)(uint16_t)_587)) ^ (((uint32_t)(uint8_t)_586))));
  _589 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_586)))]));
  _590 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_589)) ^ ((((uint32_t)(uint16_t)_588)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_588))))))) ^ (((uint32_t)(uint16_t)_578))));
  _591 = *((&_523[((int64_t)6)]));
  _592 = ((uint16_t)((((uint32_t)(uint16_t)_578)) ^ (((uint32_t)(uint16_t)_591))));
  _593 = *((&_523[((int64_t)7)]));
  _594 = ((uint8_t)((((uint32_t)(uint16_t)_592)) & 127));
  _595 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_592)), 7)))))))]));
  _596 = ((uint16_t)((((uint32_t)(uint16_t)_595)) ^ (((uint32_t)(uint8_t)_594))));
  _597 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_594)))]));
  _598 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_597)) ^ ((((uint32_t)(uint16_t)_596)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_593)), 9))));
  _599 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_596)) ^ ((((uint32_t)(uint16_t)_593)) & 511)))))]));
  _600 = ((uint16_t)((((uint32_t)(uint16_t)_599)) ^ (((uint32_t)(uint8_t)_598))));
  _601 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_598)))]));
  _602 = ((uint16_t)((((uint32_t)(uint16_t)_521)) ^ (((uint32_t)(uint16_t)_590))));
  _603 = ((uint16_t)((((uint32_t)(uint16_t)_522)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_601)) ^ ((((uint32_t)(uint16_t)_600)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_600))))))) ^ (((uint32_t)(uint16_t)_590)))))))));
  _604 = _ZNSt6vectorItSaItEEixEm(_387, 16);
  _605 = *((&_604[((int64_t)10)]));
  _606 = ((uint16_t)((((uint32_t)(uint16_t)_602)) ^ (((uint32_t)(uint16_t)_605))));
  _607 = *((&_604[((int64_t)11)]));
  _608 = ((uint8_t)((((uint32_t)(uint16_t)_606)) & 127));
  _609 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_606)), 7)))))))]));
  _610 = ((uint16_t)((((uint32_t)(uint16_t)_609)) ^ (((uint32_t)(uint8_t)_608))));
  _611 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_608)))]));
  _612 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_611)) ^ ((((uint32_t)(uint16_t)_610)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_607)), 9))));
  _613 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_610)) ^ ((((uint32_t)(uint16_t)_607)) & 511)))))]));
  _614 = ((uint16_t)((((uint32_t)(uint16_t)_613)) ^ (((uint32_t)(uint8_t)_612))));
  _615 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_612)))]));
  _616 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_615)) ^ ((((uint32_t)(uint16_t)_614)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_614))))))) ^ (((uint32_t)(uint16_t)_603))));
  _617 = *((&_604[((int64_t)12)]));
  _618 = ((uint16_t)((((uint32_t)(uint16_t)_603)) ^ (((uint32_t)(uint16_t)_617))));
  _619 = *((&_604[((int64_t)13)]));
  _620 = ((uint8_t)((((uint32_t)(uint16_t)_618)) & 127));
  _621 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_618)), 7)))))))]));
  _622 = ((uint16_t)((((uint32_t)(uint16_t)_621)) ^ (((uint32_t)(uint8_t)_620))));
  _623 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_620)))]));
  _624 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_623)) ^ ((((uint32_t)(uint16_t)_622)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_619)), 9))));
  _625 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_622)) ^ ((((uint32_t)(uint16_t)_619)) & 511)))))]));
  _626 = ((uint16_t)((((uint32_t)(uint16_t)_625)) ^ (((uint32_t)(uint8_t)_624))));
  _627 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_624)))]));
  _628 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_627)) ^ ((((uint32_t)(uint16_t)_626)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_626))))))) ^ (((uint32_t)(uint16_t)_616))));
  _629 = *((&_604[((int64_t)14)]));
  _630 = ((uint16_t)((((uint32_t)(uint16_t)_616)) ^ (((uint32_t)(uint16_t)_629))));
  _631 = *((&_604[((int64_t)15)]));
  _632 = ((uint8_t)((((uint32_t)(uint16_t)_630)) & 127));
  _633 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_630)), 7)))))))]));
  _634 = ((uint16_t)((((uint32_t)(uint16_t)_633)) ^ (((uint32_t)(uint8_t)_632))));
  _635 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_632)))]));
  _636 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_635)) ^ ((((uint32_t)(uint16_t)_634)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_631)), 9))));
  _637 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_634)) ^ ((((uint32_t)(uint16_t)_631)) & 511)))))]));
  _638 = ((uint16_t)((((uint32_t)(uint16_t)_637)) ^ (((uint32_t)(uint8_t)_636))));
  _639 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_636)))]));
  _640 = *((&_604[((int64_t)8)]));
  _641 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_639)) ^ ((((uint32_t)(uint16_t)_638)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_638))))))) ^ (((uint32_t)(uint16_t)_628))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_628)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_628)), 15))))))) & (((uint32_t)(uint16_t)_640)))));
  _642 = *((&_604[((int64_t)9)]));
  _643 = ((uint16_t)((((uint32_t)(uint16_t)_562)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_628)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_641)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_641)), 15))))))) | (((uint32_t)(uint16_t)_642))))))))));
  _644 = ((uint16_t)((((uint32_t)(uint16_t)_563)) ^ (((uint32_t)(uint16_t)_641))));
  _645 = *_604;
  _646 = ((uint16_t)((((uint32_t)(uint16_t)_644)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_643)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_643)), 15))))))) & (((uint32_t)(uint16_t)_645)))));
  _647 = *((&_604[((int64_t)1)]));
  _648 = *((&_604[((int64_t)2)]));
  _649 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_643)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_646)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_646)), 15))))))) | (((uint32_t)(uint16_t)_647)))))))) ^ (((uint32_t)(uint16_t)_648))));
  _650 = *((&_604[((int64_t)3)]));
  _651 = ((uint8_t)((((uint32_t)(uint16_t)_649)) & 127));
  _652 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_649)), 7)))))))]));
  _653 = ((uint16_t)((((uint32_t)(uint16_t)_652)) ^ (((uint32_t)(uint8_t)_651))));
  _654 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_651)))]));
  _655 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_654)) ^ ((((uint32_t)(uint16_t)_653)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_650)), 9))));
  _656 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_653)) ^ ((((uint32_t)(uint16_t)_650)) & 511)))))]));
  _657 = ((uint16_t)((((uint32_t)(uint16_t)_656)) ^ (((uint32_t)(uint8_t)_655))));
  _658 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_655)))]));
  _659 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_658)) ^ ((((uint32_t)(uint16_t)_657)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_657))))))) ^ (((uint32_t)(uint16_t)_646))));
  _660 = *((&_604[((int64_t)4)]));
  _661 = ((uint16_t)((((uint32_t)(uint16_t)_646)) ^ (((uint32_t)(uint16_t)_660))));
  _662 = *((&_604[((int64_t)5)]));
  _663 = ((uint8_t)((((uint32_t)(uint16_t)_661)) & 127));
  _664 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_661)), 7)))))))]));
  _665 = ((uint16_t)((((uint32_t)(uint16_t)_664)) ^ (((uint32_t)(uint8_t)_663))));
  _666 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_663)))]));
  _667 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_666)) ^ ((((uint32_t)(uint16_t)_665)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_662)), 9))));
  _668 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_665)) ^ ((((uint32_t)(uint16_t)_662)) & 511)))))]));
  _669 = ((uint16_t)((((uint32_t)(uint16_t)_668)) ^ (((uint32_t)(uint8_t)_667))));
  _670 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_667)))]));
  _671 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_670)) ^ ((((uint32_t)(uint16_t)_669)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_669))))))) ^ (((uint32_t)(uint16_t)_659))));
  _672 = *((&_604[((int64_t)6)]));
  _673 = ((uint16_t)((((uint32_t)(uint16_t)_659)) ^ (((uint32_t)(uint16_t)_672))));
  _674 = *((&_604[((int64_t)7)]));
  _675 = ((uint8_t)((((uint32_t)(uint16_t)_673)) & 127));
  _676 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_673)), 7)))))))]));
  _677 = ((uint16_t)((((uint32_t)(uint16_t)_676)) ^ (((uint32_t)(uint8_t)_675))));
  _678 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_675)))]));
  _679 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_678)) ^ ((((uint32_t)(uint16_t)_677)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_674)), 9))));
  _680 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_677)) ^ ((((uint32_t)(uint16_t)_674)) & 511)))))]));
  _681 = ((uint16_t)((((uint32_t)(uint16_t)_680)) ^ (((uint32_t)(uint8_t)_679))));
  _682 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_679)))]));
  _683 = ((uint16_t)((((uint32_t)(uint16_t)_602)) ^ (((uint32_t)(uint16_t)_671))));
  _684 = ((uint16_t)((((uint32_t)(uint16_t)_603)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_682)) ^ ((((uint32_t)(uint16_t)_681)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_681))))))) ^ (((uint32_t)(uint16_t)_671)))))))));
  _685 = _ZNSt6vectorItSaItEEixEm(_387, 0);
  _686 = *((&_685[((int64_t)10)]));
  _687 = ((uint16_t)((((uint32_t)(uint16_t)_683)) ^ (((uint32_t)(uint16_t)_686))));
  _688 = *((&_685[((int64_t)11)]));
  _689 = ((uint8_t)((((uint32_t)(uint16_t)_687)) & 127));
  _690 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_687)), 7)))))))]));
  _691 = ((uint16_t)((((uint32_t)(uint16_t)_690)) ^ (((uint32_t)(uint8_t)_689))));
  _692 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_689)))]));
  _693 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_692)) ^ ((((uint32_t)(uint16_t)_691)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_688)), 9))));
  _694 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_691)) ^ ((((uint32_t)(uint16_t)_688)) & 511)))))]));
  _695 = ((uint16_t)((((uint32_t)(uint16_t)_694)) ^ (((uint32_t)(uint8_t)_693))));
  _696 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_693)))]));
  _697 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_696)) ^ ((((uint32_t)(uint16_t)_695)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_695))))))) ^ (((uint32_t)(uint16_t)_684))));
  _698 = *((&_685[((int64_t)12)]));
  _699 = ((uint16_t)((((uint32_t)(uint16_t)_684)) ^ (((uint32_t)(uint16_t)_698))));
  _700 = *((&_685[((int64_t)13)]));
  _701 = ((uint8_t)((((uint32_t)(uint16_t)_699)) & 127));
  _702 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_699)), 7)))))))]));
  _703 = ((uint16_t)((((uint32_t)(uint16_t)_702)) ^ (((uint32_t)(uint8_t)_701))));
  _704 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_701)))]));
  _705 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_704)) ^ ((((uint32_t)(uint16_t)_703)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_700)), 9))));
  _706 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_703)) ^ ((((uint32_t)(uint16_t)_700)) & 511)))))]));
  _707 = ((uint16_t)((((uint32_t)(uint16_t)_706)) ^ (((uint32_t)(uint8_t)_705))));
  _708 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_705)))]));
  _709 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_708)) ^ ((((uint32_t)(uint16_t)_707)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_707))))))) ^ (((uint32_t)(uint16_t)_697))));
  _710 = *((&_685[((int64_t)14)]));
  _711 = ((uint16_t)((((uint32_t)(uint16_t)_697)) ^ (((uint32_t)(uint16_t)_710))));
  _712 = *((&_685[((int64_t)15)]));
  _713 = ((uint8_t)((((uint32_t)(uint16_t)_711)) & 127));
  _714 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_711)), 7)))))))]));
  _715 = ((uint16_t)((((uint32_t)(uint16_t)_714)) ^ (((uint32_t)(uint8_t)_713))));
  _716 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_713)))]));
  _717 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_716)) ^ ((((uint32_t)(uint16_t)_715)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_712)), 9))));
  _718 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_715)) ^ ((((uint32_t)(uint16_t)_712)) & 511)))))]));
  _719 = ((uint16_t)((((uint32_t)(uint16_t)_718)) ^ (((uint32_t)(uint8_t)_717))));
  _720 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_717)))]));
  _721 = *((&_685[((int64_t)8)]));
  _722 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_720)) ^ ((((uint32_t)(uint16_t)_719)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_719))))))) ^ (((uint32_t)(uint16_t)_709))))))) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_709)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_709)), 15))))))) & (((uint32_t)(uint16_t)_721)))));
  _723 = *((&_685[((int64_t)9)]));
  _724 = ((uint16_t)((((uint32_t)(uint16_t)_643)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_709)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_722)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_722)), 15))))))) | (((uint32_t)(uint16_t)_723))))))))));
  _725 = ((uint16_t)((((uint32_t)(uint16_t)_644)) ^ (((uint32_t)(uint16_t)_722))));
  _726 = *_685;
  _727 = ((uint16_t)((((uint32_t)(uint16_t)_725)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_724)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_724)), 15))))))) & (((uint32_t)(uint16_t)_726)))));
  _728 = *((&_685[((int64_t)1)]));
  _729 = *((&_685[((int64_t)2)]));
  _730 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)_724)) ^ ((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint16_t)_727)) << 1) | (llvm_ashr_u32((((uint32_t)(uint16_t)_727)), 15))))))) | (((uint32_t)(uint16_t)_728)))))))) ^ (((uint32_t)(uint16_t)_729))));
  _731 = *((&_685[((int64_t)3)]));
  _732 = ((uint8_t)((((uint32_t)(uint16_t)_730)) & 127));
  _733 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_730)), 7)))))))]));
  _734 = ((uint16_t)((((uint32_t)(uint16_t)_733)) ^ (((uint32_t)(uint8_t)_732))));
  _735 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_732)))]));
  _736 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_735)) ^ ((((uint32_t)(uint16_t)_734)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_731)), 9))));
  _737 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_734)) ^ ((((uint32_t)(uint16_t)_731)) & 511)))))]));
  _738 = ((uint16_t)((((uint32_t)(uint16_t)_737)) ^ (((uint32_t)(uint8_t)_736))));
  _739 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_736)))]));
  _740 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_739)) ^ ((((uint32_t)(uint16_t)_738)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_738))))))) ^ (((uint32_t)(uint16_t)_727))));
  _741 = *((&_685[((int64_t)4)]));
  _742 = ((uint16_t)((((uint32_t)(uint16_t)_727)) ^ (((uint32_t)(uint16_t)_741))));
  _743 = *((&_685[((int64_t)5)]));
  _744 = ((uint8_t)((((uint32_t)(uint16_t)_742)) & 127));
  _745 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_742)), 7)))))))]));
  _746 = ((uint16_t)((((uint32_t)(uint16_t)_745)) ^ (((uint32_t)(uint8_t)_744))));
  _747 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_744)))]));
  _748 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_747)) ^ ((((uint32_t)(uint16_t)_746)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_743)), 9))));
  _749 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_746)) ^ ((((uint32_t)(uint16_t)_743)) & 511)))))]));
  _750 = ((uint16_t)((((uint32_t)(uint16_t)_749)) ^ (((uint32_t)(uint8_t)_748))));
  _751 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_748)))]));
  _752 = ((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_751)) ^ ((((uint32_t)(uint16_t)_750)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_750))))))) ^ (((uint32_t)(uint16_t)_740))));
  _753 = *((&_685[((int64_t)6)]));
  _754 = ((uint16_t)((((uint32_t)(uint16_t)_740)) ^ (((uint32_t)(uint16_t)_753))));
  _755 = *((&_685[((int64_t)7)]));
  _756 = ((uint8_t)((((uint32_t)(uint16_t)_754)) & 127));
  _757 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((uint64_t)(uint16_t)(((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_754)), 7)))))))]));
  _758 = ((uint16_t)((((uint32_t)(uint16_t)_757)) ^ (((uint32_t)(uint8_t)_756))));
  _759 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_756)))]));
  _760 = ((uint8_t)((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_759)) ^ ((((uint32_t)(uint16_t)_758)) & 127)))))) ^ (llvm_ashr_u32((((uint32_t)(uint16_t)_755)), 9))));
  _761 = *((&_ZL14KASUMI_SBOX_S9.array[((int64_t)(((int64_t)(int32_t)((((uint32_t)(uint16_t)_758)) ^ ((((uint32_t)(uint16_t)_755)) & 511)))))]));
  _762 = ((uint16_t)((((uint32_t)(uint16_t)_761)) ^ (((uint32_t)(uint8_t)_760))));
  _763 = *((&_ZL14KASUMI_SBOX_S7.array[((int64_t)(((uint64_t)(uint8_t)_760)))]));
  _764 = ((uint16_t)((((uint32_t)(uint16_t)_683)) ^ (((uint32_t)(uint16_t)_752))));
  _765 = ((uint16_t)((((uint32_t)(uint16_t)_684)) ^ (((uint32_t)(uint16_t)(((uint16_t)((((uint32_t)(uint16_t)(((uint16_t)(((((uint32_t)(uint8_t)(((uint8_t)((((uint32_t)(uint8_t)_763)) ^ ((((uint32_t)(uint16_t)_762)) & 127)))))) << 9) | (((uint32_t)(uint16_t)_762))))))) ^ (((uint32_t)(uint16_t)_752)))))))));
  *_389 = (((uint8_t)(((uint32_t)(uint16_t)_724))));
  *((&_389[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_724)), 8))));
  *((&_389[((int64_t)2)])) = (((uint8_t)(((uint32_t)(uint16_t)_725))));
  *((&_389[((int64_t)3)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_725)), 8))));
  *((&_389[((int64_t)4)])) = (((uint8_t)(((uint32_t)(uint16_t)_764))));
  *((&_389[((int64_t)5)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_764)), 8))));
  *((&_389[((int64_t)6)])) = (((uint8_t)(((uint32_t)(uint16_t)_765))));
  *((&_389[((int64_t)7)])) = (((uint8_t)(llvm_lshr_u32((((uint32_t)(uint16_t)_765)), 8))));
}


void _Z12key_schedulePKhRSt6vectorItSaItEEm(uint8_t* _770, struct l_struct_class_OC_std_KD__KD_vector* _771, uint64_t _772) {
  struct l_struct_class_OC_std_KD__KD_vector _773;    /* Address-exposed local */
  uint16_t _774;    /* Address-exposed local */
  struct l_struct_class_OC_std_KD__KD_allocator _775;    /* Address-exposed local */
  uint64_t llvm_cbe__2e_019;
  uint64_t llvm_cbe__2e_019__PHI_TEMPORARY;
  uint8_t* _776;
  uint8_t _777;
  uint8_t _778;
  uint16_t* _779;
  uint16_t* _780;
  uint16_t _781;
  uint16_t _782;
  uint16_t* _783;
  uint64_t _784;
  uint64_t llvm_cbe__2e_06;
  uint64_t llvm_cbe__2e_06__PHI_TEMPORARY;
  uint16_t* _785;
  uint16_t _786;
  uint64_t _787;
  uint16_t* _788;
  uint16_t* _789;
  uint16_t _790;
  uint64_t _791;
  uint16_t* _792;
  uint16_t* _793;
  uint16_t _794;
  uint64_t _795;
  uint16_t* _796;
  uint16_t* _797;
  uint16_t _798;
  uint16_t* _799;
  uint16_t* _800;
  uint16_t _801;
  uint64_t _802;
  uint16_t* _803;
  uint16_t* _804;
  uint16_t _805;
  uint16_t* _806;
  uint16_t* _807;
  uint16_t _808;
  uint64_t _809;
  uint16_t* _810;
  uint16_t* _811;
  uint16_t _812;
  uint16_t* _813;
  uint64_t _814;

  _774 = 0;
  _ZNSaItEC2Ev((&_775));
  _ZNSt6vectorItSaItEEC2EmRKtRKS0_((&_773), 16, (&_774), (&_775));
  goto _815;

_815:
  _ZNSaItED2Ev((&_775));
  llvm_cbe__2e_019__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _816;

  do {     /* Syntactic loop '' to make GCC happy */
_816:
  llvm_cbe__2e_019 = llvm_cbe__2e_019__PHI_TEMPORARY;
  _776 = (&_770[((int64_t)(llvm_mul_u64(llvm_cbe__2e_019, 2)))]);
  goto _817;

_817:
  _777 = *_776;
  _778 = *((&_776[((int64_t)1)]));
  _779 = _ZNSt6vectorItSaItEEixEm((&_773), llvm_cbe__2e_019);
  *_779 = (((uint16_t)(((((uint32_t)(uint16_t)(((uint16_t)(((uint32_t)(uint8_t)_777)))))) << 8) | (((uint32_t)(uint8_t)_778)))));
  _780 = _ZNSt6vectorItSaItEEixEm((&_773), llvm_cbe__2e_019);
  _781 = *_780;
  _782 = *((&_ZZ12key_schedulePKhRSt6vectorItSaItEEmE2RC.array[((int64_t)llvm_cbe__2e_019)]));
  _783 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_add_u64(llvm_cbe__2e_019, 8)));
  *_783 = (((uint16_t)((((uint32_t)(uint16_t)_781)) ^ (((uint32_t)(uint16_t)_782)))));
  _784 = llvm_add_u64(llvm_cbe__2e_019, 1);
  if ((((_784 != UINT64_C(8))&1))) {
    llvm_cbe__2e_019__PHI_TEMPORARY = _784;   /* for PHI node */
    goto _816;
  } else {
    goto _818;
  }

  } while (1); /* end of syntactic loop '' */
_818:
  _ZNSt6vectorItSaItEE6resizeEmt(_771, 64, 0);
  goto llvm_cbe__2e_preheader;

llvm_cbe__2e_preheader:
  llvm_cbe__2e_06__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _819;

  do {     /* Syntactic loop '' to make GCC happy */
_819:
  llvm_cbe__2e_06 = llvm_cbe__2e_06__PHI_TEMPORARY;
  _785 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 0)), 8)));
  _786 = *_785;
  _787 = llvm_urem_u64(2, 16);
  _788 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_mul_u64(8, llvm_cbe__2e_06)));
  *_788 = (((uint16_t)(((((uint32_t)(uint16_t)_786)) << (((uint32_t)_787))) | (llvm_ashr_u32((((uint32_t)(uint16_t)_786)), (((uint32_t)(llvm_sub_u64(16, _787)))))))));
  _789 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_add_u64((llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 2)), 8)), 8)));
  _790 = *_789;
  _791 = llvm_urem_u64(1, 16);
  _792 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 1)));
  *_792 = (((uint16_t)(((((uint32_t)(uint16_t)_790)) << (((uint32_t)_791))) | (llvm_ashr_u32((((uint32_t)(uint16_t)_790)), (((uint32_t)(llvm_sub_u64(16, _791)))))))));
  _793 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 1)), 8)));
  _794 = *_793;
  _795 = llvm_urem_u64(5, 16);
  _796 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 2)));
  *_796 = (((uint16_t)(((((uint32_t)(uint16_t)_794)) << (((uint32_t)_795))) | (llvm_ashr_u32((((uint32_t)(uint16_t)_794)), (((uint32_t)(llvm_sub_u64(16, _795)))))))));
  _797 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_add_u64((llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 4)), 8)), 8)));
  _798 = *_797;
  _799 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 3)));
  *_799 = _798;
  _800 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 5)), 8)));
  _801 = *_800;
  _802 = llvm_urem_u64(8, 16);
  _803 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 4)));
  *_803 = (((uint16_t)(((((uint32_t)(uint16_t)_801)) << (((uint32_t)_802))) | (llvm_ashr_u32((((uint32_t)(uint16_t)_801)), (((uint32_t)(llvm_sub_u64(16, _802)))))))));
  _804 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_add_u64((llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 3)), 8)), 8)));
  _805 = *_804;
  _806 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 5)));
  *_806 = _805;
  _807 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 6)), 8)));
  _808 = *_807;
  _809 = llvm_urem_u64(13, 16);
  _810 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 6)));
  *_810 = (((uint16_t)(((((uint32_t)(uint16_t)_808)) << (((uint32_t)_809))) | (llvm_ashr_u32((((uint32_t)(uint16_t)_808)), (((uint32_t)(llvm_sub_u64(16, _809)))))))));
  _811 = _ZNSt6vectorItSaItEEixEm((&_773), (llvm_add_u64((llvm_urem_u64((llvm_add_u64(llvm_cbe__2e_06, 7)), 8)), 8)));
  _812 = *_811;
  _813 = _ZNSt6vectorItSaItEEixEm(_771, (llvm_add_u64((llvm_mul_u64(8, llvm_cbe__2e_06)), 7)));
  *_813 = _812;
  _814 = llvm_add_u64(llvm_cbe__2e_06, 1);
  if ((((_814 != UINT64_C(8))&1))) {
    llvm_cbe__2e_06__PHI_TEMPORARY = _814;   /* for PHI node */
    goto _819;
  } else {
    goto _820;
  }

  } while (1); /* end of syntactic loop '' */
_820:
  _ZNSt6vectorItSaItEED2Ev((&_773));
}


void _ZNSaItEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator* _821) {
  _ZN9__gnu_cxx13new_allocatorItEC2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_821)));
}


void _ZNSt6vectorItSaItEEC2EmRKtRKS0_(struct l_struct_class_OC_std_KD__KD_vector* _822, uint64_t _823, uint16_t* _824, struct l_struct_class_OC_std_KD__KD_allocator* _825) {
  _ZNSt12_Vector_baseItSaItEEC2EmRKS0_((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_822)), _823, _825);
  _ZNSt6vectorItSaItEE18_M_fill_initializeEmRKt(_822, _823, _824);
  goto _826;

_826:
  return;
}


void _ZNSaItED2Ev(struct l_struct_class_OC_std_KD__KD_allocator* _827) {
  _ZN9__gnu_cxx13new_allocatorItED2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_827)));
}


void _ZNSt6vectorItSaItEE6resizeEmt(struct l_struct_class_OC_std_KD__KD_vector* _828, uint64_t _829, uint16_t _830) {
  uint16_t _831;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _832;    /* Address-exposed local */
  uint64_t _833;
  uint16_t* _834;
  uint64_t _835;
  uint16_t* _836;
  uint64_t _837;
  uint16_t* _838;

  _831 = _830;
  _833 = _ZNKSt6vectorItSaItEE4sizeEv(_828);
  if ((((((uint64_t)_829) > ((uint64_t)_833))&1))) {
    goto _839;
  } else {
    goto _840;
  }

_839:
  _834 = _ZNSt6vectorItSaItEE3endEv(_828);
  *((&_832.field0)) = _834;
  _835 = _ZNKSt6vectorItSaItEE4sizeEv(_828);
  _836 = *((&_832.field0));
  _ZNSt6vectorItSaItEE6insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(_828, _836, (llvm_sub_u64(_829, _835)), (&_831));
  goto _841;

_840:
  _837 = _ZNKSt6vectorItSaItEE4sizeEv(_828);
  if ((((((uint64_t)_829) < ((uint64_t)_837))&1))) {
    goto _842;
  } else {
    goto _841;
  }

_842:
  _838 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_828))->field0))->field0));
  _ZNSt6vectorItSaItEE15_M_erase_at_endEPt(_828, ((&_838[((int64_t)_829)])));
  goto _841;

_841:
  return;
}


void _ZNSt6vectorItSaItEED2Ev(struct l_struct_class_OC_std_KD__KD_vector* _843) {
  uint16_t* _844;
  uint16_t* _845;
  struct l_struct_class_OC_std_KD__KD_allocator* _846;

  _844 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_843))->field0))->field0));
  _845 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_843))->field0))->field1));
  _846 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_843)));
  _ZSt8_DestroyIPttEvT_S1_RSaIT0_E(_844, _845, _846);
  goto _847;

_847:
  _ZNSt12_Vector_baseItSaItEED2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_843)));
}


__noreturn void __clang_call_terminate(uint8_t* _848) {
  uint8_t* _849;

  _849 = __cxa_begin_catch(_848);
  _ZSt9terminatev();
  __builtin_unreachable();

}


int main(void) {
  struct l_struct_class_OC_std_KD__KD_vector _850;    /* Address-exposed local */

  _ZNSt6vectorItSaItEEC2Ev((&_850));
  _Z12key_schedulePKhRSt6vectorItSaItEEm(((&_ZL6in_key.array[((int32_t)0)])), (&_850), 16);
  goto _851;

_851:
  _Z9encrypt_nRSt6vectorItSaItEEPKhPh((&_850), ((&_ZL2in.array[((int32_t)0)])), ((&_ZL3out.array[((int32_t)0)])));
  goto _852;

_852:
  _ZNSt6vectorItSaItEED2Ev((&_850));
  return 0;
}


void _ZNSt6vectorItSaItEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector* _853) {
  _ZNSt12_Vector_baseItSaItEEC2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_853)));
}


void _ZN9__gnu_cxx13new_allocatorItEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _854) {
  return;
}


void _ZN9__gnu_cxx13new_allocatorItED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _855) {
  return;
}


void _ZNSt12_Vector_baseItSaItEEC2EmRKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base* _856, uint64_t _857, struct l_struct_class_OC_std_KD__KD_allocator* _858) {
  _ZNSt12_Vector_baseItSaItEE12_Vector_implC2ERKS0_(((&_856->field0)), _858);
  _ZNSt12_Vector_baseItSaItEE17_M_create_storageEm(_856, _857);
  goto _859;

_859:
  return;
}


void _ZNSt6vectorItSaItEE18_M_fill_initializeEmRKt(struct l_struct_class_OC_std_KD__KD_vector* _860, uint64_t _861, uint16_t* _862) {
  uint16_t* _863;
  struct l_struct_class_OC_std_KD__KD_allocator* _864;
  uint16_t* _865;

  _863 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_860))->field0))->field0));
  _864 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_860)));
  _ZSt24__uninitialized_fill_n_aIPtmttEvT_T0_RKT1_RSaIT2_E(_863, _861, _862, _864);
  _865 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_860))->field0))->field2));
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_860))->field0))->field1)) = _865;
}


void _ZNSt12_Vector_baseItSaItEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base* _866) {
  uint16_t* _867;
  uint16_t* _868;
  uint16_t* _869;

  _867 = *((&((&_866->field0))->field0));
  _868 = *((&((&_866->field0))->field2));
  _869 = *((&((&_866->field0))->field0));
  _ZNSt12_Vector_baseItSaItEE13_M_deallocateEPtm(_866, _867, (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_868)), (((uint64_t)(uintptr_t)_869)))), 2)));
  goto _870;

_870:
  _ZNSt12_Vector_baseItSaItEE12_Vector_implD2Ev(((&_866->field0)));
}


void _ZNSt12_Vector_baseItSaItEE12_Vector_implC2ERKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl* _871, struct l_struct_class_OC_std_KD__KD_allocator* _872) {
  _ZNSaItEC2ERKS_((((struct l_struct_class_OC_std_KD__KD_allocator*)_871)), _872);
  *((&_871->field0)) = ((uint16_t*)/*NULL*/0);
  *((&_871->field1)) = ((uint16_t*)/*NULL*/0);
  *((&_871->field2)) = ((uint16_t*)/*NULL*/0);
}


void _ZNSt12_Vector_baseItSaItEE17_M_create_storageEm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _873, uint64_t _874) {
  uint16_t* _875;
  uint16_t* _876;
  uint16_t* _877;

  _875 = _ZNSt12_Vector_baseItSaItEE11_M_allocateEm(_873, _874);
  *((&((&_873->field0))->field0)) = _875;
  _876 = *((&((&_873->field0))->field0));
  *((&((&_873->field0))->field1)) = _876;
  _877 = *((&((&_873->field0))->field0));
  *((&((&_873->field0))->field2)) = ((&_877[((int64_t)_874)]));
}


void _ZNSt12_Vector_baseItSaItEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl* _878) {
  _ZNSaItED2Ev((((struct l_struct_class_OC_std_KD__KD_allocator*)_878)));
}


void _ZNSaItEC2ERKS_(struct l_struct_class_OC_std_KD__KD_allocator* _879, struct l_struct_class_OC_std_KD__KD_allocator* _880) {
  _ZN9__gnu_cxx13new_allocatorItEC2ERKS1_((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_879)), (((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_880)));
}


void _ZN9__gnu_cxx13new_allocatorItEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _881, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _882) {
  return;
}


uint16_t* _ZNSt12_Vector_baseItSaItEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _883, uint64_t _884) {
  uint16_t* _885;
  uint16_t* _886;
  uint16_t* _886__PHI_TEMPORARY;

  if ((((_884 != UINT64_C(0))&1))) {
    goto _887;
  } else {
    _886__PHI_TEMPORARY = ((uint16_t*)/*NULL*/0);   /* for PHI node */
    goto _888;
  }

_887:
  _885 = _ZN9__gnu_cxx13new_allocatorItE8allocateEmPKv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)((&_883->field0)))), _884, ((uint8_t*)/*NULL*/0));
  _886__PHI_TEMPORARY = _885;   /* for PHI node */
  goto _888;

_888:
  _886 = _886__PHI_TEMPORARY;
  return _886;
}


uint16_t* _ZN9__gnu_cxx13new_allocatorItE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _889, uint64_t _890, uint8_t* _891) {
  uint64_t _892;
  uint8_t* _893;

  _892 = _ZNK9__gnu_cxx13new_allocatorItE8max_sizeEv(_889);
  if ((((((uint64_t)_890) > ((uint64_t)_892))&1))) {
    goto _894;
  } else {
    goto _895;
  }

_894:
  _ZSt17__throw_bad_allocv();
  __builtin_unreachable();

_895:
  _893 = _Znwm((llvm_mul_u64(_890, 2)));
  return (((uint16_t*)_893));
}


uint64_t _ZNK9__gnu_cxx13new_allocatorItE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _896) {
  return UINT64_C(9223372036854775807);
}


void _ZSt24__uninitialized_fill_n_aIPtmttEvT_T0_RKT1_RSaIT2_E(uint16_t* _897, uint64_t _898, uint16_t* _899, struct l_struct_class_OC_std_KD__KD_allocator* _900) {
  _ZSt20uninitialized_fill_nIPtmtEvT_T0_RKT1_(_897, _898, _899);
}


struct l_struct_class_OC_std_KD__KD_allocator* _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base* _901) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator*)((&_901->field0))));
}


void _ZSt20uninitialized_fill_nIPtmtEvT_T0_RKT1_(uint16_t* _902, uint64_t _903, uint16_t* _904) {
  _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPtmtEEvT_T0_RKT1_(_902, _903, _904);
}


void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPtmtEEvT_T0_RKT1_(uint16_t* _905, uint64_t _906, uint16_t* _907) {
  uint16_t* _908;

  _908 = _ZSt6fill_nIPtmtET_S1_T0_RKT1_(_905, _906, _907);
}


uint16_t* _ZSt6fill_nIPtmtET_S1_T0_RKT1_(uint16_t* _909, uint64_t _910, uint16_t* _911) {
  uint16_t* _912;
  uint16_t* _913;

  _912 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_909);
  _913 = _ZSt10__fill_n_aIPtmtEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(_912, _910, _911);
  return _913;
}


uint16_t* _ZSt10__fill_n_aIPtmtEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(uint16_t* _914, uint64_t _915, uint16_t* _916) {
  uint16_t _917;
  uint64_t llvm_cbe_xtraiter;
  uint64_t llvm_cbe_unroll_iter;
  uint16_t* llvm_cbe__2e_03;
  uint16_t* llvm_cbe__2e_03__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012;
  uint64_t llvm_cbe__2e_012__PHI_TEMPORARY;
  uint64_t llvm_cbe_niter;
  uint64_t llvm_cbe_niter__PHI_TEMPORARY;
  uint16_t* _918;
  uint16_t* _919;
  uint16_t* _920;
  uint16_t* _921;
  uint16_t* _922;
  uint16_t* _923;
  uint16_t* _924;
  uint64_t _925;
  uint16_t* _926;
  uint64_t llvm_cbe_niter_2e_nsub_2e_7;
  uint16_t* llvm_cbe_split_2e_ph_2e_ph;
  uint16_t* llvm_cbe_split_2e_ph_2e_ph__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_03_2e_unr_2e_ph;
  uint16_t* llvm_cbe__2e_03_2e_unr_2e_ph__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_unr_2e_ph;
  uint64_t llvm_cbe__2e_012_2e_unr_2e_ph__PHI_TEMPORARY;
  uint16_t* llvm_cbe_split_2e_ph;
  uint16_t* llvm_cbe_split_2e_ph__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_03_2e_unr;
  uint16_t* llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_unr;
  uint64_t llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_03_2e_epil;
  uint16_t* llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_epil;
  uint64_t llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe_epil_2e_iter;
  uint64_t llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  uint64_t _927;
  uint16_t* _928;
  uint64_t llvm_cbe_epil_2e_iter_2e_sub;
  uint16_t* llvm_cbe_split_2e_ph4;
  uint16_t* llvm_cbe_split_2e_ph4__PHI_TEMPORARY;
  uint16_t* llvm_cbe_split;
  uint16_t* llvm_cbe_split__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_0_2e_lcssa;
  uint16_t* llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY;

  _917 = *_916;
  if ((((((uint64_t)_915) > ((uint64_t)UINT64_C(0)))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY = _914;   /* for PHI node */
    goto _929;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe_xtraiter = _915 & 7;
  if ((((((uint64_t)(llvm_add_u64(_915, -1))) < ((uint64_t)UINT64_C(7)))&1))) {
    llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY = _914;   /* for PHI node */
    llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY = _915;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;
  } else {
    goto llvm_cbe__2e_lr_2e_ph_2e_new;
  }

llvm_cbe__2e_lr_2e_ph_2e_new:
  llvm_cbe_unroll_iter = llvm_sub_u64(_915, llvm_cbe_xtraiter);
  llvm_cbe__2e_03__PHI_TEMPORARY = _914;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = _915;   /* for PHI node */
  llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_unroll_iter;   /* for PHI node */
  goto _930;

  do {     /* Syntactic loop '' to make GCC happy */
_930:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  llvm_cbe_niter = llvm_cbe_niter__PHI_TEMPORARY;
  *llvm_cbe__2e_03 = _917;
  _918 = (&llvm_cbe__2e_03[((int32_t)1)]);
  *_918 = _917;
  _919 = (&_918[((int32_t)1)]);
  *_919 = _917;
  _920 = (&_919[((int32_t)1)]);
  *_920 = _917;
  _921 = (&_920[((int32_t)1)]);
  *_921 = _917;
  _922 = (&_921[((int32_t)1)]);
  *_922 = _917;
  _923 = (&_922[((int32_t)1)]);
  *_923 = _917;
  _924 = (&_923[((int32_t)1)]);
  *_924 = _917;
  _925 = llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64(llvm_cbe__2e_012, -1)), -1)), -1)), -1)), -1)), -1)), -1)), -1);
  _926 = (&_924[((int32_t)1)]);
  llvm_cbe_niter_2e_nsub_2e_7 = llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64(llvm_cbe_niter, 1)), 1)), 1)), 1)), 1)), 1)), 1)), 1);
  if ((((llvm_cbe_niter_2e_nsub_2e_7 != UINT64_C(0))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = _926;   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = _925;   /* for PHI node */
    llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_niter_2e_nsub_2e_7;   /* for PHI node */
    goto _930;
  } else {
    llvm_cbe_split_2e_ph_2e_ph__PHI_TEMPORARY = _926;   /* for PHI node */
    llvm_cbe__2e_03_2e_unr_2e_ph__PHI_TEMPORARY = _926;   /* for PHI node */
    llvm_cbe__2e_012_2e_unr_2e_ph__PHI_TEMPORARY = _925;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa_2e_loopexit;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa_2e_loopexit:
  llvm_cbe_split_2e_ph_2e_ph = llvm_cbe_split_2e_ph_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_03_2e_unr_2e_ph = llvm_cbe__2e_03_2e_unr_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_012_2e_unr_2e_ph = llvm_cbe__2e_012_2e_unr_2e_ph__PHI_TEMPORARY;
  llvm_cbe_split_2e_ph__PHI_TEMPORARY = llvm_cbe_split_2e_ph_2e_ph;   /* for PHI node */
  llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY = llvm_cbe__2e_03_2e_unr_2e_ph;   /* for PHI node */
  llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY = llvm_cbe__2e_012_2e_unr_2e_ph;   /* for PHI node */
  goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;

llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa:
  llvm_cbe_split_2e_ph = llvm_cbe_split_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_03_2e_unr = llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY;
  llvm_cbe__2e_012_2e_unr = llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY;
  if ((((llvm_cbe_xtraiter != UINT64_C(0))&1))) {
    goto llvm_cbe__2e_epil_2e_preheader;
  } else {
    llvm_cbe_split__PHI_TEMPORARY = llvm_cbe_split_2e_ph;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

llvm_cbe__2e_epil_2e_preheader:
  llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY = llvm_cbe__2e_03_2e_unr;   /* for PHI node */
  llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY = llvm_cbe__2e_012_2e_unr;   /* for PHI node */
  llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_xtraiter;   /* for PHI node */
  goto _931;

  do {     /* Syntactic loop '' to make GCC happy */
_931:
  llvm_cbe__2e_03_2e_epil = llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY;
  llvm_cbe__2e_012_2e_epil = llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY;
  llvm_cbe_epil_2e_iter = llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  *llvm_cbe__2e_03_2e_epil = _917;
  _927 = llvm_add_u64(llvm_cbe__2e_012_2e_epil, -1);
  _928 = (&llvm_cbe__2e_03_2e_epil[((int32_t)1)]);
  llvm_cbe_epil_2e_iter_2e_sub = llvm_sub_u64(llvm_cbe_epil_2e_iter, 1);
  if ((((llvm_cbe_epil_2e_iter_2e_sub != UINT64_C(0))&1))) {
    llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY = _928;   /* for PHI node */
    llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY = _927;   /* for PHI node */
    llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_epil_2e_iter_2e_sub;   /* for PHI node */
    goto _931;
  } else {
    llvm_cbe_split_2e_ph4__PHI_TEMPORARY = _928;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa:
  llvm_cbe_split_2e_ph4 = llvm_cbe_split_2e_ph4__PHI_TEMPORARY;
  llvm_cbe_split__PHI_TEMPORARY = llvm_cbe_split_2e_ph4;   /* for PHI node */
  goto llvm_cbe__2e__crit_edge;

llvm_cbe__2e__crit_edge:
  llvm_cbe_split = llvm_cbe_split__PHI_TEMPORARY;
  llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY = llvm_cbe_split;   /* for PHI node */
  goto _929;

_929:
  llvm_cbe__2e_0_2e_lcssa = llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY;
  return llvm_cbe__2e_0_2e_lcssa;
}


uint16_t* _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(uint16_t* _932) {
  uint16_t* _933;

  _933 = _ZNSt10_Iter_baseIPtLb0EE7_S_baseES0_(_932);
  return _933;
}


uint16_t* _ZNSt10_Iter_baseIPtLb0EE7_S_baseES0_(uint16_t* _934) {
  return _934;
}


void _ZNSt12_Vector_baseItSaItEE13_M_deallocateEPtm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _935, uint16_t* _936, uint64_t _937) {
  if ((((_936 != ((uint16_t*)/*NULL*/0))&1))) {
    goto _938;
  } else {
    goto _939;
  }

_938:
  _ZN9__gnu_cxx13new_allocatorItE10deallocateEPtm((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)((&_935->field0)))), _936, _937);
  goto _939;

_939:
  return;
}


void _ZN9__gnu_cxx13new_allocatorItE10deallocateEPtm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _940, uint16_t* _941, uint64_t _942) {
  _ZdlPv((((uint8_t*)_941)));
}


void _ZSt8_DestroyIPttEvT_S1_RSaIT0_E(uint16_t* _943, uint16_t* _944, struct l_struct_class_OC_std_KD__KD_allocator* _945) {
  _ZSt8_DestroyIPtEvT_S1_(_943, _944);
}


void _ZSt8_DestroyIPtEvT_S1_(uint16_t* _946, uint16_t* _947) {
  _ZNSt12_Destroy_auxILb1EE9__destroyIPtEEvT_S3_(_946, _947);
}


void _ZNSt12_Destroy_auxILb1EE9__destroyIPtEEvT_S3_(uint16_t* _948, uint16_t* _949) {
  return;
}


uint64_t _ZNKSt6vectorItSaItEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector* _950) {
  uint16_t* _951;
  uint16_t* _952;

  _951 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_950))->field0))->field1));
  _952 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_950))->field0))->field0));
  return (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_951)), (((uint64_t)(uintptr_t)_952)))), 2));
}


void _ZNSt6vectorItSaItEE6insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(struct l_struct_class_OC_std_KD__KD_vector* _953, uint16_t* _954, uint64_t _955, uint16_t* _956) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _957;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _958;    /* Address-exposed local */
  uint8_t* _959;
  uint16_t* _960;

  *((&_957.field0)) = _954;
  _959 = memcpy((((uint8_t*)(&_958))), (((uint8_t*)(&_957))), 8);
  _960 = *((&_958.field0));
  _ZNSt6vectorItSaItEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(_953, _960, _955, _956);
}


uint16_t* _ZNSt6vectorItSaItEE3endEv(struct l_struct_class_OC_std_KD__KD_vector* _961) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _962;    /* Address-exposed local */
  uint16_t* _963;

  _ZN9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEC2ERKS1_((&_962), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_961))->field0))->field1)));
  _963 = *((&_962.field0));
  return _963;
}


void _ZNSt6vectorItSaItEE15_M_erase_at_endEPt(struct l_struct_class_OC_std_KD__KD_vector* _964, uint16_t* _965) {
  uint16_t* _966;
  struct l_struct_class_OC_std_KD__KD_allocator* _967;

  _966 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_964))->field0))->field1));
  _967 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_964)));
  _ZSt8_DestroyIPttEvT_S1_RSaIT0_E(_965, _966, _967);
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_964))->field0))->field1)) = _965;
}


void _ZNSt6vectorItSaItEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPtS1_EEmRKt(struct l_struct_class_OC_std_KD__KD_vector* _968, uint16_t* _969, uint64_t _970, uint16_t* _971) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _972;    /* Address-exposed local */
  uint16_t _973;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _974;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _975;    /* Address-exposed local */
  uint16_t* _976;
  uint16_t* _977;
  uint16_t _978;
  uint16_t* _979;
  uint64_t _980;
  uint16_t* _981;
  uint16_t* _982;
  uint16_t* _983;
  uint16_t* _984;
  struct l_struct_class_OC_std_KD__KD_allocator* _985;
  uint16_t* _986;
  uint16_t** _987;
  uint16_t* _988;
  uint16_t** _989;
  uint16_t* _990;
  uint16_t* _991;
  uint16_t** _992;
  uint16_t* _993;
  uint16_t** _994;
  uint16_t* _995;
  struct l_struct_class_OC_std_KD__KD_allocator* _996;
  uint16_t** _997;
  uint16_t* _998;
  uint16_t** _999;
  uint16_t* _1000;
  uint16_t* _1001;
  struct l_struct_class_OC_std_KD__KD_allocator* _1002;
  uint16_t* _1003;
  uint16_t** _1004;
  uint16_t* _1005;
  uint16_t** _1006;
  uint16_t* _1007;
  uint64_t _1008;
  uint16_t* _1009;
  uint64_t _1010;
  uint16_t* _1011;
  struct l_struct_class_OC_std_KD__KD_allocator* _1012;
  uint16_t* _1013;
  uint16_t** _1014;
  uint16_t* _1015;
  struct l_struct_class_OC_std_KD__KD_allocator* _1016;
  uint16_t* _1017;
  uint16_t** _1018;
  uint16_t* _1019;
  uint16_t* _1020;
  struct l_struct_class_OC_std_KD__KD_allocator* _1021;
  uint16_t* _1022;
  uint16_t* _1023;
  uint16_t* _1024;
  struct l_struct_class_OC_std_KD__KD_allocator* _1025;
  uint16_t* _1026;
  uint16_t* _1027;
  uint16_t* _1028;

  *((&_972.field0)) = _969;
  if ((((_970 != UINT64_C(0))&1))) {
    goto _1029;
  } else {
    goto _1030;
  }

_1029:
  _976 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field2));
  _977 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  if ((((((uint64_t)(llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_976)), (((uint64_t)(uintptr_t)_977)))), 2))) >= ((uint64_t)_970))&1))) {
    goto _1031;
  } else {
    goto _1032;
  }

_1031:
  _978 = *_971;
  _973 = _978;
  _979 = _ZNSt6vectorItSaItEE3endEv(_968);
  *((&_974.field0)) = _979;
  _980 = _ZN9__gnu_cxxmiIPtSt6vectorItSaItEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_974), (&_972));
  _981 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _982 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  if ((((((uint64_t)_980) > ((uint64_t)_970))&1))) {
    goto _1033;
  } else {
    goto _1034;
  }

_1033:
  _983 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _984 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _985 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _986 = _ZSt22__uninitialized_move_aIPtS0_SaItEET0_T_S3_S2_RT1_(((&_982[((int64_t)(llvm_neg_u64(_970)))])), _983, _984, _985);
  _987 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1);
  _988 = *_987;
  *_987 = ((&_988[((int64_t)_970)]));
  _989 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _990 = *_989;
  _991 = _ZSt13copy_backwardIPtS0_ET0_T_S2_S1_(_990, ((&_981[((int64_t)(llvm_neg_u64(_970)))])), _981);
  _992 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _993 = *_992;
  _994 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _995 = *_994;
  _ZSt4fillIPttEvT_S1_RKT0_(_993, ((&_995[((int64_t)_970)])), (&_973));
  goto _1030;

_1034:
  _996 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _ZSt24__uninitialized_fill_n_aIPtmttEvT_T0_RKT1_RSaIT2_E(_982, (llvm_sub_u64(_970, _980)), (&_973), _996);
  _997 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1);
  _998 = *_997;
  *_997 = ((&_998[((int64_t)(llvm_sub_u64(_970, _980)))]));
  _999 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _1000 = *_999;
  _1001 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _1002 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _1003 = _ZSt22__uninitialized_move_aIPtS0_SaItEET0_T_S3_S2_RT1_(_1000, _981, _1001, _1002);
  _1004 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1);
  _1005 = *_1004;
  *_1004 = ((&_1005[((int64_t)_980)]));
  _1006 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _1007 = *_1006;
  _ZSt4fillIPttEvT_S1_RKT0_(_1007, _981, (&_973));
  goto _1030;

_1032:
  _1008 = _ZNKSt6vectorItSaItEE12_M_check_lenEmPKc(_968, _970, ((&_OC_str.array[((int32_t)0)])));
  _1009 = _ZNSt6vectorItSaItEE5beginEv(_968);
  *((&_975.field0)) = _1009;
  _1010 = _ZN9__gnu_cxxmiIPtSt6vectorItSaItEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_972), (&_975));
  _1011 = _ZNSt12_Vector_baseItSaItEE11_M_allocateEm((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)), _1008);
  _1012 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _ZSt24__uninitialized_fill_n_aIPtmttEvT_T0_RKT1_RSaIT2_E(((&_1011[((int64_t)_1010)])), _970, _971, _1012);
  goto _1035;

_1035:
  _1013 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field0));
  _1014 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _1015 = *_1014;
  _1016 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _1017 = _ZSt34__uninitialized_move_if_noexcept_aIPtS0_SaItEET0_T_S3_S2_RT1_(_1013, _1015, _1011, _1016);
  goto _1036;

_1036:
  _1018 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv((&_972));
  _1019 = *_1018;
  _1020 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _1021 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _1022 = _ZSt34__uninitialized_move_if_noexcept_aIPtS0_SaItEET0_T_S3_S2_RT1_(_1019, _1020, ((&_1017[((int64_t)_970)])), _1021);
  goto _1037;

_1037:
  _1023 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field0));
  _1024 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1));
  _1025 = _ZNSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)));
  _ZSt8_DestroyIPttEvT_S1_RSaIT0_E(_1023, _1024, _1025);
  _1026 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field0));
  _1027 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field2));
  _1028 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field0));
  _ZNSt12_Vector_baseItSaItEE13_M_deallocateEPtm((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968)), _1026, (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1027)), (((uint64_t)(uintptr_t)_1028)))), 2)));
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field0)) = _1011;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field1)) = _1022;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_968))->field0))->field2)) = ((&_1011[((int64_t)_1008)]));
  goto _1030;

_1030:
  return;
}


uint64_t _ZN9__gnu_cxxmiIPtSt6vectorItSaItEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1038, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1039) {
  uint16_t** _1040;
  uint16_t* _1041;
  uint16_t** _1042;
  uint16_t* _1043;

  _1040 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv(_1038);
  _1041 = *_1040;
  _1042 = _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv(_1039);
  _1043 = *_1042;
  return (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1041)), (((uint64_t)(uintptr_t)_1043)))), 2));
}


uint16_t* _ZSt22__uninitialized_move_aIPtS0_SaItEET0_T_S3_S2_RT1_(uint16_t* _1044, uint16_t* _1045, uint16_t* _1046, struct l_struct_class_OC_std_KD__KD_allocator* _1047) {
  uint16_t* _1048;

  _1048 = _ZSt22__uninitialized_copy_aIPtS0_tET0_T_S2_S1_RSaIT1_E(_1044, _1045, _1046, _1047);
  return _1048;
}


uint16_t* _ZSt13copy_backwardIPtS0_ET0_T_S2_S1_(uint16_t* _1049, uint16_t* _1050, uint16_t* _1051) {
  uint16_t* _1052;
  uint16_t* _1053;
  uint16_t* _1054;

  _1052 = _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(_1049);
  _1053 = _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(_1050);
  _1054 = _ZSt23__copy_move_backward_a2ILb0EPtS0_ET1_T0_S2_S1_(_1052, _1053, _1051);
  return _1054;
}


uint16_t** _ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1055) {
  return ((&_1055->field0));
}


void _ZSt4fillIPttEvT_S1_RKT0_(uint16_t* _1056, uint16_t* _1057, uint16_t* _1058) {
  uint16_t* _1059;
  uint16_t* _1060;

  _1059 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1056);
  _1060 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1057);
  _ZSt8__fill_aIPttEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(_1059, _1060, _1058);
}


uint64_t _ZNKSt6vectorItSaItEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector* _1061, uint64_t _1062, uint8_t* _1063) {
  uint64_t _1064;    /* Address-exposed local */
  uint64_t _1065;    /* Address-exposed local */
  uint64_t _1066;
  uint64_t _1067;
  uint64_t _1068;
  uint64_t _1069;
  uint64_t _1070;
  uint64_t* _1071;
  uint64_t _1072;
  uint64_t _1073;
  uint64_t _1074;
  uint64_t _1075;
  uint64_t _1076;
  uint64_t _1077;
  uint64_t _1077__PHI_TEMPORARY;

  _1064 = _1062;
  _1066 = _ZNKSt6vectorItSaItEE8max_sizeEv(_1061);
  _1067 = _ZNKSt6vectorItSaItEE4sizeEv(_1061);
  _1068 = _1064;
  if ((((((uint64_t)(llvm_sub_u64(_1066, _1067))) < ((uint64_t)_1068))&1))) {
    goto _1078;
  } else {
    goto _1079;
  }

_1078:
  _ZSt20__throw_length_errorPKc(_1063);
  __builtin_unreachable();

_1079:
  _1069 = _ZNKSt6vectorItSaItEE4sizeEv(_1061);
  _1070 = _ZNKSt6vectorItSaItEE4sizeEv(_1061);
  _1065 = _1070;
  _1071 = _ZSt3maxImERKT_S2_S2_((&_1065), (&_1064));
  _1072 = *_1071;
  _1073 = llvm_add_u64(_1069, _1072);
  _1074 = _ZNKSt6vectorItSaItEE4sizeEv(_1061);
  if ((((((uint64_t)_1073) < ((uint64_t)_1074))&1))) {
    goto _1080;
  } else {
    goto _1081;
  }

_1081:
  _1075 = _ZNKSt6vectorItSaItEE8max_sizeEv(_1061);
  if ((((((uint64_t)_1073) > ((uint64_t)_1075))&1))) {
    goto _1080;
  } else {
    _1077__PHI_TEMPORARY = _1073;   /* for PHI node */
    goto _1082;
  }

_1080:
  _1076 = _ZNKSt6vectorItSaItEE8max_sizeEv(_1061);
  _1077__PHI_TEMPORARY = _1076;   /* for PHI node */
  goto _1082;

_1082:
  _1077 = _1077__PHI_TEMPORARY;
  return _1077;
}


uint16_t* _ZNSt6vectorItSaItEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector* _1083) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1084;    /* Address-exposed local */
  uint16_t* _1085;

  _ZN9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEC2ERKS1_((&_1084), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1083))->field0))->field0)));
  _1085 = *((&_1084.field0));
  return _1085;
}


uint16_t* _ZSt34__uninitialized_move_if_noexcept_aIPtS0_SaItEET0_T_S3_S2_RT1_(uint16_t* _1086, uint16_t* _1087, uint16_t* _1088, struct l_struct_class_OC_std_KD__KD_allocator* _1089) {
  uint16_t* _1090;

  _1090 = _ZSt22__uninitialized_copy_aIPtS0_tET0_T_S2_S1_RSaIT1_E(_1086, _1087, _1088, _1089);
  return _1090;
}


uint16_t* _ZSt22__uninitialized_copy_aIPtS0_tET0_T_S2_S1_RSaIT1_E(uint16_t* _1091, uint16_t* _1092, uint16_t* _1093, struct l_struct_class_OC_std_KD__KD_allocator* _1094) {
  uint16_t* _1095;

  _1095 = _ZSt18uninitialized_copyIPtS0_ET0_T_S2_S1_(_1091, _1092, _1093);
  return _1095;
}


uint16_t* _ZSt18uninitialized_copyIPtS0_ET0_T_S2_S1_(uint16_t* _1096, uint16_t* _1097, uint16_t* _1098) {
  uint16_t* _1099;

  _1099 = _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPtS2_EET0_T_S4_S3_(_1096, _1097, _1098);
  return _1099;
}


uint16_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPtS2_EET0_T_S4_S3_(uint16_t* _1100, uint16_t* _1101, uint16_t* _1102) {
  uint16_t* _1103;

  _1103 = _ZSt4copyIPtS0_ET0_T_S2_S1_(_1100, _1101, _1102);
  return _1103;
}


uint16_t* _ZSt4copyIPtS0_ET0_T_S2_S1_(uint16_t* _1104, uint16_t* _1105, uint16_t* _1106) {
  uint16_t* _1107;
  uint16_t* _1108;
  uint16_t* _1109;

  _1107 = _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(_1104);
  _1108 = _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(_1105);
  _1109 = _ZSt14__copy_move_a2ILb0EPtS0_ET1_T0_S2_S1_(_1107, _1108, _1106);
  return _1109;
}


uint16_t* _ZSt14__copy_move_a2ILb0EPtS0_ET1_T0_S2_S1_(uint16_t* _1110, uint16_t* _1111, uint16_t* _1112) {
  uint16_t* _1113;
  uint16_t* _1114;
  uint16_t* _1115;
  uint16_t* _1116;

  _1113 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1110);
  _1114 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1111);
  _1115 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1112);
  _1116 = _ZSt13__copy_move_aILb0EPtS0_ET1_T0_S2_S1_(_1113, _1114, _1115);
  return _1116;
}


uint16_t* _ZSt12__miter_baseIPtENSt11_Miter_baseIT_E13iterator_typeES2_(uint16_t* _1117) {
  uint16_t* _1118;

  _1118 = _ZNSt10_Iter_baseIPtLb0EE7_S_baseES0_(_1117);
  return _1118;
}


uint16_t* _ZSt13__copy_move_aILb0EPtS0_ET1_T0_S2_S1_(uint16_t* _1119, uint16_t* _1120, uint16_t* _1121) {
  uint16_t* _1122;

  _1122 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mItEEPT_PKS3_S6_S4_(_1119, _1120, _1121);
  return _1122;
}


uint16_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mItEEPT_PKS3_S6_S4_(uint16_t* _1123, uint16_t* _1124, uint16_t* _1125) {
  uint64_t _1126;
  uint8_t* _1127;

  _1126 = llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1124)), (((uint64_t)(uintptr_t)_1123)))), 2);
  if ((((_1126 != UINT64_C(0))&1))) {
    goto _1128;
  } else {
    goto _1129;
  }

_1128:
  _1127 = memmove((((uint8_t*)_1125)), (((uint8_t*)_1123)), (llvm_mul_u64(2, _1126)));
  goto _1129;

_1129:
  return ((&_1125[((int64_t)_1126)]));
}


uint16_t* _ZSt23__copy_move_backward_a2ILb0EPtS0_ET1_T0_S2_S1_(uint16_t* _1130, uint16_t* _1131, uint16_t* _1132) {
  uint16_t* _1133;
  uint16_t* _1134;
  uint16_t* _1135;
  uint16_t* _1136;

  _1133 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1130);
  _1134 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1131);
  _1135 = _ZSt12__niter_baseIPtENSt11_Niter_baseIT_E13iterator_typeES2_(_1132);
  _1136 = _ZSt22__copy_move_backward_aILb0EPtS0_ET1_T0_S2_S1_(_1133, _1134, _1135);
  return _1136;
}


uint16_t* _ZSt22__copy_move_backward_aILb0EPtS0_ET1_T0_S2_S1_(uint16_t* _1137, uint16_t* _1138, uint16_t* _1139) {
  uint16_t* _1140;

  _1140 = _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bItEEPT_PKS3_S6_S4_(_1137, _1138, _1139);
  return _1140;
}


uint16_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bItEEPT_PKS3_S6_S4_(uint16_t* _1141, uint16_t* _1142, uint16_t* _1143) {
  uint64_t _1144;
  uint8_t* _1145;

  _1144 = llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1142)), (((uint64_t)(uintptr_t)_1141)))), 2);
  if ((((_1144 != UINT64_C(0))&1))) {
    goto _1146;
  } else {
    goto _1147;
  }

_1146:
  _1145 = memmove((((uint8_t*)((&_1143[((int64_t)(llvm_neg_u64(_1144)))])))), (((uint8_t*)_1141)), (llvm_mul_u64(2, _1144)));
  goto _1147;

_1147:
  return ((&_1143[((int64_t)(llvm_neg_u64(_1144)))]));
}


void _ZSt8__fill_aIPttEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(uint16_t* _1148, uint16_t* _1149, uint16_t* _1150) {
  uint64_t _1151;
  uint16_t _1152;
  uint64_t _1153;
  uint64_t _1154;
  uint64_t llvm_cbe_xtraiter;
  uint64_t llvm_cbe_unroll_iter;
  uint16_t* llvm_cbe__2e_01;
  uint16_t* llvm_cbe__2e_01__PHI_TEMPORARY;
  uint64_t llvm_cbe_niter;
  uint64_t llvm_cbe_niter__PHI_TEMPORARY;
  uint16_t* _1155;
  uint16_t* _1156;
  uint16_t* _1157;
  uint16_t* _1158;
  uint16_t* _1159;
  uint16_t* _1160;
  uint16_t* _1161;
  uint16_t* _1162;
  uint64_t llvm_cbe_niter_2e_nsub_2e_7;
  uint16_t* llvm_cbe__2e_01_2e_unr_2e_ph;
  uint16_t* llvm_cbe__2e_01_2e_unr_2e_ph__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_01_2e_unr;
  uint16_t* llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY;
  uint16_t* llvm_cbe__2e_01_2e_epil;
  uint16_t* llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe_epil_2e_iter;
  uint64_t llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  uint16_t* _1163;
  uint64_t llvm_cbe_epil_2e_iter_2e_sub;

  _1151 = ((uint64_t)(uintptr_t)_1148);
  _1152 = *_1150;
  if ((((_1148 != _1149)&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _1164;
  }

llvm_cbe__2e_lr_2e_ph:
  _1153 = llvm_lshr_u64((((uint64_t)(uintptr_t)((&(((uint8_t*)((&_1149[((int64_t)-1)]))))[((int64_t)(llvm_neg_u64(_1151)))])))), 1);
  _1154 = llvm_add_u64(_1153, 1);
  llvm_cbe_xtraiter = _1154 & 7;
  if ((((((uint64_t)_1153) < ((uint64_t)UINT64_C(7)))&1))) {
    llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY = _1148;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;
  } else {
    goto llvm_cbe__2e_lr_2e_ph_2e_new;
  }

llvm_cbe__2e_lr_2e_ph_2e_new:
  llvm_cbe_unroll_iter = llvm_sub_u64(_1154, llvm_cbe_xtraiter);
  llvm_cbe__2e_01__PHI_TEMPORARY = _1148;   /* for PHI node */
  llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_unroll_iter;   /* for PHI node */
  goto _1165;

  do {     /* Syntactic loop '' to make GCC happy */
_1165:
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  llvm_cbe_niter = llvm_cbe_niter__PHI_TEMPORARY;
  *llvm_cbe__2e_01 = _1152;
  _1155 = (&llvm_cbe__2e_01[((int32_t)1)]);
  *_1155 = _1152;
  _1156 = (&_1155[((int32_t)1)]);
  *_1156 = _1152;
  _1157 = (&_1156[((int32_t)1)]);
  *_1157 = _1152;
  _1158 = (&_1157[((int32_t)1)]);
  *_1158 = _1152;
  _1159 = (&_1158[((int32_t)1)]);
  *_1159 = _1152;
  _1160 = (&_1159[((int32_t)1)]);
  *_1160 = _1152;
  _1161 = (&_1160[((int32_t)1)]);
  *_1161 = _1152;
  _1162 = (&_1161[((int32_t)1)]);
  llvm_cbe_niter_2e_nsub_2e_7 = llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64(llvm_cbe_niter, 1)), 1)), 1)), 1)), 1)), 1)), 1)), 1);
  if ((((llvm_cbe_niter_2e_nsub_2e_7 != UINT64_C(0))&1))) {
    llvm_cbe__2e_01__PHI_TEMPORARY = _1162;   /* for PHI node */
    llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_niter_2e_nsub_2e_7;   /* for PHI node */
    goto _1165;
  } else {
    llvm_cbe__2e_01_2e_unr_2e_ph__PHI_TEMPORARY = _1162;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa_2e_loopexit;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa_2e_loopexit:
  llvm_cbe__2e_01_2e_unr_2e_ph = llvm_cbe__2e_01_2e_unr_2e_ph__PHI_TEMPORARY;
  llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY = llvm_cbe__2e_01_2e_unr_2e_ph;   /* for PHI node */
  goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;

llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa:
  llvm_cbe__2e_01_2e_unr = llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY;
  if ((((llvm_cbe_xtraiter != UINT64_C(0))&1))) {
    goto llvm_cbe__2e_epil_2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

llvm_cbe__2e_epil_2e_preheader:
  llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY = llvm_cbe__2e_01_2e_unr;   /* for PHI node */
  llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_xtraiter;   /* for PHI node */
  goto _1166;

  do {     /* Syntactic loop '' to make GCC happy */
_1166:
  llvm_cbe__2e_01_2e_epil = llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY;
  llvm_cbe_epil_2e_iter = llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  *llvm_cbe__2e_01_2e_epil = _1152;
  _1163 = (&llvm_cbe__2e_01_2e_epil[((int32_t)1)]);
  llvm_cbe_epil_2e_iter_2e_sub = llvm_sub_u64(llvm_cbe_epil_2e_iter, 1);
  if ((((llvm_cbe_epil_2e_iter_2e_sub != UINT64_C(0))&1))) {
    llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY = _1163;   /* for PHI node */
    llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_epil_2e_iter_2e_sub;   /* for PHI node */
    goto _1166;
  } else {
    goto llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa:
  goto llvm_cbe__2e__crit_edge;

llvm_cbe__2e__crit_edge:
  goto _1164;

_1164:
  return;
}


uint64_t _ZNKSt6vectorItSaItEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector* _1167) {
  struct l_struct_class_OC_std_KD__KD_allocator* _1168;
  uint64_t _1169;

  _1168 = _ZNKSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1167)));
  _1169 = _ZN9__gnu_cxx14__alloc_traitsISaItEE8max_sizeERKS1_(_1168);
  return _1169;
}


uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t* _1170, uint64_t* _1171) {
  uint64_t _1172;
  uint64_t _1173;

  _1172 = *_1170;
  _1173 = *_1171;
  return (llvm_select_pu64((((((uint64_t)_1172) < ((uint64_t)_1173))&1)), _1171, _1170));
}


uint64_t _ZN9__gnu_cxx14__alloc_traitsISaItEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator* _1174) {
  uint64_t _1175;

  _1175 = _ZNK9__gnu_cxx13new_allocatorItE8max_sizeEv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_1174)));
  return _1175;
}


struct l_struct_class_OC_std_KD__KD_allocator* _ZNKSt12_Vector_baseItSaItEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1176) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator*)((&_1176->field0))));
}


void _ZN9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1177, uint16_t** _1178) {
  uint16_t* _1179;

  _1179 = *_1178;
  *((&_1177->field0)) = _1179;
}


void _ZNSt12_Vector_baseItSaItEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1180) {
  _ZNSt12_Vector_baseItSaItEE12_Vector_implC2Ev(((&_1180->field0)));
}


void _ZNSt12_Vector_baseItSaItEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_short_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_short_OD__AC__OD__KD__KD__Vector_impl* _1181) {
  _ZNSaItEC2Ev((((struct l_struct_class_OC_std_KD__KD_allocator*)_1181)));
  *((&_1181->field0)) = ((uint16_t*)/*NULL*/0);
  *((&_1181->field1)) = ((uint16_t*)/*NULL*/0);
  *((&_1181->field2)) = ((uint16_t*)/*NULL*/0);
}

