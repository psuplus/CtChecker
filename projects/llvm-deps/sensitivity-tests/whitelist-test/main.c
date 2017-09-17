// Whitelist example
/*
 *  Variables that are white listed or that are "tainted" by the white-listed
 *  variable are not reported in the vulnerable branch analysis.
 *  even if the downstream white-listed  variable is reassigned to an actual
 *  tainted value the branch/value will not be reported as vulnerable or tainted.
*/
int main(void)
{
  int a, b, c, d, e;
  int key = 4;
  a = key;
  b = a;
  c = b;
  d = a;
  e = c;

  if( a == 3 ) // reported
    ;
  if( b == 3 )
    ;
  if( c == 3 )
    ;
  if( d == 3 ) // reported
    ;

  c = d;  // C is whitelisted, but has the same value as key
  e = c;
  if ( c == 4 ) // unreported -- this probably should be reported though.
    ;
  if ( e == 3 )
    ;
  return 0;
}
