#include <math.h>

#include <iostream>
int main() {
  int a, b;
  double sum, x;

  std::cin >> a >> b;
  sum = a + b;
  x = sum / 2;
  printf("%lf\n", ceil(x));
}