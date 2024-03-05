/*問題文
日本では、
3 月
3 日にひなあられという、色のついたお菓子をお供えする習慣があります。

1 つの袋があり、ひなあられが
N 個入っています。

この袋には、桃色、白色、緑色の
3 種類か、桃色、白色、緑色、黄色の
4 種類のひなあられが入っていることが分かっています。

桃色を P、白色を W、緑色を G、黄色を Y と表したとき、袋からひなあられを
1 粒ずつ取り出していったところ、
i 番目に取り出したひなあられの色は
S
i
​
  でした。

この袋に
3 種類のひなあられが入っていた場合は Three、
4 種類のひなあられが入っていた場合は Four と出力してください。*/

#include <iostream>

int main() {
  int N;
  char A;
  bool x = false;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> A;
    if (A == 'Y') {
      x = true;
      break;
    }
  }
  if (x == true) {
    std::cout << "Four" << std::endl;
  } else {
    std::cout << "Three" << std::endl;
  }

  return 0;  // Indicate successful program termination
}