#include <bits/stdc++.h>
// using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;   // true または false
  bool b = false;  // true または false
  bool c = true;   // true または false

  // ここから先は変更しないこと

  if (a) {
    std::cout << "At";
  } else {
    std::cout << "Yo";
  }

  if (!a && b) {
    std::cout << "Bo";
  } else if (!b || c) {
    std::cout << "Co";
  }

  if (a && b && c) {
    std::cout << "foo!";
  } else if (true && false) {
    std::cout << "yeah!";
  } else if (!a || c) {
    std::cout << "der";
  }

  std::cout << std::endl;
}
/*int型での真偽→1と0,bool型の真偽→trueとfalse*/