#include <math.h>

#include <iostream>
int main() {
  int a, b;
  double sum, x;

  std::cin >> a >> b;
  /*sumもdouble型にしないとxが整数となり、小数点以下の切り上げができない*/
  sum = a + b;
  x = sum / 2;
  printf("%lf\n", ceil(x));
}