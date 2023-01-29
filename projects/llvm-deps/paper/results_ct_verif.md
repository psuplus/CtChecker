Table 1: Comparison with cache-channels excluded

|             ||        ct-verif      |||      ct-checker     ||
|-------------|-------|-------|--------|-------|-------|-------|
|             |  V1   | V2    | V4     |  V1   | V2    | V4    |
|**BearSSL**  |  9    |   8   |   0    |     3 |     3 |     1 |
|**libgcrypt**|   36  |   22  |   0    |    26 |     7 |     0 |
|**mbedtls**  |   -   |   -   |   -    |     - |     - |     - |
|**openSSL**  |       |       |        |       |       |       |
| recp        |   24  |  9    |   0    |     3 |     2 |     0 |
| mont        |   27  |  11   |   0    |    25 |     2 |     0 |
| word        |   20  |  3    |   0    |     2 |     1 |     0 |
| consttime   |   18  |  3    |   0    |    23 |     1 |     1 |

# BearSSL

### V1: 9

include/inner.h line 1018 - if (j == 0) {  
include/i32_montmul.c line   38 - for (u = 0; u < len; u ++) {  
include/i32_montmul.c line   46 - for (v = 0; v < len; v ++) {  
include/i32_add.c line   36 - for (u = 1; u < m; u ++) {  
include/i32_sub.c line   36 - for (u = 1; u < m; u ++) {  
include/i32_muladd.c line   42 - if (m_bitlen == 0) {  
include/i32_muladd.c line   45 - if (m_bitlen <= 32) {  
include/i32_muladd.c line  108 - for (u = 1; u <= mlen; u ++) {  
include/i32_tmont.c line   33 - for (k = (m[0] + 31) >> 5; k > 0; k --) {  


### V2: 8

v2_lib/inner.h line 1018 - if (j == 0) {  
v2_lib/i32_montmul.c line   38 - for (u = 0; u < len; u ++) {  
v2_lib/i32_montmul.c line   46 - for (v = 0; v < len; v ++) {  
v2_lib/i32_sub.c line   36 - for (u = 1; u < m; u ++) {  
v2_lib/i32_muladd.c line   42 - if (m_bitlen == 0) {  
v2_lib/i32_muladd.c line   45 - if (m_bitlen <= 32) {  
v2_lib/i32_muladd.c line  108 - for (u = 1; u <= mlen; u ++) {  
v2_lib/i32_tmont.c line   33 - for (k = (m[0] + 31) >> 5; k > 0; k --) {  

# libgcrypt

### V1: 36

v1.c  line  440 - MPN_NORMALIZE(ep, esize);  
v1.c line  484 - if ( mod_shift_cnt )  
v1.c line  487 - MPN_COPY( mp, mod->d, msize );  
v1.c line  499 - MPN_COPY( bp, base->d, bsize );  
v1.c line  506 - MPN_NORMALIZE( bp, bsize );  
v1.c line  521 - if ( rp == bp )  
v1.c line  524 - gcry_assert (!bp_marker);  
v1.c line  527 - MPN_COPY(bp, rp, bsize);  
v1.c line  534 - MPN_COPY(ep, rp, esize);  
v1.c line  538 - if (res->alloced < size)  
v1.c line  566 - MPN_COPY (precomp[0], bp, bsize);  
v1.c line  567 - for (i = 1; i < (1 << (W - 1)); i++)  
v1.c line  569 - if (xsize >= base_u_size)  
v1.c line  577 - if (max_u_size < base_u_size)  
v1.c line  579- MPN_COPY (precomp[i], rp, rsize);  
v1.c line  582- if (msize > max_u_size)  
v1.c line  585- MPN_ZERO_2 (base_u, max_u_size);  
v1.c line  605- MPN_ZERO_2 (rp, rsize);  
v1.c line  607- MPN_COPY_2 ( rp, bp, bsize );  
v1.c line  617 - if (e == 0)  
v1.c line  641 - if (c >= W)  
v1.c line  667 - for (j += W - c0; j >= 0; j--)  
v1.c line  702 - while (j--)  
v1.c line  715- if ( mod_shift_cnt )  
v1.c line  719- if ( carry_limb )  
v1.c line  725- else if (res->d != rp)  
v1.c line  727- MPN_COPY (res->d, rp, rsize);  
v1.c line  731- if ( rsize >= msize )  
v1.c line  738- if ( mod_shift_cnt )  
v1.c line  740- MPN_NORMALIZE_1 (rp, rsize);  
v1.c line  743- for (i = 0; i < (1 << (W - 1)); i++)  
v1.c line  749- if ( negative_result && rsize )  
v1.c line  751- if ( mod_shift_cnt )  
v1.c line  756- MPN_NORMALIZE(rp, rsize);  
v1.c line  758- gcry_assert (res->d == rp);  
v1.c line  765 - if (bp_marker)  

### V2: 22

v2.c  line  440 - MPN_NORMALIZE(ep, esize);  
v2.c line  484 - if ( mod_shift_cnt )  
v2.c line  506 - MPN_NORMALIZE( bp, bsize );  
v2.c line  524 - gcry_assert (!bp_marker);  
v2.c line  569 - if (xsize >= base_u_size)  
v2.c line  577 - if (max_u_size < base_u_size)  
v2.c line  579- MPN_COPY (precomp[i], rp, rsize);  
v2.c line  582- if (msize > max_u_size)  
v2.c line  585- MPN_ZERO_2 (base_u, max_u_size);  
v2.c line  617- if (e == 0)  
v1.c line  641 - if (c >= W)  
v2.c line  667- for (j += W - c0; j >= 0; j--)  
v2.c line  702- while (j--)  
v2.c line  715- if ( mod_shift_cnt )  
v2.c line  727- MPN_COPY (res->d, rp, rsize);  
v2.c line  731- if ( rsize >= msize )  
v2.c line  738- if ( mod_shift_cnt )  
v2.c line  740- MPN_NORMALIZE_1 (rp, rsize);  
v2.c line  749- if ( negative_result && rsize )  
v2.c line  751- if ( mod_shift_cnt )  
v2.c line  756- MPN_NORMALIZE(rp, rsize);  
v2.c line  758- gcry_assert (res->d == rp);  

# OpenSSL

## mont

### V1: 27

v1.c line  308 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0  
v1.c line  309 - || BN_get_flags(a, BN_FLG_CONSTTIME) != 0  
v1.c line  310 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
v1.c line  318 - if (!BN_is_odd(m)) {  
v1.c line  323 - if (bits == 0) {  
v1.c line  325 - if (BN_abs_is_word(m, 1)) {  
v1.c line  338 - if (val[0] == NULL)  
v1.c line  354 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v1.c line  355 - if (!BN_nnmod(val[0], a, m, ctx))  
v1.c line  360 - if (!bn_to_mont_fixed_top(val[0], aa, mont, ctx))  
v1.c line  364 - if (window > 1) {  
v1.c line  365 - if (!bn_mul_mont_fixed_top(d, val[0], val[0], mont, ctx))  
v1.c line  368 - for (i = 1; i < j; i++) {  
v1.c line  369 - if (((val[i] = BN_CTX_get(ctx)) == NULL) ||  
v1.c line  384 - if (m->d[j - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  
v1.c line  385 - if (bn_wexpand(r, j) == NULL)  
v1.c line  395 - if (!bn_to_mont_fixed_top(r, BN_value_one(), mont, ctx))  
v1.c line  398 - if (BN_is_bit_set(p, wstart) == 0) {  
v1.c line  400 - if (!bn_mul_mont_fixed_top(r, r, r, mont, ctx))  
v1.c line  403 - if (wstart == 0)  
v1.c line  416 - for (i = 1; i < window; i++) {  
v1.c line  417 - if (wstart - i < 0)  
v1.c line  419 - if (BN_is_bit_set(p, wstart - i)) {  
v1.c line  431 - if (!bn_mul_mont_fixed_top(r, r, r, mont, ctx))  
v1.c line  436 - if (!bn_mul_mont_fixed_top(r, r, val[wvalue >> 1], mont, ctx))  
v1.c line  443 - if (wstart < 0)  
v1.c line  462 - if (!BN_from_montgomery(rr, r, mont, ctx))  

### V2: 11

bn_exp.c line  323 - if (bits == 0) {c
bn_exp.c line  354 - if (a->neg || BN_ucmp(a, m) >= 0) {  
bn_exp.c line  364 - if (window > 1) {  
bn_exp.c line  368 - for (i = 1; i < j; i++) {  
bn_exp.c line  384 - if (m->d[j - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  
bn_exp.c line  398 - if (BN_is_bit_set(p, wstart) == 0) {  
bn_exp.c line  403 - if (wstart == 0)  
bn_exp.c line  416 - for (i = 1; i < window; i++) {  
bn_exp.c line  417 - if (wstart - i < 0)  
bn_exp.c line  419 - if (BN_is_bit_set(p, wstart - i)) {  
bn_exp.c line  443 - if (wstart < 0)  

## mont_recp

### V1: 24

bn_exp.c line  171 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0){  
bn_exp.c line  172 - || BN_get_flags(a, BN_FLG_CONSTTIME) != 0  
bn_exp.c line  173 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
bn_exp.c line  180 - if (bits == 0) {  
bn_exp.c line  182 - if (BN_abs_is_word(m, 1)) {  
bn_exp.c line  196 - if (val[0] == NULL)  
bn_exp.c line  201 - if (!BN_copy(aa, m))  
bn_exp.c line  204 - if (BN_RECP_CTX_set(&recp, aa, ctx) <= 0)  
bn_exp.c line  207 - if (BN_RECP_CTX_set(&recp, m, ctx) <= 0)  
bn_exp.c line  211 - if (!BN_nnmod(val[0], a, m, ctx))  
bn_exp.c line  213 - if (BN_is_zero(val[0])) {  
bn_exp.c line  220 - if (window > 1) {  
bn_exp.c line  221 - if (!BN_mod_mul_reciprocal(aa, val[0], val[0], &recp, ctx))  
bn_exp.c line  224 - for (i = 1; i < j; i++) {  
bn_exp.c line  225 - if (((val[i] = BN_CTX_get(ctx)) == NULL) ||  
bn_exp.c line  238 - if (!BN_one(r))  
bn_exp.c line  241 - for (;;) {  
bn_exp.c line  242 - if (BN_is_bit_set(p, wstart) == 0) {  
bn_exp.c line  246 - if (wstart == 0)  
bn_exp.c line  259 - for (i = 1; i < window; i++) {  
bn_exp.c line  260 - if (wstart - i < 0)  
bn_exp.c line  262 - if (BN_is_bit_set(p, wstart - i)) {  
bn_exp.c line  279 - if (!BN_mod_mul_reciprocal(r, r, val[wvalue >> 1], &recp, ctx))  
bn_exp.c line  286 - if (wstart < 0)  

### V2: 9

bn_exp.c line  180 - if (bits == 0) {  
bn_exp.c line  220 - if (window > 1) {  
bn_exp.c line  224 - for (i = 1; i < j; i++) {  
bn_exp.c line  225 - if (((val[i] = BN_CTX_get(ctx)) == NULL) ||  
bn_exp.c line  242 - if (BN_is_bit_set(p, wstart) == 0) {  
bn_exp.c line  246 - if (wstart == 0)  
bn_exp.c line  259 - for (i = 1; i < window; i++) {  
bn_exp.c line  260 - if (wstart - i < 0)  
bn_exp.c line  262 - if (BN_is_bit_set(p, wstart - i)) {  


## mont_consttime

### V1: 18

v1_consttime.c line  614 - if (!BN_is_odd(m)) {  
v1_consttime.c line  628 - if (BN_abs_is_word(m, 1)) {  
v1_consttime.c line  652 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v1_consttime.c line  654 - if (reduced == NULL  
v1_consttime.c line  655 - || !BN_nnmod(reduced, a, m, ctx)) {  
v1_consttime.c line  723 - if ((powerbufFree =  
v1_consttime.c line  746 - if (m->d[top - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  
v1_consttime.c line  749 - for (i = 1; i < top; i++)  
v1_consttime.c line  754 - if (!bn_to_mont_fixed_top(&tmp, BN_value_one(), mont, ctx))  
v1_consttime.c line  758 - if (!bn_to_mont_fixed_top(&am, a, mont, ctx))  
v1_consttime.c line 1044 - if (!bn_mul_mont_fixed_top(&tmp, &am, &am, mont, ctx))  
v1_consttime.c line 1051 - if (!bn_mul_mont_fixed_top(&tmp, &am, &tmp, mont, ctx))  
v1_consttime.c line 1069 - if (!MOD_EXP_CTIME_COPY_FROM_PREBUF(&tmp, top, powerbuf, wvalue,  
v1_consttime.c line 1082 - if (!bn_mul_mont_fixed_top(&tmp, &tmp, &tmp, mont, ctx))  
v1_consttime.c line 1100 - if (!MOD_EXP_CTIME_COPY_FROM_PREBUF(&am, top, powerbuf, wvalue,  
v1_consttime.c line 1105 - if (!bn_mul_mont_fixed_top(&tmp, &tmp, &am, mont, ctx))  
v1_consttime.c line 1124 - if (!BN_from_montgomery(rr, &tmp, mont, ctx))  
v1_consttime.c line 1130 - if (powerbuf != NULL) {  



### V2: 3

v1_consttime.c line  652 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v1_consttime.c line  654 - if (reduced == NULL  
v1_consttime.c line  746 - if (m->d[top - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  

## mont_word

### V1: 20

bn_exp.c line 1164 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0  
bn_exp.c line 1165 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
bn_exp.c line 1174 - if (!BN_is_odd(m)) {  
bn_exp.c line 1182 - if (bits == 0) {  
bn_exp.c line 1184 - if (BN_abs_is_word(m, 1)) {  
bn_exp.c line 1192 - if (a == 0) {  
bn_exp.c line 1201 - if (t == NULL)  
bn_exp.c line 1219 - for (b = bits - 2; b >= 0; b--) {  
bn_exp.c line 1222 - if ((next_w / w) != w) { /\* overflow \*/  
bn_exp.c line 1224 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
bn_exp.c line 1235 - if (!BN_mod_mul_montgomery(r, r, r, mont, ctx))  
bn_exp.c line 1240 - if (BN_is_bit_set(p, b)) {  
bn_exp.c line 1242 - if ((next_w / a) != w) { /\* overflow \*/  
bn_exp.c line 1244 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
bn_exp.c line 1248 - if (!BN_MOD_MUL_WORD(r, w, m))  
bn_exp.c line 1258 - if (w != 1) {  
bn_exp.c line 1260 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
bn_exp.c line 1264 - if (!BN_MOD_MUL_WORD(r, w, m))  
bn_exp.c line 1270 - if (!BN_one(rr))  
bn_exp.c line 1273 - if (!BN_from_montgomery(rr, r, mont, ctx))  

### V2: 3

bn_exp.c line 1182 - if (bits == 0) {  
bn_exp.c line 1219 - for (b = bits - 2; b >= 0; b--) {  
bn_exp.c line 1240 - if (BN_is_bit_set(p, b)) {  
