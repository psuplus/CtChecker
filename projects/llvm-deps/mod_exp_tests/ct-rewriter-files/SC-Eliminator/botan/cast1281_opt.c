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
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl;
struct l_struct_struct_OC_std_KD__KD__Vector_base;
struct l_struct_class_OC_std_KD__KD_vector;
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl;
struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1;
struct l_struct_class_OC_std_KD__KD_vector_OC_0;
struct l_struct_class_OC_ByteReader;
struct l_struct_class_OC_std_KD__KD_allocator;
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator;
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5;
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator;
struct l_struct_class_OC_std_KD__KD_allocator_OC_2;
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3;
struct l_array_32_uint8_t;
struct l_array_64_uint8_t;
struct l_array_256_uint32_t;
struct l_array_23_uint8_t;
struct l_array_4_uint32_t;

/* Function definitions */
typedef void l_fptr_19(struct l_struct_class_OC_std_KD__KD_vector*, uint32_t*, uint64_t, uint32_t*);

typedef uint32_t* l_fptr_23(uint32_t*, uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_34(uint32_t*, uint64_t, uint32_t*);

typedef void l_fptr_15(struct l_struct_class_OC_std_KD__KD_vector_OC_0*);

typedef void l_fptr_58(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*, uint8_t*, uint64_t);

typedef void l_fptr_74(struct l_struct_class_OC_std_KD__KD_allocator*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint8_t* l_fptr_64(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*, uint64_t, uint8_t*);

typedef void l_fptr_53(uint8_t*, uint8_t*, uint8_t*);

typedef void l_fptr_80(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_1(struct l_struct_class_OC_std_KD__KD_vector*, struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint8_t*);

typedef void l_fptr_59(uint8_t*, uint64_t, uint8_t*);

typedef void l_fptr_69(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t*);

typedef uint64_t l_fptr_18(struct l_struct_class_OC_std_KD__KD_vector*);

typedef uint64_t l_fptr_37(struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_73(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl*);

typedef uint8_t* l_fptr_83(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_6(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t, uint8_t);

typedef uint8_t l_fptr_17(struct l_struct_class_OC_ByteReader*, uint64_t);

typedef void l_fptr_8(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint32_t* l_fptr_40(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint64_t, uint8_t*);

typedef void l_fptr_5(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t);

typedef uint64_t l_fptr_61(struct l_struct_class_OC_std_KD__KD_allocator_OC_2*);

typedef uint32_t* l_fptr_30(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t);

typedef void l_fptr_71(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint32_t l_fptr_9(int, ...);

typedef void l_fptr_54(uint8_t*, uint64_t, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*);

typedef uint32_t* l_fptr_2(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t);

typedef uint64_t l_fptr_44(struct l_struct_class_OC_std_KD__KD_vector_OC_0*);

typedef uint8_t** l_fptr_52(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*);

typedef void l_fptr_70(struct l_struct_struct_OC_std_KD__KD__Vector_base*);

typedef void l_fptr_28(uint32_t*, uint64_t, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint64_t l_fptr_62(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*);

typedef uint64_t l_fptr_29(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint8_t*);

typedef void l_fptr_31(uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef uint8_t* l_fptr_46(struct l_struct_class_OC_std_KD__KD_vector_OC_0*);

typedef void l_fptr_16(struct l_struct_class_OC_ByteReader*, uint32_t*);

typedef uint8_t* l_fptr_49(uint8_t*, uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*);

typedef uint8_t* l_fptr_60(uint8_t*, uint64_t, uint8_t*);

typedef void l_fptr_66(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*, uint8_t*, uint64_t);

typedef void l_fptr_7(struct l_struct_class_OC_std_KD__KD_allocator*);

typedef struct l_struct_class_OC_std_KD__KD_allocator* l_fptr_24(struct l_struct_struct_OC_std_KD__KD__Vector_base*);

typedef void l_fptr_67(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef uint8_t* l_fptr_41(uint64_t);

typedef void l_fptr_76(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*);

typedef uint32_t* l_fptr_35(uint32_t*, uint64_t, uint32_t*);

typedef uint8_t* l_fptr_56(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*, uint64_t);

typedef uint8_t* l_fptr_51(uint8_t*, uint8_t*, uint8_t*);

typedef void l_fptr_39(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, uint32_t**);

typedef void l_fptr_63(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*, uint8_t**);

typedef void l_fptr_21(struct l_struct_class_OC_std_KD__KD_vector*, uint32_t*);

typedef void l_fptr_27(uint32_t*, uint32_t*, uint32_t*);

typedef void l_fptr_45(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint64_t, uint8_t*);

typedef void l_fptr_72(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t);

typedef void l_fptr_10(struct l_struct_class_OC_std_KD__KD_vector*);

typedef void l_fptr_13(void);

typedef struct l_struct_class_OC_std_KD__KD_allocator_OC_2* l_fptr_50(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*);

typedef void l_fptr_79(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*);

typedef uint8_t* l_fptr_3(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t);

typedef uint8_t* l_fptr_82(uint8_t*, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_12(uint8_t*);

typedef void l_fptr_81(uint8_t*, uint8_t, uint64_t, bool);

typedef uint64_t l_fptr_22(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*);

typedef uint32_t* l_fptr_25(uint32_t*, uint32_t*, uint32_t*);

typedef uint32_t* l_fptr_20(struct l_struct_class_OC_std_KD__KD_vector*);

typedef void l_fptr_47(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*);

typedef uint32_t* l_fptr_33(uint32_t*);

typedef void l_fptr_68(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t, struct l_struct_class_OC_std_KD__KD_allocator*);

typedef void l_fptr_75(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef uint32_t** l_fptr_26(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*);

typedef void l_fptr_43(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint32_t*, uint64_t);

typedef void l_fptr_4(uint8_t*, struct l_struct_class_OC_std_KD__KD_vector*, struct l_struct_class_OC_std_KD__KD_vector_OC_0*);

typedef uint64_t l_fptr_38(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*);

typedef void l_fptr_32(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint32_t*, uint64_t);

typedef void l_fptr_11(uint8_t*);

typedef uint64_t* l_fptr_36(uint64_t*, uint64_t*);

typedef uint32_t l_fptr_14(void);

typedef uint64_t l_fptr_48(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*);

typedef uint64_t l_fptr_55(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t, uint8_t*);

typedef void l_fptr_57(uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*);

typedef void l_fptr_77(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl*);

typedef void l_fptr_78(struct l_struct_class_OC_std_KD__KD_allocator_OC_2*);

typedef void l_fptr_42(uint32_t*, uint32_t*);

typedef void l_fptr_65(uint8_t*, uint8_t*);


/* Types Definitions */
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl {
  uint32_t* field0;
  uint32_t* field1;
  uint32_t* field2;
};
struct l_struct_struct_OC_std_KD__KD__Vector_base {
  struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl field0;
};
struct l_struct_class_OC_std_KD__KD_vector {
  struct l_struct_struct_OC_std_KD__KD__Vector_base field0;
};
struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl {
  uint8_t* field0;
  uint8_t* field1;
  uint8_t* field2;
};
struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1 {
  struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl field0;
};
struct l_struct_class_OC_std_KD__KD_vector_OC_0 {
  struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1 field0;
};
struct l_struct_class_OC_ByteReader {
  uint32_t* field0;
};
struct l_struct_class_OC_std_KD__KD_allocator {
  uint8_t field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator {
  uint32_t* field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 {
  uint8_t* field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator {
  uint8_t field0;
};
struct l_struct_class_OC_std_KD__KD_allocator_OC_2 {
  uint8_t field0;
};
struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3 {
  uint8_t field0;
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};
struct l_array_256_uint32_t {
  uint32_t array[256];
};
struct l_array_23_uint8_t {
  uint8_t array[23];
};
struct l_array_4_uint32_t {
  uint32_t array[4];
};

/* External Global Variable Declarations */

/* Function Declarations */
void _Z9encrypt_nRSt6vectorIjSaIjEERS_IhSaIhEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector*, struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint8_t*);
uint32_t* _ZNSt6vectorIjSaIjEEixEm(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt6vectorIhSaIhEEixEm(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _Z9decrypt_nRSt6vectorIjSaIjEERS_IhSaIhEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector*, struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint8_t*);
void _Z12key_schedulePKhRSt6vectorIjSaIjEERS1_IhSaIhEE(uint8_t*, struct l_struct_class_OC_std_KD__KD_vector*, struct l_struct_class_OC_std_KD__KD_vector_OC_0*);
void _ZNSt6vectorIjSaIjEE6resizeEmj(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEE6resizeEmh(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t, uint8_t) __ATTRIBUTE_WEAK__;
void _ZNSaIjEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEEC2EmRKjRKS0_(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint32_t __gxx_personality_v0(int, ...);
void _ZNSaIjED2Ev(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEED2Ev(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
__noreturn void __clang_call_terminate(uint8_t*) __ATTRIBUTELIST__((noinline, nothrow)) __ATTRIBUTE_WEAK__ __HIDDEN__;
uint8_t* __cxa_begin_catch(uint8_t*);
void _ZSt9terminatev(void);
int main(void);
void _ZNSt6vectorIjSaIjEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEED2Ev(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTE_WEAK__;
void _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj(struct l_struct_class_OC_ByteReader*, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm(struct l_struct_class_OC_ByteReader*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorIjSaIjEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEE6insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(struct l_struct_class_OC_std_KD__KD_vector*, uint32_t*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt6vectorIjSaIjEE3endEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEE15_M_erase_at_endEPj(struct l_struct_class_OC_std_KD__KD_vector*, uint32_t*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(struct l_struct_class_OC_std_KD__KD_vector*, uint32_t*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxxmiIPjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt22__uninitialized_move_aIPjS0_SaIjEET0_T_S3_S2_RT1_(uint32_t*, uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator* _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt13copy_backwardIPjS0_ET0_T_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt4fillIPjjEvT_S1_RKT0_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
void _ZSt24__uninitialized_fill_n_aIPjmjjEvT_T0_RKT1_RSaIT2_E(uint32_t*, uint64_t, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorIjSaIjEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt6vectorIjSaIjEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt12_Vector_baseIjSaIjEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt34__uninitialized_move_if_noexcept_aIPjS0_SaIjEET0_T_S3_S2_RT1_(uint32_t*, uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E(uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEE13_M_deallocateEPjm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint32_t*, uint64_t) __ATTRIBUTE_WEAK__;
void __cxa_rethrow(void);
void __cxa_end_catch(void);
uint32_t* _ZSt22__uninitialized_copy_aIPjS0_jET0_T_S2_S1_RSaIT1_E(uint32_t*, uint32_t*, uint32_t*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt18uninitialized_copyIPjS0_ET0_T_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPjS2_EET0_T_S4_S3_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt4copyIPjS0_ET0_T_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt14__copy_move_a2ILb0EPjS0_ET1_T0_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt13__copy_move_aILb0EPjS0_ET1_T0_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIjEEPT_PKS3_S6_S4_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt10_Iter_baseIPjLb0EE7_S_baseES0_(uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt23__copy_move_backward_a2ILb0EPjS0_ET1_T0_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt22__copy_move_backward_aILb0EPjS0_ET1_T0_S2_S1_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIjEEPT_PKS3_S6_S4_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt8__fill_aIPjjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(uint32_t*, uint32_t*, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt20uninitialized_fill_nIPjmjEvT_T0_RKT1_(uint32_t*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPjmjEEvT_T0_RKT1_(uint32_t*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt6fill_nIPjmjET_S1_T0_RKT1_(uint32_t*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
uint32_t* _ZSt10__fill_n_aIPjmjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(uint32_t*, uint64_t, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorIjSaIjEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector*) __ATTRIBUTE_WEAK__;
__noreturn void _ZSt20__throw_length_errorPKc(uint8_t*);
uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t*, uint64_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIjEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator* _ZNKSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNK9__gnu_cxx13new_allocatorIjE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator*, uint32_t**) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint32_t* _ZN9__gnu_cxx13new_allocatorIjE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
__noreturn void _ZSt17__throw_bad_allocv(void);
uint8_t* _Znwm(uint64_t);
void _ZSt8_DestroyIPjEvT_S1_(uint32_t*, uint32_t*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Destroy_auxILb1EE9__destroyIPjEEvT_S3_(uint32_t*, uint32_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIjE10deallocateEPjm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, uint32_t*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZdlPv(uint8_t*) __ATTRIBUTELIST__((nothrow));
uint64_t _ZNKSt6vectorIhSaIhEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEE6insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt6vectorIhSaIhEE3endEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEE15_M_erase_at_endEPh(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIhSaIhEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint8_t*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxxmiIPhSt6vectorIhSaIhEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt22__uninitialized_move_aIPhS0_SaIhEET0_T_S3_S2_RT1_(uint8_t*, uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt13copy_backwardIPhS0_ET0_T_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t** _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt4fillIPhhEvT_S1_RKT0_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
void _ZSt24__uninitialized_fill_n_aIPhmhhEvT_T0_RKT1_RSaIT2_E(uint8_t*, uint64_t, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorIhSaIhEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector_OC_0*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt6vectorIhSaIhEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt12_Vector_baseIhSaIhEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*, uint64_t) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt34__uninitialized_move_if_noexcept_aIPhS0_SaIhEET0_T_S3_S2_RT1_(uint8_t*, uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTE_WEAK__;
void _ZSt8_DestroyIPhhEvT_S1_RSaIT0_E(uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIhSaIhEE13_M_deallocateEPhm(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*, uint8_t*, uint64_t) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt22__uninitialized_copy_aIPhS0_hET0_T_S2_S1_RSaIT1_E(uint8_t*, uint8_t*, uint8_t*, struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt18uninitialized_copyIPhS0_ET0_T_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPhS2_EET0_T_S4_S3_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt4copyIPhS0_ET0_T_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt14__copy_move_a2ILb0EPhS0_ET1_T0_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt13__copy_move_aILb0EPhS0_ET1_T0_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIhEEPT_PKS3_S6_S4_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt10_Iter_baseIPhLb0EE7_S_baseES0_(uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt23__copy_move_backward_a2ILb0EPhS0_ET1_T0_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt22__copy_move_backward_aILb0EPhS0_ET1_T0_S2_S1_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIhEEPT_PKS3_S6_S4_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt8__fill_aIhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT_EE7__valueEvE6__typeEPS2_S5_RKS2_(uint8_t*, uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZSt20uninitialized_fill_nIPhmhEvT_T0_RKT1_(uint8_t*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPhmhEEvT_T0_RKT1_(uint8_t*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt6fill_nIPhmhET_S1_T0_RKT1_(uint8_t*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
uint8_t* _ZSt10__fill_n_aImhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT0_EE7__valueEPS2_E6__typeES3_T_RKS2_(uint8_t*, uint64_t, uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNKSt6vectorIhSaIhEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0*) __ATTRIBUTE_WEAK__;
uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIhEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _ZNKSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint64_t _ZNK9__gnu_cxx13new_allocatorIhE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5*, uint8_t**) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* _ZN9__gnu_cxx13new_allocatorIhE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*, uint64_t, uint8_t*) __ATTRIBUTE_WEAK__;
void _ZSt8_DestroyIPhEvT_S1_(uint8_t*, uint8_t*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Destroy_auxILb1EE9__destroyIPhEEvT_S3_(uint8_t*, uint8_t*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIhE10deallocateEPhm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*, uint8_t*, uint64_t) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIjEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIjED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEEC2EmRKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIjSaIjEE18_M_fill_initializeEmRKj(struct l_struct_class_OC_std_KD__KD_vector*, uint64_t, uint32_t*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2ERKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEE17_M_create_storageEm(struct l_struct_struct_OC_std_KD__KD__Vector_base*, uint64_t) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSaIjEC2ERKS_(struct l_struct_class_OC_std_KD__KD_allocator*, struct l_struct_class_OC_std_KD__KD_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIjEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIhSaIhEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIhSaIhEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSaIhEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIhEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIhSaIhEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIhSaIhEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZNSaIhED2Ev(struct l_struct_class_OC_std_KD__KD_allocator_OC_2*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIhED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*) __ATTRIBUTELIST__((nothrow)) __ATTRIBUTE_WEAK__;
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);
uint8_t* memmove(uint8_t*, uint8_t*, uint64_t);
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static __MSALIGN__(16) struct l_array_32_uint8_t _ZL6in_key __attribute__((aligned(16))) = { "tS\xC8\xCC\xE3\x01\xEE\xC5jk\x84\xDBZ6\xEB\xCE\x94\xBF\xCBL/o\xC5\x9F\x9B\\\xFB\x9C\x36\x63W\xEE" };
static __MSALIGN__(16) struct l_array_64_uint8_t _ZL2in __attribute__((aligned(16)));
static __MSALIGN__(16) struct l_array_64_uint8_t _ZL3out __attribute__((aligned(16)));
static const __MSALIGN__(64) struct l_array_256_uint32_t _ZL10CAST_SBOX1 __attribute__((aligned(64))) = { { 821772500, 2678128395u, 1810681135u, 1059425402, 505495343, 2617265619u, 1610868032u, -811611831, 3218386727u, 2294005173u, -503103344, 2563806837u, 1852023008u, 365126098, -1025022435, 584384398, 677919599, -1065365415, -14452280, 2002735330u, 1136869587u, -550533546, 2289869850u, 2731719981u, 2714362070u, 879511577, 1639411079u, 575934255, 717107937, 2857637483u, 576097850, 2731753936u, 1725645000u, 2810460463u, 5111599, 767152862, 2543075244u, 1251459544u, 1383482551u, 3052681127u, 3089939183u, -682503847, 1878520045u, 1510570527u, 2189125840u, 2431448366u, 582008916, 3163445557u, 1265446783u, 1354458274u, -765048560, 3202711853u, 3073581712u, -382003809, 3029263377u, 1275016285u, -45759936, 2905708351u, -990457810, 1442611557u, -709768531, 2712415662u, 2731849581u, -1046803376, 2283946226u, 208555832, 2766454743u, 1331405426u, 1447828783u, -979610855, 3108627284u, 2957404670u, 2981538698u, -955033379, 1669711173u, 286233437, 1465092821u, 1782121619u, -432195616, 710211251, 980974943, 1651941557u, 430374111, 2051154026u, 704238805, -165996399, 3144820574u, 2857402727u, 948965521, -961214997, 2227686284u, 718756367, 2269778983u, 2731643755u, 718440111, 2857816721u, -678870176, 1113355533u, 2478022182u, 410092745, 1811985197u, 1944238868u, 2696854588u, 1415722873u, 1682284203u, 1060277122, 1998114690u, 1503841958u, 82706478, 2315155686u, 1068173648, 845149890, 2167947013u, 1768146376u, 1993038550u, -728140599, -904393265, 940016341, -939893514, 2328040721u, 904371731, 1205506512u, -200306554, 2816623006u, 825647681, 85914773, 2857843460u, 1249926541u, 1417871568u, 3287612, 3211054559u, 3126306446u, 1975924523u, 1353700161u, 2814456437u, 2438597621u, 1800716203u, 722146342, 2873936343u, 1151126914u, -134483355, 2877670899u, 458611604, 2866078500u, -811287233, 770352098, 2652916994u, -927128148, -354462285, -708993384, -485346894, 718646636, 2504206814u, 2914927912u, -663679127, 2857486607u, 2860018678u, 575749918, 2857478043u, 718488780, 2069512688u, -746783827, 453416197, 1106044049u, 3032691430u, 52586708, -916452660, -835158419, 3211506028u, 1785789304u, 218356169, -723568162, -535796774, 1194783844u, 1523787992u, 3007827094u, 1975193539u, 2555452411u, 1341901877u, 3045838698u, -518059332, 3217423946u, 2802510864u, 2889438986u, 1057244207, 1636348243u, -533104082, 1462225785u, 2632663439u, 481089165, 718503062, 24497053, -962724087, -950311440, -639942440, -334596231, 1195698900u, 2971415156u, -584791138, 2115785917u, -267303687, -769388879, 2524296189u, 2745972565u, -730060881, 1372086093u, 1452307862u, 2780501478u, 1476592880u, -905696015, 18495466, 2378148571u, 901398090, 891748256, -1015329527, 3157290713u, 2560960102u, 1447622437u, -10594659, 216884176, 2086908623u, 1879786977u, -706064143, 2242455666u, 2938092967u, -735885200, 2810645491u, 758861177, 1121993112u, 215018983, 642190776, -125730484, 1196255959u, 2081185372u, -786228903, 941322904, -170724133, 2877523539u, 1848581667u, 2205260958u, 3180453958u, 2589345134u, -600236020, 550028657, 2519456284u, -504981761, 2973870856u, 2093648313u, 443148163, 46942275, 2734146937u, 1117713533u, 1115362972u, 1523183689u, -577827072, 1551984063u } };
static const __MSALIGN__(64) struct l_array_256_uint32_t _ZL10CAST_SBOX2 __attribute__((aligned(64))) = { { 522195092, -284448933, 1776537470u, 960447360, -27144326, -289070982, 1435016340u, 1929119313u, 2913464185u, 1310552629u, -715496498, -570149190, 2579771631u, 1594623892u, 417127293, 2715217907u, 2696228731u, 1508390405u, -300568428, -369108727, -599523194, -275495847, 3129199795u, -524038661, -774225535, 990456497, -107482687, 2783367035u, 21106139, -454561957, 631373633, -511641594, 532942976, 396095098, -746928471, -27774812, 2564721535u, 2011709262u, 2039648873u, 620404603, -518797221, 2898526339u, -682609371, -135634593, 1645490516u, 223693667, 1567101217u, -932789415, 1029951347, -824036160, -724009337, 1550265121u, 119497089, 972513919, 907948164, -454338757, 1613718692u, -700789348, 465323573, 2659255085u, 654439692, 2575596212u, 2699288441u, 3127702412u, 277098644, 624404830, -194023426, 2717858591u, 546110314, 2403699828u, -639589849, 1321679412u, -58175639, 1045293279, -284295032, 895050893, 2319792268u, 494945126, 1914543101u, 2777056443u, -400202957, 2219737618u, 311263384, -19710028, -836236575, 669096869, -710491566, -459844419, -975809059, -345608092, 2005142349u, 2713102337u, 2228954793u, -524982508, 569394103, -439330720, 1425027204u, 108000370, 2736431443u, -623098027, 3043122623u, 1750473702u, 2211081108u, 762237499, -321977893, 2798899386u, 3061857628u, 2943854345u, 867476300, 964413654, 1591880597u, 1594774276u, 2179821409u, 552026980, 3026064248u, -568826981, 2283577634u, 3110545105u, 2152310760u, 582474363, 1582640421u, 1383256631u, 2043843868u, -972191412, 1217180674u, 463797851, 2763038571u, 480777679, 2718707717u, 2289164131u, 3118346187u, 214354409, 200212307, -484358889, 3025414197u, 2674075964u, -297670871, 1847405948u, 1342460550u, 510035443, -214695482, 815934613, 833030224, 1620250387u, 1945732119u, 2703661145u, -328967100, 1388869545u, -838913114, 2687178561u, 2092620194u, 562037615, 1356438536u, -885045151, -1033119899, 1688467115u, 2150901366u, 631725691, -454635012, 549916902, -839862656, 394546491, 837744717, 2114462948u, 751520235, 2221554606u, 2415360136u, -295870218, 2063029875u, 803036379, 2702586305u, 821456707, 3019566164u, 360699898, -276465204, -783098280, -617611938, 2402471449u, 812317050, 49299192, 2570164949u, -1035798001, 2816732080u, -963753722, 3101303564u, 2156015656u, -589368376, -748703375, 143268808, 3200304480u, 1638124008u, 3165189453u, -953159686, 578956953, 2193977524u, -656847223, 2333881532u, 807278310, 658237817, 2969561766u, 1641658566u, 11683945, 3086995007u, 148645947, 1138423386u, -136210536, 1981396783u, 2401016740u, -595183712, 380097457, 2680394679u, 2803068651u, -960707010, 441530178, -278386500, 1375954390u, 761952171, 891809099, 2183123478u, 157052462, -611126533, 1592404427u, 341349109, 2438483839u, 1417898363u, 644327628, 2233032776u, 2353769706u, 2201510100u, 220455161, 1815641738u, 182899273, 2995019788u, -667585763, -592329145, 2890684138u, 1052606899, 588164016, 1681439879u, -256527878, 2405343923u, -65518014, 167996282, 1336969661u, 1688053129u, 2739224926u, 1543734051u, 1046297529, 1138201970u, 2121126012u, 115334942, 1819067631u, 1902159161u, 1941945968u, 2206692869u, 1159982321u } };
static const __MSALIGN__(64) struct l_array_256_uint32_t _ZL10CAST_SBOX3 __attribute__((aligned(64))) = { { 2381300288u, 637164959, -342868545, -401553145, 1197506559u, 916448331, 2350892612u, 2932787856u, 3199334847u, -285488406, -389080752, 1373570990u, 2450425862u, -257096376, -516125309, 2456817877u, 286293407, 124026297, 3001279700u, 1028597854, 3115296800u, -86080800, 2691114635u, 2188540206u, 1430237888u, 1218109995u, -722495596, 308166588, 570424558, 2187009021u, 2455094765u, 307733056, 1310360322u, 3135275007u, 1384269543u, 2388071438u, 863238079, 2359263624u, 2801553128u, -914180699, 2831162807u, 1470087780u, 1728663345u, -222478497, 1090516929u, 532123132, 2389430977u, 1132193179u, 2578464191u, 3051079243u, 1670234342u, 1434557849u, 2711078940u, 1241591150u, -980923864, -859607183, 3091448339u, 1812415473u, 2198440252u, 267246943, 796911696, -675250306, 38830015, 1526438404u, 2806502096u, 374413614, 2943401790u, 1489179520u, 1603809326u, 1920779204u, 168801282, 260042626, 2358705581u, 1563175598u, 2397674057u, 1356499128u, 2217211040u, 514611088, 2037363785u, 2186468373u, -272794213, 2792511869u, 2913485016u, 1173701892u, -94538749, -398540027, 1334932762u, 2455136706u, 602925377, 2835607854u, 1613172210u, 41346230, 2499634548u, 2457437618u, 2188827595u, 41386358, -122711667, 1313404830u, 2405527007u, -492993522, 2217704835u, 873260488, 2528884354u, 2478092616u, -282051413, 2555359016u, 2006953883u, 2463913485u, 575479328, 2218240648u, 2099895446u, 660001756, 2341502190u, 3038761536u, -406815517, -446253919, -1008115362, 1022894237, 1620365795u, -845372607, 1551255054u, 15374395, -724141951, -45656276, -143856167, 3181912732u, 310226346, 1133119310u, 530038928, 136043402, 2476768958u, 3107506709u, 2544909567u, 1036173560, 2367337196u, 1681395281u, 1758231547u, -653318264, 306774401, 1575354324u, -578881430, 1990386196u, 3114533736u, 2455606671u, 1262092282u, 3124342505u, 2768229131u, -84438213, 1833535011u, 423410938, 660763973, 2187129978u, 1639812000u, -786545967, -827521804, 310289298, 272797111, 2188552562u, 2456863912u, 310240523, 677093832, 1013118031, 901835429, -402271695, 1116285435u, 3036471170u, 1337354835u, 243122523, 520626091, 277223598, -50526099, -100718455, 1766575121u, 594173102, 316590669, 742362309, -758108674, -118531946, -456174886, 2501204839u, 1229605004u, 3115755532u, 1552908988u, 2312334149u, 979407927, -335492695, 1148277331u, 176638793, -680281024, 2083809052u, 40992502, 1340822838u, 2731552767u, -759209788, -734067776, 1354035053u, 122129617, 7215240, 2732932949u, 3118912700u, 2718203926u, 2539075635u, -685736601, -569405635, 1928887091u, 2882293555u, 1988674909u, 2063640240u, 2491088897u, 1459647954u, -105150216, 2302804382u, 1113892351u, 2237858528u, 1927010603u, -292086935, 1856122846u, 1594404395u, 2944033133u, -439777433, -819991598, 1643104450u, -240376463, -863880766, 1730235576u, 2984608721u, 3084664418u, 2131803598u, -116761544, 267404349, 1617849798u, 1616132681u, 1462223176u, 736725533, 2327058232u, 551665188, 2945899023u, 1749386277u, 2575514597u, 1611482493u, 674206544, 2201269090u, -652406496, 728599968, 1680547377u, 2620414464u, 1388111496u, 453204106, -138743851, 1094905244u, 2754698257u, 2201108165u, -537967050, 2704524545u, -372026596, -298502269 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t _ZL10CAST_SBOX4 __attribute__((aligned(64))) = { { 2645754912u, 532081118, 2814278639u, -764173672, 1246723035u, 1689095255u, 2236679235u, -100528431, 2116582143u, -435177885, 157234593, 2045505824u, -49963709, 1687664561u, -211542173, 605965023, 672431967, 1336064205u, -918355904, 214114848, -36500688, -1062914225, 489488601, 605322005, -296939238, 264917351, 1912574028u, 756637694, 436560991, 202637054, 135989450, 85393697, 2152923392u, -398565634, 2895836408u, 2145855233u, -759632289, 115294817, 3147733898u, 1922296357u, -830144545, -177108991, 1037454084, 2725193275u, 2127856640u, 1417604070u, 1148013728u, 1827919605u, 642362335, 2929772533u, 909348033, 1346338451u, -747167647, 297154785, 1917849091u, -133254469, 2883604526u, -326273058, 1469521537u, -514889914, -919383040, 1763717519u, 136166297, -3996507, 1295325189u, 2134727907u, 2798151366u, 1566297257u, -622039062, 2677174161u, 2672173615u, 965822077, 2780786062u, 289653839, 1133871874u, -803123477, 35685304, 1068898316, 418943774, 672553190, 642281022, 2346158704u, 1954014401u, 3037126780u, -215152091, 2030668546u, -454378623, 672283427, 1776201016u, 359975446, -544793758, 555499703, 2769985273u, 1324923, 69110472, 152125443, 3176785106u, -472820011, 1340634837u, 798073664, 1434183902u, 15393959, 216384236, 1303690150u, -413745665, -583833172, -333991883, 106373927, 2578434224u, 1455997841u, 1801814300u, 1578393881u, 1854262133u, 3188178946u, -1036888713, 2302670060u, 1539295533u, -789824731, 3078625975u, 2372746020u, 549938159, -1016683012, 2620926080u, 181285381, 2865321098u, -324937785, 68876850, 488006234, 1728155692u, 2608167508u, 836007927, 2435231793u, 919367643, -955544762, -639210936, 1457871481u, 40520939, 1380155135u, 797931188, 234455205, 2255801827u, -304478997, 397000196, 739833055, 3077865373u, 2871719860u, -272413408, 772369276, 390177364, -441016267, 557662966, 740064294, 1640166671u, 1699928825u, -759025160, 622006121, -669614174, 68743880, 1742502, 219489963, 1664179233u, 1577743084u, 1236991741u, 410585305, 2366487942u, 823226535, 1050371084, -868347689, -708127818, 212779912, -147848735, 1819446015u, 1911218849u, 530248558, -808726225, -1042381801, 2886188651u, -884694568, 2342195030u, 20547779, 2982490058u, 3032363469u, -663214074, 312714466, 1870521650u, 1493008054u, -803280640, 615382978, -191295547, 2534517445u, 1932181, 2196105170u, 278426614, 6369430, -1020422879, 2913018367u, 697336853, 2143000447u, 2946413531u, 701099306, 1558357093u, 2805003052u, -794148888, 2321334417u, -727831321, 216290473, -703935098, 23009561, 1996984579u, -559924490, 2024298078u, -555526433, 569400510, 2339758983u, 3016033873u, 3097871343u, -655444270, -450642313, -1038793431, 795471839, 2951117563u, -193936206, -203363493, -691234698, 971261452, 534414648, 428311343, -905940121, 2844869880u, 694888862, 1227866773u, 2456207019u, 3043454569u, 2614353370u, -545389265, -618303460, 459166190, -162323226, 1794958188u, 51825668, 2252611902u, 3084671440u, 2036672799u, -858325693, 1099053433u, 2469121526u, 3059204941u, 1323291266u, 2061838604u, 1018778475, 2233344254u, 2553501054u, 334295216, -738217102, 1065731521, 183467730 } };
const __MSALIGN__(64) struct l_array_256_uint32_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5 __attribute__((aligned(64))) __attribute__((common)) = { { 2127105028u, 745436345, 2601412319u, 2788391185u, 3093987327u, 500390133, 1155374404u, 389092991, 150729210, -403369524, -771417344, 1935325696u, 716645080, 946045387, 2901812282u, 1774124410u, -425531521, -255385395, -1001830378, -856309376, 948246080, 363898952, -427091765, 1286266623u, 1598556673u, 68334250, 630723836, 1104211938u, 1312863373u, 613332731, 2377784574u, 1101634306u, 441780740, 3129959883u, 1917973735u, 2510624549u, -1056510761, 2544211978u, -986072662, 1299840618u, -218892445, 1756332096u, -317940138, 297047435, -504669560, 2265573040u, -673156778, 1311375015u, 1667687725u, 47300608, -995324411, 2474112369u, 201668394, 1468347890u, 576830978, -700276535, -552361344, 1958042578u, 1747032512u, -735975956, 1408974056u, -928125517, 682131401, 1033214337, 1545599232u, -29830247, 206503691, 103024618, 2855227313u, 1337551222u, 2428998917u, 2963842932u, -279600641, -442719550, 2796956967u, -429243805, -547028961, 247794022, -539142724, 702416469, 2434691994u, 397379957, 851939612, 2314769512u, 218229120, 1380406772u, 62274761, 214451378, 3170103466u, 2276210409u, -449154010, 28563499, 446592073, 1693330814u, -841240102, 29968656, 3093872512u, 220656637, 2470637031u, 77972100, 1667708854u, 1358280214u, -230201629, 2395616961u, 325977563, -17726575, -74941897, -689440812, -939819575, 811859167, 3069544926u, -332840486, 652502677, 3075892249u, -162205755, -796043081, 1217549313u, -1044722817, -436251377, 3053989961u, 1538642152u, 2279026266u, 2875879137u, 574252750, -970198067, 2651358713u, 1758150215u, 141295887, 2719868960u, -779392546, -201959561, -100482058, 1082055363u, -877406896, 395511885, 2966884026u, 179534037, -648938740, -556279210, 1092926436u, 2496269142u, 257381841, -522066578, 1636087230u, 1477059743u, 2499234752u, -483948402, 2675660129u, -1008991616, 90732309, 1684827095u, 1150307763u, 1723134115u, -1057921910, 1769919919u, 1240018934u, 815675215, 750138730, 2239792499u, 1234303040u, 1995484674u, 138143821, 675421338, 1145607174u, 1936608440u, -1056364272, 2345230278u, 2105974004u, 323969391, 779555213, 3004902369u, 2861610098u, 1017501463, 2098600890u, 2628620304u, 2940611490u, 2682542546u, 1171473753u, -638395885, -607759225, -203097778, 393037935, 159126506, 1662887367u, 1147106178u, 391545844, -842634601, 1891500680u, 3016609650u, 1851642611u, 546529401, 1167818917u, 3194020571u, 2848076033u, -341495460, 575554290, 475796850, -160294100, 450035699, 2351251534u, 844027695, 1080539133u, 86184846, 1554234488u, -602941842, 1972511363u, 2018339607u, 1491841390u, 1141460869u, 1061690759, -50418053, 2008416118u, 2351104703u, 2868147542u, 1598468138u, 722020353, 1027143159, 212344630, 1387219594u, 1725294528u, -549779340, 2500153616u, 458938280, -165751379, 1828119673u, 544571780, -791741851, 2297937496u, 1241802790u, 267843827, 2694610800u, 1397140384u, 1558801448u, -512299613, 1806446719u, 929573330, 2234912681u, 400817706, 616011623, -173446368, -691198571, 1761550015u, 1968522284u, -241236290, -102734438, -289847011, 872482584, 3140537016u, -400359915, 2287405443u, 1963876937u, -631079339, 1584857000u, 2975024454u, 1833426440u, -269883436 } };
const __MSALIGN__(64) struct l_array_256_uint32_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6 __attribute__((aligned(64))) __attribute__((common)) = { { -151351395, 749497569, 1285769319u, -499941508, 2514159847u, 23610292, -319988548, 844452780, 3214870880u, -543038739, 2213566365u, 1676510905u, 448177848, -564216263, -208668878, 2307502392u, 871450977, -1072089155, -184105254, -463315330, 2735270553u, 1310974780u, 2043402188u, 1218528103u, 2736035353u, -20362283, 2702448458u, -358606746, 2693061421u, 162023535, 2827510090u, 687910808, 23484817, -510056349, -923595680, 779677500, -791340750, -821040108, -137754670, -794288014, -46065282, 2466621104u, -395582502, 1958663117u, 925738300, 1283408968u, -625617856, 1840910019u, 137959847, 2679828185u, 1239142320u, 1315376211u, 1547541505u, 1690155329u, 739140458, 3128809933u, -361794680, -418658462, 905091803, 1548541325u, -254505588, 3095483362u, 144808038, 451078856, 676114313, 2861728291u, 2469707347u, 993665471, 373509091, 2599041286u, -269958290, -124727847, 2149739950u, -1019173725, -545350647, 2794760199u, 1534877388u, 572371878, 2590613551u, 1753320020u, -827184785, 1405125690u, -24562091, 633333386, 3026356924u, -819843393, 632057672, 2846462855u, 1404951397u, -412091417, -379060872, 195638627, 2385783745u, -392094743, 1233155085u, -938967556, 2380578713u, 2702246304u, 2144565621u, -631626048, -400582321, 2502479241u, -46948371, 3094885567u, 1594115437u, 572884632, -909850565, 767645374, 1331858858u, 1475698373u, -501085506, -762220865, 1321687957u, 619889600, 1121017241u, -854753376, 2070816767u, 2833025776u, 1933951238u, -199351505, 890643334, -420837082, 859025556, 360630002, 925594799, 1764062180u, -374745016, -216661367, 979562269, 2810700344u, -207227274, 1949714515u, 546639971, 1165388173u, 3069891591u, 1495988560u, 922170659, 1291546247u, 2107952832u, 1813327274u, -888957272, -988938659, -53016661, 153207855, 2313154747u, 1608695416u, 1150242611u, 1967526857u, 721801357, 1220138373u, -603679679, -938897509, 2112743302u, -1013304461, 1111556101u, 1778980689u, 250857638, 2298507990u, 673216130, 2846488510u, 3207751581u, -732210315, 3008625920u, -877599912, 2198807050u, 529510932, -747450616, -868464109, 2364944742u, 102533054, 2294910856u, 1617093527u, 1204784762u, 3066581635u, 1019391227, 1069574518, 1317995090u, 1691889997u, -633835293, 510022745, -1056372496, 1362108837u, 1817929911u, 2184153760u, 805817662, 1953603311u, -595122559, 120799444, 2118332377u, 207536705, 2282301548u, -174925679, 145305846, 2508124933u, 3086745533u, -1033442961, 1877257368u, 2977164480u, 3160454186u, 2503252186u, -73290222, 759945014, 254147243, 2767453419u, -493448925, 629083197, 2471014217u, 907280572, -394170550, 940896768, 2751021123u, 2625262786u, 3161476951u, -633214983, -1034235078, 1425318020u, 2977912069u, 1496677566u, -306375224, 2140652971u, 3126511541u, 3069632175u, 977771578, 1392695845u, 1698528874u, 1411812681u, 1369733098u, 1343739227u, -674079352, 1142123638u, 67414216, 3102056737u, 3088749194u, 1626167401u, 2546293654u, -353593061, 697522451, 33404913, 143560186, 2595682037u, 994885535, 1247667115u, -435872459, 2699155541u, -747942671, -180032021, 2968073508u, 3199963069u, 2732024527u, 1237921620u, 951448369, 1898488916u, 1211705605u, 2790989240u, 2233243581u, -696922321 } };
const __MSALIGN__(64) struct l_array_256_uint32_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7 __attribute__((aligned(64))) __attribute__((common)) = { { 2246066201u, 858518887, 1714274303u, -809085293, 713916271, 2879113490u, -564131679, 539548191, 36158695, 1298409750u, 419087104, 1358007170u, 749914897, 2989680476u, 1261868530u, 2995193822u, 2690628854u, -851344919, -514842356, -498142787, 2976433025u, -35330167, 1551479000u, 512490819, 1296650241u, 951993153, 2436689437u, 2460458047u, 144139966, 3136204276u, 310820559, 3068840729u, 643875328, 1969602020u, 1680088954u, 2185813161u, -1011634842, 672358534, 198762408, 896343282, 276269502, 3014846926u, 84060815, 197145886, 376173866, -351076478, -481793775, -749898474, 1316698879u, 1598252827u, 2633424951u, 1233235075u, 859989710, 2358460855u, -791128896, -885363576, 1203513385u, 1193654839u, 2792018475u, 2060853022u, 207403770, 1144516871u, 3068631394u, 1121114134u, 177607304, -509230994, 326409831, 1929119770u, 2983279095u, -111659195, -820388008, 3200513878u, -1066485200, 119610148, 1170376745u, -916573825, 3163473169u, 951863017, -957941228, 3135789130u, 2907618374u, 1183797387u, 2015970143u, -249292741, 2182986399u, 2952138740u, -366195091, 384012900, 2454997643u, 10178499, 2879818989u, 2596892536u, 111523738, 2995089006u, 451689641, 3196290696u, 235406569, 1441906262u, -404408773, 3013735005u, -136397947, 1644036924u, 376726067, 1006849064, -630387596, 2041234796u, 1021632941, 1374734338u, 2566452058u, 371631263, -287823063, 490221539, 206551450, 3140638584u, 1053219195, 1853335209u, -882537636, -732811065, 735133835, 1623211703u, 3104214392u, 2738312436u, -198129539, -928574718, 3110964274u, -338368578, 3196820781u, 2038037254u, -417180920, 2339753847u, 300912036, -528234408, 2372630639u, 1516443558u, -94570592, 1574567987u, -225525840, -172375280, 2699739776u, 146372218, 2748961456u, 2043888151u, 35287437, 2596680554u, 655490400, 1132482787u, 110692520, 1031794116, 2188192751u, 1324057718u, 1217253157u, 919197030, 686247489, -1033827638, 1028237775, 3135486431u, 3059715558u, 2460921700u, 986174950, 2661811465u, -232062595, 2752986992u, -585230653, 367056889, 1353824391u, 731860949, 1650113154u, 1778481506u, 784341916, 357075625, -686364864, 1074092588u, 2480052770u, -483541094, 92751289, 877911070, -694605458, 1231880047u, 480201094, -538776313, 3094495953u, 434011822, 87971354, 363687820, 1717726236u, 1901380172u, -368563414, 2481662265u, 400339184, 1490350766u, 2661455099u, 1389319756u, 2558787174u, 784598401, 1983468483u, 30828846, -744439544, 2716276238u, -453845082, 1765724805u, 1955612312u, 1277890269u, 1333098070u, 1564029816u, 2704417615u, 1026694237, -1007296108, 1260819201u, -945880529, 1016692350, 1582273796u, 1073413053, 1995943182u, 694588404, 1025494639, -971094594, -743068876, -148112969, 453260480, 1316140391u, 1435673405u, 3038941953u, -808277889, 1622062951u, 403978347, 817677117, 950059133, -48888078, -1016901221, 1486738320u, 1417279718u, 481875527, 2549965225u, -361276940, 760697757, 1452955855u, -397515859, 1177426808u, 1702951038u, -209618668, 2447005172u, 1084371187u, -778531019, 3068336338u, 1073369276, 1027665953, -1010778706, 1230553676u, 1368340146u, 2226246512u, 267243139, 2274220762u, -224233017, 2497715176u, 2423353163u, 2504755875u } };
const __MSALIGN__(64) struct l_array_256_uint32_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8 __attribute__((aligned(64))) __attribute__((common)) = { { -501862387, 3151888380u, 2817252029u, 895778965, 2005530807u, -423554533, 237245952, 86829237, 296341424, -443207919, -320366326, 2475086196u, 709006108, 1994621201u, 2972577594u, 937287164, -560275791, 168608556, 3189338153u, 2225080640u, 3139713551u, 3033610191u, 3025041904u, 77524477, 185966941, 1208824168u, 2344345178u, 1721625922u, -940775375, 1066374631, 1927223579u, 1971335949u, 2483503697u, 1551748602u, 2881383779u, 2856329572u, 3003241482u, 48746954, 1398218158u, 2050065058u, 313056748, -39177379, 393167848, 1912293076u, 940740642, -829121836, 3091687853u, 2522601570u, 2197016661u, 1727764327u, 364383054, 492521376, 1291706479u, -1030830920, 1474851438u, 1685747964u, 2575719748u, 1619776915u, 1814040067u, 970743798, 1561002147u, 2925768690u, 2123093554u, 1880132620u, 3151188041u, 697884420, 2550985770u, 2607674513u, 2659114323u, 110200136, 1489731079u, 997519150, 1378877361u, -767096628, 478029773, 2766872923u, 1022481122, 431258168, 1112503832u, 897933369, 2635587303u, 669726182, -911214981, 918222264, 163866573, -1047981903, -518144133, 114105080, 1903216136u, 761148244, -723629734, 1690750982u, 3166750252u, 1037045171, 1888456500u, 2010454850u, 642736655, 616092351, 365016990, 1185228132u, -120068786, 1043824992, 2023083429u, 2241598885u, -431646840, -1015298209, -620250612, 108438443, 2132974366u, 830746235, 606445527, -121703310, 2204105912u, 1844756978u, 2532684181u, -49614596, 2969441100u, -498045635, 1335562986u, -233442779, 2720232303u, 2679424040u, 634407289, 885462008, -1000242809, -361075048, 2094100220u, 339117932, -246136569, 3202280980u, 1458155303u, 2689246273u, 1022871705, 2464987878u, -580451987, 353796843, 2822958815u, -38117196, -242189451, 551748367, 618185374, -516331717, -274317384, 1904685140u, 3069366075u, 2670879810u, -887774004, 2954511620u, -236683891, 2219449317u, 3135758300u, 1120655984u, -847401462, 1474845562u, -717268234, 550456716, -828058584, 2043752612u, 881257467, 869518812, 2005220179u, 938474677, -989427848, -444550170, 1315485940u, -976702594, 226533026, 965733244, 321539988, 1136104718u, 804158748, 573969341, -586757470, 937399083, -1004240247, 2901666755u, 1461057207u, -281773859, -228105873, -1052193820, 2421326174u, 1581322155u, 3028952165u, 786071460, -394575644, -376528764, 1485433313u, -271347460, -586689701, -616016236, 953673138, 1467089153u, 1930354364u, 1533292819u, 2492563023u, 1346121658u, 1685000834u, 1965281866u, -529033579, -104760689, 2052792609u, -779634538, 690371149, 3125873887u, 2180283551u, 2903598061u, -361014939, 436236910, 289419410, 14314871, 1242357089u, 2904507907u, 1616633776u, 2666382180u, 585885352, -823668086, 2699507360u, 1432659641u, 277164553, -940863689, 770115018, 2303809295u, -553024981, 3177781868u, 2853364978u, 2269453327u, -520707462, 987383833, 1290892879u, 225909803, 1741533526u, 890078084, 1496906255u, 1111072499u, 916028167, 243534141, 1252605537u, 2204162171u, 531204876, 290011180, -378133083, 102027703, 237315147, 209093447, 1486785922u, 220223953, 2758195998u, -119928190, 82940208, 3127791296u, 2569425252u, 518464269, 1353887104u, -353474559, 2377294467u, -359926370 } };
static const struct l_array_23_uint8_t _OC_str = { "vector::_M_fill_insert" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t* llvm_select_pu64(bool condition, uint64_t* iftrue, uint64_t* ifnot) {
  uint64_t* r;
  r = condition ? iftrue : ifnot;
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
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_udiv_u64(uint64_t a, uint64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint64_t llvm_sdiv_u64(int64_t a, int64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint32_t llvm_urem_u32(uint32_t a, uint32_t b) {
  uint32_t r = a % b;
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
static __forceinline uint64_t llvm_neg_u64(uint64_t a) {
  uint64_t r = -a;
  return r;
}


/* Function Bodies */

void _Z9encrypt_nRSt6vectorIjSaIjEERS_IhSaIhEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector* _1, struct l_struct_class_OC_std_KD__KD_vector_OC_0* _2, uint8_t* _3, uint8_t* _4) {
  uint32_t _5;
  uint32_t _6;
  uint32_t* _7;
  uint32_t _8;
  uint8_t* _9;
  uint8_t _10;
  uint32_t _11;
  uint64_t _12;
  uint32_t _13;
  uint64_t _14;
  uint64_t _15;
  uint32_t _16;
  uint64_t _17;
  uint32_t _18;
  uint64_t _19;
  uint32_t _20;
  uint64_t _21;
  uint32_t _22;
  uint64_t _23;
  uint32_t _24;
  uint64_t _25;
  uint32_t _26;
  uint64_t _27;
  uint32_t _28;
  uint64_t _29;
  uint32_t _30;
  uint64_t _31;
  uint32_t _32;
  uint64_t _33;
  uint32_t _34;
  uint64_t _35;
  uint32_t _36;
  uint64_t _37;
  uint32_t _38;
  uint64_t _39;
  uint32_t _40;
  uint64_t _41;
  uint32_t _42;
  uint64_t _43;
  uint32_t _44;
  uint64_t _45;
  uint32_t _46;
  uint64_t _47;
  uint64_t _48;
  uint32_t _49;
  uint64_t _50;
  uint32_t _51;
  uint64_t _52;
  uint32_t _53;
  uint64_t _54;
  uint32_t _55;
  uint64_t _56;
  uint32_t _57;
  uint64_t _58;
  uint32_t _59;
  uint64_t _60;
  uint32_t _61;
  uint64_t _62;
  uint32_t _63;
  uint64_t _64;
  uint32_t _65;
  uint64_t _66;
  uint32_t _67;
  uint64_t _68;
  uint32_t _69;
  uint64_t _70;
  uint32_t _71;
  uint64_t _72;
  uint32_t _73;
  uint64_t _74;
  uint32_t _75;
  uint64_t _76;
  uint32_t _77;
  uint64_t _78;
  uint32_t _79;
  uint64_t _80;
  uint64_t _81;
  uint32_t _82;
  uint64_t _83;
  uint32_t _84;
  uint64_t _85;
  uint32_t _86;
  uint64_t _87;
  uint32_t _88;
  uint64_t _89;
  uint32_t _90;
  uint64_t _91;
  uint32_t _92;
  uint64_t _93;
  uint32_t _94;
  uint64_t _95;
  uint32_t _96;
  uint64_t _97;
  uint32_t _98;
  uint64_t _99;
  uint32_t _100;
  uint64_t _101;
  uint32_t _102;
  uint64_t _103;
  uint32_t _104;
  uint64_t _105;
  uint32_t _106;
  uint64_t _107;
  uint32_t _108;
  uint64_t _109;
  uint32_t _110;
  uint64_t _111;
  uint32_t _112;
  uint64_t _113;
  uint64_t _114;
  uint32_t _115;
  uint64_t _116;
  uint32_t _117;
  uint64_t _118;
  uint32_t _119;
  uint64_t _120;
  uint32_t _121;
  uint64_t _122;
  uint32_t _123;
  uint64_t _124;
  uint32_t _125;
  uint64_t _126;
  uint32_t _127;
  uint64_t _128;
  uint32_t _129;
  uint64_t _130;
  uint32_t _131;
  uint64_t _132;
  uint32_t _133;
  uint64_t _134;
  uint32_t _135;
  uint64_t _136;
  uint32_t _137;
  uint64_t _138;
  uint32_t _139;
  uint64_t _140;
  uint32_t _141;
  uint64_t _142;
  uint32_t _143;
  uint64_t _144;
  uint32_t _145;
  uint32_t _146;
  uint32_t* _147;
  uint32_t _148;
  uint8_t* _149;
  uint8_t _150;
  uint32_t _151;
  uint64_t _152;
  uint32_t _153;
  uint32_t _154;
  uint32_t _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t* _159;
  uint32_t _160;
  uint8_t* _161;
  uint8_t _162;
  uint32_t _163;
  uint64_t _164;
  uint32_t _165;
  uint32_t _166;
  uint32_t _167;
  uint32_t _168;
  uint32_t _169;
  uint32_t _170;
  uint32_t* _171;
  uint32_t _172;
  uint8_t* _173;
  uint8_t _174;
  uint32_t _175;
  uint64_t _176;
  uint32_t _177;
  uint32_t _178;
  uint32_t _179;
  uint32_t _180;
  uint32_t _181;
  uint32_t _182;
  uint32_t* _183;
  uint32_t _184;
  uint8_t* _185;
  uint8_t _186;
  uint32_t _187;
  uint64_t _188;
  uint32_t _189;
  uint32_t _190;
  uint32_t _191;
  uint32_t _192;
  uint32_t _193;
  uint32_t _194;
  uint32_t* _195;
  uint32_t _196;
  uint8_t* _197;
  uint8_t _198;
  uint32_t _199;
  uint64_t _200;
  uint32_t _201;
  uint32_t _202;
  uint32_t _203;
  uint32_t _204;
  uint32_t _205;
  uint32_t _206;
  uint32_t* _207;
  uint32_t _208;
  uint8_t* _209;
  uint8_t _210;
  uint32_t _211;
  uint64_t _212;
  uint32_t _213;
  uint32_t _214;
  uint32_t _215;
  uint32_t _216;
  uint32_t _217;
  uint32_t _218;
  uint32_t* _219;
  uint32_t _220;
  uint8_t* _221;
  uint8_t _222;
  uint32_t _223;
  uint64_t _224;
  uint32_t _225;
  uint32_t _226;
  uint32_t _227;
  uint32_t _228;
  uint32_t _229;
  uint32_t _230;
  uint32_t* _231;
  uint32_t _232;
  uint8_t* _233;
  uint8_t _234;
  uint32_t _235;
  uint64_t _236;
  uint32_t _237;
  uint32_t _238;
  uint32_t _239;
  uint32_t _240;
  uint32_t _241;
  uint32_t _242;
  uint32_t* _243;
  uint32_t _244;
  uint8_t* _245;
  uint8_t _246;
  uint32_t _247;
  uint64_t _248;
  uint32_t _249;
  uint32_t _250;
  uint32_t _251;
  uint32_t _252;
  uint32_t _253;
  uint32_t _254;
  uint32_t* _255;
  uint32_t _256;
  uint8_t* _257;
  uint8_t _258;
  uint32_t _259;
  uint64_t _260;
  uint32_t _261;
  uint32_t _262;
  uint32_t _263;
  uint32_t _264;
  uint32_t _265;
  uint32_t _266;
  uint32_t* _267;
  uint32_t _268;
  uint8_t* _269;
  uint8_t _270;
  uint32_t _271;
  uint64_t _272;
  uint32_t _273;
  uint32_t _274;
  uint32_t _275;
  uint32_t _276;
  uint32_t _277;
  uint32_t _278;
  uint32_t* _279;
  uint32_t _280;
  uint8_t* _281;
  uint8_t _282;
  uint32_t _283;
  uint64_t _284;
  uint32_t _285;
  uint32_t _286;
  uint32_t _287;
  uint32_t _288;
  uint32_t _289;
  uint32_t _290;
  uint32_t* _291;
  uint32_t _292;
  uint8_t* _293;
  uint8_t _294;
  uint32_t _295;
  uint64_t _296;
  uint32_t _297;
  uint32_t _298;
  uint32_t _299;
  uint32_t _300;
  uint32_t _301;
  uint32_t _302;
  uint32_t* _303;
  uint32_t _304;
  uint8_t* _305;
  uint8_t _306;
  uint32_t _307;
  uint64_t _308;
  uint32_t _309;
  uint32_t _310;
  uint32_t _311;
  uint32_t _312;
  uint32_t _313;
  uint32_t _314;
  uint32_t* _315;
  uint32_t _316;
  uint8_t* _317;
  uint8_t _318;
  uint32_t _319;
  uint64_t _320;
  uint32_t _321;
  uint32_t _322;
  uint32_t _323;
  uint32_t _324;
  uint32_t _325;

  _5 = *(((uint32_t*)_3));
  _6 = *(((uint32_t*)((&_3[((int64_t)4)]))));
  _7 = _ZNSt6vectorIjSaIjEEixEm(_1, 0);
  _8 = *_7;
  _9 = _ZNSt6vectorIhSaIhEEixEm(_2, 0);
  _10 = *_9;
  _11 = llvm_add_u32(_8, _6);
  _12 = llvm_urem_u64((((uint64_t)(uint8_t)_10)), 32);
  _13 = (_11 << (((uint32_t)_12))) | (llvm_lshr_u32(_11, (((uint32_t)(llvm_sub_u64(32, _12))))));
  _14 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_13, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))));
  _15 = llvm_srem_u64(_14, 16);
  _16 = *((&_ZL10CAST_SBOX1.array[((int64_t)_15)]));
  _17 = llvm_add_u64(_15, 16);
  _18 = *((&_ZL10CAST_SBOX1.array[((int64_t)_17)]));
  _19 = llvm_add_u64(_17, 16);
  _20 = *((&_ZL10CAST_SBOX1.array[((int64_t)_19)]));
  _21 = llvm_add_u64(_19, 16);
  _22 = *((&_ZL10CAST_SBOX1.array[((int64_t)_21)]));
  _23 = llvm_add_u64(_21, 16);
  _24 = *((&_ZL10CAST_SBOX1.array[((int64_t)_23)]));
  _25 = llvm_add_u64(_23, 16);
  _26 = *((&_ZL10CAST_SBOX1.array[((int64_t)_25)]));
  _27 = llvm_add_u64(_25, 16);
  _28 = *((&_ZL10CAST_SBOX1.array[((int64_t)_27)]));
  _29 = llvm_add_u64(_27, 16);
  _30 = *((&_ZL10CAST_SBOX1.array[((int64_t)_29)]));
  _31 = llvm_add_u64(_29, 16);
  _32 = *((&_ZL10CAST_SBOX1.array[((int64_t)_31)]));
  _33 = llvm_add_u64(_31, 16);
  _34 = *((&_ZL10CAST_SBOX1.array[((int64_t)_33)]));
  _35 = llvm_add_u64(_33, 16);
  _36 = *((&_ZL10CAST_SBOX1.array[((int64_t)_35)]));
  _37 = llvm_add_u64(_35, 16);
  _38 = *((&_ZL10CAST_SBOX1.array[((int64_t)_37)]));
  _39 = llvm_add_u64(_37, 16);
  _40 = *((&_ZL10CAST_SBOX1.array[((int64_t)_39)]));
  _41 = llvm_add_u64(_39, 16);
  _42 = *((&_ZL10CAST_SBOX1.array[((int64_t)_41)]));
  _43 = llvm_add_u64(_41, 16);
  _44 = *((&_ZL10CAST_SBOX1.array[((int64_t)_43)]));
  _45 = llvm_add_u64(_43, 16);
  _46 = *((&_ZL10CAST_SBOX1.array[((int64_t)_45)]));
  _47 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_13, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))));
  _48 = llvm_srem_u64(_47, 16);
  _49 = *((&_ZL10CAST_SBOX2.array[((int64_t)_48)]));
  _50 = llvm_add_u64(_48, 16);
  _51 = *((&_ZL10CAST_SBOX2.array[((int64_t)_50)]));
  _52 = llvm_add_u64(_50, 16);
  _53 = *((&_ZL10CAST_SBOX2.array[((int64_t)_52)]));
  _54 = llvm_add_u64(_52, 16);
  _55 = *((&_ZL10CAST_SBOX2.array[((int64_t)_54)]));
  _56 = llvm_add_u64(_54, 16);
  _57 = *((&_ZL10CAST_SBOX2.array[((int64_t)_56)]));
  _58 = llvm_add_u64(_56, 16);
  _59 = *((&_ZL10CAST_SBOX2.array[((int64_t)_58)]));
  _60 = llvm_add_u64(_58, 16);
  _61 = *((&_ZL10CAST_SBOX2.array[((int64_t)_60)]));
  _62 = llvm_add_u64(_60, 16);
  _63 = *((&_ZL10CAST_SBOX2.array[((int64_t)_62)]));
  _64 = llvm_add_u64(_62, 16);
  _65 = *((&_ZL10CAST_SBOX2.array[((int64_t)_64)]));
  _66 = llvm_add_u64(_64, 16);
  _67 = *((&_ZL10CAST_SBOX2.array[((int64_t)_66)]));
  _68 = llvm_add_u64(_66, 16);
  _69 = *((&_ZL10CAST_SBOX2.array[((int64_t)_68)]));
  _70 = llvm_add_u64(_68, 16);
  _71 = *((&_ZL10CAST_SBOX2.array[((int64_t)_70)]));
  _72 = llvm_add_u64(_70, 16);
  _73 = *((&_ZL10CAST_SBOX2.array[((int64_t)_72)]));
  _74 = llvm_add_u64(_72, 16);
  _75 = *((&_ZL10CAST_SBOX2.array[((int64_t)_74)]));
  _76 = llvm_add_u64(_74, 16);
  _77 = *((&_ZL10CAST_SBOX2.array[((int64_t)_76)]));
  _78 = llvm_add_u64(_76, 16);
  _79 = *((&_ZL10CAST_SBOX2.array[((int64_t)_78)]));
  _80 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_13, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))));
  _81 = llvm_srem_u64(_80, 16);
  _82 = *((&_ZL10CAST_SBOX3.array[((int64_t)_81)]));
  _83 = llvm_add_u64(_81, 16);
  _84 = *((&_ZL10CAST_SBOX3.array[((int64_t)_83)]));
  _85 = llvm_add_u64(_83, 16);
  _86 = *((&_ZL10CAST_SBOX3.array[((int64_t)_85)]));
  _87 = llvm_add_u64(_85, 16);
  _88 = *((&_ZL10CAST_SBOX3.array[((int64_t)_87)]));
  _89 = llvm_add_u64(_87, 16);
  _90 = *((&_ZL10CAST_SBOX3.array[((int64_t)_89)]));
  _91 = llvm_add_u64(_89, 16);
  _92 = *((&_ZL10CAST_SBOX3.array[((int64_t)_91)]));
  _93 = llvm_add_u64(_91, 16);
  _94 = *((&_ZL10CAST_SBOX3.array[((int64_t)_93)]));
  _95 = llvm_add_u64(_93, 16);
  _96 = *((&_ZL10CAST_SBOX3.array[((int64_t)_95)]));
  _97 = llvm_add_u64(_95, 16);
  _98 = *((&_ZL10CAST_SBOX3.array[((int64_t)_97)]));
  _99 = llvm_add_u64(_97, 16);
  _100 = *((&_ZL10CAST_SBOX3.array[((int64_t)_99)]));
  _101 = llvm_add_u64(_99, 16);
  _102 = *((&_ZL10CAST_SBOX3.array[((int64_t)_101)]));
  _103 = llvm_add_u64(_101, 16);
  _104 = *((&_ZL10CAST_SBOX3.array[((int64_t)_103)]));
  _105 = llvm_add_u64(_103, 16);
  _106 = *((&_ZL10CAST_SBOX3.array[((int64_t)_105)]));
  _107 = llvm_add_u64(_105, 16);
  _108 = *((&_ZL10CAST_SBOX3.array[((int64_t)_107)]));
  _109 = llvm_add_u64(_107, 16);
  _110 = *((&_ZL10CAST_SBOX3.array[((int64_t)_109)]));
  _111 = llvm_add_u64(_109, 16);
  _112 = *((&_ZL10CAST_SBOX3.array[((int64_t)_111)]));
  _113 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_13, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))));
  _114 = llvm_srem_u64(_113, 16);
  _115 = *((&_ZL10CAST_SBOX4.array[((int64_t)_114)]));
  _116 = llvm_add_u64(_114, 16);
  _117 = *((&_ZL10CAST_SBOX4.array[((int64_t)_116)]));
  _118 = llvm_add_u64(_116, 16);
  _119 = *((&_ZL10CAST_SBOX4.array[((int64_t)_118)]));
  _120 = llvm_add_u64(_118, 16);
  _121 = *((&_ZL10CAST_SBOX4.array[((int64_t)_120)]));
  _122 = llvm_add_u64(_120, 16);
  _123 = *((&_ZL10CAST_SBOX4.array[((int64_t)_122)]));
  _124 = llvm_add_u64(_122, 16);
  _125 = *((&_ZL10CAST_SBOX4.array[((int64_t)_124)]));
  _126 = llvm_add_u64(_124, 16);
  _127 = *((&_ZL10CAST_SBOX4.array[((int64_t)_126)]));
  _128 = llvm_add_u64(_126, 16);
  _129 = *((&_ZL10CAST_SBOX4.array[((int64_t)_128)]));
  _130 = llvm_add_u64(_128, 16);
  _131 = *((&_ZL10CAST_SBOX4.array[((int64_t)_130)]));
  _132 = llvm_add_u64(_130, 16);
  _133 = *((&_ZL10CAST_SBOX4.array[((int64_t)_132)]));
  _134 = llvm_add_u64(_132, 16);
  _135 = *((&_ZL10CAST_SBOX4.array[((int64_t)_134)]));
  _136 = llvm_add_u64(_134, 16);
  _137 = *((&_ZL10CAST_SBOX4.array[((int64_t)_136)]));
  _138 = llvm_add_u64(_136, 16);
  _139 = *((&_ZL10CAST_SBOX4.array[((int64_t)_138)]));
  _140 = llvm_add_u64(_138, 16);
  _141 = *((&_ZL10CAST_SBOX4.array[((int64_t)_140)]));
  _142 = llvm_add_u64(_140, 16);
  _143 = *((&_ZL10CAST_SBOX4.array[((int64_t)_142)]));
  _144 = llvm_add_u64(_142, 16);
  _145 = *((&_ZL10CAST_SBOX4.array[((int64_t)_144)]));
  _146 = _5 ^ (llvm_add_u32((llvm_sub_u32(((llvm_select_u32((((_14 == _45)&1)), _46, (llvm_select_u32((((_14 == _43)&1)), _44, (llvm_select_u32((((_14 == _41)&1)), _42, (llvm_select_u32((((_14 == _39)&1)), _40, (llvm_select_u32((((_14 == _37)&1)), _38, (llvm_select_u32((((_14 == _35)&1)), _36, (llvm_select_u32((((_14 == _33)&1)), _34, (llvm_select_u32((((_14 == _31)&1)), _32, (llvm_select_u32((((_14 == _29)&1)), _30, (llvm_select_u32((((_14 == _27)&1)), _28, (llvm_select_u32((((_14 == _25)&1)), _26, (llvm_select_u32((((_14 == _23)&1)), _24, (llvm_select_u32((((_14 == _21)&1)), _22, (llvm_select_u32((((_14 == _19)&1)), _20, (llvm_select_u32((((_14 == _17)&1)), _18, (llvm_select_u32((((_14 == _15)&1)), _16, 0)))))))))))))))))))))))))))))))) ^ (llvm_select_u32((((_47 == _78)&1)), _79, (llvm_select_u32((((_47 == _76)&1)), _77, (llvm_select_u32((((_47 == _74)&1)), _75, (llvm_select_u32((((_47 == _72)&1)), _73, (llvm_select_u32((((_47 == _70)&1)), _71, (llvm_select_u32((((_47 == _68)&1)), _69, (llvm_select_u32((((_47 == _66)&1)), _67, (llvm_select_u32((((_47 == _64)&1)), _65, (llvm_select_u32((((_47 == _62)&1)), _63, (llvm_select_u32((((_47 == _60)&1)), _61, (llvm_select_u32((((_47 == _58)&1)), _59, (llvm_select_u32((((_47 == _56)&1)), _57, (llvm_select_u32((((_47 == _54)&1)), _55, (llvm_select_u32((((_47 == _52)&1)), _53, (llvm_select_u32((((_47 == _50)&1)), _51, (llvm_select_u32((((_47 == _48)&1)), _49, 0))))))))))))))))))))))))))))))))), (llvm_select_u32((((_80 == _111)&1)), _112, (llvm_select_u32((((_80 == _109)&1)), _110, (llvm_select_u32((((_80 == _107)&1)), _108, (llvm_select_u32((((_80 == _105)&1)), _106, (llvm_select_u32((((_80 == _103)&1)), _104, (llvm_select_u32((((_80 == _101)&1)), _102, (llvm_select_u32((((_80 == _99)&1)), _100, (llvm_select_u32((((_80 == _97)&1)), _98, (llvm_select_u32((((_80 == _95)&1)), _96, (llvm_select_u32((((_80 == _93)&1)), _94, (llvm_select_u32((((_80 == _91)&1)), _92, (llvm_select_u32((((_80 == _89)&1)), _90, (llvm_select_u32((((_80 == _87)&1)), _88, (llvm_select_u32((((_80 == _85)&1)), _86, (llvm_select_u32((((_80 == _83)&1)), _84, (llvm_select_u32((((_80 == _81)&1)), _82, 0)))))))))))))))))))))))))))))))))), (llvm_select_u32((((_113 == _144)&1)), _145, (llvm_select_u32((((_113 == _142)&1)), _143, (llvm_select_u32((((_113 == _140)&1)), _141, (llvm_select_u32((((_113 == _138)&1)), _139, (llvm_select_u32((((_113 == _136)&1)), _137, (llvm_select_u32((((_113 == _134)&1)), _135, (llvm_select_u32((((_113 == _132)&1)), _133, (llvm_select_u32((((_113 == _130)&1)), _131, (llvm_select_u32((((_113 == _128)&1)), _129, (llvm_select_u32((((_113 == _126)&1)), _127, (llvm_select_u32((((_113 == _124)&1)), _125, (llvm_select_u32((((_113 == _122)&1)), _123, (llvm_select_u32((((_113 == _120)&1)), _121, (llvm_select_u32((((_113 == _118)&1)), _119, (llvm_select_u32((((_113 == _116)&1)), _117, (llvm_select_u32((((_113 == _114)&1)), _115, 0))))))))))))))))))))))))))))))))));
  _147 = _ZNSt6vectorIjSaIjEEixEm(_1, 1);
  _148 = *_147;
  _149 = _ZNSt6vectorIhSaIhEEixEm(_2, 1);
  _150 = *_149;
  _151 = _148 ^ _146;
  _152 = llvm_urem_u64((((uint64_t)(uint8_t)_150)), 32);
  _153 = (_151 << (((uint32_t)_152))) | (llvm_lshr_u32(_151, (((uint32_t)(llvm_sub_u64(32, _152))))));
  _154 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_153, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _155 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_153, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _156 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_153, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _157 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_153, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _158 = _6 ^ ((llvm_add_u32((llvm_sub_u32(_154, _155)), _156)) ^ _157);
  _159 = _ZNSt6vectorIjSaIjEEixEm(_1, 2);
  _160 = *_159;
  _161 = _ZNSt6vectorIhSaIhEEixEm(_2, 2);
  _162 = *_161;
  _163 = llvm_sub_u32(_160, _158);
  _164 = llvm_urem_u64((((uint64_t)(uint8_t)_162)), 32);
  _165 = (_163 << (((uint32_t)_164))) | (llvm_lshr_u32(_163, (((uint32_t)(llvm_sub_u64(32, _164))))));
  _166 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_165, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _167 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_165, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _168 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_165, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _169 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_165, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _170 = _146 ^ (llvm_sub_u32(((llvm_add_u32(_166, _167)) ^ _168), _169));
  _171 = _ZNSt6vectorIjSaIjEEixEm(_1, 3);
  _172 = *_171;
  _173 = _ZNSt6vectorIhSaIhEEixEm(_2, 3);
  _174 = *_173;
  _175 = llvm_add_u32(_172, _170);
  _176 = llvm_urem_u64((((uint64_t)(uint8_t)_174)), 32);
  _177 = (_175 << (((uint32_t)_176))) | (llvm_lshr_u32(_175, (((uint32_t)(llvm_sub_u64(32, _176))))));
  _178 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_177, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _179 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_177, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _180 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_177, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _181 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_177, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _182 = _158 ^ (llvm_add_u32((llvm_sub_u32((_178 ^ _179), _180)), _181));
  _183 = _ZNSt6vectorIjSaIjEEixEm(_1, 4);
  _184 = *_183;
  _185 = _ZNSt6vectorIhSaIhEEixEm(_2, 4);
  _186 = *_185;
  _187 = _184 ^ _182;
  _188 = llvm_urem_u64((((uint64_t)(uint8_t)_186)), 32);
  _189 = (_187 << (((uint32_t)_188))) | (llvm_lshr_u32(_187, (((uint32_t)(llvm_sub_u64(32, _188))))));
  _190 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_189, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _191 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_189, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _192 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_189, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _193 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_189, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _194 = _170 ^ ((llvm_add_u32((llvm_sub_u32(_190, _191)), _192)) ^ _193);
  _195 = _ZNSt6vectorIjSaIjEEixEm(_1, 5);
  _196 = *_195;
  _197 = _ZNSt6vectorIhSaIhEEixEm(_2, 5);
  _198 = *_197;
  _199 = llvm_sub_u32(_196, _194);
  _200 = llvm_urem_u64((((uint64_t)(uint8_t)_198)), 32);
  _201 = (_199 << (((uint32_t)_200))) | (llvm_lshr_u32(_199, (((uint32_t)(llvm_sub_u64(32, _200))))));
  _202 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_201, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _203 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_201, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _204 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_201, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _205 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_201, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _206 = _182 ^ (llvm_sub_u32(((llvm_add_u32(_202, _203)) ^ _204), _205));
  _207 = _ZNSt6vectorIjSaIjEEixEm(_1, 6);
  _208 = *_207;
  _209 = _ZNSt6vectorIhSaIhEEixEm(_2, 6);
  _210 = *_209;
  _211 = llvm_add_u32(_208, _206);
  _212 = llvm_urem_u64((((uint64_t)(uint8_t)_210)), 32);
  _213 = (_211 << (((uint32_t)_212))) | (llvm_lshr_u32(_211, (((uint32_t)(llvm_sub_u64(32, _212))))));
  _214 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_213, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _215 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_213, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _216 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_213, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _217 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_213, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _218 = _194 ^ (llvm_add_u32((llvm_sub_u32((_214 ^ _215), _216)), _217));
  _219 = _ZNSt6vectorIjSaIjEEixEm(_1, 7);
  _220 = *_219;
  _221 = _ZNSt6vectorIhSaIhEEixEm(_2, 7);
  _222 = *_221;
  _223 = _220 ^ _218;
  _224 = llvm_urem_u64((((uint64_t)(uint8_t)_222)), 32);
  _225 = (_223 << (((uint32_t)_224))) | (llvm_lshr_u32(_223, (((uint32_t)(llvm_sub_u64(32, _224))))));
  _226 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_225, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _227 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_225, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _228 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_225, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _229 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_225, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _230 = _206 ^ ((llvm_add_u32((llvm_sub_u32(_226, _227)), _228)) ^ _229);
  _231 = _ZNSt6vectorIjSaIjEEixEm(_1, 8);
  _232 = *_231;
  _233 = _ZNSt6vectorIhSaIhEEixEm(_2, 8);
  _234 = *_233;
  _235 = llvm_sub_u32(_232, _230);
  _236 = llvm_urem_u64((((uint64_t)(uint8_t)_234)), 32);
  _237 = (_235 << (((uint32_t)_236))) | (llvm_lshr_u32(_235, (((uint32_t)(llvm_sub_u64(32, _236))))));
  _238 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_237, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _239 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_237, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _240 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_237, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _241 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_237, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _242 = _218 ^ (llvm_sub_u32(((llvm_add_u32(_238, _239)) ^ _240), _241));
  _243 = _ZNSt6vectorIjSaIjEEixEm(_1, 9);
  _244 = *_243;
  _245 = _ZNSt6vectorIhSaIhEEixEm(_2, 9);
  _246 = *_245;
  _247 = llvm_add_u32(_244, _242);
  _248 = llvm_urem_u64((((uint64_t)(uint8_t)_246)), 32);
  _249 = (_247 << (((uint32_t)_248))) | (llvm_lshr_u32(_247, (((uint32_t)(llvm_sub_u64(32, _248))))));
  _250 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_249, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _251 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_249, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _252 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_249, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _253 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_249, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _254 = _230 ^ (llvm_add_u32((llvm_sub_u32((_250 ^ _251), _252)), _253));
  _255 = _ZNSt6vectorIjSaIjEEixEm(_1, 10);
  _256 = *_255;
  _257 = _ZNSt6vectorIhSaIhEEixEm(_2, 10);
  _258 = *_257;
  _259 = _256 ^ _254;
  _260 = llvm_urem_u64((((uint64_t)(uint8_t)_258)), 32);
  _261 = (_259 << (((uint32_t)_260))) | (llvm_lshr_u32(_259, (((uint32_t)(llvm_sub_u64(32, _260))))));
  _262 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_261, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _263 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_261, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _264 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_261, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _265 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_261, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _266 = _242 ^ ((llvm_add_u32((llvm_sub_u32(_262, _263)), _264)) ^ _265);
  _267 = _ZNSt6vectorIjSaIjEEixEm(_1, 11);
  _268 = *_267;
  _269 = _ZNSt6vectorIhSaIhEEixEm(_2, 11);
  _270 = *_269;
  _271 = llvm_sub_u32(_268, _266);
  _272 = llvm_urem_u64((((uint64_t)(uint8_t)_270)), 32);
  _273 = (_271 << (((uint32_t)_272))) | (llvm_lshr_u32(_271, (((uint32_t)(llvm_sub_u64(32, _272))))));
  _274 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_273, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _275 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_273, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _276 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_273, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _277 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_273, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _278 = _254 ^ (llvm_sub_u32(((llvm_add_u32(_274, _275)) ^ _276), _277));
  _279 = _ZNSt6vectorIjSaIjEEixEm(_1, 12);
  _280 = *_279;
  _281 = _ZNSt6vectorIhSaIhEEixEm(_2, 12);
  _282 = *_281;
  _283 = llvm_add_u32(_280, _278);
  _284 = llvm_urem_u64((((uint64_t)(uint8_t)_282)), 32);
  _285 = (_283 << (((uint32_t)_284))) | (llvm_lshr_u32(_283, (((uint32_t)(llvm_sub_u64(32, _284))))));
  _286 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_285, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _287 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_285, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _288 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_285, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _289 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_285, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _290 = _266 ^ (llvm_add_u32((llvm_sub_u32((_286 ^ _287), _288)), _289));
  _291 = _ZNSt6vectorIjSaIjEEixEm(_1, 13);
  _292 = *_291;
  _293 = _ZNSt6vectorIhSaIhEEixEm(_2, 13);
  _294 = *_293;
  _295 = _292 ^ _290;
  _296 = llvm_urem_u64((((uint64_t)(uint8_t)_294)), 32);
  _297 = (_295 << (((uint32_t)_296))) | (llvm_lshr_u32(_295, (((uint32_t)(llvm_sub_u64(32, _296))))));
  _298 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_297, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _299 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_297, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _300 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_297, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _301 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_297, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _302 = _278 ^ ((llvm_add_u32((llvm_sub_u32(_298, _299)), _300)) ^ _301);
  _303 = _ZNSt6vectorIjSaIjEEixEm(_1, 14);
  _304 = *_303;
  _305 = _ZNSt6vectorIhSaIhEEixEm(_2, 14);
  _306 = *_305;
  _307 = llvm_sub_u32(_304, _302);
  _308 = llvm_urem_u64((((uint64_t)(uint8_t)_306)), 32);
  _309 = (_307 << (((uint32_t)_308))) | (llvm_lshr_u32(_307, (((uint32_t)(llvm_sub_u64(32, _308))))));
  _310 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_309, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _311 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_309, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _312 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_309, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _313 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_309, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _314 = _290 ^ (llvm_sub_u32(((llvm_add_u32(_310, _311)) ^ _312), _313));
  _315 = _ZNSt6vectorIjSaIjEEixEm(_1, 15);
  _316 = *_315;
  _317 = _ZNSt6vectorIhSaIhEEixEm(_2, 15);
  _318 = *_317;
  _319 = llvm_add_u32(_316, _314);
  _320 = llvm_urem_u64((((uint64_t)(uint8_t)_318)), 32);
  _321 = (_319 << (((uint32_t)_320))) | (llvm_lshr_u32(_319, (((uint32_t)(llvm_sub_u64(32, _320))))));
  _322 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_321, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _323 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_321, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _324 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_321, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _325 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_321, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  *(((uint32_t*)_4)) = _314;
  *(((uint32_t*)((&_4[((int64_t)4)])))) = (_302 ^ (llvm_add_u32((llvm_sub_u32((_322 ^ _323), _324)), _325)));
}


uint32_t* _ZNSt6vectorIjSaIjEEixEm(struct l_struct_class_OC_std_KD__KD_vector* _326, uint64_t _327) {
  uint32_t* _328;

  _328 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_326))->field0))->field0));
  return ((&_328[((int64_t)_327)]));
}


uint8_t* _ZNSt6vectorIhSaIhEEixEm(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _329, uint64_t _330) {
  uint8_t* _331;

  _331 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_329))->field0))->field0));
  return ((&_331[((int64_t)_330)]));
}


void _Z9decrypt_nRSt6vectorIjSaIjEERS_IhSaIhEEPKhPh(struct l_struct_class_OC_std_KD__KD_vector* _332, struct l_struct_class_OC_std_KD__KD_vector_OC_0* _333, uint8_t* _334, uint8_t* _335) {
  uint32_t _336;
  uint32_t _337;
  uint32_t* _338;
  uint32_t _339;
  uint8_t* _340;
  uint8_t _341;
  uint32_t _342;
  uint64_t _343;
  uint32_t _344;
  uint64_t _345;
  uint64_t _346;
  uint32_t _347;
  uint64_t _348;
  uint32_t _349;
  uint64_t _350;
  uint32_t _351;
  uint64_t _352;
  uint32_t _353;
  uint64_t _354;
  uint32_t _355;
  uint64_t _356;
  uint32_t _357;
  uint64_t _358;
  uint32_t _359;
  uint64_t _360;
  uint32_t _361;
  uint64_t _362;
  uint32_t _363;
  uint64_t _364;
  uint32_t _365;
  uint64_t _366;
  uint32_t _367;
  uint64_t _368;
  uint32_t _369;
  uint64_t _370;
  uint32_t _371;
  uint64_t _372;
  uint32_t _373;
  uint64_t _374;
  uint32_t _375;
  uint64_t _376;
  uint32_t _377;
  uint64_t _378;
  uint64_t _379;
  uint32_t _380;
  uint64_t _381;
  uint32_t _382;
  uint64_t _383;
  uint32_t _384;
  uint64_t _385;
  uint32_t _386;
  uint64_t _387;
  uint32_t _388;
  uint64_t _389;
  uint32_t _390;
  uint64_t _391;
  uint32_t _392;
  uint64_t _393;
  uint32_t _394;
  uint64_t _395;
  uint32_t _396;
  uint64_t _397;
  uint32_t _398;
  uint64_t _399;
  uint32_t _400;
  uint64_t _401;
  uint32_t _402;
  uint64_t _403;
  uint32_t _404;
  uint64_t _405;
  uint32_t _406;
  uint64_t _407;
  uint32_t _408;
  uint64_t _409;
  uint32_t _410;
  uint64_t _411;
  uint64_t _412;
  uint32_t _413;
  uint64_t _414;
  uint32_t _415;
  uint64_t _416;
  uint32_t _417;
  uint64_t _418;
  uint32_t _419;
  uint64_t _420;
  uint32_t _421;
  uint64_t _422;
  uint32_t _423;
  uint64_t _424;
  uint32_t _425;
  uint64_t _426;
  uint32_t _427;
  uint64_t _428;
  uint32_t _429;
  uint64_t _430;
  uint32_t _431;
  uint64_t _432;
  uint32_t _433;
  uint64_t _434;
  uint32_t _435;
  uint64_t _436;
  uint32_t _437;
  uint64_t _438;
  uint32_t _439;
  uint64_t _440;
  uint32_t _441;
  uint64_t _442;
  uint32_t _443;
  uint64_t _444;
  uint64_t _445;
  uint32_t _446;
  uint64_t _447;
  uint32_t _448;
  uint64_t _449;
  uint32_t _450;
  uint64_t _451;
  uint32_t _452;
  uint64_t _453;
  uint32_t _454;
  uint64_t _455;
  uint32_t _456;
  uint64_t _457;
  uint32_t _458;
  uint64_t _459;
  uint32_t _460;
  uint64_t _461;
  uint32_t _462;
  uint64_t _463;
  uint32_t _464;
  uint64_t _465;
  uint32_t _466;
  uint64_t _467;
  uint32_t _468;
  uint64_t _469;
  uint32_t _470;
  uint64_t _471;
  uint32_t _472;
  uint64_t _473;
  uint32_t _474;
  uint64_t _475;
  uint32_t _476;
  uint32_t _477;
  uint32_t* _478;
  uint32_t _479;
  uint8_t* _480;
  uint8_t _481;
  uint32_t _482;
  uint64_t _483;
  uint32_t _484;
  uint32_t _485;
  uint32_t _486;
  uint32_t _487;
  uint32_t _488;
  uint32_t _489;
  uint32_t* _490;
  uint32_t _491;
  uint8_t* _492;
  uint8_t _493;
  uint32_t _494;
  uint64_t _495;
  uint32_t _496;
  uint32_t _497;
  uint32_t _498;
  uint32_t _499;
  uint32_t _500;
  uint32_t _501;
  uint32_t* _502;
  uint32_t _503;
  uint8_t* _504;
  uint8_t _505;
  uint32_t _506;
  uint64_t _507;
  uint32_t _508;
  uint32_t _509;
  uint32_t _510;
  uint32_t _511;
  uint32_t _512;
  uint32_t _513;
  uint32_t* _514;
  uint32_t _515;
  uint8_t* _516;
  uint8_t _517;
  uint32_t _518;
  uint64_t _519;
  uint32_t _520;
  uint32_t _521;
  uint32_t _522;
  uint32_t _523;
  uint32_t _524;
  uint32_t _525;
  uint32_t* _526;
  uint32_t _527;
  uint8_t* _528;
  uint8_t _529;
  uint32_t _530;
  uint64_t _531;
  uint32_t _532;
  uint32_t _533;
  uint32_t _534;
  uint32_t _535;
  uint32_t _536;
  uint32_t _537;
  uint32_t* _538;
  uint32_t _539;
  uint8_t* _540;
  uint8_t _541;
  uint32_t _542;
  uint64_t _543;
  uint32_t _544;
  uint32_t _545;
  uint32_t _546;
  uint32_t _547;
  uint32_t _548;
  uint32_t _549;
  uint32_t* _550;
  uint32_t _551;
  uint8_t* _552;
  uint8_t _553;
  uint32_t _554;
  uint64_t _555;
  uint32_t _556;
  uint32_t _557;
  uint32_t _558;
  uint32_t _559;
  uint32_t _560;
  uint32_t _561;
  uint32_t* _562;
  uint32_t _563;
  uint8_t* _564;
  uint8_t _565;
  uint32_t _566;
  uint64_t _567;
  uint32_t _568;
  uint32_t _569;
  uint32_t _570;
  uint32_t _571;
  uint32_t _572;
  uint32_t _573;
  uint32_t* _574;
  uint32_t _575;
  uint8_t* _576;
  uint8_t _577;
  uint32_t _578;
  uint64_t _579;
  uint32_t _580;
  uint32_t _581;
  uint32_t _582;
  uint32_t _583;
  uint32_t _584;
  uint32_t _585;
  uint32_t* _586;
  uint32_t _587;
  uint8_t* _588;
  uint8_t _589;
  uint32_t _590;
  uint64_t _591;
  uint32_t _592;
  uint32_t _593;
  uint32_t _594;
  uint32_t _595;
  uint32_t _596;
  uint32_t _597;
  uint32_t* _598;
  uint32_t _599;
  uint8_t* _600;
  uint8_t _601;
  uint32_t _602;
  uint64_t _603;
  uint32_t _604;
  uint32_t _605;
  uint32_t _606;
  uint32_t _607;
  uint32_t _608;
  uint32_t _609;
  uint32_t* _610;
  uint32_t _611;
  uint8_t* _612;
  uint8_t _613;
  uint32_t _614;
  uint64_t _615;
  uint32_t _616;
  uint32_t _617;
  uint32_t _618;
  uint32_t _619;
  uint32_t _620;
  uint32_t _621;
  uint32_t* _622;
  uint32_t _623;
  uint8_t* _624;
  uint8_t _625;
  uint32_t _626;
  uint64_t _627;
  uint32_t _628;
  uint32_t _629;
  uint32_t _630;
  uint32_t _631;
  uint32_t _632;
  uint32_t _633;
  uint32_t* _634;
  uint32_t _635;
  uint8_t* _636;
  uint8_t _637;
  uint32_t _638;
  uint64_t _639;
  uint32_t _640;
  uint32_t _641;
  uint32_t _642;
  uint32_t _643;
  uint32_t _644;
  uint32_t _645;
  uint32_t* _646;
  uint32_t _647;
  uint8_t* _648;
  uint8_t _649;
  uint32_t _650;
  uint64_t _651;
  uint32_t _652;
  uint32_t _653;
  uint32_t _654;
  uint32_t _655;
  uint32_t _656;

  _336 = *(((uint32_t*)_334));
  _337 = *(((uint32_t*)((&_334[((int64_t)4)]))));
  _338 = _ZNSt6vectorIjSaIjEEixEm(_332, 15);
  _339 = *_338;
  _340 = _ZNSt6vectorIhSaIhEEixEm(_333, 15);
  _341 = *_340;
  _342 = llvm_add_u32(_339, _337);
  _343 = llvm_urem_u64((((uint64_t)(uint8_t)_341)), 32);
  _344 = (_342 << (((uint32_t)_343))) | (llvm_lshr_u32(_342, (((uint32_t)(llvm_sub_u64(32, _343))))));
  _345 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_344, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))));
  _346 = llvm_srem_u64(_345, 16);
  _347 = *((&_ZL10CAST_SBOX1.array[((int64_t)_346)]));
  _348 = llvm_add_u64(_346, 16);
  _349 = *((&_ZL10CAST_SBOX1.array[((int64_t)_348)]));
  _350 = llvm_add_u64(_348, 16);
  _351 = *((&_ZL10CAST_SBOX1.array[((int64_t)_350)]));
  _352 = llvm_add_u64(_350, 16);
  _353 = *((&_ZL10CAST_SBOX1.array[((int64_t)_352)]));
  _354 = llvm_add_u64(_352, 16);
  _355 = *((&_ZL10CAST_SBOX1.array[((int64_t)_354)]));
  _356 = llvm_add_u64(_354, 16);
  _357 = *((&_ZL10CAST_SBOX1.array[((int64_t)_356)]));
  _358 = llvm_add_u64(_356, 16);
  _359 = *((&_ZL10CAST_SBOX1.array[((int64_t)_358)]));
  _360 = llvm_add_u64(_358, 16);
  _361 = *((&_ZL10CAST_SBOX1.array[((int64_t)_360)]));
  _362 = llvm_add_u64(_360, 16);
  _363 = *((&_ZL10CAST_SBOX1.array[((int64_t)_362)]));
  _364 = llvm_add_u64(_362, 16);
  _365 = *((&_ZL10CAST_SBOX1.array[((int64_t)_364)]));
  _366 = llvm_add_u64(_364, 16);
  _367 = *((&_ZL10CAST_SBOX1.array[((int64_t)_366)]));
  _368 = llvm_add_u64(_366, 16);
  _369 = *((&_ZL10CAST_SBOX1.array[((int64_t)_368)]));
  _370 = llvm_add_u64(_368, 16);
  _371 = *((&_ZL10CAST_SBOX1.array[((int64_t)_370)]));
  _372 = llvm_add_u64(_370, 16);
  _373 = *((&_ZL10CAST_SBOX1.array[((int64_t)_372)]));
  _374 = llvm_add_u64(_372, 16);
  _375 = *((&_ZL10CAST_SBOX1.array[((int64_t)_374)]));
  _376 = llvm_add_u64(_374, 16);
  _377 = *((&_ZL10CAST_SBOX1.array[((int64_t)_376)]));
  _378 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_344, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))));
  _379 = llvm_srem_u64(_378, 16);
  _380 = *((&_ZL10CAST_SBOX2.array[((int64_t)_379)]));
  _381 = llvm_add_u64(_379, 16);
  _382 = *((&_ZL10CAST_SBOX2.array[((int64_t)_381)]));
  _383 = llvm_add_u64(_381, 16);
  _384 = *((&_ZL10CAST_SBOX2.array[((int64_t)_383)]));
  _385 = llvm_add_u64(_383, 16);
  _386 = *((&_ZL10CAST_SBOX2.array[((int64_t)_385)]));
  _387 = llvm_add_u64(_385, 16);
  _388 = *((&_ZL10CAST_SBOX2.array[((int64_t)_387)]));
  _389 = llvm_add_u64(_387, 16);
  _390 = *((&_ZL10CAST_SBOX2.array[((int64_t)_389)]));
  _391 = llvm_add_u64(_389, 16);
  _392 = *((&_ZL10CAST_SBOX2.array[((int64_t)_391)]));
  _393 = llvm_add_u64(_391, 16);
  _394 = *((&_ZL10CAST_SBOX2.array[((int64_t)_393)]));
  _395 = llvm_add_u64(_393, 16);
  _396 = *((&_ZL10CAST_SBOX2.array[((int64_t)_395)]));
  _397 = llvm_add_u64(_395, 16);
  _398 = *((&_ZL10CAST_SBOX2.array[((int64_t)_397)]));
  _399 = llvm_add_u64(_397, 16);
  _400 = *((&_ZL10CAST_SBOX2.array[((int64_t)_399)]));
  _401 = llvm_add_u64(_399, 16);
  _402 = *((&_ZL10CAST_SBOX2.array[((int64_t)_401)]));
  _403 = llvm_add_u64(_401, 16);
  _404 = *((&_ZL10CAST_SBOX2.array[((int64_t)_403)]));
  _405 = llvm_add_u64(_403, 16);
  _406 = *((&_ZL10CAST_SBOX2.array[((int64_t)_405)]));
  _407 = llvm_add_u64(_405, 16);
  _408 = *((&_ZL10CAST_SBOX2.array[((int64_t)_407)]));
  _409 = llvm_add_u64(_407, 16);
  _410 = *((&_ZL10CAST_SBOX2.array[((int64_t)_409)]));
  _411 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_344, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))));
  _412 = llvm_srem_u64(_411, 16);
  _413 = *((&_ZL10CAST_SBOX3.array[((int64_t)_412)]));
  _414 = llvm_add_u64(_412, 16);
  _415 = *((&_ZL10CAST_SBOX3.array[((int64_t)_414)]));
  _416 = llvm_add_u64(_414, 16);
  _417 = *((&_ZL10CAST_SBOX3.array[((int64_t)_416)]));
  _418 = llvm_add_u64(_416, 16);
  _419 = *((&_ZL10CAST_SBOX3.array[((int64_t)_418)]));
  _420 = llvm_add_u64(_418, 16);
  _421 = *((&_ZL10CAST_SBOX3.array[((int64_t)_420)]));
  _422 = llvm_add_u64(_420, 16);
  _423 = *((&_ZL10CAST_SBOX3.array[((int64_t)_422)]));
  _424 = llvm_add_u64(_422, 16);
  _425 = *((&_ZL10CAST_SBOX3.array[((int64_t)_424)]));
  _426 = llvm_add_u64(_424, 16);
  _427 = *((&_ZL10CAST_SBOX3.array[((int64_t)_426)]));
  _428 = llvm_add_u64(_426, 16);
  _429 = *((&_ZL10CAST_SBOX3.array[((int64_t)_428)]));
  _430 = llvm_add_u64(_428, 16);
  _431 = *((&_ZL10CAST_SBOX3.array[((int64_t)_430)]));
  _432 = llvm_add_u64(_430, 16);
  _433 = *((&_ZL10CAST_SBOX3.array[((int64_t)_432)]));
  _434 = llvm_add_u64(_432, 16);
  _435 = *((&_ZL10CAST_SBOX3.array[((int64_t)_434)]));
  _436 = llvm_add_u64(_434, 16);
  _437 = *((&_ZL10CAST_SBOX3.array[((int64_t)_436)]));
  _438 = llvm_add_u64(_436, 16);
  _439 = *((&_ZL10CAST_SBOX3.array[((int64_t)_438)]));
  _440 = llvm_add_u64(_438, 16);
  _441 = *((&_ZL10CAST_SBOX3.array[((int64_t)_440)]));
  _442 = llvm_add_u64(_440, 16);
  _443 = *((&_ZL10CAST_SBOX3.array[((int64_t)_442)]));
  _444 = ((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_344, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))));
  _445 = llvm_srem_u64(_444, 16);
  _446 = *((&_ZL10CAST_SBOX4.array[((int64_t)_445)]));
  _447 = llvm_add_u64(_445, 16);
  _448 = *((&_ZL10CAST_SBOX4.array[((int64_t)_447)]));
  _449 = llvm_add_u64(_447, 16);
  _450 = *((&_ZL10CAST_SBOX4.array[((int64_t)_449)]));
  _451 = llvm_add_u64(_449, 16);
  _452 = *((&_ZL10CAST_SBOX4.array[((int64_t)_451)]));
  _453 = llvm_add_u64(_451, 16);
  _454 = *((&_ZL10CAST_SBOX4.array[((int64_t)_453)]));
  _455 = llvm_add_u64(_453, 16);
  _456 = *((&_ZL10CAST_SBOX4.array[((int64_t)_455)]));
  _457 = llvm_add_u64(_455, 16);
  _458 = *((&_ZL10CAST_SBOX4.array[((int64_t)_457)]));
  _459 = llvm_add_u64(_457, 16);
  _460 = *((&_ZL10CAST_SBOX4.array[((int64_t)_459)]));
  _461 = llvm_add_u64(_459, 16);
  _462 = *((&_ZL10CAST_SBOX4.array[((int64_t)_461)]));
  _463 = llvm_add_u64(_461, 16);
  _464 = *((&_ZL10CAST_SBOX4.array[((int64_t)_463)]));
  _465 = llvm_add_u64(_463, 16);
  _466 = *((&_ZL10CAST_SBOX4.array[((int64_t)_465)]));
  _467 = llvm_add_u64(_465, 16);
  _468 = *((&_ZL10CAST_SBOX4.array[((int64_t)_467)]));
  _469 = llvm_add_u64(_467, 16);
  _470 = *((&_ZL10CAST_SBOX4.array[((int64_t)_469)]));
  _471 = llvm_add_u64(_469, 16);
  _472 = *((&_ZL10CAST_SBOX4.array[((int64_t)_471)]));
  _473 = llvm_add_u64(_471, 16);
  _474 = *((&_ZL10CAST_SBOX4.array[((int64_t)_473)]));
  _475 = llvm_add_u64(_473, 16);
  _476 = *((&_ZL10CAST_SBOX4.array[((int64_t)_475)]));
  _477 = _336 ^ (llvm_add_u32((llvm_sub_u32(((llvm_select_u32((((_345 == _376)&1)), _377, (llvm_select_u32((((_345 == _374)&1)), _375, (llvm_select_u32((((_345 == _372)&1)), _373, (llvm_select_u32((((_345 == _370)&1)), _371, (llvm_select_u32((((_345 == _368)&1)), _369, (llvm_select_u32((((_345 == _366)&1)), _367, (llvm_select_u32((((_345 == _364)&1)), _365, (llvm_select_u32((((_345 == _362)&1)), _363, (llvm_select_u32((((_345 == _360)&1)), _361, (llvm_select_u32((((_345 == _358)&1)), _359, (llvm_select_u32((((_345 == _356)&1)), _357, (llvm_select_u32((((_345 == _354)&1)), _355, (llvm_select_u32((((_345 == _352)&1)), _353, (llvm_select_u32((((_345 == _350)&1)), _351, (llvm_select_u32((((_345 == _348)&1)), _349, (llvm_select_u32((((_345 == _346)&1)), _347, 0)))))))))))))))))))))))))))))))) ^ (llvm_select_u32((((_378 == _409)&1)), _410, (llvm_select_u32((((_378 == _407)&1)), _408, (llvm_select_u32((((_378 == _405)&1)), _406, (llvm_select_u32((((_378 == _403)&1)), _404, (llvm_select_u32((((_378 == _401)&1)), _402, (llvm_select_u32((((_378 == _399)&1)), _400, (llvm_select_u32((((_378 == _397)&1)), _398, (llvm_select_u32((((_378 == _395)&1)), _396, (llvm_select_u32((((_378 == _393)&1)), _394, (llvm_select_u32((((_378 == _391)&1)), _392, (llvm_select_u32((((_378 == _389)&1)), _390, (llvm_select_u32((((_378 == _387)&1)), _388, (llvm_select_u32((((_378 == _385)&1)), _386, (llvm_select_u32((((_378 == _383)&1)), _384, (llvm_select_u32((((_378 == _381)&1)), _382, (llvm_select_u32((((_378 == _379)&1)), _380, 0))))))))))))))))))))))))))))))))), (llvm_select_u32((((_411 == _442)&1)), _443, (llvm_select_u32((((_411 == _440)&1)), _441, (llvm_select_u32((((_411 == _438)&1)), _439, (llvm_select_u32((((_411 == _436)&1)), _437, (llvm_select_u32((((_411 == _434)&1)), _435, (llvm_select_u32((((_411 == _432)&1)), _433, (llvm_select_u32((((_411 == _430)&1)), _431, (llvm_select_u32((((_411 == _428)&1)), _429, (llvm_select_u32((((_411 == _426)&1)), _427, (llvm_select_u32((((_411 == _424)&1)), _425, (llvm_select_u32((((_411 == _422)&1)), _423, (llvm_select_u32((((_411 == _420)&1)), _421, (llvm_select_u32((((_411 == _418)&1)), _419, (llvm_select_u32((((_411 == _416)&1)), _417, (llvm_select_u32((((_411 == _414)&1)), _415, (llvm_select_u32((((_411 == _412)&1)), _413, 0)))))))))))))))))))))))))))))))))), (llvm_select_u32((((_444 == _475)&1)), _476, (llvm_select_u32((((_444 == _473)&1)), _474, (llvm_select_u32((((_444 == _471)&1)), _472, (llvm_select_u32((((_444 == _469)&1)), _470, (llvm_select_u32((((_444 == _467)&1)), _468, (llvm_select_u32((((_444 == _465)&1)), _466, (llvm_select_u32((((_444 == _463)&1)), _464, (llvm_select_u32((((_444 == _461)&1)), _462, (llvm_select_u32((((_444 == _459)&1)), _460, (llvm_select_u32((((_444 == _457)&1)), _458, (llvm_select_u32((((_444 == _455)&1)), _456, (llvm_select_u32((((_444 == _453)&1)), _454, (llvm_select_u32((((_444 == _451)&1)), _452, (llvm_select_u32((((_444 == _449)&1)), _450, (llvm_select_u32((((_444 == _447)&1)), _448, (llvm_select_u32((((_444 == _445)&1)), _446, 0))))))))))))))))))))))))))))))))));
  _478 = _ZNSt6vectorIjSaIjEEixEm(_332, 14);
  _479 = *_478;
  _480 = _ZNSt6vectorIhSaIhEEixEm(_333, 14);
  _481 = *_480;
  _482 = llvm_sub_u32(_479, _477);
  _483 = llvm_urem_u64((((uint64_t)(uint8_t)_481)), 32);
  _484 = (_482 << (((uint32_t)_483))) | (llvm_lshr_u32(_482, (((uint32_t)(llvm_sub_u64(32, _483))))));
  _485 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_484, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _486 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_484, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _487 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_484, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _488 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_484, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _489 = _337 ^ (llvm_sub_u32(((llvm_add_u32(_485, _486)) ^ _487), _488));
  _490 = _ZNSt6vectorIjSaIjEEixEm(_332, 13);
  _491 = *_490;
  _492 = _ZNSt6vectorIhSaIhEEixEm(_333, 13);
  _493 = *_492;
  _494 = _491 ^ _489;
  _495 = llvm_urem_u64((((uint64_t)(uint8_t)_493)), 32);
  _496 = (_494 << (((uint32_t)_495))) | (llvm_lshr_u32(_494, (((uint32_t)(llvm_sub_u64(32, _495))))));
  _497 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_496, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _498 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_496, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _499 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_496, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _500 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_496, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _501 = _477 ^ ((llvm_add_u32((llvm_sub_u32(_497, _498)), _499)) ^ _500);
  _502 = _ZNSt6vectorIjSaIjEEixEm(_332, 12);
  _503 = *_502;
  _504 = _ZNSt6vectorIhSaIhEEixEm(_333, 12);
  _505 = *_504;
  _506 = llvm_add_u32(_503, _501);
  _507 = llvm_urem_u64((((uint64_t)(uint8_t)_505)), 32);
  _508 = (_506 << (((uint32_t)_507))) | (llvm_lshr_u32(_506, (((uint32_t)(llvm_sub_u64(32, _507))))));
  _509 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_508, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _510 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_508, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _511 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_508, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _512 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_508, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _513 = _489 ^ (llvm_add_u32((llvm_sub_u32((_509 ^ _510), _511)), _512));
  _514 = _ZNSt6vectorIjSaIjEEixEm(_332, 11);
  _515 = *_514;
  _516 = _ZNSt6vectorIhSaIhEEixEm(_333, 11);
  _517 = *_516;
  _518 = llvm_sub_u32(_515, _513);
  _519 = llvm_urem_u64((((uint64_t)(uint8_t)_517)), 32);
  _520 = (_518 << (((uint32_t)_519))) | (llvm_lshr_u32(_518, (((uint32_t)(llvm_sub_u64(32, _519))))));
  _521 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_520, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _522 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_520, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _523 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_520, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _524 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_520, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _525 = _501 ^ (llvm_sub_u32(((llvm_add_u32(_521, _522)) ^ _523), _524));
  _526 = _ZNSt6vectorIjSaIjEEixEm(_332, 10);
  _527 = *_526;
  _528 = _ZNSt6vectorIhSaIhEEixEm(_333, 10);
  _529 = *_528;
  _530 = _527 ^ _525;
  _531 = llvm_urem_u64((((uint64_t)(uint8_t)_529)), 32);
  _532 = (_530 << (((uint32_t)_531))) | (llvm_lshr_u32(_530, (((uint32_t)(llvm_sub_u64(32, _531))))));
  _533 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_532, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _534 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_532, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _535 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_532, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _536 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_532, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _537 = _513 ^ ((llvm_add_u32((llvm_sub_u32(_533, _534)), _535)) ^ _536);
  _538 = _ZNSt6vectorIjSaIjEEixEm(_332, 9);
  _539 = *_538;
  _540 = _ZNSt6vectorIhSaIhEEixEm(_333, 9);
  _541 = *_540;
  _542 = llvm_add_u32(_539, _537);
  _543 = llvm_urem_u64((((uint64_t)(uint8_t)_541)), 32);
  _544 = (_542 << (((uint32_t)_543))) | (llvm_lshr_u32(_542, (((uint32_t)(llvm_sub_u64(32, _543))))));
  _545 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_544, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _546 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_544, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _547 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_544, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _548 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_544, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _549 = _525 ^ (llvm_add_u32((llvm_sub_u32((_545 ^ _546), _547)), _548));
  _550 = _ZNSt6vectorIjSaIjEEixEm(_332, 8);
  _551 = *_550;
  _552 = _ZNSt6vectorIhSaIhEEixEm(_333, 8);
  _553 = *_552;
  _554 = llvm_sub_u32(_551, _549);
  _555 = llvm_urem_u64((((uint64_t)(uint8_t)_553)), 32);
  _556 = (_554 << (((uint32_t)_555))) | (llvm_lshr_u32(_554, (((uint32_t)(llvm_sub_u64(32, _555))))));
  _557 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_556, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _558 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_556, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _559 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_556, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _560 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_556, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _561 = _537 ^ (llvm_sub_u32(((llvm_add_u32(_557, _558)) ^ _559), _560));
  _562 = _ZNSt6vectorIjSaIjEEixEm(_332, 7);
  _563 = *_562;
  _564 = _ZNSt6vectorIhSaIhEEixEm(_333, 7);
  _565 = *_564;
  _566 = _563 ^ _561;
  _567 = llvm_urem_u64((((uint64_t)(uint8_t)_565)), 32);
  _568 = (_566 << (((uint32_t)_567))) | (llvm_lshr_u32(_566, (((uint32_t)(llvm_sub_u64(32, _567))))));
  _569 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_568, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _570 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_568, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _571 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_568, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _572 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_568, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _573 = _549 ^ ((llvm_add_u32((llvm_sub_u32(_569, _570)), _571)) ^ _572);
  _574 = _ZNSt6vectorIjSaIjEEixEm(_332, 6);
  _575 = *_574;
  _576 = _ZNSt6vectorIhSaIhEEixEm(_333, 6);
  _577 = *_576;
  _578 = llvm_add_u32(_575, _573);
  _579 = llvm_urem_u64((((uint64_t)(uint8_t)_577)), 32);
  _580 = (_578 << (((uint32_t)_579))) | (llvm_lshr_u32(_578, (((uint32_t)(llvm_sub_u64(32, _579))))));
  _581 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_580, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _582 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_580, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _583 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_580, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _584 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_580, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _585 = _561 ^ (llvm_add_u32((llvm_sub_u32((_581 ^ _582), _583)), _584));
  _586 = _ZNSt6vectorIjSaIjEEixEm(_332, 5);
  _587 = *_586;
  _588 = _ZNSt6vectorIhSaIhEEixEm(_333, 5);
  _589 = *_588;
  _590 = llvm_sub_u32(_587, _585);
  _591 = llvm_urem_u64((((uint64_t)(uint8_t)_589)), 32);
  _592 = (_590 << (((uint32_t)_591))) | (llvm_lshr_u32(_590, (((uint32_t)(llvm_sub_u64(32, _591))))));
  _593 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_592, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _594 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_592, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _595 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_592, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _596 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_592, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _597 = _573 ^ (llvm_sub_u32(((llvm_add_u32(_593, _594)) ^ _595), _596));
  _598 = _ZNSt6vectorIjSaIjEEixEm(_332, 4);
  _599 = *_598;
  _600 = _ZNSt6vectorIhSaIhEEixEm(_333, 4);
  _601 = *_600;
  _602 = _599 ^ _597;
  _603 = llvm_urem_u64((((uint64_t)(uint8_t)_601)), 32);
  _604 = (_602 << (((uint32_t)_603))) | (llvm_lshr_u32(_602, (((uint32_t)(llvm_sub_u64(32, _603))))));
  _605 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_604, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _606 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_604, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _607 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_604, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _608 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_604, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _609 = _585 ^ ((llvm_add_u32((llvm_sub_u32(_605, _606)), _607)) ^ _608);
  _610 = _ZNSt6vectorIjSaIjEEixEm(_332, 3);
  _611 = *_610;
  _612 = _ZNSt6vectorIhSaIhEEixEm(_333, 3);
  _613 = *_612;
  _614 = llvm_add_u32(_611, _609);
  _615 = llvm_urem_u64((((uint64_t)(uint8_t)_613)), 32);
  _616 = (_614 << (((uint32_t)_615))) | (llvm_lshr_u32(_614, (((uint32_t)(llvm_sub_u64(32, _615))))));
  _617 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_616, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _618 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_616, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _619 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_616, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _620 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_616, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _621 = _597 ^ (llvm_add_u32((llvm_sub_u32((_617 ^ _618), _619)), _620));
  _622 = _ZNSt6vectorIjSaIjEEixEm(_332, 2);
  _623 = *_622;
  _624 = _ZNSt6vectorIhSaIhEEixEm(_333, 2);
  _625 = *_624;
  _626 = llvm_sub_u32(_623, _621);
  _627 = llvm_urem_u64((((uint64_t)(uint8_t)_625)), 32);
  _628 = (_626 << (((uint32_t)_627))) | (llvm_lshr_u32(_626, (((uint32_t)(llvm_sub_u64(32, _627))))));
  _629 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_628, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _630 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_628, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _631 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_628, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _632 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_628, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _633 = _609 ^ (llvm_sub_u32(((llvm_add_u32(_629, _630)) ^ _631), _632));
  _634 = _ZNSt6vectorIjSaIjEEixEm(_332, 1);
  _635 = *_634;
  _636 = _ZNSt6vectorIhSaIhEEixEm(_333, 1);
  _637 = *_636;
  _638 = _635 ^ _633;
  _639 = llvm_urem_u64((((uint64_t)(uint8_t)_637)), 32);
  _640 = (_638 << (((uint32_t)_639))) | (llvm_lshr_u32(_638, (((uint32_t)(llvm_sub_u64(32, _639))))));
  _641 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_640, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _642 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_640, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _643 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_640, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _644 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_640, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  _645 = _621 ^ ((llvm_add_u32((llvm_sub_u32(_641, _642)), _643)) ^ _644);
  _646 = _ZNSt6vectorIjSaIjEEixEm(_332, 0);
  _647 = *_646;
  _648 = _ZNSt6vectorIhSaIhEEixEm(_333, 0);
  _649 = *_648;
  _650 = llvm_add_u32(_647, _645);
  _651 = llvm_urem_u64((((uint64_t)(uint8_t)_649)), 32);
  _652 = (_650 << (((uint32_t)_651))) | (llvm_lshr_u32(_650, (((uint32_t)(llvm_sub_u64(32, _651))))));
  _653 = *((&_ZL10CAST_SBOX1.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_652, (((uint32_t)(((~(UINT64_C(0))) & 3) << 3))))))))))]));
  _654 = *((&_ZL10CAST_SBOX2.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_652, (((uint32_t)(((~(UINT64_C(1))) & 3) << 3))))))))))]));
  _655 = *((&_ZL10CAST_SBOX3.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_652, (((uint32_t)(((~(UINT64_C(2))) & 3) << 3))))))))))]));
  _656 = *((&_ZL10CAST_SBOX4.array[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_lshr_u32(_652, (((uint32_t)(((~(UINT64_C(3))) & 3) << 3))))))))))]));
  *(((uint32_t*)_335)) = _645;
  *(((uint32_t*)((&_335[((int64_t)4)])))) = (_633 ^ (llvm_add_u32((llvm_sub_u32((_653 ^ _654), _655)), _656)));
}


void _Z12key_schedulePKhRSt6vectorIjSaIjEERS1_IhSaIhEE(uint8_t* _657, struct l_struct_class_OC_std_KD__KD_vector* _658, struct l_struct_class_OC_std_KD__KD_vector_OC_0* _659) {
  struct l_struct_class_OC_ByteReader _660;    /* Address-exposed local */
  struct l_struct_class_OC_ByteReader _661;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_4_uint32_t _662 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_class_OC_ByteReader _663;    /* Address-exposed local */
  struct l_struct_class_OC_ByteReader _664;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_4_uint32_t _665 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_class_OC_std_KD__KD_vector _666;    /* Address-exposed local */
  uint32_t _667;    /* Address-exposed local */
  struct l_struct_class_OC_std_KD__KD_allocator _668;    /* Address-exposed local */
  uint64_t llvm_cbe__2e_035;
  uint64_t llvm_cbe__2e_035__PHI_TEMPORARY;
  uint32_t _669;
  uint8_t _670;
  uint64_t _671;
  uint32_t* _672;
  uint32_t _673;
  uint8_t _674;
  uint64_t _675;
  uint64_t _676;
  uint32_t _677;
  uint64_t _678;
  uint32_t _679;
  uint64_t _680;
  uint32_t _681;
  uint64_t _682;
  uint32_t _683;
  uint64_t _684;
  uint32_t _685;
  uint64_t _686;
  uint32_t _687;
  uint64_t _688;
  uint32_t _689;
  uint64_t _690;
  uint32_t _691;
  uint64_t _692;
  uint32_t _693;
  uint64_t _694;
  uint32_t _695;
  uint64_t _696;
  uint32_t _697;
  uint64_t _698;
  uint32_t _699;
  uint64_t _700;
  uint32_t _701;
  uint64_t _702;
  uint32_t _703;
  uint64_t _704;
  uint32_t _705;
  uint64_t _706;
  uint32_t _707;
  uint8_t _708;
  uint64_t _709;
  uint64_t _710;
  uint32_t _711;
  uint64_t _712;
  uint32_t _713;
  uint64_t _714;
  uint32_t _715;
  uint64_t _716;
  uint32_t _717;
  uint64_t _718;
  uint32_t _719;
  uint64_t _720;
  uint32_t _721;
  uint64_t _722;
  uint32_t _723;
  uint64_t _724;
  uint32_t _725;
  uint64_t _726;
  uint32_t _727;
  uint64_t _728;
  uint32_t _729;
  uint64_t _730;
  uint32_t _731;
  uint64_t _732;
  uint32_t _733;
  uint64_t _734;
  uint32_t _735;
  uint64_t _736;
  uint32_t _737;
  uint64_t _738;
  uint32_t _739;
  uint64_t _740;
  uint32_t _741;
  uint8_t _742;
  uint64_t _743;
  uint64_t _744;
  uint32_t _745;
  uint64_t _746;
  uint32_t _747;
  uint64_t _748;
  uint32_t _749;
  uint64_t _750;
  uint32_t _751;
  uint64_t _752;
  uint32_t _753;
  uint64_t _754;
  uint32_t _755;
  uint64_t _756;
  uint32_t _757;
  uint64_t _758;
  uint32_t _759;
  uint64_t _760;
  uint32_t _761;
  uint64_t _762;
  uint32_t _763;
  uint64_t _764;
  uint32_t _765;
  uint64_t _766;
  uint32_t _767;
  uint64_t _768;
  uint32_t _769;
  uint64_t _770;
  uint32_t _771;
  uint64_t _772;
  uint32_t _773;
  uint64_t _774;
  uint32_t _775;
  uint8_t _776;
  uint64_t _777;
  uint64_t _778;
  uint32_t _779;
  uint64_t _780;
  uint32_t _781;
  uint64_t _782;
  uint32_t _783;
  uint64_t _784;
  uint32_t _785;
  uint64_t _786;
  uint32_t _787;
  uint64_t _788;
  uint32_t _789;
  uint64_t _790;
  uint32_t _791;
  uint64_t _792;
  uint32_t _793;
  uint64_t _794;
  uint32_t _795;
  uint64_t _796;
  uint32_t _797;
  uint64_t _798;
  uint32_t _799;
  uint64_t _800;
  uint32_t _801;
  uint64_t _802;
  uint32_t _803;
  uint64_t _804;
  uint32_t _805;
  uint64_t _806;
  uint32_t _807;
  uint64_t _808;
  uint32_t _809;
  uint8_t _810;
  uint32_t _811;
  uint32_t _812;
  uint8_t _813;
  uint32_t _814;
  uint8_t _815;
  uint32_t _816;
  uint8_t _817;
  uint32_t _818;
  uint8_t _819;
  uint32_t _820;
  uint8_t _821;
  uint32_t _822;
  uint32_t _823;
  uint8_t _824;
  uint32_t _825;
  uint8_t _826;
  uint32_t _827;
  uint8_t _828;
  uint32_t _829;
  uint8_t _830;
  uint32_t _831;
  uint8_t _832;
  uint32_t _833;
  uint32_t _834;
  uint8_t _835;
  uint32_t _836;
  uint8_t _837;
  uint32_t _838;
  uint8_t _839;
  uint32_t _840;
  uint8_t _841;
  uint32_t _842;
  uint8_t _843;
  uint32_t _844;
  uint8_t _845;
  uint32_t _846;
  uint8_t _847;
  uint32_t _848;
  uint8_t _849;
  uint32_t _850;
  uint8_t _851;
  uint32_t _852;
  uint8_t _853;
  uint32_t _854;
  uint32_t* _855;
  uint8_t _856;
  uint32_t _857;
  uint8_t _858;
  uint32_t _859;
  uint8_t _860;
  uint32_t _861;
  uint8_t _862;
  uint32_t _863;
  uint8_t _864;
  uint32_t _865;
  uint32_t* _866;
  uint8_t _867;
  uint32_t _868;
  uint8_t _869;
  uint32_t _870;
  uint8_t _871;
  uint32_t _872;
  uint8_t _873;
  uint32_t _874;
  uint8_t _875;
  uint32_t _876;
  uint32_t* _877;
  uint8_t _878;
  uint32_t _879;
  uint8_t _880;
  uint32_t _881;
  uint8_t _882;
  uint32_t _883;
  uint8_t _884;
  uint32_t _885;
  uint8_t _886;
  uint32_t _887;
  uint32_t* _888;
  uint32_t _889;
  uint8_t _890;
  uint32_t _891;
  uint8_t _892;
  uint32_t _893;
  uint8_t _894;
  uint32_t _895;
  uint8_t _896;
  uint32_t _897;
  uint8_t _898;
  uint32_t _899;
  uint32_t _900;
  uint8_t _901;
  uint32_t _902;
  uint8_t _903;
  uint32_t _904;
  uint8_t _905;
  uint32_t _906;
  uint8_t _907;
  uint32_t _908;
  uint8_t _909;
  uint32_t _910;
  uint32_t _911;
  uint8_t _912;
  uint32_t _913;
  uint8_t _914;
  uint32_t _915;
  uint8_t _916;
  uint32_t _917;
  uint8_t _918;
  uint32_t _919;
  uint8_t _920;
  uint32_t _921;
  uint32_t _922;
  uint8_t _923;
  uint32_t _924;
  uint8_t _925;
  uint32_t _926;
  uint8_t _927;
  uint32_t _928;
  uint8_t _929;
  uint32_t _930;
  uint8_t _931;
  uint32_t _932;
  uint8_t _933;
  uint32_t _934;
  uint8_t _935;
  uint32_t _936;
  uint8_t _937;
  uint32_t _938;
  uint8_t _939;
  uint32_t _940;
  uint8_t _941;
  uint32_t _942;
  uint32_t* _943;
  uint8_t _944;
  uint32_t _945;
  uint8_t _946;
  uint32_t _947;
  uint8_t _948;
  uint32_t _949;
  uint8_t _950;
  uint32_t _951;
  uint8_t _952;
  uint32_t _953;
  uint32_t* _954;
  uint8_t _955;
  uint32_t _956;
  uint8_t _957;
  uint32_t _958;
  uint8_t _959;
  uint32_t _960;
  uint8_t _961;
  uint32_t _962;
  uint8_t _963;
  uint32_t _964;
  uint32_t* _965;
  uint8_t _966;
  uint32_t _967;
  uint8_t _968;
  uint32_t _969;
  uint8_t _970;
  uint32_t _971;
  uint8_t _972;
  uint32_t _973;
  uint8_t _974;
  uint32_t _975;
  uint32_t* _976;
  uint32_t _977;
  uint8_t _978;
  uint32_t _979;
  uint8_t _980;
  uint32_t _981;
  uint8_t _982;
  uint32_t _983;
  uint8_t _984;
  uint32_t _985;
  uint8_t _986;
  uint32_t _987;
  uint32_t _988;
  uint8_t _989;
  uint32_t _990;
  uint8_t _991;
  uint32_t _992;
  uint8_t _993;
  uint32_t _994;
  uint8_t _995;
  uint32_t _996;
  uint8_t _997;
  uint32_t _998;
  uint32_t _999;
  uint8_t _1000;
  uint32_t _1001;
  uint8_t _1002;
  uint32_t _1003;
  uint8_t _1004;
  uint32_t _1005;
  uint8_t _1006;
  uint32_t _1007;
  uint8_t _1008;
  uint32_t _1009;
  uint32_t _1010;
  uint8_t _1011;
  uint32_t _1012;
  uint8_t _1013;
  uint32_t _1014;
  uint8_t _1015;
  uint32_t _1016;
  uint8_t _1017;
  uint32_t _1018;
  uint8_t _1019;
  uint32_t _1020;
  uint8_t _1021;
  uint32_t _1022;
  uint8_t _1023;
  uint32_t _1024;
  uint8_t _1025;
  uint32_t _1026;
  uint8_t _1027;
  uint32_t _1028;
  uint8_t _1029;
  uint32_t _1030;
  uint32_t* _1031;
  uint8_t _1032;
  uint32_t _1033;
  uint8_t _1034;
  uint32_t _1035;
  uint8_t _1036;
  uint32_t _1037;
  uint8_t _1038;
  uint32_t _1039;
  uint8_t _1040;
  uint32_t _1041;
  uint32_t* _1042;
  uint8_t _1043;
  uint32_t _1044;
  uint8_t _1045;
  uint32_t _1046;
  uint8_t _1047;
  uint32_t _1048;
  uint8_t _1049;
  uint32_t _1050;
  uint8_t _1051;
  uint32_t _1052;
  uint32_t* _1053;
  uint8_t _1054;
  uint32_t _1055;
  uint8_t _1056;
  uint32_t _1057;
  uint8_t _1058;
  uint32_t _1059;
  uint8_t _1060;
  uint32_t _1061;
  uint8_t _1062;
  uint32_t _1063;
  uint32_t* _1064;
  uint32_t _1065;
  uint8_t _1066;
  uint32_t _1067;
  uint8_t _1068;
  uint32_t _1069;
  uint8_t _1070;
  uint32_t _1071;
  uint8_t _1072;
  uint32_t _1073;
  uint8_t _1074;
  uint32_t _1075;
  uint32_t _1076;
  uint8_t _1077;
  uint32_t _1078;
  uint8_t _1079;
  uint32_t _1080;
  uint8_t _1081;
  uint32_t _1082;
  uint8_t _1083;
  uint32_t _1084;
  uint8_t _1085;
  uint32_t _1086;
  uint32_t _1087;
  uint8_t _1088;
  uint32_t _1089;
  uint8_t _1090;
  uint32_t _1091;
  uint8_t _1092;
  uint32_t _1093;
  uint8_t _1094;
  uint32_t _1095;
  uint8_t _1096;
  uint32_t _1097;
  uint32_t _1098;
  uint8_t _1099;
  uint32_t _1100;
  uint8_t _1101;
  uint32_t _1102;
  uint8_t _1103;
  uint32_t _1104;
  uint8_t _1105;
  uint32_t _1106;
  uint8_t _1107;
  uint32_t _1108;
  uint8_t _1109;
  uint32_t _1110;
  uint8_t _1111;
  uint32_t _1112;
  uint8_t _1113;
  uint32_t _1114;
  uint8_t _1115;
  uint32_t _1116;
  uint8_t _1117;
  uint32_t _1118;
  uint32_t* _1119;
  uint8_t _1120;
  uint32_t _1121;
  uint8_t _1122;
  uint32_t _1123;
  uint8_t _1124;
  uint32_t _1125;
  uint8_t _1126;
  uint32_t _1127;
  uint8_t _1128;
  uint32_t _1129;
  uint32_t* _1130;
  uint8_t _1131;
  uint32_t _1132;
  uint8_t _1133;
  uint32_t _1134;
  uint8_t _1135;
  uint32_t _1136;
  uint8_t _1137;
  uint32_t _1138;
  uint8_t _1139;
  uint32_t _1140;
  uint32_t* _1141;
  uint8_t _1142;
  uint32_t _1143;
  uint8_t _1144;
  uint32_t _1145;
  uint8_t _1146;
  uint32_t _1147;
  uint8_t _1148;
  uint32_t _1149;
  uint8_t _1150;
  uint32_t _1151;
  uint32_t* _1152;
  uint32_t* _1153;
  uint32_t _1154;
  uint8_t _1155;
  uint32_t _1156;
  uint8_t _1157;
  uint32_t _1158;
  uint8_t _1159;
  uint32_t _1160;
  uint8_t _1161;
  uint32_t _1162;
  uint8_t _1163;
  uint32_t _1164;
  uint32_t _1165;
  uint8_t _1166;
  uint32_t _1167;
  uint8_t _1168;
  uint32_t _1169;
  uint8_t _1170;
  uint32_t _1171;
  uint8_t _1172;
  uint32_t _1173;
  uint8_t _1174;
  uint32_t _1175;
  uint32_t _1176;
  uint8_t _1177;
  uint32_t _1178;
  uint8_t _1179;
  uint32_t _1180;
  uint8_t _1181;
  uint32_t _1182;
  uint8_t _1183;
  uint32_t _1184;
  uint8_t _1185;
  uint32_t _1186;
  uint32_t _1187;
  uint8_t _1188;
  uint32_t _1189;
  uint8_t _1190;
  uint32_t _1191;
  uint8_t _1192;
  uint32_t _1193;
  uint8_t _1194;
  uint32_t _1195;
  uint8_t _1196;
  uint32_t _1197;
  uint8_t _1198;
  uint32_t _1199;
  uint8_t _1200;
  uint32_t _1201;
  uint8_t _1202;
  uint32_t _1203;
  uint8_t _1204;
  uint32_t _1205;
  uint8_t _1206;
  uint32_t _1207;
  uint32_t* _1208;
  uint8_t _1209;
  uint32_t _1210;
  uint8_t _1211;
  uint32_t _1212;
  uint8_t _1213;
  uint32_t _1214;
  uint8_t _1215;
  uint32_t _1216;
  uint8_t _1217;
  uint32_t _1218;
  uint32_t* _1219;
  uint8_t _1220;
  uint32_t _1221;
  uint8_t _1222;
  uint32_t _1223;
  uint8_t _1224;
  uint32_t _1225;
  uint8_t _1226;
  uint32_t _1227;
  uint8_t _1228;
  uint32_t _1229;
  uint32_t* _1230;
  uint8_t _1231;
  uint32_t _1232;
  uint8_t _1233;
  uint32_t _1234;
  uint8_t _1235;
  uint32_t _1236;
  uint8_t _1237;
  uint32_t _1238;
  uint8_t _1239;
  uint32_t _1240;
  uint32_t* _1241;
  uint32_t _1242;
  uint8_t _1243;
  uint32_t _1244;
  uint8_t _1245;
  uint32_t _1246;
  uint8_t _1247;
  uint32_t _1248;
  uint8_t _1249;
  uint32_t _1250;
  uint8_t _1251;
  uint32_t _1252;
  uint32_t _1253;
  uint8_t _1254;
  uint32_t _1255;
  uint8_t _1256;
  uint32_t _1257;
  uint8_t _1258;
  uint32_t _1259;
  uint8_t _1260;
  uint32_t _1261;
  uint8_t _1262;
  uint32_t _1263;
  uint32_t _1264;
  uint8_t _1265;
  uint32_t _1266;
  uint8_t _1267;
  uint32_t _1268;
  uint8_t _1269;
  uint32_t _1270;
  uint8_t _1271;
  uint32_t _1272;
  uint8_t _1273;
  uint32_t _1274;
  uint32_t _1275;
  uint8_t _1276;
  uint32_t _1277;
  uint8_t _1278;
  uint32_t _1279;
  uint8_t _1280;
  uint32_t _1281;
  uint8_t _1282;
  uint32_t _1283;
  uint8_t _1284;
  uint32_t _1285;
  uint8_t _1286;
  uint32_t _1287;
  uint8_t _1288;
  uint32_t _1289;
  uint8_t _1290;
  uint32_t _1291;
  uint8_t _1292;
  uint32_t _1293;
  uint8_t _1294;
  uint32_t _1295;
  uint32_t* _1296;
  uint8_t _1297;
  uint32_t _1298;
  uint8_t _1299;
  uint32_t _1300;
  uint8_t _1301;
  uint32_t _1302;
  uint8_t _1303;
  uint32_t _1304;
  uint8_t _1305;
  uint32_t _1306;
  uint32_t* _1307;
  uint8_t _1308;
  uint32_t _1309;
  uint8_t _1310;
  uint32_t _1311;
  uint8_t _1312;
  uint32_t _1313;
  uint8_t _1314;
  uint32_t _1315;
  uint8_t _1316;
  uint32_t _1317;
  uint32_t* _1318;
  uint8_t _1319;
  uint32_t _1320;
  uint8_t _1321;
  uint32_t _1322;
  uint8_t _1323;
  uint32_t _1324;
  uint8_t _1325;
  uint32_t _1326;
  uint8_t _1327;
  uint32_t _1328;
  uint32_t* _1329;
  uint32_t _1330;
  uint8_t _1331;
  uint32_t _1332;
  uint8_t _1333;
  uint32_t _1334;
  uint8_t _1335;
  uint32_t _1336;
  uint8_t _1337;
  uint32_t _1338;
  uint8_t _1339;
  uint32_t _1340;
  uint32_t _1341;
  uint8_t _1342;
  uint32_t _1343;
  uint8_t _1344;
  uint32_t _1345;
  uint8_t _1346;
  uint32_t _1347;
  uint8_t _1348;
  uint32_t _1349;
  uint8_t _1350;
  uint32_t _1351;
  uint32_t _1352;
  uint8_t _1353;
  uint32_t _1354;
  uint8_t _1355;
  uint32_t _1356;
  uint8_t _1357;
  uint32_t _1358;
  uint8_t _1359;
  uint32_t _1360;
  uint8_t _1361;
  uint32_t _1362;
  uint32_t _1363;
  uint8_t _1364;
  uint32_t _1365;
  uint8_t _1366;
  uint32_t _1367;
  uint8_t _1368;
  uint32_t _1369;
  uint8_t _1370;
  uint32_t _1371;
  uint8_t _1372;
  uint32_t _1373;
  uint8_t _1374;
  uint32_t _1375;
  uint8_t _1376;
  uint32_t _1377;
  uint8_t _1378;
  uint32_t _1379;
  uint8_t _1380;
  uint32_t _1381;
  uint8_t _1382;
  uint32_t _1383;
  uint32_t* _1384;
  uint8_t _1385;
  uint32_t _1386;
  uint8_t _1387;
  uint32_t _1388;
  uint8_t _1389;
  uint32_t _1390;
  uint8_t _1391;
  uint32_t _1392;
  uint8_t _1393;
  uint32_t _1394;
  uint32_t* _1395;
  uint8_t _1396;
  uint32_t _1397;
  uint8_t _1398;
  uint32_t _1399;
  uint8_t _1400;
  uint32_t _1401;
  uint8_t _1402;
  uint32_t _1403;
  uint8_t _1404;
  uint32_t _1405;
  uint32_t* _1406;
  uint8_t _1407;
  uint32_t _1408;
  uint8_t _1409;
  uint32_t _1410;
  uint8_t _1411;
  uint32_t _1412;
  uint8_t _1413;
  uint32_t _1414;
  uint8_t _1415;
  uint32_t _1416;
  uint32_t* _1417;
  uint32_t _1418;
  uint8_t _1419;
  uint32_t _1420;
  uint8_t _1421;
  uint32_t _1422;
  uint8_t _1423;
  uint32_t _1424;
  uint8_t _1425;
  uint32_t _1426;
  uint8_t _1427;
  uint32_t _1428;
  uint32_t _1429;
  uint8_t _1430;
  uint32_t _1431;
  uint8_t _1432;
  uint32_t _1433;
  uint8_t _1434;
  uint32_t _1435;
  uint8_t _1436;
  uint32_t _1437;
  uint8_t _1438;
  uint32_t _1439;
  uint32_t _1440;
  uint8_t _1441;
  uint32_t _1442;
  uint8_t _1443;
  uint32_t _1444;
  uint8_t _1445;
  uint32_t _1446;
  uint8_t _1447;
  uint32_t _1448;
  uint8_t _1449;
  uint32_t _1450;
  uint32_t _1451;
  uint8_t _1452;
  uint32_t _1453;
  uint8_t _1454;
  uint32_t _1455;
  uint8_t _1456;
  uint32_t _1457;
  uint8_t _1458;
  uint32_t _1459;
  uint8_t _1460;
  uint32_t _1461;
  uint8_t _1462;
  uint32_t _1463;
  uint8_t _1464;
  uint32_t _1465;
  uint8_t _1466;
  uint32_t _1467;
  uint8_t _1468;
  uint32_t _1469;
  uint8_t _1470;
  uint32_t _1471;
  uint32_t* _1472;
  uint8_t _1473;
  uint32_t _1474;
  uint8_t _1475;
  uint32_t _1476;
  uint8_t _1477;
  uint32_t _1478;
  uint8_t _1479;
  uint32_t _1480;
  uint8_t _1481;
  uint32_t _1482;
  uint32_t* _1483;
  uint8_t _1484;
  uint32_t _1485;
  uint8_t _1486;
  uint32_t _1487;
  uint8_t _1488;
  uint32_t _1489;
  uint8_t _1490;
  uint32_t _1491;
  uint8_t _1492;
  uint32_t _1493;
  uint32_t* _1494;
  uint8_t _1495;
  uint32_t _1496;
  uint8_t _1497;
  uint32_t _1498;
  uint8_t _1499;
  uint32_t _1500;
  uint8_t _1501;
  uint32_t _1502;
  uint8_t _1503;
  uint32_t _1504;
  uint32_t* _1505;
  uint64_t llvm_cbe__2e_04;
  uint64_t llvm_cbe__2e_04__PHI_TEMPORARY;
  uint32_t* _1506;
  uint32_t _1507;
  uint8_t* _1508;
  uint64_t _1509;

  _ZNSt6vectorIjSaIjEE6resizeEmj(_658, 48, 0);
  _ZNSt6vectorIhSaIhEE6resizeEmh(_659, 48, 0);
  llvm_cbe__2e_035__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1510;

  do {     /* Syntactic loop '' to make GCC happy */
_1510:
  llvm_cbe__2e_035 = llvm_cbe__2e_035__PHI_TEMPORARY;
  _669 = *((&_665.array[((int64_t)(llvm_udiv_u64(llvm_cbe__2e_035, 4)))]));
  _670 = *((&_657[((int64_t)llvm_cbe__2e_035)]));
  *((&_665.array[((int64_t)(llvm_udiv_u64(llvm_cbe__2e_035, 4)))])) = (llvm_add_u32((_669 << 8), (((uint32_t)(uint8_t)_670))));
  _671 = llvm_add_u64(llvm_cbe__2e_035, 1);
  if ((((_671 != UINT64_C(16))&1))) {
    llvm_cbe__2e_035__PHI_TEMPORARY = _671;   /* for PHI node */
    goto _1510;
  } else {
    goto _1511;
  }

  } while (1); /* end of syntactic loop '' */
_1511:
  _672 = (&_665.array[((int32_t)0)]);
  _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj((&_663), _672);
  _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj((&_664), ((&_662.array[((int32_t)0)])));
  _673 = *_672;
  _674 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _675 = ((uint64_t)(uint8_t)_674);
  _676 = llvm_srem_u64(_675, 16);
  _677 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_676)]));
  _678 = llvm_add_u64(_676, 16);
  _679 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_678)]));
  _680 = llvm_add_u64(_678, 16);
  _681 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_680)]));
  _682 = llvm_add_u64(_680, 16);
  _683 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_682)]));
  _684 = llvm_add_u64(_682, 16);
  _685 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_684)]));
  _686 = llvm_add_u64(_684, 16);
  _687 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_686)]));
  _688 = llvm_add_u64(_686, 16);
  _689 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_688)]));
  _690 = llvm_add_u64(_688, 16);
  _691 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_690)]));
  _692 = llvm_add_u64(_690, 16);
  _693 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_692)]));
  _694 = llvm_add_u64(_692, 16);
  _695 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_694)]));
  _696 = llvm_add_u64(_694, 16);
  _697 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_696)]));
  _698 = llvm_add_u64(_696, 16);
  _699 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_698)]));
  _700 = llvm_add_u64(_698, 16);
  _701 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_700)]));
  _702 = llvm_add_u64(_700, 16);
  _703 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_702)]));
  _704 = llvm_add_u64(_702, 16);
  _705 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_704)]));
  _706 = llvm_add_u64(_704, 16);
  _707 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)_706)]));
  _708 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 15);
  _709 = ((uint64_t)(uint8_t)_708);
  _710 = llvm_srem_u64(_709, 16);
  _711 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_710)]));
  _712 = llvm_add_u64(_710, 16);
  _713 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_712)]));
  _714 = llvm_add_u64(_712, 16);
  _715 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_714)]));
  _716 = llvm_add_u64(_714, 16);
  _717 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_716)]));
  _718 = llvm_add_u64(_716, 16);
  _719 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_718)]));
  _720 = llvm_add_u64(_718, 16);
  _721 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_720)]));
  _722 = llvm_add_u64(_720, 16);
  _723 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_722)]));
  _724 = llvm_add_u64(_722, 16);
  _725 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_724)]));
  _726 = llvm_add_u64(_724, 16);
  _727 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_726)]));
  _728 = llvm_add_u64(_726, 16);
  _729 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_728)]));
  _730 = llvm_add_u64(_728, 16);
  _731 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_730)]));
  _732 = llvm_add_u64(_730, 16);
  _733 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_732)]));
  _734 = llvm_add_u64(_732, 16);
  _735 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_734)]));
  _736 = llvm_add_u64(_734, 16);
  _737 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_736)]));
  _738 = llvm_add_u64(_736, 16);
  _739 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_738)]));
  _740 = llvm_add_u64(_738, 16);
  _741 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)_740)]));
  _742 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 12);
  _743 = ((uint64_t)(uint8_t)_742);
  _744 = llvm_srem_u64(_743, 16);
  _745 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_744)]));
  _746 = llvm_add_u64(_744, 16);
  _747 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_746)]));
  _748 = llvm_add_u64(_746, 16);
  _749 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_748)]));
  _750 = llvm_add_u64(_748, 16);
  _751 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_750)]));
  _752 = llvm_add_u64(_750, 16);
  _753 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_752)]));
  _754 = llvm_add_u64(_752, 16);
  _755 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_754)]));
  _756 = llvm_add_u64(_754, 16);
  _757 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_756)]));
  _758 = llvm_add_u64(_756, 16);
  _759 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_758)]));
  _760 = llvm_add_u64(_758, 16);
  _761 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_760)]));
  _762 = llvm_add_u64(_760, 16);
  _763 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_762)]));
  _764 = llvm_add_u64(_762, 16);
  _765 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_764)]));
  _766 = llvm_add_u64(_764, 16);
  _767 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_766)]));
  _768 = llvm_add_u64(_766, 16);
  _769 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_768)]));
  _770 = llvm_add_u64(_768, 16);
  _771 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_770)]));
  _772 = llvm_add_u64(_770, 16);
  _773 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_772)]));
  _774 = llvm_add_u64(_772, 16);
  _775 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)_774)]));
  _776 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 14);
  _777 = ((uint64_t)(uint8_t)_776);
  _778 = llvm_srem_u64(_777, 16);
  _779 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_778)]));
  _780 = llvm_add_u64(_778, 16);
  _781 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_780)]));
  _782 = llvm_add_u64(_780, 16);
  _783 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_782)]));
  _784 = llvm_add_u64(_782, 16);
  _785 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_784)]));
  _786 = llvm_add_u64(_784, 16);
  _787 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_786)]));
  _788 = llvm_add_u64(_786, 16);
  _789 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_788)]));
  _790 = llvm_add_u64(_788, 16);
  _791 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_790)]));
  _792 = llvm_add_u64(_790, 16);
  _793 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_792)]));
  _794 = llvm_add_u64(_792, 16);
  _795 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_794)]));
  _796 = llvm_add_u64(_794, 16);
  _797 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_796)]));
  _798 = llvm_add_u64(_796, 16);
  _799 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_798)]));
  _800 = llvm_add_u64(_798, 16);
  _801 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_800)]));
  _802 = llvm_add_u64(_800, 16);
  _803 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_802)]));
  _804 = llvm_add_u64(_802, 16);
  _805 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_804)]));
  _806 = llvm_add_u64(_804, 16);
  _807 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_806)]));
  _808 = llvm_add_u64(_806, 16);
  _809 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)_808)]));
  _810 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _811 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_810)))]));
  *((&_662.array[((int64_t)0)])) = (((((_673 ^ (llvm_select_u32((((_675 == _706)&1)), _707, (llvm_select_u32((((_675 == _704)&1)), _705, (llvm_select_u32((((_675 == _702)&1)), _703, (llvm_select_u32((((_675 == _700)&1)), _701, (llvm_select_u32((((_675 == _698)&1)), _699, (llvm_select_u32((((_675 == _696)&1)), _697, (llvm_select_u32((((_675 == _694)&1)), _695, (llvm_select_u32((((_675 == _692)&1)), _693, (llvm_select_u32((((_675 == _690)&1)), _691, (llvm_select_u32((((_675 == _688)&1)), _689, (llvm_select_u32((((_675 == _686)&1)), _687, (llvm_select_u32((((_675 == _684)&1)), _685, (llvm_select_u32((((_675 == _682)&1)), _683, (llvm_select_u32((((_675 == _680)&1)), _681, (llvm_select_u32((((_675 == _678)&1)), _679, (llvm_select_u32((((_675 == _676)&1)), _677, 0))))))))))))))))))))))))))))))))) ^ (llvm_select_u32((((_709 == _740)&1)), _741, (llvm_select_u32((((_709 == _738)&1)), _739, (llvm_select_u32((((_709 == _736)&1)), _737, (llvm_select_u32((((_709 == _734)&1)), _735, (llvm_select_u32((((_709 == _732)&1)), _733, (llvm_select_u32((((_709 == _730)&1)), _731, (llvm_select_u32((((_709 == _728)&1)), _729, (llvm_select_u32((((_709 == _726)&1)), _727, (llvm_select_u32((((_709 == _724)&1)), _725, (llvm_select_u32((((_709 == _722)&1)), _723, (llvm_select_u32((((_709 == _720)&1)), _721, (llvm_select_u32((((_709 == _718)&1)), _719, (llvm_select_u32((((_709 == _716)&1)), _717, (llvm_select_u32((((_709 == _714)&1)), _715, (llvm_select_u32((((_709 == _712)&1)), _713, (llvm_select_u32((((_709 == _710)&1)), _711, 0))))))))))))))))))))))))))))))))) ^ (llvm_select_u32((((_743 == _774)&1)), _775, (llvm_select_u32((((_743 == _772)&1)), _773, (llvm_select_u32((((_743 == _770)&1)), _771, (llvm_select_u32((((_743 == _768)&1)), _769, (llvm_select_u32((((_743 == _766)&1)), _767, (llvm_select_u32((((_743 == _764)&1)), _765, (llvm_select_u32((((_743 == _762)&1)), _763, (llvm_select_u32((((_743 == _760)&1)), _761, (llvm_select_u32((((_743 == _758)&1)), _759, (llvm_select_u32((((_743 == _756)&1)), _757, (llvm_select_u32((((_743 == _754)&1)), _755, (llvm_select_u32((((_743 == _752)&1)), _753, (llvm_select_u32((((_743 == _750)&1)), _751, (llvm_select_u32((((_743 == _748)&1)), _749, (llvm_select_u32((((_743 == _746)&1)), _747, (llvm_select_u32((((_743 == _744)&1)), _745, 0))))))))))))))))))))))))))))))))) ^ (llvm_select_u32((((_777 == _808)&1)), _809, (llvm_select_u32((((_777 == _806)&1)), _807, (llvm_select_u32((((_777 == _804)&1)), _805, (llvm_select_u32((((_777 == _802)&1)), _803, (llvm_select_u32((((_777 == _800)&1)), _801, (llvm_select_u32((((_777 == _798)&1)), _799, (llvm_select_u32((((_777 == _796)&1)), _797, (llvm_select_u32((((_777 == _794)&1)), _795, (llvm_select_u32((((_777 == _792)&1)), _793, (llvm_select_u32((((_777 == _790)&1)), _791, (llvm_select_u32((((_777 == _788)&1)), _789, (llvm_select_u32((((_777 == _786)&1)), _787, (llvm_select_u32((((_777 == _784)&1)), _785, (llvm_select_u32((((_777 == _782)&1)), _783, (llvm_select_u32((((_777 == _780)&1)), _781, (llvm_select_u32((((_777 == _778)&1)), _779, 0))))))))))))))))))))))))))))))))) ^ _811);
  _812 = *((&_672[((int64_t)2)]));
  _813 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _814 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_813)))]));
  _815 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _816 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_815)))]));
  _817 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _818 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_817)))]));
  _819 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _820 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_819)))]));
  _821 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _822 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_821)))]));
  *((&_662.array[((int64_t)1)])) = (((((_812 ^ _814) ^ _816) ^ _818) ^ _820) ^ _822);
  _823 = *((&_672[((int64_t)3)]));
  _824 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _825 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_824)))]));
  _826 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _827 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_826)))]));
  _828 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _829 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_828)))]));
  _830 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _831 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_830)))]));
  _832 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _833 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_832)))]));
  *((&_662.array[((int64_t)2)])) = (((((_823 ^ _825) ^ _827) ^ _829) ^ _831) ^ _833);
  _834 = *((&_672[((int64_t)1)]));
  _835 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 10);
  _836 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_835)))]));
  _837 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _838 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_837)))]));
  _839 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 11);
  _840 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_839)))]));
  _841 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 8);
  _842 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_841)))]));
  _843 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _844 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_843)))]));
  *((&_662.array[((int64_t)3)])) = (((((_834 ^ _836) ^ _838) ^ _840) ^ _842) ^ _844);
  _845 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 8);
  _846 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_845)))]));
  _847 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _848 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_847)))]));
  _849 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _850 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_849)))]));
  _851 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _852 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_851)))]));
  _853 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _854 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_853)))]));
  _855 = _ZNSt6vectorIjSaIjEEixEm(_658, 0);
  *_855 = ((((_846 ^ _848) ^ _850) ^ _852) ^ _854);
  _856 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 10);
  _857 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_856)))]));
  _858 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 11);
  _859 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_858)))]));
  _860 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _861 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_860)))]));
  _862 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _863 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_862)))]));
  _864 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _865 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_864)))]));
  _866 = _ZNSt6vectorIjSaIjEEixEm(_658, 1);
  *_866 = ((((_857 ^ _859) ^ _861) ^ _863) ^ _865);
  _867 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 12);
  _868 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_867)))]));
  _869 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 13);
  _870 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_869)))]));
  _871 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _872 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_871)))]));
  _873 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _874 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_873)))]));
  _875 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _876 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_875)))]));
  _877 = _ZNSt6vectorIjSaIjEEixEm(_658, 2);
  *_877 = ((((_868 ^ _870) ^ _872) ^ _874) ^ _876);
  _878 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 14);
  _879 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_878)))]));
  _880 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 15);
  _881 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_880)))]));
  _882 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _883 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_882)))]));
  _884 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _885 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_884)))]));
  _886 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 12);
  _887 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_886)))]));
  _888 = _ZNSt6vectorIjSaIjEEixEm(_658, 3);
  *_888 = ((((_879 ^ _881) ^ _883) ^ _885) ^ _887);
  _889 = *((&_662.array[((int64_t)2)]));
  _890 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _891 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_890)))]));
  _892 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _893 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_892)))]));
  _894 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _895 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_894)))]));
  _896 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _897 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_896)))]));
  _898 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _899 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_898)))]));
  *_672 = (((((_889 ^ _891) ^ _893) ^ _895) ^ _897) ^ _899);
  _900 = *((&_662.array[((int64_t)0)]));
  _901 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 0);
  _902 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_901)))]));
  _903 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 2);
  _904 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_903)))]));
  _905 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 1);
  _906 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_905)))]));
  _907 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _908 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_907)))]));
  _909 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _910 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_909)))]));
  *((&_672[((int64_t)1)])) = (((((_900 ^ _902) ^ _904) ^ _906) ^ _908) ^ _910);
  _911 = *((&_662.array[((int64_t)1)]));
  _912 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _913 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_912)))]));
  _914 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 6);
  _915 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_914)))]));
  _916 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 5);
  _917 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_916)))]));
  _918 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 4);
  _919 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_918)))]));
  _920 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _921 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_920)))]));
  *((&_672[((int64_t)2)])) = (((((_911 ^ _913) ^ _915) ^ _917) ^ _919) ^ _921);
  _922 = *((&_662.array[((int64_t)3)]));
  _923 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _924 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_923)))]));
  _925 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _926 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_925)))]));
  _927 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _928 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_927)))]));
  _929 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _930 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_929)))]));
  _931 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _932 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_931)))]));
  *((&_672[((int64_t)3)])) = (((((_922 ^ _924) ^ _926) ^ _928) ^ _930) ^ _932);
  _933 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _934 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_933)))]));
  _935 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 2);
  _936 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_935)))]));
  _937 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 12);
  _938 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_937)))]));
  _939 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _940 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_939)))]));
  _941 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _942 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_941)))]));
  _943 = _ZNSt6vectorIjSaIjEEixEm(_658, 4);
  *_943 = ((((_934 ^ _936) ^ _938) ^ _940) ^ _942);
  _944 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 1);
  _945 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_944)))]));
  _946 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 0);
  _947 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_946)))]));
  _948 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 14);
  _949 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_948)))]));
  _950 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 15);
  _951 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_950)))]));
  _952 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _953 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_952)))]));
  _954 = _ZNSt6vectorIjSaIjEEixEm(_658, 5);
  *_954 = ((((_945 ^ _947) ^ _949) ^ _951) ^ _953);
  _955 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _956 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_955)))]));
  _957 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 6);
  _958 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_957)))]));
  _959 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _960 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_959)))]));
  _961 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _962 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_961)))]));
  _963 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _964 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_963)))]));
  _965 = _ZNSt6vectorIjSaIjEEixEm(_658, 6);
  *_965 = ((((_956 ^ _958) ^ _960) ^ _962) ^ _964);
  _966 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 5);
  _967 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_966)))]));
  _968 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 4);
  _969 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_968)))]));
  _970 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _971 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_970)))]));
  _972 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _973 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_972)))]));
  _974 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _975 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_974)))]));
  _976 = _ZNSt6vectorIjSaIjEEixEm(_658, 7);
  *_976 = ((((_967 ^ _969) ^ _971) ^ _973) ^ _975);
  _977 = *_672;
  _978 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _979 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_978)))]));
  _980 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 15);
  _981 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_980)))]));
  _982 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 12);
  _983 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_982)))]));
  _984 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 14);
  _985 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_984)))]));
  _986 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _987 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_986)))]));
  *((&_662.array[((int64_t)0)])) = (((((_977 ^ _979) ^ _981) ^ _983) ^ _985) ^ _987);
  _988 = *((&_672[((int64_t)2)]));
  _989 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _990 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_989)))]));
  _991 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _992 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_991)))]));
  _993 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _994 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_993)))]));
  _995 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _996 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_995)))]));
  _997 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _998 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_997)))]));
  *((&_662.array[((int64_t)1)])) = (((((_988 ^ _990) ^ _992) ^ _994) ^ _996) ^ _998);
  _999 = *((&_672[((int64_t)3)]));
  _1000 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _1001 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1000)))]));
  _1002 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _1003 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1002)))]));
  _1004 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _1005 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1004)))]));
  _1006 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _1007 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1006)))]));
  _1008 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _1009 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1008)))]));
  *((&_662.array[((int64_t)2)])) = (((((_999 ^ _1001) ^ _1003) ^ _1005) ^ _1007) ^ _1009);
  _1010 = *((&_672[((int64_t)1)]));
  _1011 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 10);
  _1012 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1011)))]));
  _1013 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _1014 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1013)))]));
  _1015 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 11);
  _1016 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1015)))]));
  _1017 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 8);
  _1018 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1017)))]));
  _1019 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _1020 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1019)))]));
  *((&_662.array[((int64_t)3)])) = (((((_1010 ^ _1012) ^ _1014) ^ _1016) ^ _1018) ^ _1020);
  _1021 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _1022 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1021)))]));
  _1023 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _1024 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1023)))]));
  _1025 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 12);
  _1026 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1025)))]));
  _1027 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 13);
  _1028 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1027)))]));
  _1029 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _1030 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1029)))]));
  _1031 = _ZNSt6vectorIjSaIjEEixEm(_658, 8);
  *_1031 = ((((_1022 ^ _1024) ^ _1026) ^ _1028) ^ _1030);
  _1032 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _1033 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1032)))]));
  _1034 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _1035 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1034)))]));
  _1036 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 14);
  _1037 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1036)))]));
  _1038 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 15);
  _1039 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1038)))]));
  _1040 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 12);
  _1041 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1040)))]));
  _1042 = _ZNSt6vectorIjSaIjEEixEm(_658, 9);
  *_1042 = ((((_1033 ^ _1035) ^ _1037) ^ _1039) ^ _1041);
  _1043 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _1044 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1043)))]));
  _1045 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _1046 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1045)))]));
  _1047 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 8);
  _1048 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1047)))]));
  _1049 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 9);
  _1050 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1049)))]));
  _1051 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _1052 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1051)))]));
  _1053 = _ZNSt6vectorIjSaIjEEixEm(_658, 10);
  *_1053 = ((((_1044 ^ _1046) ^ _1048) ^ _1050) ^ _1052);
  _1054 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _1055 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1054)))]));
  _1056 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _1057 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1056)))]));
  _1058 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 10);
  _1059 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1058)))]));
  _1060 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 11);
  _1061 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1060)))]));
  _1062 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _1063 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1062)))]));
  _1064 = _ZNSt6vectorIjSaIjEEixEm(_658, 11);
  *_1064 = ((((_1055 ^ _1057) ^ _1059) ^ _1061) ^ _1063);
  _1065 = *((&_662.array[((int64_t)2)]));
  _1066 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 5);
  _1067 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1066)))]));
  _1068 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 7);
  _1069 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1068)))]));
  _1070 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 4);
  _1071 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1070)))]));
  _1072 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 6);
  _1073 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1072)))]));
  _1074 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 0);
  _1075 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1074)))]));
  *_672 = (((((_1065 ^ _1067) ^ _1069) ^ _1071) ^ _1073) ^ _1075);
  _1076 = *((&_662.array[((int64_t)0)]));
  _1077 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 0);
  _1078 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1077)))]));
  _1079 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 2);
  _1080 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1079)))]));
  _1081 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 1);
  _1082 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1081)))]));
  _1083 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _1084 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1083)))]));
  _1085 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 2);
  _1086 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1085)))]));
  *((&_672[((int64_t)1)])) = (((((_1076 ^ _1078) ^ _1080) ^ _1082) ^ _1084) ^ _1086);
  _1087 = *((&_662.array[((int64_t)1)]));
  _1088 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _1089 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1088)))]));
  _1090 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 6);
  _1091 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1090)))]));
  _1092 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 5);
  _1093 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1092)))]));
  _1094 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 4);
  _1095 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1094)))]));
  _1096 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 1);
  _1097 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1096)))]));
  *((&_672[((int64_t)2)])) = (((((_1087 ^ _1089) ^ _1091) ^ _1093) ^ _1095) ^ _1097);
  _1098 = *((&_662.array[((int64_t)3)]));
  _1099 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _1100 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1099)))]));
  _1101 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _1102 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1101)))]));
  _1103 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _1104 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1103)))]));
  _1105 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _1106 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1105)))]));
  _1107 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_664), 3);
  _1108 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1107)))]));
  *((&_672[((int64_t)3)])) = (((((_1098 ^ _1100) ^ _1102) ^ _1104) ^ _1106) ^ _1108);
  _1109 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _1110 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1109)))]));
  _1111 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 9);
  _1112 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1111)))]));
  _1113 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _1114 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1113)))]));
  _1115 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 6);
  _1116 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1115)))]));
  _1117 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _1118 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1117)))]));
  _1119 = _ZNSt6vectorIjSaIjEEixEm(_658, 12);
  *_1119 = ((((_1110 ^ _1112) ^ _1114) ^ _1116) ^ _1118);
  _1120 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 10);
  _1121 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1120)))]));
  _1122 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 11);
  _1123 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1122)))]));
  _1124 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 5);
  _1125 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1124)))]));
  _1126 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 4);
  _1127 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1126)))]));
  _1128 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 7);
  _1129 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1128)))]));
  _1130 = _ZNSt6vectorIjSaIjEEixEm(_658, 13);
  *_1130 = ((((_1121 ^ _1123) ^ _1125) ^ _1127) ^ _1129);
  _1131 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 12);
  _1132 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1131)))]));
  _1133 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _1134 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1133)))]));
  _1135 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 3);
  _1136 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1135)))]));
  _1137 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 2);
  _1138 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1137)))]));
  _1139 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 8);
  _1140 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1139)))]));
  _1141 = _ZNSt6vectorIjSaIjEEixEm(_658, 14);
  *_1141 = ((((_1132 ^ _1134) ^ _1136) ^ _1138) ^ _1140);
  _1142 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 14);
  _1143 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1142)))]));
  _1144 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 15);
  _1145 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1144)))]));
  _1146 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 1);
  _1147 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1146)))]));
  _1148 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 0);
  _1149 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1148)))]));
  _1150 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_663), 13);
  _1151 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1150)))]));
  _1152 = _ZNSt6vectorIjSaIjEEixEm(_658, 15);
  *_1152 = ((((_1143 ^ _1145) ^ _1147) ^ _1149) ^ _1151);
  _667 = 0;
  _ZNSaIjEC2Ev((&_668));
  _ZNSt6vectorIjSaIjEEC2EmRKjRKS0_((&_666), 48, (&_667), (&_668));
  goto _1512;

_1512:
  _ZNSaIjED2Ev((&_668));
  _1153 = (&_665.array[((int32_t)0)]);
  _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj((&_660), _1153);
  _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj((&_661), ((&_662.array[((int32_t)0)])));
  _1154 = *_1153;
  _1155 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1156 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1155)))]));
  _1157 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 15);
  _1158 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1157)))]));
  _1159 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 12);
  _1160 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1159)))]));
  _1161 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 14);
  _1162 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1161)))]));
  _1163 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1164 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1163)))]));
  *((&_662.array[((int64_t)0)])) = (((((_1154 ^ _1156) ^ _1158) ^ _1160) ^ _1162) ^ _1164);
  _1165 = *((&_1153[((int64_t)2)]));
  _1166 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1167 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1166)))]));
  _1168 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1169 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1168)))]));
  _1170 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1171 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1170)))]));
  _1172 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1173 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1172)))]));
  _1174 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1175 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1174)))]));
  *((&_662.array[((int64_t)1)])) = (((((_1165 ^ _1167) ^ _1169) ^ _1171) ^ _1173) ^ _1175);
  _1176 = *((&_1153[((int64_t)3)]));
  _1177 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1178 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1177)))]));
  _1179 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1180 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1179)))]));
  _1181 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1182 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1181)))]));
  _1183 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1184 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1183)))]));
  _1185 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1186 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1185)))]));
  *((&_662.array[((int64_t)2)])) = (((((_1176 ^ _1178) ^ _1180) ^ _1182) ^ _1184) ^ _1186);
  _1187 = *((&_1153[((int64_t)1)]));
  _1188 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 10);
  _1189 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1188)))]));
  _1190 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1191 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1190)))]));
  _1192 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 11);
  _1193 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1192)))]));
  _1194 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 8);
  _1195 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1194)))]));
  _1196 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1197 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1196)))]));
  *((&_662.array[((int64_t)3)])) = (((((_1187 ^ _1189) ^ _1191) ^ _1193) ^ _1195) ^ _1197);
  _1198 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 8);
  _1199 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1198)))]));
  _1200 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1201 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1200)))]));
  _1202 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1203 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1202)))]));
  _1204 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1205 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1204)))]));
  _1206 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1207 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1206)))]));
  _1208 = _ZNSt6vectorIjSaIjEEixEm((&_666), 0);
  *_1208 = ((((_1199 ^ _1201) ^ _1203) ^ _1205) ^ _1207);
  _1209 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 10);
  _1210 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1209)))]));
  _1211 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 11);
  _1212 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1211)))]));
  _1213 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1214 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1213)))]));
  _1215 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1216 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1215)))]));
  _1217 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1218 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1217)))]));
  _1219 = _ZNSt6vectorIjSaIjEEixEm((&_666), 1);
  *_1219 = ((((_1210 ^ _1212) ^ _1214) ^ _1216) ^ _1218);
  _1220 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 12);
  _1221 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1220)))]));
  _1222 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 13);
  _1223 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1222)))]));
  _1224 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1225 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1224)))]));
  _1226 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1227 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1226)))]));
  _1228 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1229 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1228)))]));
  _1230 = _ZNSt6vectorIjSaIjEEixEm((&_666), 2);
  *_1230 = ((((_1221 ^ _1223) ^ _1225) ^ _1227) ^ _1229);
  _1231 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 14);
  _1232 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1231)))]));
  _1233 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 15);
  _1234 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1233)))]));
  _1235 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1236 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1235)))]));
  _1237 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1238 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1237)))]));
  _1239 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 12);
  _1240 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1239)))]));
  _1241 = _ZNSt6vectorIjSaIjEEixEm((&_666), 3);
  *_1241 = ((((_1232 ^ _1234) ^ _1236) ^ _1238) ^ _1240);
  _1242 = *((&_662.array[((int64_t)2)]));
  _1243 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1244 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1243)))]));
  _1245 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1246 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1245)))]));
  _1247 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1248 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1247)))]));
  _1249 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1250 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1249)))]));
  _1251 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1252 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1251)))]));
  *_1153 = (((((_1242 ^ _1244) ^ _1246) ^ _1248) ^ _1250) ^ _1252);
  _1253 = *((&_662.array[((int64_t)0)]));
  _1254 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 0);
  _1255 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1254)))]));
  _1256 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 2);
  _1257 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1256)))]));
  _1258 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 1);
  _1259 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1258)))]));
  _1260 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1261 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1260)))]));
  _1262 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1263 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1262)))]));
  *((&_1153[((int64_t)1)])) = (((((_1253 ^ _1255) ^ _1257) ^ _1259) ^ _1261) ^ _1263);
  _1264 = *((&_662.array[((int64_t)1)]));
  _1265 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1266 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1265)))]));
  _1267 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 6);
  _1268 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1267)))]));
  _1269 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 5);
  _1270 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1269)))]));
  _1271 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 4);
  _1272 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1271)))]));
  _1273 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1274 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1273)))]));
  *((&_1153[((int64_t)2)])) = (((((_1264 ^ _1266) ^ _1268) ^ _1270) ^ _1272) ^ _1274);
  _1275 = *((&_662.array[((int64_t)3)]));
  _1276 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1277 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1276)))]));
  _1278 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1279 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1278)))]));
  _1280 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1281 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1280)))]));
  _1282 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1283 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1282)))]));
  _1284 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1285 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1284)))]));
  *((&_1153[((int64_t)3)])) = (((((_1275 ^ _1277) ^ _1279) ^ _1281) ^ _1283) ^ _1285);
  _1286 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1287 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1286)))]));
  _1288 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 2);
  _1289 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1288)))]));
  _1290 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 12);
  _1291 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1290)))]));
  _1292 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1293 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1292)))]));
  _1294 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1295 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1294)))]));
  _1296 = _ZNSt6vectorIjSaIjEEixEm((&_666), 4);
  *_1296 = ((((_1287 ^ _1289) ^ _1291) ^ _1293) ^ _1295);
  _1297 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 1);
  _1298 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1297)))]));
  _1299 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 0);
  _1300 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1299)))]));
  _1301 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 14);
  _1302 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1301)))]));
  _1303 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 15);
  _1304 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1303)))]));
  _1305 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1306 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1305)))]));
  _1307 = _ZNSt6vectorIjSaIjEEixEm((&_666), 5);
  *_1307 = ((((_1298 ^ _1300) ^ _1302) ^ _1304) ^ _1306);
  _1308 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1309 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1308)))]));
  _1310 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 6);
  _1311 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1310)))]));
  _1312 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1313 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1312)))]));
  _1314 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1315 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1314)))]));
  _1316 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1317 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1316)))]));
  _1318 = _ZNSt6vectorIjSaIjEEixEm((&_666), 6);
  *_1318 = ((((_1309 ^ _1311) ^ _1313) ^ _1315) ^ _1317);
  _1319 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 5);
  _1320 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1319)))]));
  _1321 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 4);
  _1322 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1321)))]));
  _1323 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1324 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1323)))]));
  _1325 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1326 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1325)))]));
  _1327 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1328 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1327)))]));
  _1329 = _ZNSt6vectorIjSaIjEEixEm((&_666), 7);
  *_1329 = ((((_1320 ^ _1322) ^ _1324) ^ _1326) ^ _1328);
  _1330 = *_1153;
  _1331 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1332 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1331)))]));
  _1333 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 15);
  _1334 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1333)))]));
  _1335 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 12);
  _1336 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1335)))]));
  _1337 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 14);
  _1338 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1337)))]));
  _1339 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1340 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1339)))]));
  *((&_662.array[((int64_t)0)])) = (((((_1330 ^ _1332) ^ _1334) ^ _1336) ^ _1338) ^ _1340);
  _1341 = *((&_1153[((int64_t)2)]));
  _1342 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1343 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1342)))]));
  _1344 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1345 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1344)))]));
  _1346 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1347 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1346)))]));
  _1348 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1349 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1348)))]));
  _1350 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1351 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1350)))]));
  *((&_662.array[((int64_t)1)])) = (((((_1341 ^ _1343) ^ _1345) ^ _1347) ^ _1349) ^ _1351);
  _1352 = *((&_1153[((int64_t)3)]));
  _1353 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1354 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1353)))]));
  _1355 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1356 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1355)))]));
  _1357 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1358 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1357)))]));
  _1359 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1360 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1359)))]));
  _1361 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1362 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1361)))]));
  *((&_662.array[((int64_t)2)])) = (((((_1352 ^ _1354) ^ _1356) ^ _1358) ^ _1360) ^ _1362);
  _1363 = *((&_1153[((int64_t)1)]));
  _1364 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 10);
  _1365 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1364)))]));
  _1366 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1367 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1366)))]));
  _1368 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 11);
  _1369 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1368)))]));
  _1370 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 8);
  _1371 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1370)))]));
  _1372 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1373 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1372)))]));
  *((&_662.array[((int64_t)3)])) = (((((_1363 ^ _1365) ^ _1367) ^ _1369) ^ _1371) ^ _1373);
  _1374 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1375 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1374)))]));
  _1376 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1377 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1376)))]));
  _1378 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 12);
  _1379 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1378)))]));
  _1380 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 13);
  _1381 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1380)))]));
  _1382 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1383 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1382)))]));
  _1384 = _ZNSt6vectorIjSaIjEEixEm((&_666), 8);
  *_1384 = ((((_1375 ^ _1377) ^ _1379) ^ _1381) ^ _1383);
  _1385 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1386 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1385)))]));
  _1387 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1388 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1387)))]));
  _1389 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 14);
  _1390 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1389)))]));
  _1391 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 15);
  _1392 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1391)))]));
  _1393 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 12);
  _1394 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1393)))]));
  _1395 = _ZNSt6vectorIjSaIjEEixEm((&_666), 9);
  *_1395 = ((((_1386 ^ _1388) ^ _1390) ^ _1392) ^ _1394);
  _1396 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1397 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1396)))]));
  _1398 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1399 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1398)))]));
  _1400 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 8);
  _1401 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1400)))]));
  _1402 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 9);
  _1403 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1402)))]));
  _1404 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1405 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1404)))]));
  _1406 = _ZNSt6vectorIjSaIjEEixEm((&_666), 10);
  *_1406 = ((((_1397 ^ _1399) ^ _1401) ^ _1403) ^ _1405);
  _1407 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1408 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1407)))]));
  _1409 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1410 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1409)))]));
  _1411 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 10);
  _1412 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1411)))]));
  _1413 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 11);
  _1414 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1413)))]));
  _1415 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1416 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1415)))]));
  _1417 = _ZNSt6vectorIjSaIjEEixEm((&_666), 11);
  *_1417 = ((((_1408 ^ _1410) ^ _1412) ^ _1414) ^ _1416);
  _1418 = *((&_662.array[((int64_t)2)]));
  _1419 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 5);
  _1420 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1419)))]));
  _1421 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 7);
  _1422 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1421)))]));
  _1423 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 4);
  _1424 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1423)))]));
  _1425 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 6);
  _1426 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1425)))]));
  _1427 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 0);
  _1428 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1427)))]));
  *_1153 = (((((_1418 ^ _1420) ^ _1422) ^ _1424) ^ _1426) ^ _1428);
  _1429 = *((&_662.array[((int64_t)0)]));
  _1430 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 0);
  _1431 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1430)))]));
  _1432 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 2);
  _1433 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1432)))]));
  _1434 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 1);
  _1435 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1434)))]));
  _1436 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1437 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1436)))]));
  _1438 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 2);
  _1439 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1438)))]));
  *((&_1153[((int64_t)1)])) = (((((_1429 ^ _1431) ^ _1433) ^ _1435) ^ _1437) ^ _1439);
  _1440 = *((&_662.array[((int64_t)1)]));
  _1441 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1442 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1441)))]));
  _1443 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 6);
  _1444 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1443)))]));
  _1445 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 5);
  _1446 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1445)))]));
  _1447 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 4);
  _1448 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1447)))]));
  _1449 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 1);
  _1450 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1449)))]));
  *((&_1153[((int64_t)2)])) = (((((_1440 ^ _1442) ^ _1444) ^ _1446) ^ _1448) ^ _1450);
  _1451 = *((&_662.array[((int64_t)3)]));
  _1452 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1453 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1452)))]));
  _1454 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1455 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1454)))]));
  _1456 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1457 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1456)))]));
  _1458 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1459 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1458)))]));
  _1460 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_661), 3);
  _1461 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1460)))]));
  *((&_1153[((int64_t)3)])) = (((((_1451 ^ _1453) ^ _1455) ^ _1457) ^ _1459) ^ _1461);
  _1462 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1463 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1462)))]));
  _1464 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 9);
  _1465 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1464)))]));
  _1466 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1467 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1466)))]));
  _1468 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 6);
  _1469 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1468)))]));
  _1470 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1471 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1470)))]));
  _1472 = _ZNSt6vectorIjSaIjEEixEm((&_666), 12);
  *_1472 = ((((_1463 ^ _1465) ^ _1467) ^ _1469) ^ _1471);
  _1473 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 10);
  _1474 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1473)))]));
  _1475 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 11);
  _1476 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1475)))]));
  _1477 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 5);
  _1478 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1477)))]));
  _1479 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 4);
  _1480 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1479)))]));
  _1481 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 7);
  _1482 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1481)))]));
  _1483 = _ZNSt6vectorIjSaIjEEixEm((&_666), 13);
  *_1483 = ((((_1474 ^ _1476) ^ _1478) ^ _1480) ^ _1482);
  _1484 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 12);
  _1485 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1484)))]));
  _1486 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1487 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1486)))]));
  _1488 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 3);
  _1489 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1488)))]));
  _1490 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 2);
  _1491 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1490)))]));
  _1492 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 8);
  _1493 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1492)))]));
  _1494 = _ZNSt6vectorIjSaIjEEixEm((&_666), 14);
  *_1494 = ((((_1485 ^ _1487) ^ _1489) ^ _1491) ^ _1493);
  _1495 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 14);
  _1496 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S5.array[((int64_t)(((uint64_t)(uint8_t)_1495)))]));
  _1497 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 15);
  _1498 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S6.array[((int64_t)(((uint64_t)(uint8_t)_1497)))]));
  _1499 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 1);
  _1500 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S7.array[((int64_t)(((uint64_t)(uint8_t)_1499)))]));
  _1501 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 0);
  _1502 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1501)))]));
  _1503 = _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm((&_660), 13);
  _1504 = *((&_ZZ7cast_ksRSt6vectorIjSaIjEEPjE2S8.array[((int64_t)(((uint64_t)(uint8_t)_1503)))]));
  _1505 = _ZNSt6vectorIjSaIjEEixEm((&_666), 15);
  *_1505 = ((((_1496 ^ _1498) ^ _1500) ^ _1502) ^ _1504);
  llvm_cbe__2e_04__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1513;

  do {     /* Syntactic loop '' to make GCC happy */
_1513:
  llvm_cbe__2e_04 = llvm_cbe__2e_04__PHI_TEMPORARY;
  _1506 = _ZNSt6vectorIjSaIjEEixEm((&_666), llvm_cbe__2e_04);
  _1507 = *_1506;
  _1508 = _ZNSt6vectorIhSaIhEEixEm(_659, llvm_cbe__2e_04);
  *_1508 = (((uint8_t)(llvm_urem_u32(_1507, 32))));
  _1509 = llvm_add_u64(llvm_cbe__2e_04, 1);
  if ((((_1509 != UINT64_C(16))&1))) {
    llvm_cbe__2e_04__PHI_TEMPORARY = _1509;   /* for PHI node */
    goto _1513;
  } else {
    goto _1514;
  }

  } while (1); /* end of syntactic loop '' */
_1514:
  _ZNSt6vectorIjSaIjEED2Ev((&_666));
}


void _ZNSt6vectorIjSaIjEE6resizeEmj(struct l_struct_class_OC_std_KD__KD_vector* _1515, uint64_t _1516, uint32_t _1517) {
  uint32_t _1518;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1519;    /* Address-exposed local */
  uint64_t _1520;
  uint32_t* _1521;
  uint64_t _1522;
  uint32_t* _1523;
  uint64_t _1524;
  uint32_t* _1525;

  _1518 = _1517;
  _1520 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1515);
  if ((((((uint64_t)_1516) > ((uint64_t)_1520))&1))) {
    goto _1526;
  } else {
    goto _1527;
  }

_1526:
  _1521 = _ZNSt6vectorIjSaIjEE3endEv(_1515);
  *((&_1519.field0)) = _1521;
  _1522 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1515);
  _1523 = *((&_1519.field0));
  _ZNSt6vectorIjSaIjEE6insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(_1515, _1523, (llvm_sub_u64(_1516, _1522)), (&_1518));
  goto _1528;

_1527:
  _1524 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1515);
  if ((((((uint64_t)_1516) < ((uint64_t)_1524))&1))) {
    goto _1529;
  } else {
    goto _1528;
  }

_1529:
  _1525 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1515))->field0))->field0));
  _ZNSt6vectorIjSaIjEE15_M_erase_at_endEPj(_1515, ((&_1525[((int64_t)_1516)])));
  goto _1528;

_1528:
  return;
}


void _ZNSt6vectorIhSaIhEE6resizeEmh(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1530, uint64_t _1531, uint8_t _1532) {
  uint8_t _1533;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1534;    /* Address-exposed local */
  uint64_t _1535;
  uint8_t* _1536;
  uint64_t _1537;
  uint8_t* _1538;
  uint64_t _1539;
  uint8_t* _1540;

  _1533 = _1532;
  _1535 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1530);
  if ((((((uint64_t)_1531) > ((uint64_t)_1535))&1))) {
    goto _1541;
  } else {
    goto _1542;
  }

_1541:
  _1536 = _ZNSt6vectorIhSaIhEE3endEv(_1530);
  *((&_1534.field0)) = _1536;
  _1537 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1530);
  _1538 = *((&_1534.field0));
  _ZNSt6vectorIhSaIhEE6insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(_1530, _1538, (llvm_sub_u64(_1531, _1537)), (&_1533));
  goto _1543;

_1542:
  _1539 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1530);
  if ((((((uint64_t)_1531) < ((uint64_t)_1539))&1))) {
    goto _1544;
  } else {
    goto _1543;
  }

_1544:
  _1540 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1530))->field0))->field0));
  _ZNSt6vectorIhSaIhEE15_M_erase_at_endEPh(_1530, ((&_1540[((int64_t)_1531)])));
  goto _1543;

_1543:
  return;
}


void _ZNSaIjEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator* _1545) {
  _ZN9__gnu_cxx13new_allocatorIjEC2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_1545)));
}


void _ZNSt6vectorIjSaIjEEC2EmRKjRKS0_(struct l_struct_class_OC_std_KD__KD_vector* _1546, uint64_t _1547, uint32_t* _1548, struct l_struct_class_OC_std_KD__KD_allocator* _1549) {
  _ZNSt12_Vector_baseIjSaIjEEC2EmRKS0_((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1546)), _1547, _1549);
  _ZNSt6vectorIjSaIjEE18_M_fill_initializeEmRKj(_1546, _1547, _1548);
  goto _1550;

_1550:
  return;
}


void _ZNSaIjED2Ev(struct l_struct_class_OC_std_KD__KD_allocator* _1551) {
  _ZN9__gnu_cxx13new_allocatorIjED2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_1551)));
}


void _ZNSt6vectorIjSaIjEED2Ev(struct l_struct_class_OC_std_KD__KD_vector* _1552) {
  uint32_t* _1553;
  uint32_t* _1554;
  struct l_struct_class_OC_std_KD__KD_allocator* _1555;

  _1553 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1552))->field0))->field0));
  _1554 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1552))->field0))->field1));
  _1555 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1552)));
  _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E(_1553, _1554, _1555);
  goto _1556;

_1556:
  _ZNSt12_Vector_baseIjSaIjEED2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1552)));
}


__noreturn void __clang_call_terminate(uint8_t* _1557) {
  uint8_t* _1558;

  _1558 = __cxa_begin_catch(_1557);
  _ZSt9terminatev();
  __builtin_unreachable();

}


int main(void) {
  struct l_struct_class_OC_std_KD__KD_vector _1559;    /* Address-exposed local */
  struct l_struct_class_OC_std_KD__KD_vector_OC_0 _1560;    /* Address-exposed local */

  _ZNSt6vectorIjSaIjEEC2Ev((&_1559));
  _ZNSt6vectorIhSaIhEEC2Ev((&_1560));
  goto _1561;

_1561:
  _Z12key_schedulePKhRSt6vectorIjSaIjEERS1_IhSaIhEE(((&_ZL6in_key.array[((int32_t)0)])), (&_1559), (&_1560));
  goto _1562;

_1562:
  _Z9encrypt_nRSt6vectorIjSaIjEERS_IhSaIhEEPKhPh((&_1559), (&_1560), ((&_ZL2in.array[((int32_t)0)])), ((&_ZL3out.array[((int32_t)0)])));
  goto _1563;

_1563:
  _ZNSt6vectorIhSaIhEED2Ev((&_1560));
  goto _1564;

_1564:
  _ZNSt6vectorIjSaIjEED2Ev((&_1559));
  return 0;
}


void _ZNSt6vectorIjSaIjEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector* _1565) {
  _ZNSt12_Vector_baseIjSaIjEEC2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1565)));
}


void _ZNSt6vectorIhSaIhEEC2Ev(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1566) {
  _ZNSt12_Vector_baseIhSaIhEEC2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1566)));
}


void _ZNSt6vectorIhSaIhEED2Ev(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1567) {
  uint8_t* _1568;
  uint8_t* _1569;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1570;

  _1568 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1567))->field0))->field0));
  _1569 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1567))->field0))->field1));
  _1570 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1567)));
  _ZSt8_DestroyIPhhEvT_S1_RSaIT0_E(_1568, _1569, _1570);
  goto _1571;

_1571:
  _ZNSt12_Vector_baseIhSaIhEED2Ev((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1567)));
}


void _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderC2EPKj(struct l_struct_class_OC_ByteReader* _1572, uint32_t* _1573) {
  *((&_1572->field0)) = _1573;
}


uint8_t _ZZ7cast_ksRSt6vectorIjSaIjEEPjEN10ByteReaderclEm(struct l_struct_class_OC_ByteReader* _1574, uint64_t _1575) {
  uint32_t* _1576;
  uint32_t _1577;

  _1576 = *((&_1574->field0));
  _1577 = *((&_1576[((int64_t)(llvm_udiv_u64(_1575, 4)))]));
  return (((uint8_t)(llvm_lshr_u32(_1577, (((uint32_t)(llvm_mul_u64(8, (llvm_sub_u64(3, (llvm_urem_u64(_1575, 4))))))))))));
}


uint64_t _ZNKSt6vectorIjSaIjEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector* _1578) {
  uint32_t* _1579;
  uint32_t* _1580;

  _1579 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1578))->field0))->field1));
  _1580 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1578))->field0))->field0));
  return (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1579)), (((uint64_t)(uintptr_t)_1580)))), 4));
}


void _ZNSt6vectorIjSaIjEE6insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(struct l_struct_class_OC_std_KD__KD_vector* _1581, uint32_t* _1582, uint64_t _1583, uint32_t* _1584) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1585;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1586;    /* Address-exposed local */
  uint8_t* _1587;
  uint32_t* _1588;

  *((&_1585.field0)) = _1582;
  _1587 = memcpy((((uint8_t*)(&_1586))), (((uint8_t*)(&_1585))), 8);
  _1588 = *((&_1586.field0));
  _ZNSt6vectorIjSaIjEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(_1581, _1588, _1583, _1584);
}


uint32_t* _ZNSt6vectorIjSaIjEE3endEv(struct l_struct_class_OC_std_KD__KD_vector* _1589) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1590;    /* Address-exposed local */
  uint32_t* _1591;

  _ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEC2ERKS1_((&_1590), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1589))->field0))->field1)));
  _1591 = *((&_1590.field0));
  return _1591;
}


void _ZNSt6vectorIjSaIjEE15_M_erase_at_endEPj(struct l_struct_class_OC_std_KD__KD_vector* _1592, uint32_t* _1593) {
  uint32_t* _1594;
  struct l_struct_class_OC_std_KD__KD_allocator* _1595;

  _1594 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1592))->field0))->field1));
  _1595 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1592)));
  _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E(_1593, _1594, _1595);
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1592))->field0))->field1)) = _1593;
}


void _ZNSt6vectorIjSaIjEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPjS1_EEmRKj(struct l_struct_class_OC_std_KD__KD_vector* _1596, uint32_t* _1597, uint64_t _1598, uint32_t* _1599) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1600;    /* Address-exposed local */
  uint32_t _1601;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1602;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1603;    /* Address-exposed local */
  uint32_t* _1604;
  uint32_t* _1605;
  uint32_t _1606;
  uint32_t* _1607;
  uint64_t _1608;
  uint32_t* _1609;
  uint32_t* _1610;
  uint32_t* _1611;
  uint32_t* _1612;
  struct l_struct_class_OC_std_KD__KD_allocator* _1613;
  uint32_t* _1614;
  uint32_t** _1615;
  uint32_t* _1616;
  uint32_t** _1617;
  uint32_t* _1618;
  uint32_t* _1619;
  uint32_t** _1620;
  uint32_t* _1621;
  uint32_t** _1622;
  uint32_t* _1623;
  struct l_struct_class_OC_std_KD__KD_allocator* _1624;
  uint32_t** _1625;
  uint32_t* _1626;
  uint32_t** _1627;
  uint32_t* _1628;
  uint32_t* _1629;
  struct l_struct_class_OC_std_KD__KD_allocator* _1630;
  uint32_t* _1631;
  uint32_t** _1632;
  uint32_t* _1633;
  uint32_t** _1634;
  uint32_t* _1635;
  uint64_t _1636;
  uint32_t* _1637;
  uint64_t _1638;
  uint32_t* _1639;
  struct l_struct_class_OC_std_KD__KD_allocator* _1640;
  uint32_t* _1641;
  uint32_t** _1642;
  uint32_t* _1643;
  struct l_struct_class_OC_std_KD__KD_allocator* _1644;
  uint32_t* _1645;
  uint32_t** _1646;
  uint32_t* _1647;
  uint32_t* _1648;
  struct l_struct_class_OC_std_KD__KD_allocator* _1649;
  uint32_t* _1650;
  uint32_t* _1651;
  uint32_t* _1652;
  struct l_struct_class_OC_std_KD__KD_allocator* _1653;
  uint32_t* _1654;
  uint32_t* _1655;
  uint32_t* _1656;

  *((&_1600.field0)) = _1597;
  if ((((_1598 != UINT64_C(0))&1))) {
    goto _1657;
  } else {
    goto _1658;
  }

_1657:
  _1604 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field2));
  _1605 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  if ((((((uint64_t)(llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1604)), (((uint64_t)(uintptr_t)_1605)))), 4))) >= ((uint64_t)_1598))&1))) {
    goto _1659;
  } else {
    goto _1660;
  }

_1659:
  _1606 = *_1599;
  _1601 = _1606;
  _1607 = _ZNSt6vectorIjSaIjEE3endEv(_1596);
  *((&_1602.field0)) = _1607;
  _1608 = _ZN9__gnu_cxxmiIPjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_1602), (&_1600));
  _1609 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1610 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  if ((((((uint64_t)_1608) > ((uint64_t)_1598))&1))) {
    goto _1661;
  } else {
    goto _1662;
  }

_1661:
  _1611 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1612 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1613 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _1614 = _ZSt22__uninitialized_move_aIPjS0_SaIjEET0_T_S3_S2_RT1_(((&_1610[((int64_t)(llvm_neg_u64(_1598)))])), _1611, _1612, _1613);
  _1615 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1);
  _1616 = *_1615;
  *_1615 = ((&_1616[((int64_t)_1598)]));
  _1617 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1618 = *_1617;
  _1619 = _ZSt13copy_backwardIPjS0_ET0_T_S2_S1_(_1618, ((&_1609[((int64_t)(llvm_neg_u64(_1598)))])), _1609);
  _1620 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1621 = *_1620;
  _1622 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1623 = *_1622;
  _ZSt4fillIPjjEvT_S1_RKT0_(_1621, ((&_1623[((int64_t)_1598)])), (&_1601));
  goto _1658;

_1662:
  _1624 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _ZSt24__uninitialized_fill_n_aIPjmjjEvT_T0_RKT1_RSaIT2_E(_1610, (llvm_sub_u64(_1598, _1608)), (&_1601), _1624);
  _1625 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1);
  _1626 = *_1625;
  *_1625 = ((&_1626[((int64_t)(llvm_sub_u64(_1598, _1608)))]));
  _1627 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1628 = *_1627;
  _1629 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1630 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _1631 = _ZSt22__uninitialized_move_aIPjS0_SaIjEET0_T_S3_S2_RT1_(_1628, _1609, _1629, _1630);
  _1632 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1);
  _1633 = *_1632;
  *_1632 = ((&_1633[((int64_t)_1608)]));
  _1634 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1635 = *_1634;
  _ZSt4fillIPjjEvT_S1_RKT0_(_1635, _1609, (&_1601));
  goto _1658;

_1660:
  _1636 = _ZNKSt6vectorIjSaIjEE12_M_check_lenEmPKc(_1596, _1598, ((&_OC_str.array[((int32_t)0)])));
  _1637 = _ZNSt6vectorIjSaIjEE5beginEv(_1596);
  *((&_1603.field0)) = _1637;
  _1638 = _ZN9__gnu_cxxmiIPjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_1600), (&_1603));
  _1639 = _ZNSt12_Vector_baseIjSaIjEE11_M_allocateEm((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)), _1636);
  _1640 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _ZSt24__uninitialized_fill_n_aIPjmjjEvT_T0_RKT1_RSaIT2_E(((&_1639[((int64_t)_1638)])), _1598, _1599, _1640);
  goto _1663;

_1663:
  _1641 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field0));
  _1642 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1643 = *_1642;
  _1644 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _1645 = _ZSt34__uninitialized_move_if_noexcept_aIPjS0_SaIjEET0_T_S3_S2_RT1_(_1641, _1643, _1639, _1644);
  goto _1664;

_1664:
  _1646 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv((&_1600));
  _1647 = *_1646;
  _1648 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1649 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _1650 = _ZSt34__uninitialized_move_if_noexcept_aIPjS0_SaIjEET0_T_S3_S2_RT1_(_1647, _1648, ((&_1645[((int64_t)_1598)])), _1649);
  goto _1665;

_1665:
  _1651 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field0));
  _1652 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1));
  _1653 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)));
  _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E(_1651, _1652, _1653);
  _1654 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field0));
  _1655 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field2));
  _1656 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field0));
  _ZNSt12_Vector_baseIjSaIjEE13_M_deallocateEPjm((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596)), _1654, (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1655)), (((uint64_t)(uintptr_t)_1656)))), 4)));
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field0)) = _1639;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field1)) = _1650;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1596))->field0))->field2)) = ((&_1639[((int64_t)_1636)]));
  goto _1658;

_1658:
  return;
}


uint64_t _ZN9__gnu_cxxmiIPjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1666, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1667) {
  uint32_t** _1668;
  uint32_t* _1669;
  uint32_t** _1670;
  uint32_t* _1671;

  _1668 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv(_1666);
  _1669 = *_1668;
  _1670 = _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv(_1667);
  _1671 = *_1670;
  return (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1669)), (((uint64_t)(uintptr_t)_1671)))), 4));
}


uint32_t* _ZSt22__uninitialized_move_aIPjS0_SaIjEET0_T_S3_S2_RT1_(uint32_t* _1672, uint32_t* _1673, uint32_t* _1674, struct l_struct_class_OC_std_KD__KD_allocator* _1675) {
  uint32_t* _1676;

  _1676 = _ZSt22__uninitialized_copy_aIPjS0_jET0_T_S2_S1_RSaIT1_E(_1672, _1673, _1674, _1675);
  return _1676;
}


struct l_struct_class_OC_std_KD__KD_allocator* _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1677) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator*)((&_1677->field0))));
}


uint32_t* _ZSt13copy_backwardIPjS0_ET0_T_S2_S1_(uint32_t* _1678, uint32_t* _1679, uint32_t* _1680) {
  uint32_t* _1681;
  uint32_t* _1682;
  uint32_t* _1683;

  _1681 = _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(_1678);
  _1682 = _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(_1679);
  _1683 = _ZSt23__copy_move_backward_a2ILb0EPjS0_ET1_T0_S2_S1_(_1681, _1682, _1680);
  return _1683;
}


uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1684) {
  return ((&_1684->field0));
}


void _ZSt4fillIPjjEvT_S1_RKT0_(uint32_t* _1685, uint32_t* _1686, uint32_t* _1687) {
  uint32_t* _1688;
  uint32_t* _1689;

  _1688 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1685);
  _1689 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1686);
  _ZSt8__fill_aIPjjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(_1688, _1689, _1687);
}


void _ZSt24__uninitialized_fill_n_aIPjmjjEvT_T0_RKT1_RSaIT2_E(uint32_t* _1690, uint64_t _1691, uint32_t* _1692, struct l_struct_class_OC_std_KD__KD_allocator* _1693) {
  _ZSt20uninitialized_fill_nIPjmjEvT_T0_RKT1_(_1690, _1691, _1692);
}


uint64_t _ZNKSt6vectorIjSaIjEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector* _1694, uint64_t _1695, uint8_t* _1696) {
  uint64_t _1697;    /* Address-exposed local */
  uint64_t _1698;    /* Address-exposed local */
  uint64_t _1699;
  uint64_t _1700;
  uint64_t _1701;
  uint64_t _1702;
  uint64_t _1703;
  uint64_t* _1704;
  uint64_t _1705;
  uint64_t _1706;
  uint64_t _1707;
  uint64_t _1708;
  uint64_t _1709;
  uint64_t _1710;
  uint64_t _1710__PHI_TEMPORARY;

  _1697 = _1695;
  _1699 = _ZNKSt6vectorIjSaIjEE8max_sizeEv(_1694);
  _1700 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1694);
  _1701 = _1697;
  if ((((((uint64_t)(llvm_sub_u64(_1699, _1700))) < ((uint64_t)_1701))&1))) {
    goto _1711;
  } else {
    goto _1712;
  }

_1711:
  _ZSt20__throw_length_errorPKc(_1696);
  __builtin_unreachable();

_1712:
  _1702 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1694);
  _1703 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1694);
  _1698 = _1703;
  _1704 = _ZSt3maxImERKT_S2_S2_((&_1698), (&_1697));
  _1705 = *_1704;
  _1706 = llvm_add_u64(_1702, _1705);
  _1707 = _ZNKSt6vectorIjSaIjEE4sizeEv(_1694);
  if ((((((uint64_t)_1706) < ((uint64_t)_1707))&1))) {
    goto _1713;
  } else {
    goto _1714;
  }

_1714:
  _1708 = _ZNKSt6vectorIjSaIjEE8max_sizeEv(_1694);
  if ((((((uint64_t)_1706) > ((uint64_t)_1708))&1))) {
    goto _1713;
  } else {
    _1710__PHI_TEMPORARY = _1706;   /* for PHI node */
    goto _1715;
  }

_1713:
  _1709 = _ZNKSt6vectorIjSaIjEE8max_sizeEv(_1694);
  _1710__PHI_TEMPORARY = _1709;   /* for PHI node */
  goto _1715;

_1715:
  _1710 = _1710__PHI_TEMPORARY;
  return _1710;
}


uint32_t* _ZNSt6vectorIjSaIjEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector* _1716) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator _1717;    /* Address-exposed local */
  uint32_t* _1718;

  _ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEC2ERKS1_((&_1717), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1716))->field0))->field0)));
  _1718 = *((&_1717.field0));
  return _1718;
}


uint32_t* _ZNSt12_Vector_baseIjSaIjEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1719, uint64_t _1720) {
  uint32_t* _1721;
  uint32_t* _1722;
  uint32_t* _1722__PHI_TEMPORARY;

  if ((((_1720 != UINT64_C(0))&1))) {
    goto _1723;
  } else {
    _1722__PHI_TEMPORARY = ((uint32_t*)/*NULL*/0);   /* for PHI node */
    goto _1724;
  }

_1723:
  _1721 = _ZN9__gnu_cxx13new_allocatorIjE8allocateEmPKv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)((&_1719->field0)))), _1720, ((uint8_t*)/*NULL*/0));
  _1722__PHI_TEMPORARY = _1721;   /* for PHI node */
  goto _1724;

_1724:
  _1722 = _1722__PHI_TEMPORARY;
  return _1722;
}


uint32_t* _ZSt34__uninitialized_move_if_noexcept_aIPjS0_SaIjEET0_T_S3_S2_RT1_(uint32_t* _1725, uint32_t* _1726, uint32_t* _1727, struct l_struct_class_OC_std_KD__KD_allocator* _1728) {
  uint32_t* _1729;

  _1729 = _ZSt22__uninitialized_copy_aIPjS0_jET0_T_S2_S1_RSaIT1_E(_1725, _1726, _1727, _1728);
  return _1729;
}


void _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E(uint32_t* _1730, uint32_t* _1731, struct l_struct_class_OC_std_KD__KD_allocator* _1732) {
  _ZSt8_DestroyIPjEvT_S1_(_1730, _1731);
}


void _ZNSt12_Vector_baseIjSaIjEE13_M_deallocateEPjm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1733, uint32_t* _1734, uint64_t _1735) {
  if ((((_1734 != ((uint32_t*)/*NULL*/0))&1))) {
    goto _1736;
  } else {
    goto _1737;
  }

_1736:
  _ZN9__gnu_cxx13new_allocatorIjE10deallocateEPjm((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)((&_1733->field0)))), _1734, _1735);
  goto _1737;

_1737:
  return;
}


uint32_t* _ZSt22__uninitialized_copy_aIPjS0_jET0_T_S2_S1_RSaIT1_E(uint32_t* _1738, uint32_t* _1739, uint32_t* _1740, struct l_struct_class_OC_std_KD__KD_allocator* _1741) {
  uint32_t* _1742;

  _1742 = _ZSt18uninitialized_copyIPjS0_ET0_T_S2_S1_(_1738, _1739, _1740);
  return _1742;
}


uint32_t* _ZSt18uninitialized_copyIPjS0_ET0_T_S2_S1_(uint32_t* _1743, uint32_t* _1744, uint32_t* _1745) {
  uint32_t* _1746;

  _1746 = _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPjS2_EET0_T_S4_S3_(_1743, _1744, _1745);
  return _1746;
}


uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPjS2_EET0_T_S4_S3_(uint32_t* _1747, uint32_t* _1748, uint32_t* _1749) {
  uint32_t* _1750;

  _1750 = _ZSt4copyIPjS0_ET0_T_S2_S1_(_1747, _1748, _1749);
  return _1750;
}


uint32_t* _ZSt4copyIPjS0_ET0_T_S2_S1_(uint32_t* _1751, uint32_t* _1752, uint32_t* _1753) {
  uint32_t* _1754;
  uint32_t* _1755;
  uint32_t* _1756;

  _1754 = _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(_1751);
  _1755 = _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(_1752);
  _1756 = _ZSt14__copy_move_a2ILb0EPjS0_ET1_T0_S2_S1_(_1754, _1755, _1753);
  return _1756;
}


uint32_t* _ZSt14__copy_move_a2ILb0EPjS0_ET1_T0_S2_S1_(uint32_t* _1757, uint32_t* _1758, uint32_t* _1759) {
  uint32_t* _1760;
  uint32_t* _1761;
  uint32_t* _1762;
  uint32_t* _1763;

  _1760 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1757);
  _1761 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1758);
  _1762 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1759);
  _1763 = _ZSt13__copy_move_aILb0EPjS0_ET1_T0_S2_S1_(_1760, _1761, _1762);
  return _1763;
}


uint32_t* _ZSt12__miter_baseIPjENSt11_Miter_baseIT_E13iterator_typeES2_(uint32_t* _1764) {
  uint32_t* _1765;

  _1765 = _ZNSt10_Iter_baseIPjLb0EE7_S_baseES0_(_1764);
  return _1765;
}


uint32_t* _ZSt13__copy_move_aILb0EPjS0_ET1_T0_S2_S1_(uint32_t* _1766, uint32_t* _1767, uint32_t* _1768) {
  uint32_t* _1769;

  _1769 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIjEEPT_PKS3_S6_S4_(_1766, _1767, _1768);
  return _1769;
}


uint32_t* _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(uint32_t* _1770) {
  uint32_t* _1771;

  _1771 = _ZNSt10_Iter_baseIPjLb0EE7_S_baseES0_(_1770);
  return _1771;
}


uint32_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIjEEPT_PKS3_S6_S4_(uint32_t* _1772, uint32_t* _1773, uint32_t* _1774) {
  uint64_t _1775;
  uint8_t* _1776;

  _1775 = llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1773)), (((uint64_t)(uintptr_t)_1772)))), 4);
  if ((((_1775 != UINT64_C(0))&1))) {
    goto _1777;
  } else {
    goto _1778;
  }

_1777:
  _1776 = memmove((((uint8_t*)_1774)), (((uint8_t*)_1772)), (llvm_mul_u64(4, _1775)));
  goto _1778;

_1778:
  return ((&_1774[((int64_t)_1775)]));
}


uint32_t* _ZNSt10_Iter_baseIPjLb0EE7_S_baseES0_(uint32_t* _1779) {
  return _1779;
}


uint32_t* _ZSt23__copy_move_backward_a2ILb0EPjS0_ET1_T0_S2_S1_(uint32_t* _1780, uint32_t* _1781, uint32_t* _1782) {
  uint32_t* _1783;
  uint32_t* _1784;
  uint32_t* _1785;
  uint32_t* _1786;

  _1783 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1780);
  _1784 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1781);
  _1785 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1782);
  _1786 = _ZSt22__copy_move_backward_aILb0EPjS0_ET1_T0_S2_S1_(_1783, _1784, _1785);
  return _1786;
}


uint32_t* _ZSt22__copy_move_backward_aILb0EPjS0_ET1_T0_S2_S1_(uint32_t* _1787, uint32_t* _1788, uint32_t* _1789) {
  uint32_t* _1790;

  _1790 = _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIjEEPT_PKS3_S6_S4_(_1787, _1788, _1789);
  return _1790;
}


uint32_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIjEEPT_PKS3_S6_S4_(uint32_t* _1791, uint32_t* _1792, uint32_t* _1793) {
  uint64_t _1794;
  uint8_t* _1795;

  _1794 = llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1792)), (((uint64_t)(uintptr_t)_1791)))), 4);
  if ((((_1794 != UINT64_C(0))&1))) {
    goto _1796;
  } else {
    goto _1797;
  }

_1796:
  _1795 = memmove((((uint8_t*)((&_1793[((int64_t)(llvm_neg_u64(_1794)))])))), (((uint8_t*)_1791)), (llvm_mul_u64(4, _1794)));
  goto _1797;

_1797:
  return ((&_1793[((int64_t)(llvm_neg_u64(_1794)))]));
}


void _ZSt8__fill_aIPjjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT0_EE7__valueEvE6__typeET_S6_RKS3_(uint32_t* _1798, uint32_t* _1799, uint32_t* _1800) {
  uint64_t _1801;
  uint32_t _1802;
  uint64_t _1803;
  uint64_t _1804;
  uint64_t llvm_cbe_xtraiter;
  uint64_t llvm_cbe_unroll_iter;
  uint32_t* llvm_cbe__2e_01;
  uint32_t* llvm_cbe__2e_01__PHI_TEMPORARY;
  uint64_t llvm_cbe_niter;
  uint64_t llvm_cbe_niter__PHI_TEMPORARY;
  uint32_t* _1805;
  uint32_t* _1806;
  uint32_t* _1807;
  uint32_t* _1808;
  uint32_t* _1809;
  uint32_t* _1810;
  uint32_t* _1811;
  uint32_t* _1812;
  uint64_t llvm_cbe_niter_2e_nsub_2e_7;
  uint32_t* llvm_cbe__2e_01_2e_unr_2e_ph;
  uint32_t* llvm_cbe__2e_01_2e_unr_2e_ph__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_01_2e_unr;
  uint32_t* llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_01_2e_epil;
  uint32_t* llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe_epil_2e_iter;
  uint64_t llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  uint32_t* _1813;
  uint64_t llvm_cbe_epil_2e_iter_2e_sub;

  _1801 = ((uint64_t)(uintptr_t)_1798);
  _1802 = *_1800;
  if ((((_1798 != _1799)&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto _1814;
  }

llvm_cbe__2e_lr_2e_ph:
  _1803 = llvm_lshr_u64((((uint64_t)(uintptr_t)((&(((uint8_t*)((&_1799[((int64_t)-1)]))))[((int64_t)(llvm_neg_u64(_1801)))])))), 2);
  _1804 = llvm_add_u64(_1803, 1);
  llvm_cbe_xtraiter = _1804 & 7;
  if ((((((uint64_t)_1803) < ((uint64_t)UINT64_C(7)))&1))) {
    llvm_cbe__2e_01_2e_unr__PHI_TEMPORARY = _1798;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;
  } else {
    goto llvm_cbe__2e_lr_2e_ph_2e_new;
  }

llvm_cbe__2e_lr_2e_ph_2e_new:
  llvm_cbe_unroll_iter = llvm_sub_u64(_1804, llvm_cbe_xtraiter);
  llvm_cbe__2e_01__PHI_TEMPORARY = _1798;   /* for PHI node */
  llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_unroll_iter;   /* for PHI node */
  goto _1815;

  do {     /* Syntactic loop '' to make GCC happy */
_1815:
  llvm_cbe__2e_01 = llvm_cbe__2e_01__PHI_TEMPORARY;
  llvm_cbe_niter = llvm_cbe_niter__PHI_TEMPORARY;
  *llvm_cbe__2e_01 = _1802;
  _1805 = (&llvm_cbe__2e_01[((int32_t)1)]);
  *_1805 = _1802;
  _1806 = (&_1805[((int32_t)1)]);
  *_1806 = _1802;
  _1807 = (&_1806[((int32_t)1)]);
  *_1807 = _1802;
  _1808 = (&_1807[((int32_t)1)]);
  *_1808 = _1802;
  _1809 = (&_1808[((int32_t)1)]);
  *_1809 = _1802;
  _1810 = (&_1809[((int32_t)1)]);
  *_1810 = _1802;
  _1811 = (&_1810[((int32_t)1)]);
  *_1811 = _1802;
  _1812 = (&_1811[((int32_t)1)]);
  llvm_cbe_niter_2e_nsub_2e_7 = llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64(llvm_cbe_niter, 1)), 1)), 1)), 1)), 1)), 1)), 1)), 1);
  if ((((llvm_cbe_niter_2e_nsub_2e_7 != UINT64_C(0))&1))) {
    llvm_cbe__2e_01__PHI_TEMPORARY = _1812;   /* for PHI node */
    llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_niter_2e_nsub_2e_7;   /* for PHI node */
    goto _1815;
  } else {
    llvm_cbe__2e_01_2e_unr_2e_ph__PHI_TEMPORARY = _1812;   /* for PHI node */
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
  goto _1816;

  do {     /* Syntactic loop '' to make GCC happy */
_1816:
  llvm_cbe__2e_01_2e_epil = llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY;
  llvm_cbe_epil_2e_iter = llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  *llvm_cbe__2e_01_2e_epil = _1802;
  _1813 = (&llvm_cbe__2e_01_2e_epil[((int32_t)1)]);
  llvm_cbe_epil_2e_iter_2e_sub = llvm_sub_u64(llvm_cbe_epil_2e_iter, 1);
  if ((((llvm_cbe_epil_2e_iter_2e_sub != UINT64_C(0))&1))) {
    llvm_cbe__2e_01_2e_epil__PHI_TEMPORARY = _1813;   /* for PHI node */
    llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_epil_2e_iter_2e_sub;   /* for PHI node */
    goto _1816;
  } else {
    goto llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge_2e_epilog_2d_lcssa:
  goto llvm_cbe__2e__crit_edge;

llvm_cbe__2e__crit_edge:
  goto _1814;

_1814:
  return;
}


void _ZSt20uninitialized_fill_nIPjmjEvT_T0_RKT1_(uint32_t* _1817, uint64_t _1818, uint32_t* _1819) {
  _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPjmjEEvT_T0_RKT1_(_1817, _1818, _1819);
}


void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPjmjEEvT_T0_RKT1_(uint32_t* _1820, uint64_t _1821, uint32_t* _1822) {
  uint32_t* _1823;

  _1823 = _ZSt6fill_nIPjmjET_S1_T0_RKT1_(_1820, _1821, _1822);
}


uint32_t* _ZSt6fill_nIPjmjET_S1_T0_RKT1_(uint32_t* _1824, uint64_t _1825, uint32_t* _1826) {
  uint32_t* _1827;
  uint32_t* _1828;

  _1827 = _ZSt12__niter_baseIPjENSt11_Niter_baseIT_E13iterator_typeES2_(_1824);
  _1828 = _ZSt10__fill_n_aIPjmjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(_1827, _1825, _1826);
  return _1828;
}


uint32_t* _ZSt10__fill_n_aIPjmjEN9__gnu_cxx11__enable_ifIXsr11__is_scalarIT1_EE7__valueET_E6__typeES4_T0_RKS3_(uint32_t* _1829, uint64_t _1830, uint32_t* _1831) {
  uint32_t _1832;
  uint64_t llvm_cbe_xtraiter;
  uint64_t llvm_cbe_unroll_iter;
  uint32_t* llvm_cbe__2e_03;
  uint32_t* llvm_cbe__2e_03__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012;
  uint64_t llvm_cbe__2e_012__PHI_TEMPORARY;
  uint64_t llvm_cbe_niter;
  uint64_t llvm_cbe_niter__PHI_TEMPORARY;
  uint32_t* _1833;
  uint32_t* _1834;
  uint32_t* _1835;
  uint32_t* _1836;
  uint32_t* _1837;
  uint32_t* _1838;
  uint32_t* _1839;
  uint64_t _1840;
  uint32_t* _1841;
  uint64_t llvm_cbe_niter_2e_nsub_2e_7;
  uint32_t* llvm_cbe_split_2e_ph_2e_ph;
  uint32_t* llvm_cbe_split_2e_ph_2e_ph__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_03_2e_unr_2e_ph;
  uint32_t* llvm_cbe__2e_03_2e_unr_2e_ph__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_unr_2e_ph;
  uint64_t llvm_cbe__2e_012_2e_unr_2e_ph__PHI_TEMPORARY;
  uint32_t* llvm_cbe_split_2e_ph;
  uint32_t* llvm_cbe_split_2e_ph__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_03_2e_unr;
  uint32_t* llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_unr;
  uint64_t llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_03_2e_epil;
  uint32_t* llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe__2e_012_2e_epil;
  uint64_t llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY;
  uint64_t llvm_cbe_epil_2e_iter;
  uint64_t llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  uint64_t _1842;
  uint32_t* _1843;
  uint64_t llvm_cbe_epil_2e_iter_2e_sub;
  uint32_t* llvm_cbe_split_2e_ph4;
  uint32_t* llvm_cbe_split_2e_ph4__PHI_TEMPORARY;
  uint32_t* llvm_cbe_split;
  uint32_t* llvm_cbe_split__PHI_TEMPORARY;
  uint32_t* llvm_cbe__2e_0_2e_lcssa;
  uint32_t* llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY;

  _1832 = *_1831;
  if ((((((uint64_t)_1830) > ((uint64_t)UINT64_C(0)))&1))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY = _1829;   /* for PHI node */
    goto _1844;
  }

llvm_cbe__2e_lr_2e_ph:
  llvm_cbe_xtraiter = _1830 & 7;
  if ((((((uint64_t)(llvm_add_u64(_1830, -1))) < ((uint64_t)UINT64_C(7)))&1))) {
    llvm_cbe__2e_03_2e_unr__PHI_TEMPORARY = _1829;   /* for PHI node */
    llvm_cbe__2e_012_2e_unr__PHI_TEMPORARY = _1830;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge_2e_unr_2d_lcssa;
  } else {
    goto llvm_cbe__2e_lr_2e_ph_2e_new;
  }

llvm_cbe__2e_lr_2e_ph_2e_new:
  llvm_cbe_unroll_iter = llvm_sub_u64(_1830, llvm_cbe_xtraiter);
  llvm_cbe__2e_03__PHI_TEMPORARY = _1829;   /* for PHI node */
  llvm_cbe__2e_012__PHI_TEMPORARY = _1830;   /* for PHI node */
  llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_unroll_iter;   /* for PHI node */
  goto _1845;

  do {     /* Syntactic loop '' to make GCC happy */
_1845:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  llvm_cbe__2e_012 = llvm_cbe__2e_012__PHI_TEMPORARY;
  llvm_cbe_niter = llvm_cbe_niter__PHI_TEMPORARY;
  *llvm_cbe__2e_03 = _1832;
  _1833 = (&llvm_cbe__2e_03[((int32_t)1)]);
  *_1833 = _1832;
  _1834 = (&_1833[((int32_t)1)]);
  *_1834 = _1832;
  _1835 = (&_1834[((int32_t)1)]);
  *_1835 = _1832;
  _1836 = (&_1835[((int32_t)1)]);
  *_1836 = _1832;
  _1837 = (&_1836[((int32_t)1)]);
  *_1837 = _1832;
  _1838 = (&_1837[((int32_t)1)]);
  *_1838 = _1832;
  _1839 = (&_1838[((int32_t)1)]);
  *_1839 = _1832;
  _1840 = llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64((llvm_add_u64(llvm_cbe__2e_012, -1)), -1)), -1)), -1)), -1)), -1)), -1)), -1);
  _1841 = (&_1839[((int32_t)1)]);
  llvm_cbe_niter_2e_nsub_2e_7 = llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64((llvm_sub_u64(llvm_cbe_niter, 1)), 1)), 1)), 1)), 1)), 1)), 1)), 1);
  if ((((llvm_cbe_niter_2e_nsub_2e_7 != UINT64_C(0))&1))) {
    llvm_cbe__2e_03__PHI_TEMPORARY = _1841;   /* for PHI node */
    llvm_cbe__2e_012__PHI_TEMPORARY = _1840;   /* for PHI node */
    llvm_cbe_niter__PHI_TEMPORARY = llvm_cbe_niter_2e_nsub_2e_7;   /* for PHI node */
    goto _1845;
  } else {
    llvm_cbe_split_2e_ph_2e_ph__PHI_TEMPORARY = _1841;   /* for PHI node */
    llvm_cbe__2e_03_2e_unr_2e_ph__PHI_TEMPORARY = _1841;   /* for PHI node */
    llvm_cbe__2e_012_2e_unr_2e_ph__PHI_TEMPORARY = _1840;   /* for PHI node */
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
  goto _1846;

  do {     /* Syntactic loop '' to make GCC happy */
_1846:
  llvm_cbe__2e_03_2e_epil = llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY;
  llvm_cbe__2e_012_2e_epil = llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY;
  llvm_cbe_epil_2e_iter = llvm_cbe_epil_2e_iter__PHI_TEMPORARY;
  *llvm_cbe__2e_03_2e_epil = _1832;
  _1842 = llvm_add_u64(llvm_cbe__2e_012_2e_epil, -1);
  _1843 = (&llvm_cbe__2e_03_2e_epil[((int32_t)1)]);
  llvm_cbe_epil_2e_iter_2e_sub = llvm_sub_u64(llvm_cbe_epil_2e_iter, 1);
  if ((((llvm_cbe_epil_2e_iter_2e_sub != UINT64_C(0))&1))) {
    llvm_cbe__2e_03_2e_epil__PHI_TEMPORARY = _1843;   /* for PHI node */
    llvm_cbe__2e_012_2e_epil__PHI_TEMPORARY = _1842;   /* for PHI node */
    llvm_cbe_epil_2e_iter__PHI_TEMPORARY = llvm_cbe_epil_2e_iter_2e_sub;   /* for PHI node */
    goto _1846;
  } else {
    llvm_cbe_split_2e_ph4__PHI_TEMPORARY = _1843;   /* for PHI node */
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
  goto _1844;

_1844:
  llvm_cbe__2e_0_2e_lcssa = llvm_cbe__2e_0_2e_lcssa__PHI_TEMPORARY;
  return llvm_cbe__2e_0_2e_lcssa;
}


uint64_t _ZNKSt6vectorIjSaIjEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector* _1847) {
  struct l_struct_class_OC_std_KD__KD_allocator* _1848;
  uint64_t _1849;

  _1848 = _ZNKSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_1847)));
  _1849 = _ZN9__gnu_cxx14__alloc_traitsISaIjEE8max_sizeERKS1_(_1848);
  return _1849;
}


uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t* _1850, uint64_t* _1851) {
  uint64_t _1852;
  uint64_t _1853;

  _1852 = *_1850;
  _1853 = *_1851;
  return (llvm_select_pu64((((((uint64_t)_1852) < ((uint64_t)_1853))&1)), _1851, _1850));
}


uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIjEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator* _1854) {
  uint64_t _1855;

  _1855 = _ZNK9__gnu_cxx13new_allocatorIjE8max_sizeEv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_1854)));
  return _1855;
}


struct l_struct_class_OC_std_KD__KD_allocator* _ZNKSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base* _1856) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator*)((&_1856->field0))));
}


uint64_t _ZNK9__gnu_cxx13new_allocatorIjE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _1857) {
  return INT64_C(4611686018427387903);
}


void _ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator* _1858, uint32_t** _1859) {
  uint32_t* _1860;

  _1860 = *_1859;
  *((&_1858->field0)) = _1860;
}


uint32_t* _ZN9__gnu_cxx13new_allocatorIjE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _1861, uint64_t _1862, uint8_t* _1863) {
  uint64_t _1864;
  uint8_t* _1865;

  _1864 = _ZNK9__gnu_cxx13new_allocatorIjE8max_sizeEv(_1861);
  if ((((((uint64_t)_1862) > ((uint64_t)_1864))&1))) {
    goto _1866;
  } else {
    goto _1867;
  }

_1866:
  _ZSt17__throw_bad_allocv();
  __builtin_unreachable();

_1867:
  _1865 = _Znwm((llvm_mul_u64(_1862, 4)));
  return (((uint32_t*)_1865));
}


void _ZSt8_DestroyIPjEvT_S1_(uint32_t* _1868, uint32_t* _1869) {
  _ZNSt12_Destroy_auxILb1EE9__destroyIPjEEvT_S3_(_1868, _1869);
}


void _ZNSt12_Destroy_auxILb1EE9__destroyIPjEEvT_S3_(uint32_t* _1870, uint32_t* _1871) {
  return;
}


void _ZN9__gnu_cxx13new_allocatorIjE10deallocateEPjm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _1872, uint32_t* _1873, uint64_t _1874) {
  _ZdlPv((((uint8_t*)_1873)));
}


uint64_t _ZNKSt6vectorIhSaIhEE4sizeEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1875) {
  uint8_t* _1876;
  uint8_t* _1877;

  _1876 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1875))->field0))->field1));
  _1877 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1875))->field0))->field0));
  return (llvm_sub_u64((((uint64_t)(uintptr_t)_1876)), (((uint64_t)(uintptr_t)_1877))));
}


void _ZNSt6vectorIhSaIhEE6insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1878, uint8_t* _1879, uint64_t _1880, uint8_t* _1881) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1882;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1883;    /* Address-exposed local */
  uint8_t* _1884;
  uint8_t* _1885;

  *((&_1882.field0)) = _1879;
  _1884 = memcpy((((uint8_t*)(&_1883))), (((uint8_t*)(&_1882))), 8);
  _1885 = *((&_1883.field0));
  _ZNSt6vectorIhSaIhEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(_1878, _1885, _1880, _1881);
}


uint8_t* _ZNSt6vectorIhSaIhEE3endEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1886) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1887;    /* Address-exposed local */
  uint8_t* _1888;

  _ZN9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEC2ERKS1_((&_1887), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1886))->field0))->field1)));
  _1888 = *((&_1887.field0));
  return _1888;
}


void _ZNSt6vectorIhSaIhEE15_M_erase_at_endEPh(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1889, uint8_t* _1890) {
  uint8_t* _1891;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1892;

  _1891 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1889))->field0))->field1));
  _1892 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1889)));
  _ZSt8_DestroyIPhhEvT_S1_RSaIT0_E(_1890, _1891, _1892);
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1889))->field0))->field1)) = _1890;
}


void _ZNSt6vectorIhSaIhEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPhS1_EEmRKh(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1893, uint8_t* _1894, uint64_t _1895, uint8_t* _1896) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1897;    /* Address-exposed local */
  uint8_t _1898;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1899;    /* Address-exposed local */
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _1900;    /* Address-exposed local */
  uint8_t* _1901;
  uint8_t* _1902;
  uint8_t _1903;
  uint8_t* _1904;
  uint64_t _1905;
  uint8_t* _1906;
  uint8_t* _1907;
  uint8_t* _1908;
  uint8_t* _1909;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1910;
  uint8_t* _1911;
  uint8_t** _1912;
  uint8_t* _1913;
  uint8_t** _1914;
  uint8_t* _1915;
  uint8_t* _1916;
  uint8_t** _1917;
  uint8_t* _1918;
  uint8_t** _1919;
  uint8_t* _1920;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1921;
  uint8_t** _1922;
  uint8_t* _1923;
  uint8_t** _1924;
  uint8_t* _1925;
  uint8_t* _1926;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1927;
  uint8_t* _1928;
  uint8_t** _1929;
  uint8_t* _1930;
  uint8_t** _1931;
  uint8_t* _1932;
  uint64_t _1933;
  uint8_t* _1934;
  uint64_t _1935;
  uint8_t* _1936;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1937;
  uint8_t* _1938;
  uint8_t** _1939;
  uint8_t* _1940;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1941;
  uint8_t* _1942;
  uint8_t** _1943;
  uint8_t* _1944;
  uint8_t* _1945;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1946;
  uint8_t* _1947;
  uint8_t* _1948;
  uint8_t* _1949;
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1950;
  uint8_t* _1951;
  uint8_t* _1952;
  uint8_t* _1953;

  *((&_1897.field0)) = _1894;
  if ((((_1895 != UINT64_C(0))&1))) {
    goto _1954;
  } else {
    goto _1955;
  }

_1954:
  _1901 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field2));
  _1902 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  if ((((((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)_1901)), (((uint64_t)(uintptr_t)_1902))))) >= ((uint64_t)_1895))&1))) {
    goto _1956;
  } else {
    goto _1957;
  }

_1956:
  _1903 = *_1896;
  _1898 = _1903;
  _1904 = _ZNSt6vectorIhSaIhEE3endEv(_1893);
  *((&_1899.field0)) = _1904;
  _1905 = _ZN9__gnu_cxxmiIPhSt6vectorIhSaIhEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_1899), (&_1897));
  _1906 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1907 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  if ((((((uint64_t)_1905) > ((uint64_t)_1895))&1))) {
    goto _1958;
  } else {
    goto _1959;
  }

_1958:
  _1908 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1909 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1910 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _1911 = _ZSt22__uninitialized_move_aIPhS0_SaIhEET0_T_S3_S2_RT1_(((&_1907[((int64_t)(llvm_neg_u64(_1895)))])), _1908, _1909, _1910);
  _1912 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1);
  _1913 = *_1912;
  *_1912 = ((&_1913[((int64_t)_1895)]));
  _1914 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1915 = *_1914;
  _1916 = _ZSt13copy_backwardIPhS0_ET0_T_S2_S1_(_1915, ((&_1906[((int64_t)(llvm_neg_u64(_1895)))])), _1906);
  _1917 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1918 = *_1917;
  _1919 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1920 = *_1919;
  _ZSt4fillIPhhEvT_S1_RKT0_(_1918, ((&_1920[((int64_t)_1895)])), (&_1898));
  goto _1955;

_1959:
  _1921 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _ZSt24__uninitialized_fill_n_aIPhmhhEvT_T0_RKT1_RSaIT2_E(_1907, (llvm_sub_u64(_1895, _1905)), (&_1898), _1921);
  _1922 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1);
  _1923 = *_1922;
  *_1922 = ((&_1923[((int64_t)(llvm_sub_u64(_1895, _1905)))]));
  _1924 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1925 = *_1924;
  _1926 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1927 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _1928 = _ZSt22__uninitialized_move_aIPhS0_SaIhEET0_T_S3_S2_RT1_(_1925, _1906, _1926, _1927);
  _1929 = (&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1);
  _1930 = *_1929;
  *_1929 = ((&_1930[((int64_t)_1905)]));
  _1931 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1932 = *_1931;
  _ZSt4fillIPhhEvT_S1_RKT0_(_1932, _1906, (&_1898));
  goto _1955;

_1957:
  _1933 = _ZNKSt6vectorIhSaIhEE12_M_check_lenEmPKc(_1893, _1895, ((&_OC_str.array[((int32_t)0)])));
  _1934 = _ZNSt6vectorIhSaIhEE5beginEv(_1893);
  *((&_1900.field0)) = _1934;
  _1935 = _ZN9__gnu_cxxmiIPhSt6vectorIhSaIhEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_((&_1897), (&_1900));
  _1936 = _ZNSt12_Vector_baseIhSaIhEE11_M_allocateEm((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)), _1933);
  _1937 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _ZSt24__uninitialized_fill_n_aIPhmhhEvT_T0_RKT1_RSaIT2_E(((&_1936[((int64_t)_1935)])), _1895, _1896, _1937);
  goto _1960;

_1960:
  _1938 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field0));
  _1939 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1940 = *_1939;
  _1941 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _1942 = _ZSt34__uninitialized_move_if_noexcept_aIPhS0_SaIhEET0_T_S3_S2_RT1_(_1938, _1940, _1936, _1941);
  goto _1961;

_1961:
  _1943 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv((&_1897));
  _1944 = *_1943;
  _1945 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1946 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _1947 = _ZSt34__uninitialized_move_if_noexcept_aIPhS0_SaIhEET0_T_S3_S2_RT1_(_1944, _1945, ((&_1942[((int64_t)_1895)])), _1946);
  goto _1962;

_1962:
  _1948 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field0));
  _1949 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1));
  _1950 = _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)));
  _ZSt8_DestroyIPhhEvT_S1_RSaIT0_E(_1948, _1949, _1950);
  _1951 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field0));
  _1952 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field2));
  _1953 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field0));
  _ZNSt12_Vector_baseIhSaIhEE13_M_deallocateEPhm((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893)), _1951, (llvm_sub_u64((((uint64_t)(uintptr_t)_1952)), (((uint64_t)(uintptr_t)_1953)))));
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field0)) = _1936;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field1)) = _1947;
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_1893))->field0))->field2)) = ((&_1936[((int64_t)_1933)]));
  goto _1955;

_1955:
  return;
}


uint64_t _ZN9__gnu_cxxmiIPhSt6vectorIhSaIhEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5* _1963, struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5* _1964) {
  uint8_t** _1965;
  uint8_t* _1966;
  uint8_t** _1967;
  uint8_t* _1968;

  _1965 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv(_1963);
  _1966 = *_1965;
  _1967 = _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv(_1964);
  _1968 = *_1967;
  return (llvm_sub_u64((((uint64_t)(uintptr_t)_1966)), (((uint64_t)(uintptr_t)_1968))));
}


uint8_t* _ZSt22__uninitialized_move_aIPhS0_SaIhEET0_T_S3_S2_RT1_(uint8_t* _1969, uint8_t* _1970, uint8_t* _1971, struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1972) {
  uint8_t* _1973;

  _1973 = _ZSt22__uninitialized_copy_aIPhS0_hET0_T_S2_S1_RSaIT1_E(_1969, _1970, _1971, _1972);
  return _1973;
}


struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _ZNSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _1974) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator_OC_2*)((&_1974->field0))));
}


uint8_t* _ZSt13copy_backwardIPhS0_ET0_T_S2_S1_(uint8_t* _1975, uint8_t* _1976, uint8_t* _1977) {
  uint8_t* _1978;
  uint8_t* _1979;
  uint8_t* _1980;

  _1978 = _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(_1975);
  _1979 = _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(_1976);
  _1980 = _ZSt23__copy_move_backward_a2ILb0EPhS0_ET1_T0_S2_S1_(_1978, _1979, _1977);
  return _1980;
}


uint8_t** _ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEE4baseEv(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5* _1981) {
  return ((&_1981->field0));
}


void _ZSt4fillIPhhEvT_S1_RKT0_(uint8_t* _1982, uint8_t* _1983, uint8_t* _1984) {
  uint8_t* _1985;
  uint8_t* _1986;

  _1985 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_1982);
  _1986 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_1983);
  _ZSt8__fill_aIhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT_EE7__valueEvE6__typeEPS2_S5_RKS2_(_1985, _1986, _1984);
}


void _ZSt24__uninitialized_fill_n_aIPhmhhEvT_T0_RKT1_RSaIT2_E(uint8_t* _1987, uint64_t _1988, uint8_t* _1989, struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _1990) {
  _ZSt20uninitialized_fill_nIPhmhEvT_T0_RKT1_(_1987, _1988, _1989);
}


uint64_t _ZNKSt6vectorIhSaIhEE12_M_check_lenEmPKc(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _1991, uint64_t _1992, uint8_t* _1993) {
  uint64_t _1994;    /* Address-exposed local */
  uint64_t _1995;    /* Address-exposed local */
  uint64_t _1996;
  uint64_t _1997;
  uint64_t _1998;
  uint64_t _1999;
  uint64_t _2000;
  uint64_t* _2001;
  uint64_t _2002;
  uint64_t _2003;
  uint64_t _2004;
  uint64_t _2005;
  uint64_t _2006;
  uint64_t _2007;
  uint64_t _2007__PHI_TEMPORARY;

  _1994 = _1992;
  _1996 = _ZNKSt6vectorIhSaIhEE8max_sizeEv(_1991);
  _1997 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1991);
  _1998 = _1994;
  if ((((((uint64_t)(llvm_sub_u64(_1996, _1997))) < ((uint64_t)_1998))&1))) {
    goto _2008;
  } else {
    goto _2009;
  }

_2008:
  _ZSt20__throw_length_errorPKc(_1993);
  __builtin_unreachable();

_2009:
  _1999 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1991);
  _2000 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1991);
  _1995 = _2000;
  _2001 = _ZSt3maxImERKT_S2_S2_((&_1995), (&_1994));
  _2002 = *_2001;
  _2003 = llvm_add_u64(_1999, _2002);
  _2004 = _ZNKSt6vectorIhSaIhEE4sizeEv(_1991);
  if ((((((uint64_t)_2003) < ((uint64_t)_2004))&1))) {
    goto _2010;
  } else {
    goto _2011;
  }

_2011:
  _2005 = _ZNKSt6vectorIhSaIhEE8max_sizeEv(_1991);
  if ((((((uint64_t)_2003) > ((uint64_t)_2005))&1))) {
    goto _2010;
  } else {
    _2007__PHI_TEMPORARY = _2003;   /* for PHI node */
    goto _2012;
  }

_2010:
  _2006 = _ZNKSt6vectorIhSaIhEE8max_sizeEv(_1991);
  _2007__PHI_TEMPORARY = _2006;   /* for PHI node */
  goto _2012;

_2012:
  _2007 = _2007__PHI_TEMPORARY;
  return _2007;
}


uint8_t* _ZNSt6vectorIhSaIhEE5beginEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _2013) {
  struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5 _2014;    /* Address-exposed local */
  uint8_t* _2015;

  _ZN9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEC2ERKS1_((&_2014), ((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_2013))->field0))->field0)));
  _2015 = *((&_2014.field0));
  return _2015;
}


uint8_t* _ZNSt12_Vector_baseIhSaIhEE11_M_allocateEm(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _2016, uint64_t _2017) {
  uint8_t* _2018;
  uint8_t* _2019;
  uint8_t* _2019__PHI_TEMPORARY;

  if ((((_2017 != UINT64_C(0))&1))) {
    goto _2020;
  } else {
    _2019__PHI_TEMPORARY = ((uint8_t*)/*NULL*/0);   /* for PHI node */
    goto _2021;
  }

_2020:
  _2018 = _ZN9__gnu_cxx13new_allocatorIhE8allocateEmPKv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*)((&_2016->field0)))), _2017, ((uint8_t*)/*NULL*/0));
  _2019__PHI_TEMPORARY = _2018;   /* for PHI node */
  goto _2021;

_2021:
  _2019 = _2019__PHI_TEMPORARY;
  return _2019;
}


uint8_t* _ZSt34__uninitialized_move_if_noexcept_aIPhS0_SaIhEET0_T_S3_S2_RT1_(uint8_t* _2022, uint8_t* _2023, uint8_t* _2024, struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2025) {
  uint8_t* _2026;

  _2026 = _ZSt22__uninitialized_copy_aIPhS0_hET0_T_S2_S1_RSaIT1_E(_2022, _2023, _2024, _2025);
  return _2026;
}


void _ZSt8_DestroyIPhhEvT_S1_RSaIT0_E(uint8_t* _2027, uint8_t* _2028, struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2029) {
  _ZSt8_DestroyIPhEvT_S1_(_2027, _2028);
}


void _ZNSt12_Vector_baseIhSaIhEE13_M_deallocateEPhm(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _2030, uint8_t* _2031, uint64_t _2032) {
  if ((((_2031 != ((uint8_t*)/*NULL*/0))&1))) {
    goto _2033;
  } else {
    goto _2034;
  }

_2033:
  _ZN9__gnu_cxx13new_allocatorIhE10deallocateEPhm((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*)((&_2030->field0)))), _2031, _2032);
  goto _2034;

_2034:
  return;
}


uint8_t* _ZSt22__uninitialized_copy_aIPhS0_hET0_T_S2_S1_RSaIT1_E(uint8_t* _2035, uint8_t* _2036, uint8_t* _2037, struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2038) {
  uint8_t* _2039;

  _2039 = _ZSt18uninitialized_copyIPhS0_ET0_T_S2_S1_(_2035, _2036, _2037);
  return _2039;
}


uint8_t* _ZSt18uninitialized_copyIPhS0_ET0_T_S2_S1_(uint8_t* _2040, uint8_t* _2041, uint8_t* _2042) {
  uint8_t* _2043;

  _2043 = _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPhS2_EET0_T_S4_S3_(_2040, _2041, _2042);
  return _2043;
}


uint8_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPhS2_EET0_T_S4_S3_(uint8_t* _2044, uint8_t* _2045, uint8_t* _2046) {
  uint8_t* _2047;

  _2047 = _ZSt4copyIPhS0_ET0_T_S2_S1_(_2044, _2045, _2046);
  return _2047;
}


uint8_t* _ZSt4copyIPhS0_ET0_T_S2_S1_(uint8_t* _2048, uint8_t* _2049, uint8_t* _2050) {
  uint8_t* _2051;
  uint8_t* _2052;
  uint8_t* _2053;

  _2051 = _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(_2048);
  _2052 = _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(_2049);
  _2053 = _ZSt14__copy_move_a2ILb0EPhS0_ET1_T0_S2_S1_(_2051, _2052, _2050);
  return _2053;
}


uint8_t* _ZSt14__copy_move_a2ILb0EPhS0_ET1_T0_S2_S1_(uint8_t* _2054, uint8_t* _2055, uint8_t* _2056) {
  uint8_t* _2057;
  uint8_t* _2058;
  uint8_t* _2059;
  uint8_t* _2060;

  _2057 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2054);
  _2058 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2055);
  _2059 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2056);
  _2060 = _ZSt13__copy_move_aILb0EPhS0_ET1_T0_S2_S1_(_2057, _2058, _2059);
  return _2060;
}


uint8_t* _ZSt12__miter_baseIPhENSt11_Miter_baseIT_E13iterator_typeES2_(uint8_t* _2061) {
  uint8_t* _2062;

  _2062 = _ZNSt10_Iter_baseIPhLb0EE7_S_baseES0_(_2061);
  return _2062;
}


uint8_t* _ZSt13__copy_move_aILb0EPhS0_ET1_T0_S2_S1_(uint8_t* _2063, uint8_t* _2064, uint8_t* _2065) {
  uint8_t* _2066;

  _2066 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIhEEPT_PKS3_S6_S4_(_2063, _2064, _2065);
  return _2066;
}


uint8_t* _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(uint8_t* _2067) {
  uint8_t* _2068;

  _2068 = _ZNSt10_Iter_baseIPhLb0EE7_S_baseES0_(_2067);
  return _2068;
}


uint8_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIhEEPT_PKS3_S6_S4_(uint8_t* _2069, uint8_t* _2070, uint8_t* _2071) {
  uint64_t _2072;
  uint8_t* _2073;

  _2072 = llvm_sub_u64((((uint64_t)(uintptr_t)_2070)), (((uint64_t)(uintptr_t)_2069)));
  if ((((_2072 != UINT64_C(0))&1))) {
    goto _2074;
  } else {
    goto _2075;
  }

_2074:
  _2073 = memmove(_2071, _2069, (llvm_mul_u64(1, _2072)));
  goto _2075;

_2075:
  return ((&_2071[((int64_t)_2072)]));
}


uint8_t* _ZNSt10_Iter_baseIPhLb0EE7_S_baseES0_(uint8_t* _2076) {
  return _2076;
}


uint8_t* _ZSt23__copy_move_backward_a2ILb0EPhS0_ET1_T0_S2_S1_(uint8_t* _2077, uint8_t* _2078, uint8_t* _2079) {
  uint8_t* _2080;
  uint8_t* _2081;
  uint8_t* _2082;
  uint8_t* _2083;

  _2080 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2077);
  _2081 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2078);
  _2082 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2079);
  _2083 = _ZSt22__copy_move_backward_aILb0EPhS0_ET1_T0_S2_S1_(_2080, _2081, _2082);
  return _2083;
}


uint8_t* _ZSt22__copy_move_backward_aILb0EPhS0_ET1_T0_S2_S1_(uint8_t* _2084, uint8_t* _2085, uint8_t* _2086) {
  uint8_t* _2087;

  _2087 = _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIhEEPT_PKS3_S6_S4_(_2084, _2085, _2086);
  return _2087;
}


uint8_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIhEEPT_PKS3_S6_S4_(uint8_t* _2088, uint8_t* _2089, uint8_t* _2090) {
  uint64_t _2091;
  uint8_t* _2092;

  _2091 = llvm_sub_u64((((uint64_t)(uintptr_t)_2089)), (((uint64_t)(uintptr_t)_2088)));
  if ((((_2091 != UINT64_C(0))&1))) {
    goto _2093;
  } else {
    goto _2094;
  }

_2093:
  _2092 = memmove(((&_2090[((int64_t)(llvm_neg_u64(_2091)))])), _2088, (llvm_mul_u64(1, _2091)));
  goto _2094;

_2094:
  return ((&_2090[((int64_t)(llvm_neg_u64(_2091)))]));
}


void _ZSt8__fill_aIhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT_EE7__valueEvE6__typeEPS2_S5_RKS2_(uint8_t* _2095, uint8_t* _2096, uint8_t* _2097) {
  uint8_t _2098;
  uint8_t* _2099;

  _2098 = *_2097;
  _2099 = memset(_2095, (((uint32_t)(uint8_t)(((uint8_t)(((uint32_t)(uint8_t)_2098)))))), (llvm_sub_u64((((uint64_t)(uintptr_t)_2096)), (((uint64_t)(uintptr_t)_2095)))));
}


void _ZSt20uninitialized_fill_nIPhmhEvT_T0_RKT1_(uint8_t* _2100, uint64_t _2101, uint8_t* _2102) {
  _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPhmhEEvT_T0_RKT1_(_2100, _2101, _2102);
}


void _ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPhmhEEvT_T0_RKT1_(uint8_t* _2103, uint64_t _2104, uint8_t* _2105) {
  uint8_t* _2106;

  _2106 = _ZSt6fill_nIPhmhET_S1_T0_RKT1_(_2103, _2104, _2105);
}


uint8_t* _ZSt6fill_nIPhmhET_S1_T0_RKT1_(uint8_t* _2107, uint64_t _2108, uint8_t* _2109) {
  uint8_t* _2110;
  uint8_t* _2111;

  _2110 = _ZSt12__niter_baseIPhENSt11_Niter_baseIT_E13iterator_typeES2_(_2107);
  _2111 = _ZSt10__fill_n_aImhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT0_EE7__valueEPS2_E6__typeES3_T_RKS2_(_2110, _2108, _2109);
  return _2111;
}


uint8_t* _ZSt10__fill_n_aImhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT0_EE7__valueEPS2_E6__typeES3_T_RKS2_(uint8_t* _2112, uint64_t _2113, uint8_t* _2114) {
  _ZSt8__fill_aIhEN9__gnu_cxx11__enable_ifIXsr9__is_byteIT_EE7__valueEvE6__typeEPS2_S5_RKS2_(_2112, ((&_2112[((int64_t)_2113)])), _2114);
  return ((&_2112[((int64_t)_2113)]));
}


uint64_t _ZNKSt6vectorIhSaIhEE8max_sizeEv(struct l_struct_class_OC_std_KD__KD_vector_OC_0* _2115) {
  struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2116;
  uint64_t _2117;

  _2116 = _ZNKSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1*)_2115)));
  _2117 = _ZN9__gnu_cxx14__alloc_traitsISaIhEE8max_sizeERKS1_(_2116);
  return _2117;
}


uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIhEE8max_sizeERKS1_(struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2118) {
  uint64_t _2119;

  _2119 = _ZNK9__gnu_cxx13new_allocatorIhE8max_sizeEv((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*)_2118)));
  return _2119;
}


struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _ZNKSt12_Vector_baseIhSaIhEE19_M_get_Tp_allocatorEv(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _2120) {
  return (((struct l_struct_class_OC_std_KD__KD_allocator_OC_2*)((&_2120->field0))));
}


uint64_t _ZNK9__gnu_cxx13new_allocatorIhE8max_sizeEv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3* _2121) {
  return -1;
}


void _ZN9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD___normal_iterator_OC_5* _2122, uint8_t** _2123) {
  uint8_t* _2124;

  _2124 = *_2123;
  *((&_2122->field0)) = _2124;
}


uint8_t* _ZN9__gnu_cxx13new_allocatorIhE8allocateEmPKv(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3* _2125, uint64_t _2126, uint8_t* _2127) {
  uint64_t _2128;
  uint8_t* _2129;

  _2128 = _ZNK9__gnu_cxx13new_allocatorIhE8max_sizeEv(_2125);
  if ((((((uint64_t)_2126) > ((uint64_t)_2128))&1))) {
    goto _2130;
  } else {
    goto _2131;
  }

_2130:
  _ZSt17__throw_bad_allocv();
  __builtin_unreachable();

_2131:
  _2129 = _Znwm((llvm_mul_u64(_2126, 1)));
  return _2129;
}


void _ZSt8_DestroyIPhEvT_S1_(uint8_t* _2132, uint8_t* _2133) {
  _ZNSt12_Destroy_auxILb1EE9__destroyIPhEEvT_S3_(_2132, _2133);
}


void _ZNSt12_Destroy_auxILb1EE9__destroyIPhEEvT_S3_(uint8_t* _2134, uint8_t* _2135) {
  return;
}


void _ZN9__gnu_cxx13new_allocatorIhE10deallocateEPhm(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3* _2136, uint8_t* _2137, uint64_t _2138) {
  _ZdlPv(_2137);
}


void _ZN9__gnu_cxx13new_allocatorIjEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _2139) {
  return;
}


void _ZN9__gnu_cxx13new_allocatorIjED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _2140) {
  return;
}


void _ZNSt12_Vector_baseIjSaIjEEC2EmRKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base* _2141, uint64_t _2142, struct l_struct_class_OC_std_KD__KD_allocator* _2143) {
  _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2ERKS0_(((&_2141->field0)), _2143);
  _ZNSt12_Vector_baseIjSaIjEE17_M_create_storageEm(_2141, _2142);
  goto _2144;

_2144:
  return;
}


void _ZNSt6vectorIjSaIjEE18_M_fill_initializeEmRKj(struct l_struct_class_OC_std_KD__KD_vector* _2145, uint64_t _2146, uint32_t* _2147) {
  uint32_t* _2148;
  struct l_struct_class_OC_std_KD__KD_allocator* _2149;
  uint32_t* _2150;

  _2148 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_2145))->field0))->field0));
  _2149 = _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv((((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_2145)));
  _ZSt24__uninitialized_fill_n_aIPjmjjEvT_T0_RKT1_RSaIT2_E(_2148, _2146, _2147, _2149);
  _2150 = *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_2145))->field0))->field2));
  *((&((&(((struct l_struct_struct_OC_std_KD__KD__Vector_base*)_2145))->field0))->field1)) = _2150;
}


void _ZNSt12_Vector_baseIjSaIjEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base* _2151) {
  uint32_t* _2152;
  uint32_t* _2153;
  uint32_t* _2154;

  _2152 = *((&((&_2151->field0))->field0));
  _2153 = *((&((&_2151->field0))->field2));
  _2154 = *((&((&_2151->field0))->field0));
  _ZNSt12_Vector_baseIjSaIjEE13_M_deallocateEPjm(_2151, _2152, (llvm_sdiv_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_2153)), (((uint64_t)(uintptr_t)_2154)))), 4)));
  goto _2155;

_2155:
  _ZNSt12_Vector_baseIjSaIjEE12_Vector_implD2Ev(((&_2151->field0)));
}


void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2ERKS0_(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl* _2156, struct l_struct_class_OC_std_KD__KD_allocator* _2157) {
  _ZNSaIjEC2ERKS_((((struct l_struct_class_OC_std_KD__KD_allocator*)_2156)), _2157);
  *((&_2156->field0)) = ((uint32_t*)/*NULL*/0);
  *((&_2156->field1)) = ((uint32_t*)/*NULL*/0);
  *((&_2156->field2)) = ((uint32_t*)/*NULL*/0);
}


void _ZNSt12_Vector_baseIjSaIjEE17_M_create_storageEm(struct l_struct_struct_OC_std_KD__KD__Vector_base* _2158, uint64_t _2159) {
  uint32_t* _2160;
  uint32_t* _2161;
  uint32_t* _2162;

  _2160 = _ZNSt12_Vector_baseIjSaIjEE11_M_allocateEm(_2158, _2159);
  *((&((&_2158->field0))->field0)) = _2160;
  _2161 = *((&((&_2158->field0))->field0));
  *((&((&_2158->field0))->field1)) = _2161;
  _2162 = *((&((&_2158->field0))->field0));
  *((&((&_2158->field0))->field2)) = ((&_2162[((int64_t)_2159)]));
}


void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl* _2163) {
  _ZNSaIjED2Ev((((struct l_struct_class_OC_std_KD__KD_allocator*)_2163)));
}


void _ZNSaIjEC2ERKS_(struct l_struct_class_OC_std_KD__KD_allocator* _2164, struct l_struct_class_OC_std_KD__KD_allocator* _2165) {
  _ZN9__gnu_cxx13new_allocatorIjEC2ERKS1_((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_2164)), (((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator*)_2165)));
}


void _ZN9__gnu_cxx13new_allocatorIjEC2ERKS1_(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _2166, struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator* _2167) {
  return;
}


void _ZNSt12_Vector_baseIjSaIjEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base* _2168) {
  _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2Ev(((&_2168->field0)));
}


void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_int_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_int_OD__AC__OD__KD__KD__Vector_impl* _2169) {
  _ZNSaIjEC2Ev((((struct l_struct_class_OC_std_KD__KD_allocator*)_2169)));
  *((&_2169->field0)) = ((uint32_t*)/*NULL*/0);
  *((&_2169->field1)) = ((uint32_t*)/*NULL*/0);
  *((&_2169->field2)) = ((uint32_t*)/*NULL*/0);
}


void _ZNSt12_Vector_baseIhSaIhEEC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _2170) {
  _ZNSt12_Vector_baseIhSaIhEE12_Vector_implC2Ev(((&_2170->field0)));
}


void _ZNSt12_Vector_baseIhSaIhEE12_Vector_implC2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl* _2171) {
  _ZNSaIhEC2Ev((((struct l_struct_class_OC_std_KD__KD_allocator_OC_2*)_2171)));
  *((&_2171->field0)) = ((uint8_t*)/*NULL*/0);
  *((&_2171->field1)) = ((uint8_t*)/*NULL*/0);
  *((&_2171->field2)) = ((uint8_t*)/*NULL*/0);
}


void _ZNSaIhEC2Ev(struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2172) {
  _ZN9__gnu_cxx13new_allocatorIhEC2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*)_2172)));
}


void _ZN9__gnu_cxx13new_allocatorIhEC2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3* _2173) {
  return;
}


void _ZNSt12_Vector_baseIhSaIhEED2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_OC_1* _2174) {
  uint8_t* _2175;
  uint8_t* _2176;
  uint8_t* _2177;

  _2175 = *((&((&_2174->field0))->field0));
  _2176 = *((&((&_2174->field0))->field2));
  _2177 = *((&((&_2174->field0))->field0));
  _ZNSt12_Vector_baseIhSaIhEE13_M_deallocateEPhm(_2174, _2175, (llvm_sub_u64((((uint64_t)(uintptr_t)_2176)), (((uint64_t)(uintptr_t)_2177)))));
  goto _2178;

_2178:
  _ZNSt12_Vector_baseIhSaIhEE12_Vector_implD2Ev(((&_2174->field0)));
}


void _ZNSt12_Vector_baseIhSaIhEE12_Vector_implD2Ev(struct l_struct_struct_OC_std_KD__KD__Vector_base_MD_unsigned_AC_char_MC__AC_std_KD__KD_allocator_MD_unsigned_AC_char_OD__AC__OD__KD__KD__Vector_impl* _2179) {
  _ZNSaIhED2Ev((((struct l_struct_class_OC_std_KD__KD_allocator_OC_2*)_2179)));
}


void _ZNSaIhED2Ev(struct l_struct_class_OC_std_KD__KD_allocator_OC_2* _2180) {
  _ZN9__gnu_cxx13new_allocatorIhED2Ev((((struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3*)_2180)));
}


void _ZN9__gnu_cxx13new_allocatorIhED2Ev(struct l_struct_class_OC___gnu_cxx_KD__KD_new_allocator_OC_3* _2181) {
  return;
}

