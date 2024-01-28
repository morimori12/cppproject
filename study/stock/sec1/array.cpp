/*
キーポイント
・配列は様々なデータの列を扱うことができる機能
・vector<型> 配列変数名;で配列変数を宣言できる
・配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる
・配列変数.at(i)で
・i番目の要素にアクセスできる
・配列変数.size()で配列の要素数を取得できる
・vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる
・配列でN個の入力を受け取るときは、N要素で初期化した後、for文の中でatを使って1ずつ受け取る
*/

/*
#include <bits/stdc++.h>

int main() {
  // 文字列
  std::string str;  // 文字列変数を宣言

  str = "abcd";  // 'a', 'b', 'c', 'd' という文字(char)の列を代入

  std::cout << str.at(0) << std::endl;  // 1つ目である'a'を出力

  std::cout << str.size() << std::endl;  // 文字列の長さである4を出力

  // 配列
  std::vector<int> vec;  // int型の配列変数vecを宣言

  vec = {25, 100, 64};  // 25, 100, 64 という整数(int)の列を代入

  std::cout << vec.at(0) << std::endl;  // 1つめである25を出力

  std::cout << vec.size() << std::endl;  // 配列の長さである3を出力
}
*/

#include <bits/stdc++.h>
// using namespace std;

int main() {
  int N;
  std::cin >> N;
  std::vector<int> vec(N);
  int num = 0;
  int ave, diff;

  // 平均の計算
  for (int i = 0; i < N; i++) {
    std::cin >> vec.at(i);
  }

  for (int i = 0; i < N; i++) {
    num += vec.at(i);
  }
  ave = num / N;

  for (int i = 0; i < N; i++) {
    diff = std::abs(ave - vec.at(i));
    std::cout << diff << std::endl;
  }
}
