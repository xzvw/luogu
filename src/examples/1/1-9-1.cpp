#include <cmath>
#include <iostream>
using namespace std;

int main() {
  const double PI = 3.141593;

  double r = 5;
  cout << 2 * PI * r << endl;
  cout << PI * r * r << endl;
  cout << 4.0 / 3 * PI * pow(r, 3) << endl;

  return 0;
}
