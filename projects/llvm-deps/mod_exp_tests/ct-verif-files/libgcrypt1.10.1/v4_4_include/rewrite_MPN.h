#define RESIZE_IF_NEEDED_0(a,b) \
do {               \
if( (a)->alloced < (b) )   \
/*excluded*/dummy++;/*mpi_resize((a), (b));*/  \
} while(0)

/*** Loop removed****/
/* Copy N limbs from S to D.  */
#define MPN_COPY_0( d, s, n) \
do {                \
mpi_size_t _i;            \
_i = 0; if(n)dummy++;    /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/    \
 (d)[_i] = (s)[_i];        \
} while(0)

/* Zero N limbs at D */
#define MPN_ZERO_0(d, n) \
do {                  \
int  _i;              \
_i = 0; /*+*/ if(n)dummy++; /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/  \
(d)[_i] = 0;            \
} while (0)

// #define MPN_NORMALIZE_0(d, n)  \
// do {               \
// /*+*/ if( (n) > 0 )dummy++; {     /*while( (n) > 0 ) {     \*/\
// /*+*/ if( (d)[(n)-1] ) \
// dummy++;           \
// (n)--;           \
// }               \
// } while(0)

#define MPN_NORMALIZE_0(d, n)  \
do {               \
/*+*/ if( (n) > 0 )dummy++; {     /*while( (n) > 0 ) {     \*/\
/*+*/  \
dummy++;   \
(n) = d[0];           \
(n)--;           \
               }               \
} while(0)

/*******/

/*** Error removed****/
/* Copy N limbs from S to D.  */
#define MPN_COPY_1( d, s, n) \
do {                \
mpi_size_t _i;            \
_i = 0; /*if(n)dummy++;*/    /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/    \
 (d)[_i] = (s)[_i];        \
} while(0)

/* Zero N limbs at D */
#define MPN_ZERO_1(d, n) \
do {                  \
int  _i;              \
_i = 0; /*+*/ /*if(n)dummy++;*/ /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/  \
(d)[_i] = 0;            \
} while (0)

#define MPN_NORMALIZE_1(d, n)  \
do {               \
/*+*/ /*if( (n) > 0 )dummy++;*/ {     /*while( (n) > 0 ) {     \*/\
/*+*/ /*if( (d)[(n)-1] )*/ \
/*break;*/           \
(n)--;           \
}               \
} while(0)
/*******/

/*** Cache removed****/
/* Copy N limbs from S to D.  */
#define MPN_COPY_2( d, s, n) \
do {                \
mpi_size_t _i;            \
_i = 0; /*if(n)dummy++;*/    /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/    \
/*cache*/ /*(d)[_i] = (s)[_i];*/        \
} while(0)

/* Zero N limbs at D */
#define MPN_ZERO_2(d, n) \
do {                  \
int  _i;              \
_i = 0; /*+*/ /*if(n)dummy++;*/ /*loop*/ /*for( _i = 0; _i < (n); _i++ )*/  \
/*(d)[_i] = 0;*/            \
} while (0)

#define MPN_NORMALIZE_2(d, n)  \
do {               \
/*+*/ /*if( (n) > 0 )dummy++;*/ {     /*while( (n) > 0 ) {     \*/\
/*+*/ /*if( (d)[(n)-1] )*/ /*if( (d)[(n)-1] ) \*/\
/*break;*/           \
(n)--;           \
}               \
} while(0)
/*******/