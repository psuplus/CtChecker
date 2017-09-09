#include <stdio.h>

typedef struct {
  int a;
  int b;
  int c;
} Context;


int main(void)
{
  int bad = 4;
  Context c;
  c.b = 0;
  c.c = bad;

  if (c.b == 1)
    ;

  if (c.c == 1)
    ;

  return 0;
}
