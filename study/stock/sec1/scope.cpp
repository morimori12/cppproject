#include <iostream>
// using namespace std;

int main() {
  int p;
  std::cin >> p;
  // パターン1
  if (p == 1) {
    int price, N;
    std::cin >> price >> N;
    std::cout << price * N << std::endl;
  }

  // パターン2
  if (p == 2) {
    std::string text;
    int price, N;
    std::cin >> text >> price >> N;
    std::cout << text << "!" << std::endl;
    std::cout << price * N << std::endl;
  }
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  // パターン1
  if (p == 1) {
    int price, N;
    cin >> price >> N;
    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    string text;
    int price, N;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}*/
