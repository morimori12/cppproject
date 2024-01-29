/*
キーポイント
・2次元配列は2次元の表を扱うときに便利
・vector<vector<要素の型>> 変数名(要素数1,
vector<要素の型>(要素数2,初期値))で宣言できる 初期値は省略可能
・変数名.at(i).at(j)でi行目j列目へアクセスできる
・変数名.size()で縦の大きさを取得できる
・変数名.at(0).size()で横の大きさを取得できる
・要素を指定して初期化する例

vector<vector<int>> data = {
  {7, 4, 0, 8},
  {2, 0, 3, 5},
  {6, 1, 7, 0},
};
・2次元以上の配列を多次元配列という
・vectorをN個入れ子にしたものをN次元配列という
*/
/*
#include <iostream>
#include <vector>

int main() {
  // int型の2次元配列(3×4)の宣言
  std::vector<std::vector<int>> data(3, std::vector<int>(4));
  // 入力
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      std::cin >> data.at(i).at(j);
    }
  }

  // 0のカウント
  int count = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (data.at(i).at(j) == 0) {
        count++;
      }
    }
  }

  std::cout << count << std::endl;
  std::cout << data.size() << std::endl;                      // 行数の表示
  std::cout << data.at(0).size() << std::endl;                // 列数の表示
  std::cout << data.size() * data.at(0).size() << std::endl;  // 要素数の表示
}
*/

/*
多次元配列
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::vector<std::vector<std::vector<char>>> data(
      N, std::vector<std::vector<char>>(3, std::vector<char>(3)));
  // 入力
  for (int i = 0; i < N; i++) {
    // i番目の状態を読む
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        std::cin >> data.at(i).at(j).at(k);
      }
    }
  }

  // 'o'のカウント
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        // i番目の状態、上からj番目、左からk番目の要素が'o'かどうか判定
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }
      }
    }
  }

  std::cout << count << std::endl;
}

*/
/*
宣言
vector<vector<vector<要素の型>>> 変数名(要素数1,
vector<vector<要素の型>>(要素数2, vector<要素の型>(要素数3, 初期値)));
vector<vector<vector<要素の型>>> 変数名(要素数1,
vector<vector<要素の型>>(要素数2, vector<要素の型>(要素数3)));  // 初期値を省略

*/
/*
注意点
多次元配列を扱う際の基本的な注意点は1次元配列と同様です。

多次元配列ではさらに、添字の順番に注意しましょう。
また、変数名.size()では1次元目の要素数が取得できますが、すべての要素の個数が取得できる訳ではないという点に注意しましょう。

vector<vector<vector<int>>> data = {
  {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
  },
  {
    {13, 14, 15, 16},
    {17, 18, 19, 20},
    {21, 22, 23, 24},
  },
};

int size1 = data.size();
cout << size1 << endl;  // 2

int size2 = data.at(0).size();
cout << size2 << endl;  // 3

int size3 = data.at(0).at(0).size();
cout << size3 << endl;  // 4

cout << size1 * size2 * size3 << endl;  // 24

*/

#include <iostream>
#include <vector>
// using namespace std;
int main() {
  int N, M;
  std::cin >> N >> M;
  std::vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    std::cin >> A.at(i) >> B.at(i);
  }

  std::vector<std::vector<char>> table(N, std::vector<char>(N, '-'));
  for (int i = 0; i < M; i++) {
    A.at(i)--;
    B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o';
    table.at(B.at(i)).at(A.at(i)) = 'x';
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      std::cout << table.at(i).at(j);
      if (j == N - 1) {
        std::cout << std::endl;
      } else {
        std::cout << " ";  // 空文字にする
      }
    }
  }
}
