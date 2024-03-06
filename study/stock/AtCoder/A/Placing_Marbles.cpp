#include <iostream>
int main() {
  char s;  // 101と入力するためchar型にしてある(intだと 1 0 1となってしまう)
  int count = 0;
  for (int i = 0; i < 3; i++) {
    std::cin >> s;

    // 入力した文字が'1'の場合の条件分岐
    if ('1' <= s && s <= '2') {
      count++;
    }
  }

  std::cout << count << std::endl;
}