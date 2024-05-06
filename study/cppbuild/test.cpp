#include <iostream>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  int s = sum(n - 1);
  return s + n;
}

int main() {
  cout << sum(2) << endl;   // 0 + 1 + 2 = 3
  cout << sum(3) << endl;   // 0 + 1 + 2 + 3 = 6
  cout << sum(10) << endl;  // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
}