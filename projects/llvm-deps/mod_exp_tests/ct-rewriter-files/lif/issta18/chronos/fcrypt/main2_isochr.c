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
struct l_array_16_uint32_t;
struct l_struct_struct_OC_fcrypt_ctx;
struct l_struct_union_OC_lc4;
struct l_array_32_uint8_t;
struct l_array_4_uint8_t;
struct l_array_2_uint8_t;
struct l_array_256_uint32_t;
struct l_array_64_uint8_t;

/* Function definitions */
typedef void l_fptr_5(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_7(uint8_t*, uint8_t*, uint64_t);

typedef uint8_t* l_fptr_8(uint8_t*, uint32_t, uint64_t);

typedef uint32_t l_fptr_4(uint8_t*, ...);

typedef uint32_t l_fptr_6(uint8_t*, uint64_t, struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint32_t);

typedef uint32_t l_fptr_1(void);

typedef void l_fptr_2(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_3(uint8_t*, uint8_t, uint64_t, bool);


/* Types Definitions */
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_struct_struct_OC_fcrypt_ctx {
  struct l_array_16_uint32_t field0;
};
struct l_struct_union_OC_lc4 {
  uint32_t field0;
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_2_uint8_t {
  uint8_t array[2];
};
struct l_array_256_uint32_t {
  uint32_t array[256];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(uint8_t*, ...);
void fcrypt_encrypt(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
void fcrypt_decrypt(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t fcrypt_setkey(uint8_t*, uint64_t, struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static const __MSALIGN__(16) struct l_array_32_uint8_t __const_OC_main_OC_in_key __attribute__((aligned(16))) = { "j\x8B\x39\xF2\x05\r|\x95\xFC;\xC2\x62\xA5\x30\xBF(\xDD\x02wqd\xEEz6.\x89\xC1\xAF\xE6t\xC4n" };
static const struct l_array_4_uint8_t _OC_str = { "%d " };
static const struct l_array_2_uint8_t _OC_str_OC_1 = { "\n" };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox0 __attribute__((aligned(64))) = { { 1872, 1016, 1424, 800, 1256, 1408, 1736, 136, 1640, 1072, 1072, 1160, 80, 1424, 1176, 48, 112, 48, 1680, 808, 920, 1576, 320, 768, 1936, 256, 1448, 448, 1008, 1744, 1272, 1816, 1680, 1656, 1568, 480, 776, 2040, 592, 592, 424, 1376, 1360, 760, 344, 1496, 1504, 664, 624, 1256, 960, 1304, 1760, 72, 400, 128, 1584, 888, 816, 1712, 1368, 1352, 1400, 2024, 472, 1192, 1856, 416, 1232, 1032, 912, 1024, 1248, 1944, 1888, 1744, 1272, 304, 944, 168, 496, 680, 616, 1776, 1056, 1904, 1384, 1592, 1928, 856, 488, 1688, 32, 584, 1360, 288, 88, 1104, 1048, 1488, 2000, 1064, 1280, 1344, 1416, 1696, 8, 1728, 896, 800, 1920, 648, 1680, 1560, 1336, 936, 1120, 1320, 800, 1912, 128, 624, 1464, 1584, 776, 24, 1880, 544, 488, 1832, 1432, 728, 112, 1704, 1384, 232, 2000, 720, 240, 408, 1368, 1176, 1296, 1464, 1848, 1344, 552, 1312, 1640, 328, 792, 544, 1456, 840, 1008, 368, 784, 24, 1600, 1792, 184, 1496, 1592, 1944, 504, 432, 1488, 904, 1136, 1208, 808, 768, 840, 1456, 1968, 1840, 880, 1792, 1032, 712, 1856, 1400, 1768, 1192, 272, 1224, 2024, 792, 200, 928, 776, 1416, 1456, 728, 1392, 672, 1432, 896, 2040, 1584, 472, 496, 1544, 1720, 1800, 112, 944, 1832, 432, 632, 712, 1592, 64, 880, 1040, 1328, 1176, 1568, 1360, 304, 584, 1792, 264, 800, 56, 1272, 800, 1032, 1248, 1528, 1992, 1672, 536, 1984, 1456, 1480, 1928, 288, 936, 24, 1824, 1408, 1224, 560, 488, 1960, 1672, 456, 912, 144, 1968, 1488, 96, 104, 528, 368 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox1 __attribute__((aligned(64))) = { { 3087007747u, 2684354560u, 805306373, -268435449, 2415919109u, -268435454, 1610612740u, -268435455, 939524099, 1610612739u, 134217733, 1744830464u, 268435462, 268435461, 134217734, 671088644, 1610612739u, -671088637, 939524099, 805306374, 402653185, 402653191, 2415919111u, 1207959556u, 2147483650u, -536870908, 402653184, 3087007749u, 2550136835u, 805306375, 134217735, -939524095, 2281701377u, 1610612737u, 939524097, -134217724, 671088645, 1207959555u, 536870914, 2952790022u, 402653185, 402653188, -1073741820, -402653181, -536870911, 2684354565u, 1744830465u, -939524092, -536870912, -134217728, 1610612740u, 1, 402653184, -536870909, -134217726, 1744830469u, 2684354567u, -805306361, 2818572292u, 1342177286u, 2952790019u, 536870914, 1744830470u, 2952790021u, -1073741819, 134217733, 134217733, -268435451, -268435452, 2684354562u, 2013265924u, 1476395008u, 2952790016u, 2684354563u, 2281701377u, 1342177284u, 402653185, 3087007744u, 536870912, -805306361, -939524093, 536870916, 2281701381u, 2818572295u, 2550136832u, 1476395013u, 2818572293u, 1879048193u, 1342177285u, 1610612736u, 3, 1476395011u, -671088638, 536870918, 1476395010u, -536870907, 268435463, 2013265925u, 671088642, 2550136835u, -805306361, 1207959558u, 1207959554u, 1744830470u, 0, 2415919108u, -402653181, 3087007748u, -805306365, -1073741824, 3, -402653183, 2013265926u, -671088638, -268435450, 805306374, 268435463, 805306375, -671088635, 1476395012u, 805306368, -805306362, 1073741824u, 2818572288u, -671088640, 1073741828u, 1342177283u, 3087007744u, 1207959556u, 2147483654u, 1207959557u, 134217734, 1207959558u, 2147483651u, 1476395011u, 671088647, 402653186, 2684354567u, 1073741827u, 1073741830u, 2550136838u, 536870916, 1073741825u, 1342177280u, 2415919106u, 805306371, 402653189, 1342177286u, 2415919111u, 402653191, -134217725, -805306365, 2281701377u, 3087007751u, 1073741828u, 2684354564u, -268435454, -536870908, 402653187, 2818572294u, 536870913, 805306371, -536870905, 2550136837u, 3087007746u, 671088641, -268435451, 1207959556u, 536870914, 536870918, 7, 2013265924u, 402653185, -536870911, 2415919104u, 2415919106u, 2818572295u, -268435456, 2684354567u, 1476395014u, -1073741824, 2550136833u, -134217728, -1073741817, 1207959555u, 2147483648u, -402653180, 2550136838u, 3087007751u, 1073741825u, -1073741817, 2147483649u, 671088640, -268435454, 2415919105u, 6, 2818572294u, -939524096, -402653179, 671088642, 1476395012u, -671088638, -402653177, -536870907, 268435463, -536870910, 1207959557u, 2952790020u, 2013265927u, 2147483651u, 2013265926u, 268435462, 1342177281u, 2550136837u, 134217731, 1744830469u, 4, 1073741826u, 134217732, 3087007749u, -402653184, 402653186, -939524090, 3087007750u, 671088642, 2147483655u, -1073741818, 1342177284u, -939524094, -536870909, 3087007746u, 134217734, -939524093, 939524102, 2684354561u, 2952790022u, 402653186, -134217722, 536870919, -1073741821, 2952790016u, 805306368, -805306362, 2415919108u, 2952790019u, 2281701378u, 134217735, 2684354566u, 2147483651u, 402653184, 7, 2013265921u, 2952790020u, 2281701380u, 268435460, 4 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox2 __attribute__((aligned(64))) = { { 491520, 112640, 73728, 169984, 86016, 6144, 268288, 274432, 428032, 483328, 163840, 491520, 135168, 245760, 96256, 223232, 391168, 262144, 276480, 79872, 305152, 462848, 403456, 190464, 509952, 227328, 448512, 368640, 206848, 225280, 473088, 73728, 409600, 53248, 382976, 149504, 370688, 20480, 256000, 378880, 475136, 450560, 374784, 444416, 141312, 65536, 55296, 421888, 182272, 321536, 219136, 387072, 28672, 292864, 333824, 346112, 385024, 237568, 339968, 503808, 260096, 194560, 362496, 212992, 270336, 385024, 346112, 518144, 174080, 163840, 477184, 372736, 38912, 192512, 14336, 376832, 305152, 4096, 393216, 425984, 217088, 53248, 272384, 387072, 372736, 518144, 520192, 47104, 129024, 18432, 333824, 288768, 514048, 485376, 446464, 59392, 223232, 57344, 221184, 2048, 184320, 468992, 231424, 126976, 284672, 219136, 389120, 83968, 481280, 36864, 51200, 106496, 419840, 366592, 387072, 108544, 479232, 153600, 436224, 356352, 86016, 247808, 184320, 337920, 102400, 36864, 251904, 450560, 90112, 425984, 69632, 153600, 362496, 272384, 182272, 262144, 393216, 98304, 325632, 235520, 432128, 40960, 147456, 131072, 14336, 92160, 292864, 262144, 30720, 421888, 22528, 192512, 374784, 192512, 352256, 73728, 303104, 151552, 49152, 43008, 10240, 475136, 4096, 243712, 346112, 407552, 131072, 141312, 280576, 428032, 479232, 454656, 24576, 247808, 86016, 313344, 221184, 126976, 305152, 452608, 286720, 256000, 354304, 227328, 450560, 522240, 518144, 200704, 145408, 366592, 67584, 282624, 483328, 290816, 51200, 49152, 368640, 225280, 124928, 518144, 237568, 172032, 61440, 8192, 272384, 442368, 385024, 63488, 176128, 473088, 118784, 176128, 210944, 438272, 409600, 337920, 497664, 290816, 454656, 356352, 112640, 149504, 374784, 512000, 409600, 499712, 63488, 458752, 86016, 317440, 43008, 428032, 106496, 28672, 370688, 458752, 139264, 245760, 270336, 182272, 176128, 212992, 243712, 337920, 40960, 12288, 501760, 96256, 286720, 282624, 235520, 262144, 241664, 368640, 32768, 274432 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox3 __attribute__((aligned(64))) = { { 88604672, 22020096, 37748736, 42467328, 69206016, 66060288, 38273024, 118489088, 94896128, 95944704, 34603008, 26738688, 65536000, 48758784, 87031808, 9437184, 35651584, 37748736, 57147392, 20971520, 89128960, 16777216, 57147392, 45613056, 112197632, 56098816, 48758784, 59768832, 125829120, 76546048, 47185920, 14155776, 43515904, 67108864, 18874368, 58720256, 80740352, 106954752, 87556096, 53477376, 84410368, 524288, 86507520, 34078720, 79167488, 34078720, 25690112, 68157440, 126353408, 10485760, 108527616, 43515904, 6815744, 83886080, 8388608, 106954752, 22020096, 65536000, 110100480, 100139008, 39321600, 13631488, 114819072, 11534336, 37224448, 128974848, 42467328, 28311552, 124256256, 127401984, 96993280, 13631488, 87556096, 116916224, 21495808, 35127296, 524288, 44040192, 58720256, 85983232, 100139008, 111149056, 5767168, 43515904, 35651584, 50331648, 82837504, 18350080, 84410368, 12582912, 54525952, 41418752, 125829120, 24641536, 68157440, 101711872, 22020096, 34078720, 93323264, 34603008, 6291456, 124256256, 6291456, 15204352, 9961472, 30408704, 31457280, 57671680, 27787264, 115343360, 50331648, 52953088, 69730304, 122159104, 52428800, 1048576, 80740352, 33030144, 83361792, 70778880, 78643200, 116916224, 99614720, 126877696, 106430464, 120061952, 56623104, 111149056, 47185920, 68681728, 100139008, 76546048, 14155776, 77594624, 0, 34603008, 108527616, 39321600, 0, 61341696, 97517568, 74973184, 61865984, 49807360, 48758784, 30408704, 40370176, 4718592, 9437184, 4194304, 29360128, 78118912, 12058624, 119537664, 524288, 15204352, 39845888, 88604672, 106954752, 69730304, 68157440, 39845888, 82313216, 24641536, 30932992, 53477376, 84410368, 27262976, 8388608, 107479040, 46661632, 71827456, 86507520, 25690112, 108527616, 2621440, 104857600, 69206016, 131072000, 104333312, 97517568, 40894464, 72876032, 13631488, 13107200, 126353408, 84410368, 30932992, 12582912, 9437184, 12058624, 92274688, 79691776, 73924608, 5767168, 18350080, 102236160, 30408704, 23592960, 16777216, 116916224, 9961472, 83886080, 88080384, 39845888, 6815744, 56623104, 24641536, 37224448, 9961472, 9961472, 42991616, 16252928, 23592960, 128450560, 63438848, 31981568, 84934656, 44040192, 99090432, 55050240, 104857600, 56098816, 127401984, 2621440, 20971520, 126353408, 11534336, 36700160, 33554432, 92274688, 8912896, 110624768, 95944704, 78118912, 38273024, 108527616, 102236160, 15204352, 74973184, 113246208, 117964800, 60293120, 114819072, 90701824, 104857600, 105381888, 88604672, 84410368, 101711872, 103284736, 119013376, 97517568, 132120576, 7340032, 19398656 } };


/* LLVM Intrinsic Builtin Function Bodies */
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

int main(void) {
  uint32_t _1;    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_32_uint8_t _2 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_64_uint8_t _3 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_64_uint8_t _4 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_struct_OC_fcrypt_ctx _5;    /* Address-exposed local */
  uint64_t _6;    /* Address-exposed local */
  uint8_t* _7;
  uint8_t* _8;
  uint8_t* _9;
  uint32_t _10;
  uint64_t _11;
  uint64_t _12;
  uint8_t _13;
  uint32_t _14;
  uint64_t _15;
  uint32_t _16;

  _1 = 0;
  _7 = memcpy((((uint8_t*)(&_2))), ((&__const_OC_main_OC_in_key.array[((int32_t)0)])), 32);
  _8 = memset((((uint8_t*)(&_3))), 0, 64);
  _9 = memset((((uint8_t*)(&_4))), 0, 64);
  _10 = fcrypt_setkey(((&_2.array[((int64_t)0)])), 32, (&_5), (((int64_t)(int32_t)1)), 8);
  fcrypt_encrypt((&_5), (((int64_t)(int32_t)1)), ((&_4.array[((int64_t)0)])), 64, ((&_3.array[((int64_t)0)])), 64);
  _6 = 0;
  goto _17;

  do {     /* Syntactic loop '' to make GCC happy */
_17:
  _11 = _6;
  if ((((((uint64_t)_11) < ((uint64_t)UINT64_C(32)))&1))) {
    goto _18;
  } else {
    goto _19;
  }

_18:
  _12 = _6;
  _13 = *((&_4.array[((int64_t)_12)]));
  _14 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_13)));
  goto _20;

_20:
  _15 = _6;
  _6 = (llvm_add_u64(_15, 1));
  goto _17;

  } while (1); /* end of syntactic loop '' */
_19:
  _16 = printf(((&_OC_str_OC_1.array[((int64_t)0)])));
  return 0;
}


void fcrypt_encrypt(struct l_struct_struct_OC_fcrypt_ctx* _21, uint64_t llvm_cbe_N, uint8_t* _22, uint64_t llvm_cbe_N1, uint8_t* _23, uint64_t llvm_cbe_N2) {
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _24;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _25;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _26;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _27;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _28;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _29;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _30;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _31;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _32;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _33;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _34;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _35;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _36;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _37;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _38;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _39;    /* Address-exposed local */
  uint32_t* _40;
  uint32_t* _41;
  uint32_t _42;
  uint32_t _43;
  uint32_t _44;
  uint8_t _45;
  uint32_t _46;
  uint8_t _47;
  uint32_t _48;
  uint8_t _49;
  uint32_t _50;
  uint8_t _51;
  uint32_t _52;
  uint32_t _53;
  uint32_t _54;
  uint8_t _55;
  uint32_t _56;
  uint8_t _57;
  uint32_t _58;
  uint8_t _59;
  uint32_t _60;
  uint8_t _61;
  uint32_t _62;
  uint32_t _63;
  uint32_t _64;
  uint8_t _65;
  uint32_t _66;
  uint8_t _67;
  uint32_t _68;
  uint8_t _69;
  uint32_t _70;
  uint8_t _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t _74;
  uint8_t _75;
  uint32_t _76;
  uint8_t _77;
  uint32_t _78;
  uint8_t _79;
  uint32_t _80;
  uint8_t _81;
  uint32_t _82;
  uint32_t _83;
  uint32_t _84;
  uint8_t _85;
  uint32_t _86;
  uint8_t _87;
  uint32_t _88;
  uint8_t _89;
  uint32_t _90;
  uint8_t _91;
  uint32_t _92;
  uint32_t _93;
  uint32_t _94;
  uint8_t _95;
  uint32_t _96;
  uint8_t _97;
  uint32_t _98;
  uint8_t _99;
  uint32_t _100;
  uint8_t _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;
  uint8_t _105;
  uint32_t _106;
  uint8_t _107;
  uint32_t _108;
  uint8_t _109;
  uint32_t _110;
  uint8_t _111;
  uint32_t _112;
  uint32_t _113;
  uint32_t _114;
  uint8_t _115;
  uint32_t _116;
  uint8_t _117;
  uint32_t _118;
  uint8_t _119;
  uint32_t _120;
  uint8_t _121;
  uint32_t _122;
  uint32_t _123;
  uint32_t _124;
  uint8_t _125;
  uint32_t _126;
  uint8_t _127;
  uint32_t _128;
  uint8_t _129;
  uint32_t _130;
  uint8_t _131;
  uint32_t _132;
  uint32_t _133;
  uint32_t _134;
  uint8_t _135;
  uint32_t _136;
  uint8_t _137;
  uint32_t _138;
  uint8_t _139;
  uint32_t _140;
  uint8_t _141;
  uint32_t _142;
  uint32_t _143;
  uint32_t _144;
  uint8_t _145;
  uint32_t _146;
  uint8_t _147;
  uint32_t _148;
  uint8_t _149;
  uint32_t _150;
  uint8_t _151;
  uint32_t _152;
  uint32_t _153;
  uint32_t _154;
  uint8_t _155;
  uint32_t _156;
  uint8_t _157;
  uint32_t _158;
  uint8_t _159;
  uint32_t _160;
  uint8_t _161;
  uint32_t _162;
  uint32_t _163;
  uint32_t _164;
  uint8_t _165;
  uint32_t _166;
  uint8_t _167;
  uint32_t _168;
  uint8_t _169;
  uint32_t _170;
  uint8_t _171;
  uint32_t _172;
  uint32_t _173;
  uint32_t _174;
  uint8_t _175;
  uint32_t _176;
  uint8_t _177;
  uint32_t _178;
  uint8_t _179;
  uint32_t _180;
  uint8_t _181;
  uint32_t _182;
  uint32_t _183;
  uint32_t _184;
  uint8_t _185;
  uint32_t _186;
  uint8_t _187;
  uint32_t _188;
  uint8_t _189;
  uint32_t _190;
  uint8_t _191;
  uint32_t _192;
  uint32_t _193;
  uint32_t _194;
  uint8_t _195;
  uint32_t _196;
  uint8_t _197;
  uint32_t _198;
  uint8_t _199;
  uint32_t _200;
  uint8_t _201;
  uint32_t _202;
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */

  llvm_cbe_out_2e_ = ((1) & 1);
  _40 = ((uint32_t*)_23);
  _41 = ((uint32_t*)_22);
  _42 = *_40;
  _43 = *((&_40[((int64_t)1)]));
  _44 = *((&(*((&_21->field0))).array[((int64_t)0)]));
  *(((uint32_t*)(&_24))) = (_44 ^ _43);
  _45 = *((&(*(((struct l_array_4_uint8_t*)(&_24)))).array[((int64_t)0)]));
  _46 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_45)))]));
  _47 = *((&(*(((struct l_array_4_uint8_t*)(&_24)))).array[((int64_t)1)]));
  _48 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_47)))]));
  _49 = *((&(*(((struct l_array_4_uint8_t*)(&_24)))).array[((int64_t)2)]));
  _50 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_49)))]));
  _51 = *((&(*(((struct l_array_4_uint8_t*)(&_24)))).array[((int64_t)3)]));
  _52 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_51)))]));
  _53 = _42 ^ (((_46 ^ _48) ^ _50) ^ _52);
  _54 = *((&(*((&_21->field0))).array[((int64_t)1)]));
  *(((uint32_t*)(&_25))) = (_54 ^ _53);
  _55 = *((&(*(((struct l_array_4_uint8_t*)(&_25)))).array[((int64_t)0)]));
  _56 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_55)))]));
  _57 = *((&(*(((struct l_array_4_uint8_t*)(&_25)))).array[((int64_t)1)]));
  _58 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_57)))]));
  _59 = *((&(*(((struct l_array_4_uint8_t*)(&_25)))).array[((int64_t)2)]));
  _60 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_59)))]));
  _61 = *((&(*(((struct l_array_4_uint8_t*)(&_25)))).array[((int64_t)3)]));
  _62 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_61)))]));
  _63 = _43 ^ (((_56 ^ _58) ^ _60) ^ _62);
  _64 = *((&(*((&_21->field0))).array[((int64_t)2)]));
  *(((uint32_t*)(&_26))) = (_64 ^ _63);
  _65 = *((&(*(((struct l_array_4_uint8_t*)(&_26)))).array[((int64_t)0)]));
  _66 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_65)))]));
  _67 = *((&(*(((struct l_array_4_uint8_t*)(&_26)))).array[((int64_t)1)]));
  _68 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_67)))]));
  _69 = *((&(*(((struct l_array_4_uint8_t*)(&_26)))).array[((int64_t)2)]));
  _70 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_69)))]));
  _71 = *((&(*(((struct l_array_4_uint8_t*)(&_26)))).array[((int64_t)3)]));
  _72 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_71)))]));
  _73 = _53 ^ (((_66 ^ _68) ^ _70) ^ _72);
  _74 = *((&(*((&_21->field0))).array[((int64_t)3)]));
  *(((uint32_t*)(&_27))) = (_74 ^ _73);
  _75 = *((&(*(((struct l_array_4_uint8_t*)(&_27)))).array[((int64_t)0)]));
  _76 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_75)))]));
  _77 = *((&(*(((struct l_array_4_uint8_t*)(&_27)))).array[((int64_t)1)]));
  _78 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_77)))]));
  _79 = *((&(*(((struct l_array_4_uint8_t*)(&_27)))).array[((int64_t)2)]));
  _80 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_79)))]));
  _81 = *((&(*(((struct l_array_4_uint8_t*)(&_27)))).array[((int64_t)3)]));
  _82 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_81)))]));
  _83 = _63 ^ (((_76 ^ _78) ^ _80) ^ _82);
  _84 = *((&(*((&_21->field0))).array[((int64_t)4)]));
  *(((uint32_t*)(&_28))) = (_84 ^ _83);
  _85 = *((&(*(((struct l_array_4_uint8_t*)(&_28)))).array[((int64_t)0)]));
  _86 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_85)))]));
  _87 = *((&(*(((struct l_array_4_uint8_t*)(&_28)))).array[((int64_t)1)]));
  _88 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_87)))]));
  _89 = *((&(*(((struct l_array_4_uint8_t*)(&_28)))).array[((int64_t)2)]));
  _90 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_89)))]));
  _91 = *((&(*(((struct l_array_4_uint8_t*)(&_28)))).array[((int64_t)3)]));
  _92 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_91)))]));
  _93 = _73 ^ (((_86 ^ _88) ^ _90) ^ _92);
  _94 = *((&(*((&_21->field0))).array[((int64_t)5)]));
  *(((uint32_t*)(&_29))) = (_94 ^ _93);
  _95 = *((&(*(((struct l_array_4_uint8_t*)(&_29)))).array[((int64_t)0)]));
  _96 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_95)))]));
  _97 = *((&(*(((struct l_array_4_uint8_t*)(&_29)))).array[((int64_t)1)]));
  _98 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_97)))]));
  _99 = *((&(*(((struct l_array_4_uint8_t*)(&_29)))).array[((int64_t)2)]));
  _100 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_99)))]));
  _101 = *((&(*(((struct l_array_4_uint8_t*)(&_29)))).array[((int64_t)3)]));
  _102 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_101)))]));
  _103 = _83 ^ (((_96 ^ _98) ^ _100) ^ _102);
  _104 = *((&(*((&_21->field0))).array[((int64_t)6)]));
  *(((uint32_t*)(&_30))) = (_104 ^ _103);
  _105 = *((&(*(((struct l_array_4_uint8_t*)(&_30)))).array[((int64_t)0)]));
  _106 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_105)))]));
  _107 = *((&(*(((struct l_array_4_uint8_t*)(&_30)))).array[((int64_t)1)]));
  _108 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_107)))]));
  _109 = *((&(*(((struct l_array_4_uint8_t*)(&_30)))).array[((int64_t)2)]));
  _110 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_109)))]));
  _111 = *((&(*(((struct l_array_4_uint8_t*)(&_30)))).array[((int64_t)3)]));
  _112 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_111)))]));
  _113 = _93 ^ (((_106 ^ _108) ^ _110) ^ _112);
  _114 = *((&(*((&_21->field0))).array[((int64_t)7)]));
  *(((uint32_t*)(&_31))) = (_114 ^ _113);
  _115 = *((&(*(((struct l_array_4_uint8_t*)(&_31)))).array[((int64_t)0)]));
  _116 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_115)))]));
  _117 = *((&(*(((struct l_array_4_uint8_t*)(&_31)))).array[((int64_t)1)]));
  _118 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_117)))]));
  _119 = *((&(*(((struct l_array_4_uint8_t*)(&_31)))).array[((int64_t)2)]));
  _120 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_119)))]));
  _121 = *((&(*(((struct l_array_4_uint8_t*)(&_31)))).array[((int64_t)3)]));
  _122 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_121)))]));
  _123 = _103 ^ (((_116 ^ _118) ^ _120) ^ _122);
  _124 = *((&(*((&_21->field0))).array[((int64_t)8)]));
  *(((uint32_t*)(&_32))) = (_124 ^ _123);
  _125 = *((&(*(((struct l_array_4_uint8_t*)(&_32)))).array[((int64_t)0)]));
  _126 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_125)))]));
  _127 = *((&(*(((struct l_array_4_uint8_t*)(&_32)))).array[((int64_t)1)]));
  _128 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_127)))]));
  _129 = *((&(*(((struct l_array_4_uint8_t*)(&_32)))).array[((int64_t)2)]));
  _130 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_129)))]));
  _131 = *((&(*(((struct l_array_4_uint8_t*)(&_32)))).array[((int64_t)3)]));
  _132 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_131)))]));
  _133 = _113 ^ (((_126 ^ _128) ^ _130) ^ _132);
  _134 = *((&(*((&_21->field0))).array[((int64_t)9)]));
  *(((uint32_t*)(&_33))) = (_134 ^ _133);
  _135 = *((&(*(((struct l_array_4_uint8_t*)(&_33)))).array[((int64_t)0)]));
  _136 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_135)))]));
  _137 = *((&(*(((struct l_array_4_uint8_t*)(&_33)))).array[((int64_t)1)]));
  _138 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_137)))]));
  _139 = *((&(*(((struct l_array_4_uint8_t*)(&_33)))).array[((int64_t)2)]));
  _140 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_139)))]));
  _141 = *((&(*(((struct l_array_4_uint8_t*)(&_33)))).array[((int64_t)3)]));
  _142 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_141)))]));
  _143 = _123 ^ (((_136 ^ _138) ^ _140) ^ _142);
  _144 = *((&(*((&_21->field0))).array[((int64_t)10)]));
  *(((uint32_t*)(&_34))) = (_144 ^ _143);
  _145 = *((&(*(((struct l_array_4_uint8_t*)(&_34)))).array[((int64_t)0)]));
  _146 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_145)))]));
  _147 = *((&(*(((struct l_array_4_uint8_t*)(&_34)))).array[((int64_t)1)]));
  _148 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_147)))]));
  _149 = *((&(*(((struct l_array_4_uint8_t*)(&_34)))).array[((int64_t)2)]));
  _150 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_149)))]));
  _151 = *((&(*(((struct l_array_4_uint8_t*)(&_34)))).array[((int64_t)3)]));
  _152 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_151)))]));
  _153 = _133 ^ (((_146 ^ _148) ^ _150) ^ _152);
  _154 = *((&(*((&_21->field0))).array[((int64_t)11)]));
  *(((uint32_t*)(&_35))) = (_154 ^ _153);
  _155 = *((&(*(((struct l_array_4_uint8_t*)(&_35)))).array[((int64_t)0)]));
  _156 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_155)))]));
  _157 = *((&(*(((struct l_array_4_uint8_t*)(&_35)))).array[((int64_t)1)]));
  _158 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_157)))]));
  _159 = *((&(*(((struct l_array_4_uint8_t*)(&_35)))).array[((int64_t)2)]));
  _160 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_159)))]));
  _161 = *((&(*(((struct l_array_4_uint8_t*)(&_35)))).array[((int64_t)3)]));
  _162 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_161)))]));
  _163 = _143 ^ (((_156 ^ _158) ^ _160) ^ _162);
  _164 = *((&(*((&_21->field0))).array[((int64_t)12)]));
  *(((uint32_t*)(&_36))) = (_164 ^ _163);
  _165 = *((&(*(((struct l_array_4_uint8_t*)(&_36)))).array[((int64_t)0)]));
  _166 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_165)))]));
  _167 = *((&(*(((struct l_array_4_uint8_t*)(&_36)))).array[((int64_t)1)]));
  _168 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_167)))]));
  _169 = *((&(*(((struct l_array_4_uint8_t*)(&_36)))).array[((int64_t)2)]));
  _170 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_169)))]));
  _171 = *((&(*(((struct l_array_4_uint8_t*)(&_36)))).array[((int64_t)3)]));
  _172 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_171)))]));
  _173 = _153 ^ (((_166 ^ _168) ^ _170) ^ _172);
  _174 = *((&(*((&_21->field0))).array[((int64_t)13)]));
  *(((uint32_t*)(&_37))) = (_174 ^ _173);
  _175 = *((&(*(((struct l_array_4_uint8_t*)(&_37)))).array[((int64_t)0)]));
  _176 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_175)))]));
  _177 = *((&(*(((struct l_array_4_uint8_t*)(&_37)))).array[((int64_t)1)]));
  _178 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_177)))]));
  _179 = *((&(*(((struct l_array_4_uint8_t*)(&_37)))).array[((int64_t)2)]));
  _180 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_179)))]));
  _181 = *((&(*(((struct l_array_4_uint8_t*)(&_37)))).array[((int64_t)3)]));
  _182 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_181)))]));
  _183 = _163 ^ (((_176 ^ _178) ^ _180) ^ _182);
  _184 = *((&(*((&_21->field0))).array[((int64_t)14)]));
  *(((uint32_t*)(&_38))) = (_184 ^ _183);
  _185 = *((&(*(((struct l_array_4_uint8_t*)(&_38)))).array[((int64_t)0)]));
  _186 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_185)))]));
  _187 = *((&(*(((struct l_array_4_uint8_t*)(&_38)))).array[((int64_t)1)]));
  _188 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_187)))]));
  _189 = *((&(*(((struct l_array_4_uint8_t*)(&_38)))).array[((int64_t)2)]));
  _190 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_189)))]));
  _191 = *((&(*(((struct l_array_4_uint8_t*)(&_38)))).array[((int64_t)3)]));
  _192 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_191)))]));
  _193 = _173 ^ (((_186 ^ _188) ^ _190) ^ _192);
  _194 = *((&(*((&_21->field0))).array[((int64_t)15)]));
  *(((uint32_t*)(&_39))) = (_194 ^ _193);
  _195 = *((&(*(((struct l_array_4_uint8_t*)(&_39)))).array[((int64_t)0)]));
  _196 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_195)))]));
  _197 = *((&(*(((struct l_array_4_uint8_t*)(&_39)))).array[((int64_t)1)]));
  _198 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_197)))]));
  _199 = *((&(*(((struct l_array_4_uint8_t*)(&_39)))).array[((int64_t)2)]));
  _200 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_199)))]));
  _201 = *((&(*(((struct l_array_4_uint8_t*)(&_39)))).array[((int64_t)3)]));
  _202 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_201)))]));
  *_41 = _193;
  *((&_41[((int64_t)1)])) = (_183 ^ (((_196 ^ _198) ^ _200) ^ _202));
}


void fcrypt_decrypt(struct l_struct_struct_OC_fcrypt_ctx* _203, uint64_t llvm_cbe_N, uint8_t* _204, uint64_t llvm_cbe_N1, uint8_t* _205, uint64_t llvm_cbe_N2) {
  struct l_struct_union_OC_lc4 _206;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _207;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _208;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _209;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _210;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _211;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _212;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _213;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _214;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _215;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _216;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _217;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _218;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _219;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _220;    /* Address-exposed local */
  struct l_struct_union_OC_lc4 _221;    /* Address-exposed local */
  uint32_t* _222;
  uint32_t* _223;
  uint32_t _224;
  uint32_t _225;
  uint32_t _226;
  uint8_t _227;
  uint32_t _228;
  uint8_t _229;
  uint32_t _230;
  uint8_t _231;
  uint32_t _232;
  uint8_t _233;
  uint32_t _234;
  uint32_t _235;
  uint32_t _236;
  uint8_t _237;
  uint32_t _238;
  uint8_t _239;
  uint32_t _240;
  uint8_t _241;
  uint32_t _242;
  uint8_t _243;
  uint32_t _244;
  uint32_t _245;
  uint32_t _246;
  uint8_t _247;
  uint32_t _248;
  uint8_t _249;
  uint32_t _250;
  uint8_t _251;
  uint32_t _252;
  uint8_t _253;
  uint32_t _254;
  uint32_t _255;
  uint32_t _256;
  uint8_t _257;
  uint32_t _258;
  uint8_t _259;
  uint32_t _260;
  uint8_t _261;
  uint32_t _262;
  uint8_t _263;
  uint32_t _264;
  uint32_t _265;
  uint32_t _266;
  uint8_t _267;
  uint32_t _268;
  uint8_t _269;
  uint32_t _270;
  uint8_t _271;
  uint32_t _272;
  uint8_t _273;
  uint32_t _274;
  uint32_t _275;
  uint32_t _276;
  uint8_t _277;
  uint32_t _278;
  uint8_t _279;
  uint32_t _280;
  uint8_t _281;
  uint32_t _282;
  uint8_t _283;
  uint32_t _284;
  uint32_t _285;
  uint32_t _286;
  uint8_t _287;
  uint32_t _288;
  uint8_t _289;
  uint32_t _290;
  uint8_t _291;
  uint32_t _292;
  uint8_t _293;
  uint32_t _294;
  uint32_t _295;
  uint32_t _296;
  uint8_t _297;
  uint32_t _298;
  uint8_t _299;
  uint32_t _300;
  uint8_t _301;
  uint32_t _302;
  uint8_t _303;
  uint32_t _304;
  uint32_t _305;
  uint32_t _306;
  uint8_t _307;
  uint32_t _308;
  uint8_t _309;
  uint32_t _310;
  uint8_t _311;
  uint32_t _312;
  uint8_t _313;
  uint32_t _314;
  uint32_t _315;
  uint32_t _316;
  uint8_t _317;
  uint32_t _318;
  uint8_t _319;
  uint32_t _320;
  uint8_t _321;
  uint32_t _322;
  uint8_t _323;
  uint32_t _324;
  uint32_t _325;
  uint32_t _326;
  uint8_t _327;
  uint32_t _328;
  uint8_t _329;
  uint32_t _330;
  uint8_t _331;
  uint32_t _332;
  uint8_t _333;
  uint32_t _334;
  uint32_t _335;
  uint32_t _336;
  uint8_t _337;
  uint32_t _338;
  uint8_t _339;
  uint32_t _340;
  uint8_t _341;
  uint32_t _342;
  uint8_t _343;
  uint32_t _344;
  uint32_t _345;
  uint32_t _346;
  uint8_t _347;
  uint32_t _348;
  uint8_t _349;
  uint32_t _350;
  uint8_t _351;
  uint32_t _352;
  uint8_t _353;
  uint32_t _354;
  uint32_t _355;
  uint32_t _356;
  uint8_t _357;
  uint32_t _358;
  uint8_t _359;
  uint32_t _360;
  uint8_t _361;
  uint32_t _362;
  uint8_t _363;
  uint32_t _364;
  uint32_t _365;
  uint32_t _366;
  uint8_t _367;
  uint32_t _368;
  uint8_t _369;
  uint32_t _370;
  uint8_t _371;
  uint32_t _372;
  uint8_t _373;
  uint32_t _374;
  uint32_t _375;
  uint32_t _376;
  uint8_t _377;
  uint32_t _378;
  uint8_t _379;
  uint32_t _380;
  uint8_t _381;
  uint32_t _382;
  uint8_t _383;
  uint32_t _384;

  _222 = ((uint32_t*)_205);
  _223 = ((uint32_t*)_204);
  _224 = *_222;
  _225 = *((&_222[((int64_t)1)]));
  _226 = *((&(*((&_203->field0))).array[((int64_t)15)]));
  *(((uint32_t*)(&_206))) = (_226 ^ _224);
  _227 = *((&(*(((struct l_array_4_uint8_t*)(&_206)))).array[((int64_t)0)]));
  _228 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_227)))]));
  _229 = *((&(*(((struct l_array_4_uint8_t*)(&_206)))).array[((int64_t)1)]));
  _230 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_229)))]));
  _231 = *((&(*(((struct l_array_4_uint8_t*)(&_206)))).array[((int64_t)2)]));
  _232 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_231)))]));
  _233 = *((&(*(((struct l_array_4_uint8_t*)(&_206)))).array[((int64_t)3)]));
  _234 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_233)))]));
  _235 = _225 ^ (((_228 ^ _230) ^ _232) ^ _234);
  _236 = *((&(*((&_203->field0))).array[((int64_t)14)]));
  *(((uint32_t*)(&_207))) = (_236 ^ _235);
  _237 = *((&(*(((struct l_array_4_uint8_t*)(&_207)))).array[((int64_t)0)]));
  _238 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_237)))]));
  _239 = *((&(*(((struct l_array_4_uint8_t*)(&_207)))).array[((int64_t)1)]));
  _240 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_239)))]));
  _241 = *((&(*(((struct l_array_4_uint8_t*)(&_207)))).array[((int64_t)2)]));
  _242 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_241)))]));
  _243 = *((&(*(((struct l_array_4_uint8_t*)(&_207)))).array[((int64_t)3)]));
  _244 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_243)))]));
  _245 = _224 ^ (((_238 ^ _240) ^ _242) ^ _244);
  _246 = *((&(*((&_203->field0))).array[((int64_t)13)]));
  *(((uint32_t*)(&_208))) = (_246 ^ _245);
  _247 = *((&(*(((struct l_array_4_uint8_t*)(&_208)))).array[((int64_t)0)]));
  _248 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_247)))]));
  _249 = *((&(*(((struct l_array_4_uint8_t*)(&_208)))).array[((int64_t)1)]));
  _250 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_249)))]));
  _251 = *((&(*(((struct l_array_4_uint8_t*)(&_208)))).array[((int64_t)2)]));
  _252 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_251)))]));
  _253 = *((&(*(((struct l_array_4_uint8_t*)(&_208)))).array[((int64_t)3)]));
  _254 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_253)))]));
  _255 = _235 ^ (((_248 ^ _250) ^ _252) ^ _254);
  _256 = *((&(*((&_203->field0))).array[((int64_t)12)]));
  *(((uint32_t*)(&_209))) = (_256 ^ _255);
  _257 = *((&(*(((struct l_array_4_uint8_t*)(&_209)))).array[((int64_t)0)]));
  _258 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_257)))]));
  _259 = *((&(*(((struct l_array_4_uint8_t*)(&_209)))).array[((int64_t)1)]));
  _260 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_259)))]));
  _261 = *((&(*(((struct l_array_4_uint8_t*)(&_209)))).array[((int64_t)2)]));
  _262 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_261)))]));
  _263 = *((&(*(((struct l_array_4_uint8_t*)(&_209)))).array[((int64_t)3)]));
  _264 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_263)))]));
  _265 = _245 ^ (((_258 ^ _260) ^ _262) ^ _264);
  _266 = *((&(*((&_203->field0))).array[((int64_t)11)]));
  *(((uint32_t*)(&_210))) = (_266 ^ _265);
  _267 = *((&(*(((struct l_array_4_uint8_t*)(&_210)))).array[((int64_t)0)]));
  _268 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_267)))]));
  _269 = *((&(*(((struct l_array_4_uint8_t*)(&_210)))).array[((int64_t)1)]));
  _270 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_269)))]));
  _271 = *((&(*(((struct l_array_4_uint8_t*)(&_210)))).array[((int64_t)2)]));
  _272 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_271)))]));
  _273 = *((&(*(((struct l_array_4_uint8_t*)(&_210)))).array[((int64_t)3)]));
  _274 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_273)))]));
  _275 = _255 ^ (((_268 ^ _270) ^ _272) ^ _274);
  _276 = *((&(*((&_203->field0))).array[((int64_t)10)]));
  *(((uint32_t*)(&_211))) = (_276 ^ _275);
  _277 = *((&(*(((struct l_array_4_uint8_t*)(&_211)))).array[((int64_t)0)]));
  _278 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_277)))]));
  _279 = *((&(*(((struct l_array_4_uint8_t*)(&_211)))).array[((int64_t)1)]));
  _280 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_279)))]));
  _281 = *((&(*(((struct l_array_4_uint8_t*)(&_211)))).array[((int64_t)2)]));
  _282 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_281)))]));
  _283 = *((&(*(((struct l_array_4_uint8_t*)(&_211)))).array[((int64_t)3)]));
  _284 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_283)))]));
  _285 = _265 ^ (((_278 ^ _280) ^ _282) ^ _284);
  _286 = *((&(*((&_203->field0))).array[((int64_t)9)]));
  *(((uint32_t*)(&_212))) = (_286 ^ _285);
  _287 = *((&(*(((struct l_array_4_uint8_t*)(&_212)))).array[((int64_t)0)]));
  _288 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_287)))]));
  _289 = *((&(*(((struct l_array_4_uint8_t*)(&_212)))).array[((int64_t)1)]));
  _290 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_289)))]));
  _291 = *((&(*(((struct l_array_4_uint8_t*)(&_212)))).array[((int64_t)2)]));
  _292 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_291)))]));
  _293 = *((&(*(((struct l_array_4_uint8_t*)(&_212)))).array[((int64_t)3)]));
  _294 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_293)))]));
  _295 = _275 ^ (((_288 ^ _290) ^ _292) ^ _294);
  _296 = *((&(*((&_203->field0))).array[((int64_t)8)]));
  *(((uint32_t*)(&_213))) = (_296 ^ _295);
  _297 = *((&(*(((struct l_array_4_uint8_t*)(&_213)))).array[((int64_t)0)]));
  _298 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_297)))]));
  _299 = *((&(*(((struct l_array_4_uint8_t*)(&_213)))).array[((int64_t)1)]));
  _300 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_299)))]));
  _301 = *((&(*(((struct l_array_4_uint8_t*)(&_213)))).array[((int64_t)2)]));
  _302 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_301)))]));
  _303 = *((&(*(((struct l_array_4_uint8_t*)(&_213)))).array[((int64_t)3)]));
  _304 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_303)))]));
  _305 = _285 ^ (((_298 ^ _300) ^ _302) ^ _304);
  _306 = *((&(*((&_203->field0))).array[((int64_t)7)]));
  *(((uint32_t*)(&_214))) = (_306 ^ _305);
  _307 = *((&(*(((struct l_array_4_uint8_t*)(&_214)))).array[((int64_t)0)]));
  _308 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_307)))]));
  _309 = *((&(*(((struct l_array_4_uint8_t*)(&_214)))).array[((int64_t)1)]));
  _310 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_309)))]));
  _311 = *((&(*(((struct l_array_4_uint8_t*)(&_214)))).array[((int64_t)2)]));
  _312 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_311)))]));
  _313 = *((&(*(((struct l_array_4_uint8_t*)(&_214)))).array[((int64_t)3)]));
  _314 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_313)))]));
  _315 = _295 ^ (((_308 ^ _310) ^ _312) ^ _314);
  _316 = *((&(*((&_203->field0))).array[((int64_t)6)]));
  *(((uint32_t*)(&_215))) = (_316 ^ _315);
  _317 = *((&(*(((struct l_array_4_uint8_t*)(&_215)))).array[((int64_t)0)]));
  _318 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_317)))]));
  _319 = *((&(*(((struct l_array_4_uint8_t*)(&_215)))).array[((int64_t)1)]));
  _320 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_319)))]));
  _321 = *((&(*(((struct l_array_4_uint8_t*)(&_215)))).array[((int64_t)2)]));
  _322 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_321)))]));
  _323 = *((&(*(((struct l_array_4_uint8_t*)(&_215)))).array[((int64_t)3)]));
  _324 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_323)))]));
  _325 = _305 ^ (((_318 ^ _320) ^ _322) ^ _324);
  _326 = *((&(*((&_203->field0))).array[((int64_t)5)]));
  *(((uint32_t*)(&_216))) = (_326 ^ _325);
  _327 = *((&(*(((struct l_array_4_uint8_t*)(&_216)))).array[((int64_t)0)]));
  _328 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_327)))]));
  _329 = *((&(*(((struct l_array_4_uint8_t*)(&_216)))).array[((int64_t)1)]));
  _330 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_329)))]));
  _331 = *((&(*(((struct l_array_4_uint8_t*)(&_216)))).array[((int64_t)2)]));
  _332 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_331)))]));
  _333 = *((&(*(((struct l_array_4_uint8_t*)(&_216)))).array[((int64_t)3)]));
  _334 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_333)))]));
  _335 = _315 ^ (((_328 ^ _330) ^ _332) ^ _334);
  _336 = *((&(*((&_203->field0))).array[((int64_t)4)]));
  *(((uint32_t*)(&_217))) = (_336 ^ _335);
  _337 = *((&(*(((struct l_array_4_uint8_t*)(&_217)))).array[((int64_t)0)]));
  _338 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_337)))]));
  _339 = *((&(*(((struct l_array_4_uint8_t*)(&_217)))).array[((int64_t)1)]));
  _340 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_339)))]));
  _341 = *((&(*(((struct l_array_4_uint8_t*)(&_217)))).array[((int64_t)2)]));
  _342 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_341)))]));
  _343 = *((&(*(((struct l_array_4_uint8_t*)(&_217)))).array[((int64_t)3)]));
  _344 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_343)))]));
  _345 = _325 ^ (((_338 ^ _340) ^ _342) ^ _344);
  _346 = *((&(*((&_203->field0))).array[((int64_t)3)]));
  *(((uint32_t*)(&_218))) = (_346 ^ _345);
  _347 = *((&(*(((struct l_array_4_uint8_t*)(&_218)))).array[((int64_t)0)]));
  _348 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_347)))]));
  _349 = *((&(*(((struct l_array_4_uint8_t*)(&_218)))).array[((int64_t)1)]));
  _350 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_349)))]));
  _351 = *((&(*(((struct l_array_4_uint8_t*)(&_218)))).array[((int64_t)2)]));
  _352 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_351)))]));
  _353 = *((&(*(((struct l_array_4_uint8_t*)(&_218)))).array[((int64_t)3)]));
  _354 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_353)))]));
  _355 = _335 ^ (((_348 ^ _350) ^ _352) ^ _354);
  _356 = *((&(*((&_203->field0))).array[((int64_t)2)]));
  *(((uint32_t*)(&_219))) = (_356 ^ _355);
  _357 = *((&(*(((struct l_array_4_uint8_t*)(&_219)))).array[((int64_t)0)]));
  _358 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_357)))]));
  _359 = *((&(*(((struct l_array_4_uint8_t*)(&_219)))).array[((int64_t)1)]));
  _360 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_359)))]));
  _361 = *((&(*(((struct l_array_4_uint8_t*)(&_219)))).array[((int64_t)2)]));
  _362 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_361)))]));
  _363 = *((&(*(((struct l_array_4_uint8_t*)(&_219)))).array[((int64_t)3)]));
  _364 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_363)))]));
  _365 = _345 ^ (((_358 ^ _360) ^ _362) ^ _364);
  _366 = *((&(*((&_203->field0))).array[((int64_t)1)]));
  *(((uint32_t*)(&_220))) = (_366 ^ _365);
  _367 = *((&(*(((struct l_array_4_uint8_t*)(&_220)))).array[((int64_t)0)]));
  _368 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_367)))]));
  _369 = *((&(*(((struct l_array_4_uint8_t*)(&_220)))).array[((int64_t)1)]));
  _370 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_369)))]));
  _371 = *((&(*(((struct l_array_4_uint8_t*)(&_220)))).array[((int64_t)2)]));
  _372 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_371)))]));
  _373 = *((&(*(((struct l_array_4_uint8_t*)(&_220)))).array[((int64_t)3)]));
  _374 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_373)))]));
  _375 = _355 ^ (((_368 ^ _370) ^ _372) ^ _374);
  _376 = *((&(*((&_203->field0))).array[((int64_t)0)]));
  *(((uint32_t*)(&_221))) = (_376 ^ _375);
  _377 = *((&(*(((struct l_array_4_uint8_t*)(&_221)))).array[((int64_t)0)]));
  _378 = *((&sbox0.array[((int64_t)(((uint64_t)(uint8_t)_377)))]));
  _379 = *((&(*(((struct l_array_4_uint8_t*)(&_221)))).array[((int64_t)1)]));
  _380 = *((&sbox1.array[((int64_t)(((uint64_t)(uint8_t)_379)))]));
  _381 = *((&(*(((struct l_array_4_uint8_t*)(&_221)))).array[((int64_t)2)]));
  _382 = *((&sbox2.array[((int64_t)(((uint64_t)(uint8_t)_381)))]));
  _383 = *((&(*(((struct l_array_4_uint8_t*)(&_221)))).array[((int64_t)3)]));
  _384 = *((&sbox3.array[((int64_t)(((uint64_t)(uint8_t)_383)))]));
  *_223 = (_365 ^ (((_378 ^ _380) ^ _382) ^ _384));
  *((&_223[((int64_t)1)])) = _375;
}


uint32_t fcrypt_setkey(uint8_t* _385, uint64_t llvm_cbe_N, struct l_struct_struct_OC_fcrypt_ctx* _386, uint64_t llvm_cbe_N1, uint32_t _387) {
  bool llvm_cbe_out_2e_;    /* Address-exposed local */
  uint8_t* _388;
  uint8_t _389;
  uint8_t* _390;
  uint8_t _391;
  uint8_t* _392;
  uint8_t _393;
  uint8_t* _394;
  uint8_t _395;
  uint32_t _396;
  uint32_t _397;
  uint8_t* _398;
  uint8_t _399;
  uint8_t* _400;
  uint8_t _401;
  uint8_t _402;
  uint8_t _403;
  uint32_t _404;
  uint32_t _405;
  uint32_t _406;
  uint32_t _407;
  uint32_t _408;
  uint32_t _409;
  uint32_t _410;
  uint32_t _411;
  uint32_t _412;
  uint32_t _413;
  uint32_t _414;
  uint32_t _415;
  uint32_t _416;
  uint32_t _417;
  uint32_t _418;
  uint32_t _419;
  uint32_t _420;
  uint32_t _421;
  uint32_t _422;
  uint32_t _423;
  uint32_t _424;
  uint32_t _425;
  uint32_t _426;
  uint32_t _427;
  uint32_t _428;
  uint32_t _429;
  uint32_t _430;
  uint32_t _431;
  uint32_t _432;
  uint32_t _433;
  uint64_t llvm_cbe_shadow;    /* Address-exposed local */

  llvm_cbe_out_2e_ = ((1) & 1);
  _388 = (&_385[((int32_t)1)]);
  _389 = *_385;
  _390 = (&_388[((int32_t)1)]);
  _391 = *_388;
  _392 = (&_390[((int32_t)1)]);
  _393 = *_390;
  _394 = (&_392[((int32_t)1)]);
  _395 = *_392;
  _396 = ((((((llvm_ashr_u32((((uint32_t)(uint8_t)_389)), 1)) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_391)), 1))) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_393)), 1))) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_395)), 1));
  _397 = llvm_lshr_u32(_396, 4);
  _398 = (&_394[((int32_t)1)]);
  _399 = *_394;
  _400 = (&_398[((int32_t)1)]);
  _401 = *_398;
  _402 = *_400;
  _403 = *((&_400[((int32_t)1)]));
  _404 = ((((((((_396 & 15) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_399)), 1))) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_401)), 1))) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_402)), 1))) << 7) | (llvm_ashr_u32((((uint32_t)(uint8_t)_403)), 1));
  *((&(*((&_386->field0))).array[((int64_t)0)])) = _404;
  _405 = (llvm_lshr_u32(_404, 11)) | ((_397 & 2047) << 21);
  _406 = (llvm_lshr_u32(_397, 11)) | ((_404 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)1)])) = _405;
  _407 = (llvm_lshr_u32(_405, 11)) | ((_406 & 2047) << 21);
  _408 = (llvm_lshr_u32(_406, 11)) | ((_405 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)2)])) = _407;
  _409 = (llvm_lshr_u32(_407, 11)) | ((_408 & 2047) << 21);
  _410 = (llvm_lshr_u32(_408, 11)) | ((_407 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)3)])) = _409;
  _411 = (llvm_lshr_u32(_409, 11)) | ((_410 & 2047) << 21);
  _412 = (llvm_lshr_u32(_410, 11)) | ((_409 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)4)])) = _411;
  _413 = (llvm_lshr_u32(_411, 11)) | ((_412 & 2047) << 21);
  _414 = (llvm_lshr_u32(_412, 11)) | ((_411 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)5)])) = _413;
  _415 = (llvm_lshr_u32(_413, 11)) | ((_414 & 2047) << 21);
  _416 = (llvm_lshr_u32(_414, 11)) | ((_413 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)6)])) = _415;
  _417 = (llvm_lshr_u32(_415, 11)) | ((_416 & 2047) << 21);
  _418 = (llvm_lshr_u32(_416, 11)) | ((_415 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)7)])) = _417;
  _419 = (llvm_lshr_u32(_417, 11)) | ((_418 & 2047) << 21);
  _420 = (llvm_lshr_u32(_418, 11)) | ((_417 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)8)])) = _419;
  _421 = (llvm_lshr_u32(_419, 11)) | ((_420 & 2047) << 21);
  _422 = (llvm_lshr_u32(_420, 11)) | ((_419 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)9)])) = _421;
  _423 = (llvm_lshr_u32(_421, 11)) | ((_422 & 2047) << 21);
  _424 = (llvm_lshr_u32(_422, 11)) | ((_421 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)10)])) = _423;
  _425 = (llvm_lshr_u32(_423, 11)) | ((_424 & 2047) << 21);
  _426 = (llvm_lshr_u32(_424, 11)) | ((_423 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)11)])) = _425;
  _427 = (llvm_lshr_u32(_425, 11)) | ((_426 & 2047) << 21);
  _428 = (llvm_lshr_u32(_426, 11)) | ((_425 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)12)])) = _427;
  _429 = (llvm_lshr_u32(_427, 11)) | ((_428 & 2047) << 21);
  _430 = (llvm_lshr_u32(_428, 11)) | ((_427 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)13)])) = _429;
  _431 = (llvm_lshr_u32(_429, 11)) | ((_430 & 2047) << 21);
  _432 = (llvm_lshr_u32(_430, 11)) | ((_429 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)14)])) = _431;
  _433 = (llvm_lshr_u32(_432, 11)) | ((_431 & 2047) << 13);
  *((&(*((&_386->field0))).array[((int64_t)15)])) = ((llvm_lshr_u32(_431, 11)) | ((_432 & 2047) << 21));
  return 0;
}

