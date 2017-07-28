

typedef struct {
  int x;
  int y;
  int z;
} context;

int main (void) {
  char key = 6;
  int plain = 10;

  context c;
  context d;

  char* p = &c;
  p[5] = key;
  // if the index is 4-7 it taints c.y
  // if the index is 8+ it will taint c.z;


  char * q = &d;
  char *r = q + 3;
  r[0] = key;
  if(plain < c.x) // This is the only branch that should be tainted
    ;

  if(plain < c.y)
    ;

  if(plain < c.z)
    ;

  if(plain < d.x)
    ;
  if(plain < d.y)
    ;
  if(plain < d.z)
    ;

}
