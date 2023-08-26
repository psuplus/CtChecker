Table 1: without cache side channel
|             ||| Ct-Verif     |||\|||      CtChecker     |||||
|-------------|---|---|---|---|---|---|---|---|---|---|---|---|
|             |Full|Baseline|Excluded-undefined-function|Ct-Verif-Verified|CtChecker-Verified|Full-argToAll|Full-argToRet|Baseline-argToAll|Baseline-argToRet| Excluded-undefined-function|Ct-Verif-Verified|CtChecker-Verified|
|**BearSSL**  |  3|  3|  3|  0|  0|  3|  3|  3|  3|  3|  0|  0|
|**libgcrypt**|  -| 32| 19|  0| 10| 19| 14| 21|  6|  6|  0|  0|
|**mbedtls**  |OOM| 34|  5|  0|  1| 20| 20| 36|  5|  4|  0|  0|
|**openSSL**  |   |   |   |   |   |   |   |   |   |   |   |  0|
| recp        |  -| 18|  2|  0|  0|  9|  9|  3|  3|  2|  0|  0|
| mont        |  -| 22|  4|  0|  2| 15| 13| 25|  3|  2|  0|  0|
| word        |  -| 18|  1|  0|  0| 11| 10|  2|  2|  1|  0|  0|
| consttime   |  -| 18|  2|  0|  3| 13| 12| 22|  7|  0|  0|  0|

Table 2: cache side channel
|             ||| Ct-Verif     |||\|||       CtChecker       |||||
|-------------|---|---|---|---|---|----|----|----|---|---|---|---|
|             |Full|Baseline|Excluded-undefined-function|Ct-Verif-Verified|CtChecker-Verified|Full-argToAll|Full-argToRet|Baseline-argToAll|Baseline-argToRet| Excluded-undefined-function|Ct-Verif-Verified|CtChecker-Verified|
|**BearSSL**  |  0|  0|  0|  0|  0|   0|   0|   0|  0|  0|  0|  0|
|**libgcrypt**|  -|  2|  1|  0|  0|  12|  12|  12|  0|  0|  0|  0|
|**mbedtls**  |OOM|  1|  0|  0|  0|   3|   3|   2|  0|  0|  0|  0|
|**openSSL**  |   |   |   |   |   |    |    |    |   |   |   |   |
| recp        |  -|  0|  0|  0|  0|   0|   0|   0|  0|  0|  0|  0|
| mont        |  -|  2|  0|  0|  0|   5|   5|   5|  0|  0|  0|  0|
| word        |  -|  0|  0|  0|  0|   1|   1|   0|  0|  0|  0|  0|
| consttime   |  -|  1|  0|  0|  0|   8|   8|   8|  0|  0|  0|  0|


# BearSSL

### V1: 3

i32_add.c line   36 - for (u = 1; u < m; u ++) {  
i32_sub.c line   36 - for (u = 1; u < m; u ++) {  
i32_tmont.c line   33 - for (k = (m[0] + 31) >> 5; k > 0; k --) {  


### V2: 3

v2_lib/i32_add.c line   36 - for (u = 1; u < m; u ++) {  
v2_lib/i32_sub.c line   36 - for (u = 1; u < m; u ++) {  
v2_lib/i32_tmont.c line   33 - for (k = (m[0] + 31) >> 5; k > 0; k --) {  


### V4: 0



# libgcrypt

### V1: 34

v1.c line  440 - MPN_NORMALIZE(ep, esize);  
v1.c line  484 - if ( mod_shift_cnt )  
v1.c line  487 - MPN_COPY( mp, mod->d, msize );  
v1.c line  499 - MPN_COPY( bp, base->d, bsize );  
v1.c line  506 - MPN_NORMALIZE( bp, bsize );  
v1.c line  521 - if ( rp == bp )  
v1.c line  524 - gcry_assert (!bp_marker);  
v1.c line  527 - MPN_COPY(bp, rp, bsize);  
v1.c line  534 - MPN_COPY(ep, rp, esize);  
v1.c line  538 - if (res->alloced < size)  
**(cache)** v1.c line  559 - negative_result = (ep[0] & 1) && bsign;  
v1.c line  566 - MPN_COPY (precomp[0], bp, bsize);  
v1.c line  567 - for (i = 1; i < (1 << (W - 1)); i++)  
v1.c line  569 - if (xsize >= base_u_size)  
v1.c line  579 - MPN_COPY (precomp[i], rp, rsize);  
v1.c line  582 - if (msize > max_u_size)  
v1.c line  585 - MPN_ZERO_2 (base_u, max_u_size);  
v1.c line  617 - if (e == 0)  
v1.c line  641 - if (c >= W)  
v1.c line  667 - for (j += W - c0; j >= 0; j--)  
v1.c line  702 - while (j--)  
v1.c line  715 - if ( mod_shift_cnt )  
v1.c line  719 - if ( carry_limb )  
**(cache)** v1.c line  721 - rp[rsize] = carry_limb;  
v1.c line  725 - else if (res->d != rp)  
v1.c line  727 - MPN_COPY (res->d, rp, rsize);  
v1.c line  738 - if ( mod_shift_cnt )  
v1.c line  740 - MPN_NORMALIZE (rp, rsize);  
v1.c line  743 - for (i = 0; i < (1 << (W - 1)); i++)  
v1.c line  749 - if ( negative_result && rsize )  
v1.c line  751 - if ( mod_shift_cnt )  
v1.c line  756 - MPN_NORMALIZE(rp, rsize);  
v1.c line  758 - gcry_assert (res->d == rp);  
v1.c line  765 - if (bp_marker)  

### V2: 20

v2.c line  440 - MPN_NORMALIZE(ep, esize);  
v2.c line  484 - if ( mod_shift_cnt )  
v2.c line  506 - MPN_NORMALIZE( bp, bsize );  
v2.c line  524 - gcry_assert (!bp_marker);  
**(cache)** v1.c line  559 - negative_result = (ep[0] & 1) && bsign;  
v2.c line  569 - if (xsize >= base_u_size)   
v2.c line  579 - MPN_COPY (precomp[i], rp, rsize);  
v2.c line  582 - if (msize > max_u_size)  
v2.c line  585 - MPN_ZERO_2 (base_u, max_u_size);  
v2.c line  617 - if (e == 0)  
v2.c line  641 - if (c >= W)  
v2.c line  667 - for (j += W - c0; j >= 0; j--)  
v2.c line  702 - while (j--)  
v2.c line  715 - if ( mod_shift_cnt )  
v2.c line  738 - if ( mod_shift_cnt )  
v2.c line  740 - MPN_NORMALIZE (rp, rsize);  
v2.c line  749 - if ( negative_result && rsize )  
v2.c line  751 - if ( mod_shift_cnt )  
v2.c line  756 - MPN_NORMALIZE(rp, rsize);  
v2.c line  758 - gcry_assert (res->d == rp);  

### V4: 10

v4.c line  484 - if ( mod_shift_cnt )  
v4.c line  506 - MPN_NORMALIZE( bp, bsize );  
v4.c line  524 - gcry_assert (!bp_marker);  
v4.c line  569 - if (xsize >= base_u_size)   
v4.c line  715 - if ( mod_shift_cnt )  
v4.c line  738 - if ( mod_shift_cnt )  
v4.c line  740 - MPN_NORMALIZE_1 (rp, rsize);  
v4.c line  751 - if ( mod_shift_cnt )  
v4.c line  756 - MPN_NORMALIZE(rp, rsize);  
v4.c line  758 - gcry_assert (res->d == rp);  

# mbedtls

### V1: 29

bign2/v1_min.c line  418 - if( mbedtls_mpi_cmp_int( N, 0 ) <= 0 || ( N->p[0] & 1 ) == 0 )  
bign2/v1_min.c line  421 - if( mbedtls_mpi_cmp_int( E, 0 ) < 0 )  
bign2/v1_min.c line  424 - if( mbedtls_mpi_bitlen( E ) > MBEDTLS_MPI_MAX_BITS ||  
bign2/v1_min.c line  425 - mbedtls_mpi_bitlen( N ) > MBEDTLS_MPI_MAX_BITS )  
bign2/v1_min.c line  439 - wsize = ( i > 671 ) ? 6 : ( i > 239 ) ? 5 :  
bign2/v1_min.c line  440 - ( i >  79 ) ? 4 : ( i >  23 ) ? 3 : 1;  
bign2/v1_min.c line  453 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( X, j ) );  
bign2/v1_min.c line  454 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[1],  j ) );  
bign2/v1_min.c line  455 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &T, j * 2 ) );  
bign2/v1_min.c line  463 - MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &Apos, A ) );  
bign2/v1_min.c line  473 - MBEDTLS_MPI_CHK( mbedtls_mpi_lset( &RR, 1 ) );  
bign2/v1_min.c line  474 - MBEDTLS_MPI_CHK( mbedtls_mpi_shift_l( &RR, N->n * 2 * biL ) );  
bign2/v1_min.c line  475 - MBEDTLS_MPI_CHK( mbedtls_mpi_mod_mpi( &RR, &RR, N ) );  
bign2/v1_min.c line  486 - if( mbedtls_mpi_cmp_mpi( A, N ) >= 0 )  
bign2/v1_min.c line  488 - MBEDTLS_MPI_CHK( mbedtls_mpi_mod_mpi( &W[1], A, N ) );  
bign2/v1_min.c line  492 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[1], N->n + 1 ) );  
bign2/v1_min.c line  495 - MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[1], A ) );  
bign2/v1_min.c line  504 - MBEDTLS_MPI_CHK( mbedtls_mpi_copy( X, &RR ) );  
bign2/v1_min.c line  514 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[j], N->n + 1 ) );  
bign2/v1_min.c line  515 - MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[j], &W[1]    ) );  
bign2/v1_min.c line  525 - MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[i], N->n + 1 ) );  
bign2/v1_min.c line  526 - MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[i], &W[i - 1] ) );  
bign2/v1_min.c line  557 - if( ei == 0 && state == 0 )   
bign2/v1_min.c line  560 - if( ei == 0 && state == 1 )   
bign2/v1_min.c line  588 - MBEDTLS_MPI_CHK( mpi_select( &WW, W, (size_t) 1 << wsize, wbits ) );  
bign2/v1_min.c line  606 - if( ( wbits & ( one << wsize ) ) != 0 )  
bign2/v1_min.c line  615 - if( neg && E->n != 0 && ( E->p[0] & 1 ) != 0 )   
**(cache)**bign2/v1_min.c line  624 - mbedtls_mpi_free( &W[i] );  
bign2/v1_min.c line  629 - if( prec_RR == NULL || prec_RR->p == NULL )  

### V2: 5

bign2/v2_min.c line  557 - if( ei == 0 && state == 0 )   
bign2/v2_min.c line  560 - if( ei == 0 && state == 1 )  
bign2/v2_min.c line  606 - if( ( wbits & ( one << wsize ) ) != 0 )  
bign2/v2_min.c line  615 - if( neg && E->n != 0 && ( E->p[0] & 1 ) != 0 )  
bign2/v2_min.c line  629 - if( prec_RR == NULL || prec_RR->p == NULL )  

### V4: 1

bign2/v4_min.c line  629 - if( prec_RR == NULL || prec_RR->p == NULL )  

# OpenSSL

## mont_recp

### V1: 18

v1_recp.c line  171 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0){  
v1_recp.c line  172 - || BN_get_flags(a, BN_FLG_CONSTTIME) != 0  
v1_recp.c line  173 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
v1_recp.c line  182 - if (BN_abs_is_word(m, 1)) {  
v1_recp.c line  196 - if (val[0] == NULL)  
v1_recp.c line  201 - if (!BN_copy(aa, m))  
v1_recp.c line  204 - if (BN_RECP_CTX_set(&recp, aa, ctx) <= 0)  
v1_recp.c line  207 - if (BN_RECP_CTX_set(&recp, m, ctx) <= 0)  
v1_recp.c line  211 - if (!BN_nnmod(val[0], a, m, ctx))  
v1_recp.c line  213 - if (BN_is_zero(val[0])) {  
v1_recp.c line  221 - if (!BN_mod_mul_reciprocal(aa, val[0], val[0], &recp, ctx))  
v1_recp.c line  224 - for (i = 1; i < j; i++) {  
v1_recp.c line  225 - if (((val[i] = BN_CTX_get(ctx)) == NULL) ||  
v1_recp.c line  238 - if (!BN_one(r))  
v1_recp.c line  241 - for (;;) {  
v1_recp.c line  242 - if (BN_is_bit_set(p, wstart) == 0) {  
v1_recp.c line  262 - if (BN_is_bit_set(p, wstart - i)) {  
v1_recp.c line  279 - if (!BN_mod_mul_reciprocal(r, r, val[wvalue >> 1], &recp, ctx))  

### V2: 2

v2_recp.c line  242 - if (BN_is_bit_set(p, wstart) == 0) {  
v2_recp.c line  262 - if (BN_is_bit_set(p, wstart - i)) {  

### V4: 0

## mont

### V1: 24

v1_mont.c line  308 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0  
v1_mont.c line  309 - || BN_get_flags(a, BN_FLG_CONSTTIME) != 0  
v1_mont.c line  310 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
v1_mont.c line  318 - if (!BN_is_odd(m)) {  
v1_mont.c line  325 - if (BN_abs_is_word(m, 1)) {  
v1_mont.c line  338 - if (val[0] == NULL)  
v1_mont.c line  354 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v1_mont.c line  355 - if (!BN_nnmod(val[0], a, m, ctx))  
v1_mont.c line  360 - if (!bn_to_mont_fixed_top(val[0], aa, mont, ctx))  
v1_mont.c line  365 - if (!bn_mul_mont_fixed_top(d, val[0], val[0], mont, ctx))  
v1_mont.c line  368 - for (i = 1; i < j; i++) {  
v1_mont.c line  369 - if (((val[i] = BN_CTX_get(ctx)) == NULL) ||  
v1_mont.c line  370 - !bn_mul_mont_fixed_top(val[i], val[i - 1], d, mont, ctx))  
v1_mont.c line  384 - if (m->d[j - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  
v1_mont.c line  385 - if (bn_wexpand(r, j) == NULL)  
**(cache)**v1_mont.c line  388 - r->d[0] = (0 - m->d[0]) & BN_MASK2;  
**(cache)**v1_mont.c line  390 - r->d[i] = (~m->d[i]) & BN_MASK2;  
v1_mont.c line  395 - if (!bn_to_mont_fixed_top(r, BN_value_one(), mont, ctx))  
v1_mont.c line  398 - if (BN_is_bit_set(p, wstart) == 0) {  
v1_mont.c line  400 - if (!bn_mul_mont_fixed_top(r, r, r, mont, ctx))  
v1_mont.c line  419 - if (BN_is_bit_set(p, wstart - i)) {  
v1_mont.c line  431 - if (!bn_mul_mont_fixed_top(r, r, r, mont, ctx))  
v1_mont.c line  436 - if (!bn_mul_mont_fixed_top(r, r, val[wvalue >> 1], mont, ctx))  
v1_mont.c line  462 - if (!BN_from_montgomery(rr, r, mont, ctx))  

### V2: 4

v2_mont.c line  354 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v2_mont.c line  384 - if (m->d[j - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {    
v2_mont.c line  398 - if (BN_is_bit_set(p, wstart) == 0) {  
v2_mont.c line  419 - if (BN_is_bit_set(p, wstart - i)) {  

### V4: 2

v4_mont.c line  354 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v4_mont.c line  384 - if (m->d[j - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  

## mont_word

### V1: 18

v1_word.c line 1164 - if (BN_get_flags(p, BN_FLG_CONSTTIME) != 0  
v1_word.c line 1165 - || BN_get_flags(m, BN_FLG_CONSTTIME) != 0) {  
v1_word.c line 1174 - if (!BN_is_odd(m)) {  
v1_word.c line 1184 - if (BN_abs_is_word(m, 1)) {  
v1_word.c line 1192 - if (a == 0) {  
v1_word.c line 1201 - if (t == NULL)  
v1_word.c line 1222 - if ((next_w / w) != w) { /\* overflow \*/  
v1_word.c line 1224 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
v1_word.c line 1235 - if (!BN_mod_mul_montgomery(r, r, r, mont, ctx))  
v1_word.c line 1240 - if (BN_is_bit_set(p, b)) {  
v1_word.c line 1242 - if ((next_w / a) != w) { /\* overflow \*/  
v1_word.c line 1244 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
v1_word.c line 1248 - if (!BN_MOD_MUL_WORD(r, w, m))  
v1_word.c line 1258 - if (w != 1) {  
v1_word.c line 1260 - if (!BN_TO_MONTGOMERY_WORD(r, w, mont))  
v1_word.c line 1264 - if (!BN_MOD_MUL_WORD(r, w, m))  
v1_word.c line 1270 - if (!BN_one(rr))  
v1_word.c line 1273 - if (!BN_from_montgomery(rr, r, mont, ctx))  

### V2: 1

v2_word.c line 1240 - if (BN_is_bit_set(p, b)) {  

### V4: 0

## mont_consttime

### V1: 19

v1_consttime.c line  614 - if (!BN_is_odd(m)) {  
v1_consttime.c line  628 - if (BN_abs_is_word(m, 1)) {  
v1_consttime.c line  652 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v1_consttime.c line  654 - if (reduced == NULL  
v1_consttime.c line  655 - || !BN_nnmod(reduced, a, m, ctx)) {  
v1_consttime.c line  723 - if ((powerbufFree =  
v1_consttime.c line  746 - if (m->d[top - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  
v1_consttime.c line  749 - for (i = 1; i < top; i++)  
**(cache)**v1_consttime.c line  750 - tmp.d[i] = (~m->d[i]) & BN_MASK2;  
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

### V2: 2

v2_consttime.c line  652 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v2_consttime.c line  746 - if (m->d[top - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  

### V4: 3

v2_consttime.c line  652 - if (a->neg || BN_ucmp(a, m) >= 0) {  
v2_consttime.c line  654 - if (reduced == NULL  
v2_consttime.c line  746 - if (m->d[top - 1] & (((BN_ULONG)1) << (BN_BITS2 - 1))) {  