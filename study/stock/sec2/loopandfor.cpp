/*
キーポイント
・ループ処理を書くときの3ステップ
1.ループを使わずに書く
2.パターンを見つける
3.ループで書き直す
・配列の要素を取り出しながらループする範囲for文
for (配列の要素の型 変数名 : 配列変数) {
  // 各要素に対する処理
}
*/

/*
ループの書き方の例
#include <iostream>
#include <vector>
int main() {
  int a;
  std::cin >> a;
  std::vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    std::cin >> data.at(i);
  }
  int answer = 0;
  for (int i = 0; i < 5; i++) {
    if (data.at(i) == a) {
      answer++;
    }
  }
  std::cout << answer << std::endl;
}
*/
/*
範囲for文
for (配列の要素の型 変数名 : 配列変数) {
  // 各要素に対する処理
}
・for文・while文のときと同じ動作(breakでループを抜け、continueで次のループまで処理をスキップ)をします。
#include <iostream>
#include <vector>
int main() {
  std::vector<int> a = {1, 3, 1, 2, 5, 10};
  for (int x : a) {
    if (x == 1) {
      continue;
    }
    if (x == 5) {
      break;
    }

    std::cout << x << std::endl;
  }
}
*/
/*
・範囲for文はコンテナと呼ばれるデータ型に対して使うことができます。
・配列はコンテナの一種です。
・その他にも文字列型(string型)はコンテナの一種なので、範囲for文を用いることができます。
・string型の変数に対して、1文字ずつ処理したい場合に便利です。

#include <iostream>
// #include <vector>
int main() {
  std::string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    std::cout << c;
  }
  std::cout << std::endl;
}
*/

/*
ループ構文の使い分け
・配列の全ての要素に対する処理を行なう場合 → 範囲for文
・それ以外で一定回数繰り返し処理する場合 → for文
・それ以外の場合 → while文

while文が適しているケース

#include <iostream>
// #include <vector>
int main() {
  int N;
  std::cin >> N;

  int count = 0;
  while (N > 0) {
    if (N % 2 > 0) {
      break;
    }
    N = N / 2;
    count++;
  }
  std::cout << count << std::endl;
}
*/

#include <iostream>
#include <vector>

int main() {
  std::vector<int> data(5);

  // Read input into the vector
  for (int i = 0; i < 5; i++) {
    std::cin >> data.at(i);
  }

  // Count consecutive pairs
  bool ans = false;
  for (int i = 0; i < 4; i++) {
    if (data.at(i) == data.at(i + 1)) {
      ans = true;
    }
  }
  if (ans) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;  // Explicit return added for clarity
}
