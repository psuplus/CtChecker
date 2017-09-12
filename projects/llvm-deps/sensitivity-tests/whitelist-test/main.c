int main(void)
{
  int a, b, c, d;
  int key = 4;
  a = key;
  b = a;
  c = b;
  d = a;


  if( a == 3 ) // reported
    ;
  if( b == 3 )
    ;
  if( c == 3 )
    ;
  if( d == 3 ) // reported
    ;


  c = d;

  if ( c == 4) // reported
    ;
  return 0;
}
