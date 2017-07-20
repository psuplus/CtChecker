#include <stdio.h>


typedef struct {
  int info;
} pk_info_t;

typedef struct {
  pk_info_t* pk_info;
  int pk_b;
} pk_t;


void do_stuff (pk_t *ctx){

  if(ctx->pk_info == NULL) // Vulnerable Branch reported
    ;
  if(ctx->pk_b == 2) // Vulnerable Branch reported
    ;
  if(ctx)
    ;
}

int main(void)
{
  pk_t pk; // tainted value


  do_stuff(&pk); // &pk is not tainted
  return 0;
}
