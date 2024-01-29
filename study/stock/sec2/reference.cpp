/*
キーポイント
・参照先の型 "&参照の名前 = 参照先;"で参照を宣言できる
・通常の変数のように参照を宣言するときは参照先を指定する必要がある
・関数の引数に参照を用いる場合は、その関数を呼び出す時に渡した変数が参照先になる
・参照先を後から変更することはできない
・引数が参照になっている関数を呼び出すことを参照渡しという
・参照渡しは、無駄なコピーを避けたり複数の結果を返したいときに便利
*/
/*
・宣言
参照先の型　&参照の名前 = 参照先;

例)
int a = 123;
int &b = a;  // int型変数aへの参照

string s = "apg4b";
string &t = s;  // string型変数sへの参照

vector<int> v = {1, 2, 3, 4, 5};
vector<int> &w = v;  // vector<int>型変数vへの参照

int &c;  // 参照先が指定されていないためコンパイルエラーになる
*/

/*
#include <iostream>
#include <vector>
// using namespace std;
int main() {
  int a = 3;
  int &b = a;  // bは変数aの参照

  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;  // bの参照先の値を出力

  b = 4;  // 参照先の値を変更(aが4になる。)
  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;  // bの参照先の値を出力(4が出力)
}

*/

/*
・参照のアクセス
参照に対して行った操作が、参照先に対して行ったように扱われます。

#include <iostream>
#include <vector>
// using namespace std;
int main() {
  int a = 3;
  int &b = a;  // bは変数aの参照

  b = b + 1;  // a=a+1と同じ結果になる。
  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;  // bの参照先の値を出力
}

※文字列の場合
#include <iostream>
#include <vector>
// using namespace std;
int main() {
  std::string s = "apg4b";
  std::string &t = s;

  // 以下の操作で参照先のsが書き換わる
  t.at(0) = 'A';
  t.at(1) = 'P';
  t.at(2) = 'G';
  std::cout << s << std::endl;  // "APG4b"が出力される
  std::cout << t << std::endl;  // 参照先のsの値"APG4b"が出力される
}

*/
/*
関数の因数での参照
・通常の関数(値渡し)
#include <iostream>
#include <vector>
// using namespace std;
int f(int x) {
  x = x * 2;  // 2.xを2倍
  return x;   // 3.xの値を返す。
}
int main() {
  int a = 3;     // 呼び出す側の変数
  int b = f(a);  // 1.aの値をfに渡し、4.結果をbに代入

  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;
}

・引数が参照になっている関数(参照渡し)

#include <iostream>
#include <vector>
// using namespace std;
int g(int &x) {
  x = x * 2;  // xを2倍(参照によって""呼び出す側の変数"が変更される。)
  return x;
}
int main() {
  int a = 3;     // 関数を呼び出す側の変数
  int b = g(a);  // xの参照先がaになる。
  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;
}
*/
/*
参照渡しの利点
・関数の結果を複数返せる。
・無駄なコピーが減らせる。
*/

#include <iostream>
#include <vector>
// using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(std::vector<std::vector<int>> &A, int &correct_count,
            int &wrong_count) {
  // 呼び出し側のAの各マスを正しい値に修正する
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (A.at(i).at(j) == (i + 1) * (j + 1)) {
        correct_count++;  // 行列の要素は0スタートなので、九九は(i+1)*(j+1)で求められる。
      } else {
        A.at(i).at(j) = (i + 1) * (j + 1);
        wrong_count++;
      }
    }
  }
}

// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  std::vector<std::vector<int>> A(9, std::vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      std::cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0;  // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;    // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {  // 行末に空白を埋めない出力の仕方
    for (int j = 0; j < 9; j++) {
      std::cout << A.at(i).at(j);
      if (j < 8)
        std::cout << " ";  // 末尾なら改行
      else
        std::cout << std::endl;  // それ以外なら空白
    }
  }
  // 正しいマスの個数を出力
  std::cout << correct_count << std::endl;
  // 誤っているマスの個数を出力
  std::cout << wrong_count << std::endl;
}
