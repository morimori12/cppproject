// for (int i = 0 /* 初期化 */; i < 3 /* 条件式 */; i++ /* 更新 */) {
// cout << "Hello for: " << i << endl;  // 処理
//}
/*break→ループを途中で抜ける
continue→後の処理を飛ばして次のループへ行く。
*/

#include <iostream>

int main() {
  int N, A;
  std::cin >> N >> A;
  for (int i = 1; i < N + 1; i++) {
    int x;
    std::string op;
    std::cin >> op >> x;
    if (op == "+") {
      A += x;
    } else if (op == "-") {
      A -= x;
    } else if (op == "*") {
      A *= x;
    } else if (op == "/" && x != 0) {
      A /= x;
    } else {
      std::cout << "error" << std::endl;
      break;
    }
    std::cout << i << ':' << A << std::endl;
  }
}