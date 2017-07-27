

typedef struct {
  int x;
  int y;
  int z;
} context;

int main (void) {
  char key = 6;
  int plain = 10;

  context c;


  char* p = &c;
  p[2] = key;
  // if the index is 4-7 it taints c.y
  // if the index is 8+ it will taint c.z;


  if(plain < c.x) // This is the only branch that should be tainted
    ;

  if(plain < c.y)
    ;

  if(plain < c.z)
    ;

}
