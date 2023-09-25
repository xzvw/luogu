#include <cstdio>

int main() {
  int a, b, c, d, e, f;
  int delta;

  scanf("%d%d%d%d", &a, &b, &c, &d);
  delta = 60 * (c - a) + (d - b);
  e = delta / 60;
  f = delta % 60;
  printf("%d %d", e, f);

  return 0;
}
