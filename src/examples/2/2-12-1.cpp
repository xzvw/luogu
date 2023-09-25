#include <cmath>
#include <cstdio>

int main() {
  int s, v;
  scanf("%d%d", &s, &v);

  int t_walk = ceil(1.0 * s / v) + 10;
  int from_zero = 60 * (24 + 8) - t_walk;
  int hh = (from_zero / 60) % 24;
  int mm = from_zero % 60;

  printf("%02d:%02d", hh, mm);

  return 0;
}
