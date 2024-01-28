#include <iostream>

int main() {
  int A, B;
  int i = 1;
  int j = 1;
  std::cin >> A >> B;

  std::cout << "A:";
  while (i <= A) {
    std::cout << "]";
    i++;
  }
  std::cout << std::endl;
  std::cout << "B:";
  while (j <= B) {
    std::cout << "]";
    j++;
  }
  std::cout << std::endl;
}

/*解答例
#include <iostream>

int main() {
  int A, B;
  int i = 0;
  int j = 0;
  std::cin >> A >> B;

  std::cout << "A:";
  while (i < A) {
    std::cout << "]";
    i++;
  }
  std::cout << std::endl;
  std::cout << "B:";
  while (j < B) {
    std::cout << "]";
    j++;
  }
  std::cout << std::endl;
}
int i = 0;
while(i < A){
  処理;
}
が一般的な書き方
*/