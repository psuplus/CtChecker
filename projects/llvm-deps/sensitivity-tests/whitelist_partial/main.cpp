
class Point {
public:
  int x;
  int y;
};

int main () {
  int key;

  Point p;

  p.x = key;
  p.y = key;


  if (p.x == 4) // Vulnerable + Reported
    ;
  if (p.y == 4) // Vulnerable + Not reported due to whitelist
    ;
}
