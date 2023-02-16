/*
 *  Multi-precision integer library
 *
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 *  The following sources were referenced in the design of this Multi-precision
 *  Integer library:
 *
 *  [1] Handbook of Applied Cryptography - 1997
 *      Menezes, van Oorschot and Vanstone
 *
 *  [2] Multi-Precision Math
 *      Tom St Denis
 *      https://github.com/libtom/libtommath/blob/develop/tommath.pdf
 *
 *  [3] GNU Multi-Precision Arithmetic Library
 *      https://gmplib.org/manual/index.html
 *
 */

#include "v4_lib/common.h"

#if defined(MBEDTLS_BIGNUM_C)

#include "v4_lib/mbedtls/bignum.h"
#include "v4_lib/bignum_internal.h"
#include "v4_lib/bn_mul.h"
#include "v4_lib/mbedtls/platform_util.h"
#include "v4_lib/mbedtls/error.h"
#include "v4_lib/constant_time_internal.h"
#include "v4_lib/revised.h"
#include <limits.h>
#include <string.h>
int dummy = 0;
#if defined(MBEDTLS_PLATFORM_C)
#include "v4_lib/mbedtls/platform.h"
#else
#include <stdio.h>
#include <stdlib.h>
#define mbedtls_printf     printf
#define mbedtls_calloc    calloc
#define mbedtls_free       free
#endif

#define ciL    (sizeof(mbedtls_mpi_uint))         /* chars in limb  */
#define biL    (ciL << 3)               /* bits  in limb  */
#define biH    (ciL << 2)               /* half limb size */

#define MPI_SIZE_T_MAX  ( (size_t) -1 ) /* SIZE_T_MAX is not standard */

/*
 * Convert between bits/chars and number of limbs
 * Divide first in order to avoid potential overflows
 */
#define BITS_TO_LIMBS(i)  ( (i) / biL + ( (i) % biL != 0 ) )
#define CHARS_TO_LIMBS(i) ( (i) / ciL + ( (i) % ciL != 0 ) )

/* Implementation that should never be optimized out by the compiler */
static void mbedtls_mpi_zeroize( mbedtls_mpi_uint *v, size_t n )
{
    mbedtls_platform_zeroize( v, ciL * n );
}

/*
 * Count leading zero bits in a given integer
 */
static size_t mbedtls_clz( const mbedtls_mpi_uint x )
{
    size_t j;
    mbedtls_mpi_uint mask = (mbedtls_mpi_uint) 1 << (biL - 1);

    for( j = 0; j < biL; j++ )
    {
        if( x & mask ) break;

        mask >>= 1;
    }

    return j;
}

/*
 * Convert an ASCII character to digit value
 */
static int mpi_get_digit( mbedtls_mpi_uint *d, int radix, char c )
{
    *d = 255;

    if( c >= 0x30 && c <= 0x39 ) *d = c - 0x30;
    if( c >= 0x41 && c <= 0x46 ) *d = c - 0x37;
    if( c >= 0x61 && c <= 0x66 ) *d = c - 0x57;

    if( *d >= (mbedtls_mpi_uint) radix )
        return( MBEDTLS_ERR_MPI_INVALID_CHARACTER );

    return( 0 );
}


/*
 * Helper to write the digits high-order first.
 */
static int mpi_write_hlp( mbedtls_mpi *X, int radix,
                          char **p, const size_t buflen )
{
    int ret = MBEDTLS_ERR_ERROR_CORRUPTION_DETECTED;
    mbedtls_mpi_uint r;
    size_t length = 0;
    char *p_end = *p + buflen;

    do
    {
        if( length >= buflen )
        {
            return( MBEDTLS_ERR_MPI_BUFFER_TOO_SMALL );
        }

        MBEDTLS_MPI_CHK( mbedtls_mpi_mod_int( &r, X, radix ) );
        MBEDTLS_MPI_CHK( mbedtls_mpi_div_int( X, NULL, X, radix ) );
        /*
         * Write the residue in the current position, as an ASCII character.
         */
        if( r < 0xA )
            *(--p_end) = (char)( '0' + r );
        else
            *(--p_end) = (char)( 'A' + ( r - 0xA ) );

        length++;
    } while( mbedtls_mpi_cmp_int( X, 0 ) != 0 );

    memmove( *p, p_end, length );
    *p += length;

cleanup:

    return( ret );
}



/**
 * Helper for mbedtls_mpi subtraction.
 *
 * Calculate l - r where l and r have the same size.
 * This function operates modulo (2^ciL)^n and returns the carry
 * (1 if there was a wraparound, i.e. if `l < r`, and 0 otherwise).
 *
 * d may be aliased to l or r.
 *
 * \param n             Number of limbs of \p d, \p l and \p r.
 * \param[out] d        The result of the subtraction.
 * \param[in] l         The left operand.
 * \param[in] r         The right operand.
 *
 * \return              1 if `l < r`.
 *                      0 if `l >= r`.
 */
static mbedtls_mpi_uint mpi_sub_hlp( size_t n,
                                     mbedtls_mpi_uint *d,
                                     const mbedtls_mpi_uint *l,
                                     const mbedtls_mpi_uint *r )
{
    size_t i;
    mbedtls_mpi_uint c = 0, t, z;

    for( i = 0; i < n; i++ )
    {
        z = ( l[i] <  c );    t = l[i] - c;
        c = ( t < r[i] ) + z; d[i] = t - r[i];
    }

    return( c );
}


/*
 * Unsigned integer divide - double mbedtls_mpi_uint dividend, u1/u0, and
 * mbedtls_mpi_uint divisor, d
 */
static mbedtls_mpi_uint mbedtls_int_div_int( mbedtls_mpi_uint u1,
            mbedtls_mpi_uint u0, mbedtls_mpi_uint d, mbedtls_mpi_uint *r )
{
#if defined(MBEDTLS_HAVE_UDBL)
    mbedtls_t_udbl dividend, quotient;
#else
    const mbedtls_mpi_uint radix = (mbedtls_mpi_uint) 1 << biH;
    const mbedtls_mpi_uint uint_halfword_mask = ( (mbedtls_mpi_uint) 1 << biH ) - 1;
    mbedtls_mpi_uint d0, d1, q0, q1, rAX, r0, quotient;
    mbedtls_mpi_uint u0_msw, u0_lsw;
    size_t s;
#endif

    /*
     * Check for overflow
     */
    if( 0 == d || u1 >= d )
    {
        if (r != NULL) *r = ~0;

        return ( ~0 );
    }

#if defined(MBEDTLS_HAVE_UDBL)
    dividend  = (mbedtls_t_udbl) u1 << biL;
    dividend |= (mbedtls_t_udbl) u0;
    quotient = dividend / d;
    if( quotient > ( (mbedtls_t_udbl) 1 << biL ) - 1 )
        quotient = ( (mbedtls_t_udbl) 1 << biL ) - 1;

    if( r != NULL )
        *r = (mbedtls_mpi_uint)( dividend - (quotient * d ) );

    return (mbedtls_mpi_uint) quotient;
#else

    /*
     * Algorithm D, Section 4.3.1 - The Art of Computer Programming
     *   Vol. 2 - Seminumerical Algorithms, Knuth
     */

    /*
     * Normalize the divisor, d, and dividend, u0, u1
     */
    s = mbedtls_clz( d );
    d = d << s;

    u1 = u1 << s;
    u1 |= ( u0 >> ( biL - s ) ) & ( -(mbedtls_mpi_sint)s >> ( biL - 1 ) );
    u0 =  u0 << s;

    d1 = d >> biH;
    d0 = d & uint_halfword_mask;

    u0_msw = u0 >> biH;
    u0_lsw = u0 & uint_halfword_mask;

    /*
     * Find the first quotient and remainder
     */
    q1 = u1 / d1;
    r0 = u1 - d1 * q1;

    while( q1 >= radix || ( q1 * d0 > radix * r0 + u0_msw ) )
    {
        q1 -= 1;
        r0 += d1;

        if ( r0 >= radix ) break;
    }

    rAX = ( u1 * radix ) + ( u0_msw - q1 * d );
    q0 = rAX / d1;
    r0 = rAX - q0 * d1;

    while( q0 >= radix || ( q0 * d0 > radix * r0 + u0_lsw ) )
    {
        q0 -= 1;
        r0 += d1;

        if ( r0 >= radix ) break;
    }

    if (r != NULL)
        *r = ( rAX * radix + u0_lsw - q0 * d ) >> s;

    quotient = q1 * radix + q0;

    return quotient;
#endif
}


/*
 * Fast Montgomery initialization (thanks to Tom St Denis)
 */
static void mpi_montg_init( mbedtls_mpi_uint *mm, const mbedtls_mpi *N )
{
    mbedtls_mpi_uint x, m0 = N->p[0];
    unsigned int i;

    x  = m0;
    x += ( ( m0 + 2 ) & 4 ) << 1;

    for( i = biL; i >= 8; i /= 2 )
        x *= ( 2 - ( m0 * x ) );

    *mm = ~x + 1;
}

/** Montgomery multiplication: A = A * B * R^-1 mod N  (HAC 14.36)
 *
 * \param[in,out]   A   One of the numbers to multiply.
 *                      It must have at least as many limbs as N
 *                      (A->n >= N->n), and any limbs beyond n are ignored.
 *                      On successful completion, A contains the result of
 *                      the multiplication A * B * R^-1 mod N where
 *                      R = (2^ciL)^n.
 * \param[in]       B   One of the numbers to multiply.
 *                      It must be nonzero and must not have more limbs than N
 *                      (B->n <= N->n).
 * \param[in]       N   The modulo. N must be odd.
 * \param           mm  The value calculated by `mpi_montg_init(&mm, N)`.
 *                      This is -N^-1 mod 2^ciL.
 * \param[in,out]   T   A bignum for temporary storage.
 *                      It must be at least twice the limb size of N plus 1
 *                      (T->n >= 2 * N->n + 1).
 *                      Its initial content is unused and
 *                      its final content is indeterminate.
 *                      Note that unlike the usual convention in the library
 *                      for `const mbedtls_mpi*`, the content of T can change.
 */
static void mpi_montmul_0( mbedtls_mpi *A, const mbedtls_mpi *B, const mbedtls_mpi *N, mbedtls_mpi_uint mm,
                         const mbedtls_mpi *T, int pub_BRANCH0)
{
    size_t i, n, m;
    mbedtls_mpi_uint *d;

    //memset( T->p, 0, T->n * ciL );

    d = T->p;
    n = N->n;
    m = T->n;///*+*/m = ( B->n < n ) ? B->n : n;

    i = 0; //if(n)/*loop*/ //for( size_t i = 0; i < n; i++ )
    {
        mbedtls_mpi_uint u0, u1;

        /*
         * T = (T + u0*B + u1*N) / 2^biL
         */
/*cache channel*/        //u0 = A->p[i];
/*cache channel*/        //u1 = ( d[0] + u0 * B->p[0] ) * mm;

        (void) mbedtls_mpi_core_mla( d, n + 2,
                                     B->p, m,
                                     u0 );
        (void) mbedtls_mpi_core_mla( d, n + 2,
                                     N->p, n,
                                     u1 );
        d++;
    }

    /* At this point, d is either the desired result or the desired result
     * plus N. We now potentially subtract N, avoiding leaking whether the
     * subtraction is performed through side channels. */

    /* Copy the n least significant limbs of d to A, so that
     * A = d if d < N (recall that N has n limbs). */
    // memcpy( A->p, d, (n+1) * ciL );
    /* If d >= N then we want to set A to d - N. To prevent timing attacks,
     * do the calculation without using conditional tests. */
    /* Set d to d0 + (2^biL)^n - N where d0 is the current value of d. */
/*cache channel*/    // d[n] += 1;
/*cache channel*/    // d[n] -= mpi_sub_hlp( n, d, d, N->p );
    // /* If d0 < N then d < (2^biL)^n
    //  * so d[n] == 0 and we want to keep A as it is.
    //  * If d0 >= N then d >= (2^biL)^n, and d <= (2^biL)^n + N < 2 * (2^biL)^n
    //  * so d[n] == 1 and we want to set A to the result of the subtraction
    //  * which is d - (2^biL)^n, i.e. the n least significant limbs of d.
    //  * This exactly corresponds to a conditional assignment. */
    // mbedtls_ct_mpi_uint_cond_assign( n, A->p, d, (unsigned char) d[n] );
}

/*
 * Montgomery reduction: A = A * R^-1 mod N
 *
 * See mpi_montmul() regarding constraints and guarantees on the parameters.
 */
static void mpi_montred_0( mbedtls_mpi *A, const mbedtls_mpi *N,
                         mbedtls_mpi_uint mm, const mbedtls_mpi *T, int pub_BRANCH0 )
{
    mbedtls_mpi_uint z = 1;
    mbedtls_mpi U;

    U.n = U.s = (int) z;
    U.p = &z;

    mpi_montmul_0( A, &U, N, mm, T, pub_BRANCH0 );
}

/*
 * Sliding-window exponentiation: X = A^E mod N  (HAC 14.85)
 */
int mbedtls_mpi_exp_mod( mbedtls_mpi *X, const mbedtls_mpi *A,
                         const mbedtls_mpi *E, const mbedtls_mpi *N,
                         mbedtls_mpi *prec_RR, int pub_branch0,int pub_branch1,int pub_branch2,int pub_branch3,int pub_branch4,int pub_branch5,int pub_branch6,int pub_branch7,int pub_branch8,int pub_branch9,int pub_branch10,int pub_branch11,int pub_branch12,int pub_branch13,int pub_branch14,int pub_branch15,int pub_branch16,int pub_branch17,int pub_branch18,int pub_branch19,int pub_branch20,int pub_branch21,int pub_branch22,int pub_branch23,int pub_branch24,int pub_branch25,int pub_branch26,int pub_branch27,int pub_branch28,int pub_branch29,int pub_branch30,int pub_branch31,int pub_branch32,int pub_branch33,int pub_branch34,int pub_branch35,int pub_branch36,int pub_branch37,int pub_branch38,int pub_branch39,int pub_branch40,
                size_t pub_n0,size_t pub_n1,size_t pub_n2,size_t pub_n3,size_t pub_n4,size_t pub_n5,size_t pub_n6,
                mbedtls_mpi_uint *pub_ptr0,mbedtls_mpi_uint *pub_ptr1,mbedtls_mpi_uint *pub_ptr2,mbedtls_mpi_uint *pub_ptr3,mbedtls_mpi_uint *pub_ptr4,mbedtls_mpi_uint *pub_ptr5,mbedtls_mpi_uint *pub_ptr6,mbedtls_mpi_uint *pub_ptr7,mbedtls_mpi_uint *pub_ptr8,mbedtls_mpi_uint *pub_ptr9,mbedtls_mpi_uint *pub_ptr10,mbedtls_mpi_uint *pub_ptr11,mbedtls_mpi_uint *pub_ptr12,mbedtls_mpi_uint *pub_ptr13,mbedtls_mpi_uint *pub_ptr14,mbedtls_mpi_uint *pub_ptr15, size_t pub_VAL0,size_t pub_VAL1,size_t pub_VAL2,mbedtls_mpi_uint pub_VAL3 )
{
    int ret = MBEDTLS_ERR_ERROR_CORRUPTION_DETECTED;
    size_t wbits, wsize, one = 1;
    size_t i, j, nblimbs;
    size_t bufsize, nbits;
    mbedtls_mpi_uint ei, mm, state;
    mbedtls_mpi RR, T, W[ 1 << MBEDTLS_MPI_WINDOW_SIZE ], WW, Apos;
    int neg;

    MPI_VALIDATE_RET( X != NULL );
    MPI_VALIDATE_RET( A != NULL );
    MPI_VALIDATE_RET( E != NULL );
    MPI_VALIDATE_RET( N != NULL );

    if( mbedtls_mpi_cmp_int( N, 0 ) <= 0 || ( N->p[0] & 1 ) == 0 )
        return( MBEDTLS_ERR_MPI_BAD_INPUT_DATA );

    if( mbedtls_mpi_cmp_int( E, 0 ) < 0 )
        return( MBEDTLS_ERR_MPI_BAD_INPUT_DATA );

    if( mbedtls_mpi_bitlen( E ) > MBEDTLS_MPI_MAX_BITS ||
        mbedtls_mpi_bitlen( N ) > MBEDTLS_MPI_MAX_BITS )
        return ( MBEDTLS_ERR_MPI_BAD_INPUT_DATA );

    /*
     * Init temps and window size
     */
    mpi_montg_init( &mm, N );
    mbedtls_mpi_init( &RR ); mbedtls_mpi_init( &T );
    mbedtls_mpi_init( &Apos );
    mbedtls_mpi_init( &WW );
    memset( W, 0, sizeof( W ) );

    i = mbedtls_mpi_bitlen( E );

    wsize = ( i > 671 ) ? 6 : ( i > 239 ) ? 5 :
            ( i >  79 ) ? 4 : ( i >  23 ) ? 3 : 1;

#if( MBEDTLS_MPI_WINDOW_SIZE < 6 )
    if( wsize > MBEDTLS_MPI_WINDOW_SIZE )
        wsize = MBEDTLS_MPI_WINDOW_SIZE;
#endif

    j = N->n + 1;
    /* All W[i] and X must have at least N->n limbs for the mpi_montmul()
     * and mpi_montred() calls later. Here we ensure that W[1] and X are
     * large enough, and later we'll grow other W[i] to the same length.
     * They must not be shrunk midway through this function!
     */
    MBEDTLS_MPI_CHK( mbedtls_mpi_grow( X, j ) );
    MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[1],  j ) );
    MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &T, j * 2 ) );

    /*
     * Compensate for negative A (and correct at the end)
     */
    neg = ( A->s == -1 );
    if( neg )
    {
        MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &Apos, A ) );
        Apos.s = 1;
        A = &Apos;
    }

    /*
     * If 1st call, pre-compute R^2 mod N
     */
    if( prec_RR == NULL || prec_RR->p == NULL )
    {
        MBEDTLS_MPI_CHK( mbedtls_mpi_lset( &RR, 1 ) );
        MBEDTLS_MPI_CHK( mbedtls_mpi_shift_l( &RR, N->n * 2 * biL ) );
        MBEDTLS_MPI_CHK( mbedtls_mpi_mod_mpi( &RR, &RR, N ) );

        if( prec_RR != NULL )
            memcpy( prec_RR, &RR, sizeof( mbedtls_mpi ) );
    }
    else
        memcpy( &RR, prec_RR, sizeof( mbedtls_mpi ) );

    /*
     * W[1] = A * R^2 * R^-1 mod N = A * R mod N
     */
    if( mbedtls_mpi_cmp_mpi( A, N ) >= 0 )
    {
        MBEDTLS_MPI_CHK( mbedtls_mpi_mod_mpi( &W[1], A, N ) );
        /* This should be a no-op because W[1] is already that large before
         * mbedtls_mpi_mod_mpi(), but it's necessary to avoid an overflow
         * in mpi_montmul() below, so let's make sure. */
        MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[1], N->n + 1 ) );
    }
    else
        MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[1], A ) );

    /* Note that this is safe because W[1] always has at least N->n limbs
     * (it grew above and was preserved by mbedtls_mpi_copy()). */
    mpi_montmul_0( &W[1], &RR, N, mm, &T, pub_branch4 );

    /*
     * X = R^2 * R^-1 mod N = R mod N
     */
    MBEDTLS_MPI_CHK( mbedtls_mpi_copy( X, &RR ) );
    mpi_montred_0( X, N, mm, &T, pub_branch5 );

    if( wsize > 1 )
    {
        /*
         * W[1 << (wsize - 1)] = W[1] ^ (wsize - 1)
         */
        j =  one << ( wsize - 1 );

        MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[j], N->n + 1 ) );
        MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[j], &W[1]    ) );

        for( i = 0; i < wsize - 1; i++ )
            mpi_montmul_0( &W[0], &W[0], N, mm, &T, pub_branch7 );

        /*
         * W[i] = W[i - 1] * W[1]
         */
        for( i = j + 1; i < ( one << wsize ); i++ )
        {
            MBEDTLS_MPI_CHK( mbedtls_mpi_grow( &W[i], N->n + 1 ) );
            MBEDTLS_MPI_CHK( mbedtls_mpi_copy( &W[i], &W[i - 1] ) );

            mpi_montmul_0( &W[0], &W[1], N, mm, &T, pub_branch8 );
        }
    }

    nblimbs = E->n;
    bufsize = 0;
    nbits   = 0;
    wbits   = 0;
    state   = 0;

    while( 1 )
    {
        if( bufsize == 0 )
        {
            if( nblimbs == 0 )
                break;

            nblimbs--;

            bufsize = sizeof( mbedtls_mpi_uint ) << 3;
        }

        bufsize--;

        ei = (E->p[nblimbs] >> bufsize) & 1;

        /*
         * skip leading 0s
         */
        if( ei == 0 && state == 0 )
            continue;

        if( ei == 0 && state == 1 )
        {
            /*
             * out of window, square X
             */
            mpi_montmul_0( X, X, N, mm, &T, pub_branch10 );
            continue;
        }

        /*
         * add ei to current window
         */
        state = 2;

        nbits++;
        wbits |= ( ei << ( wsize - nbits ) );

        if( nbits == wsize )
        {
            /*
             * X = X^wsize R^-1 mod N
             */
            for( i = 0; i < wsize; i++ )
                mpi_montmul_0( X, X, N, mm, &T, pub_branch13 );

            /*
             * X = X * W[wbits] R^-1 mod N
             */
            MBEDTLS_MPI_CHK( mpi_select( &WW, W, (size_t) 1 << wsize, wbits ) );
            mpi_montmul_0( X, &WW, N, mm, &T, pub_branch14 );

            state--;
            nbits = 0;
            wbits = 0;
        }
    }

    /*
     * process the remaining bits
     */
    for( i = 0; i < nbits; i++ )
    {
        mpi_montmul_0( X, X, N, mm, &T, pub_branch15 );

        wbits <<= 1;

        if( ( wbits & ( one << wsize ) ) != 0 )
            mpi_montmul_0( X, &W[1], N, mm, &T, pub_branch16 );
    }

    /*
     * X = A^E * R * R^-1 mod N = A^E mod N
     */
    mpi_montred_0( X, N, mm, &T, pub_branch18 );

    if( neg && E->n != 0 && ( E->p[0] & 1 ) != 0 )
    {
        X->s = -1;
        MBEDTLS_MPI_CHK( mbedtls_mpi_add_mpi( X, N, X ) );
    }

cleanup:

    for( i = ( one << ( wsize - 1 ) ); i < ( one << wsize ); i++ )
/*cache*/        mbedtls_mpi_free( &W[0] );//mbedtls_mpi_free( &W[i] );

    mbedtls_mpi_free( &W[1] ); mbedtls_mpi_free( &T ); mbedtls_mpi_free( &Apos );
    mbedtls_mpi_free( &WW );

    if( prec_RR == NULL || prec_RR->p == NULL )
        mbedtls_mpi_free( &RR );

    return( ret );
}

#endif /* MBEDTLS_BIGNUM_C */

// /**********************/
// #include <smack.h>
// #include "../../../ct-verif.h"
// void
// fragment_wrapper(int s, size_t n, mbedtls_mpi_uint *p,
//                 int s0, size_t n0, mbedtls_mpi_uint *p0,
//                 int s1, size_t n1, mbedtls_mpi_uint *p1,
//                 int s2, size_t n2, mbedtls_mpi_uint *p2,
//                 int s3, size_t n3, mbedtls_mpi_uint *p3,
//                 int pub_branch0,int pub_branch1,int pub_branch2,int pub_branch3,int pub_branch4,int pub_branch5,int pub_branch6,int pub_branch7,int pub_branch8,int pub_branch9,int pub_branch10,int pub_branch11,int pub_branch12,int pub_branch13,int pub_branch14,int pub_branch15,int pub_branch16,int pub_branch17,int pub_branch18,int pub_branch19,int pub_branch20,int pub_branch21,int pub_branch22,int pub_branch23,int pub_branch24,int pub_branch25,int pub_branch26,int pub_branch27,int pub_branch28,int pub_branch29,int pub_branch30,int pub_branch31,int pub_branch32,int pub_branch33,int pub_branch34,int pub_branch35,int pub_branch36,int pub_branch37,int pub_branch38,int pub_branch39,int pub_branch40,
//                 size_t pub_n0,size_t pub_n1,size_t pub_n2,size_t pub_n3,size_t pub_n4,size_t pub_n5,size_t pub_n6,
//                 mbedtls_mpi_uint *pub_ptr0,mbedtls_mpi_uint *pub_ptr1,mbedtls_mpi_uint *pub_ptr2,mbedtls_mpi_uint *pub_ptr3,mbedtls_mpi_uint *pub_ptr4,mbedtls_mpi_uint *pub_ptr5,mbedtls_mpi_uint *pub_ptr6,mbedtls_mpi_uint *pub_ptr7,mbedtls_mpi_uint *pub_ptr8,mbedtls_mpi_uint *pub_ptr9,mbedtls_mpi_uint *pub_ptr10,mbedtls_mpi_uint *pub_ptr11,mbedtls_mpi_uint *pub_ptr12,mbedtls_mpi_uint *pub_ptr13,mbedtls_mpi_uint *pub_ptr14,mbedtls_mpi_uint *pub_ptr15, size_t pub_VAL0,size_t pub_VAL1,size_t pub_VAL2,mbedtls_mpi_uint pub_VAL3) {


//    public_in(__SMACK_value(pub_branch0));
//    public_in(__SMACK_value(pub_branch1));
//    public_in(__SMACK_value(pub_branch2));
//    public_in(__SMACK_value(pub_branch3));
//    public_in(__SMACK_value(pub_branch4));
//    public_in(__SMACK_value(pub_branch5));
//    public_in(__SMACK_value(pub_branch6));
//    public_in(__SMACK_value(pub_branch7));
//    public_in(__SMACK_value(pub_branch8));
//    public_in(__SMACK_value(pub_branch9));
//    public_in(__SMACK_value(pub_branch10));
//    public_in(__SMACK_value(pub_branch11));
//    public_in(__SMACK_value(pub_branch12));
//    public_in(__SMACK_value(pub_branch13));
//    public_in(__SMACK_value(pub_branch14));
//    public_in(__SMACK_value(pub_branch15));
//    public_in(__SMACK_value(pub_branch16));
//    public_in(__SMACK_value(pub_branch17));
//    public_in(__SMACK_value(pub_branch18));
//    public_in(__SMACK_value(pub_branch19));
//    public_in(__SMACK_value(pub_branch20));
//    public_in(__SMACK_value(pub_branch21));
//    public_in(__SMACK_value(pub_branch22));
//    public_in(__SMACK_value(pub_branch23));
//    public_in(__SMACK_value(pub_branch24));
//    public_in(__SMACK_value(pub_branch25));
//    public_in(__SMACK_value(pub_branch26));
//    public_in(__SMACK_value(pub_branch27));
//    public_in(__SMACK_value(pub_branch28));
//    public_in(__SMACK_value(pub_branch29));
//    public_in(__SMACK_value(pub_branch30));
//    public_in(__SMACK_value(pub_branch31));
//    public_in(__SMACK_value(pub_branch32));
//    public_in(__SMACK_value(pub_branch33));
//    public_in(__SMACK_value(pub_branch34));
//    public_in(__SMACK_value(pub_branch35));
//    public_in(__SMACK_value(pub_branch36));
//    public_in(__SMACK_value(pub_branch37));
//    public_in(__SMACK_value(pub_branch38));
//    public_in(__SMACK_value(pub_branch39));
//    public_in(__SMACK_value(pub_branch40));

//    public_in(__SMACK_value(pub_n0));
//    public_in(__SMACK_value(pub_n1));
//    public_in(__SMACK_value(pub_n2));
//    public_in(__SMACK_value(pub_n3));
//    public_in(__SMACK_value(pub_n4));
//    public_in(__SMACK_value(pub_n5));
//    public_in(__SMACK_value(pub_n6));

//    public_in(__SMACK_value(pub_ptr0));
//    public_in(__SMACK_value(pub_ptr1));
//    public_in(__SMACK_value(pub_ptr2));
//    public_in(__SMACK_value(pub_ptr3));
//    public_in(__SMACK_value(pub_ptr4));
//    public_in(__SMACK_value(pub_ptr5));
//    public_in(__SMACK_value(pub_ptr6));
//    public_in(__SMACK_value(pub_ptr7));
//    public_in(__SMACK_value(pub_ptr8));
//    public_in(__SMACK_value(pub_ptr9));
//    public_in(__SMACK_value(pub_ptr10));
//    public_in(__SMACK_value(pub_ptr11));
//    public_in(__SMACK_value(pub_ptr12));
//    public_in(__SMACK_value(pub_ptr13));
//    public_in(__SMACK_value(pub_ptr14));
//    public_in(__SMACK_value(pub_ptr15));

//    public_in(__SMACK_values(pub_ptr0,10));
//    public_in(__SMACK_values(pub_ptr1,10));
//    public_in(__SMACK_values(pub_ptr2,10));
//    public_in(__SMACK_values(pub_ptr3,10));
//    public_in(__SMACK_values(pub_ptr4,10));
//    public_in(__SMACK_values(pub_ptr5,10));
//    public_in(__SMACK_values(pub_ptr6,10));
//    public_in(__SMACK_values(pub_ptr7,10));
//    public_in(__SMACK_values(pub_ptr8,10));
//    public_in(__SMACK_values(pub_ptr9,10));
//    public_in(__SMACK_values(pub_ptr10,10));
//    public_in(__SMACK_values(pub_ptr11,10));
//    public_in(__SMACK_values(pub_ptr12,10));
//    public_in(__SMACK_values(pub_ptr13,10));
//    public_in(__SMACK_values(pub_ptr14,10));
//    public_in(__SMACK_values(pub_ptr15,10));

//    public_in(__SMACK_value(pub_VAL0));
//    public_in(__SMACK_value(pub_VAL1));
//    public_in(__SMACK_value(pub_VAL2));
//    public_in(__SMACK_value(pub_VAL3));

//    /****************/

//    public_in(__SMACK_value(s));
//    public_in(__SMACK_value(n));
//    public_in(__SMACK_value(p));
//    public_in(__SMACK_value(s2));
//    public_in(__SMACK_value(n2));
//    public_in(__SMACK_value(p2));

//    public_in(__SMACK_value(s0));
//    public_in(__SMACK_value(n0));
//    public_in(__SMACK_value(p0));
//    public_in(__SMACK_value(s1));
//    public_in(__SMACK_value(n1));
//    public_in(__SMACK_value(p1));
//    public_in(__SMACK_value(s3));
//    public_in(__SMACK_value(n3));
//    public_in(__SMACK_value(p3));

//    // Show that these values are left unannotated
//    // public_in(__SMACK_values(p,10));
//    public_in(__SMACK_values(p2,10));

//    public_in(__SMACK_values(p0,10));
//    public_in(__SMACK_values(p1,10));
//    public_in(__SMACK_values(p3,10));

//    mbedtls_mpi OBJ = {s,n,p};
//    mbedtls_mpi *E = &OBJ;
//    mbedtls_mpi OBJ2 = {s2,n2,p2};
//    mbedtls_mpi *N = &OBJ2;

//    mbedtls_mpi OBJ0 = {s0,n0,p0};
//    mbedtls_mpi OBJ1 = {s1,n1,p1};
//    mbedtls_mpi OBJ3 = {s3,n3,p3};

//    mbedtls_mpi *X = &OBJ0;
//    mbedtls_mpi *A = &OBJ1;
//    mbedtls_mpi *_RR = &OBJ3;

//    mbedtls_mpi_exp_mod_algorithm (X,A,E,N,_RR,
//                                   pub_branch0,pub_branch1,pub_branch2,
//                                   pub_branch3,pub_branch4,pub_branch5,
//                                   pub_branch6,pub_branch7,pub_branch8,
//                                   pub_branch9,pub_branch10,pub_branch11,
//                                   pub_branch12,pub_branch13,pub_branch14,
//                                   pub_branch15,pub_branch16,pub_branch17,
//                                   pub_branch18,pub_branch19,pub_branch20,
//                                   pub_branch21,pub_branch22,pub_branch23,
//                                   pub_branch24,pub_branch25,pub_branch26,
//                                   pub_branch27,pub_branch28,pub_branch28,pub_branch30,
//                                   pub_branch31,pub_branch32,pub_branch33,
//                                   pub_branch34,pub_branch35,pub_branch36,
//                                   pub_branch37,pub_branch38,pub_branch38,
//                                   pub_branch40,pub_n0,pub_n1,pub_n2,pub_n3,pub_n4,
//                                   pub_n5,pub_n6,
//                                   pub_ptr0,pub_ptr1,pub_ptr2,
//                                   pub_ptr3,pub_ptr4,pub_ptr5,
//                                   pub_ptr6,pub_ptr7,pub_ptr8,
//                                   pub_ptr9,pub_ptr10,pub_ptr11,
//                                   pub_ptr12,pub_ptr13,pub_ptr14,
//                                   pub_ptr15,
//                                   pub_VAL0, pub_VAL1, pub_VAL2, pub_VAL3);

// }

// void memcpy_uint_0( mbedtls_mpi_uint *p1, mbedtls_mpi_uint *p2 ) {
//     p1[0] = p2[0];
//     p1[1] = p2[1];
//     p1[2] = p2[2];
//     p1[3] = p2[3];
//     p1[4] = p2[4];
// }

// void memcpy_0( mbedtls_mpi *_RR, mbedtls_mpi *RR ) {
//     _RR->p[0] = RR->p[0];
//     _RR->p[1] = RR->p[1];
//     _RR->p[2] = RR->p[2];
//     _RR->p[3] = RR->p[3];
//     _RR->p[4] = RR->p[4];

//     _RR->n = RR->n;
//     _RR->s = RR->s;
// }

// void memset_uint_0(mbedtls_mpi_uint *p, int val) {
//     p[0] = val;
//     p[1] = val;
//     p[2] = val;
//     p[3] = val;
//     p[4] = val;
// }
