struct Point {
  int a;
  int b;
};
int main() {
  int key = 4;
  int ct = 0;
  struct Point u;

  u.a = key;
  u.b = 0;

  if (u.a < 3)
    ct += 1;
  if (u.b > 3)
    ct += 1;
}
