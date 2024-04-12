/*
キーポイント
・ループ構文の中にさらにループ構文があるものを多重ループと呼ぶ
・多重ループを一度に抜けたい場合は、フラグ変数を用意してそれぞれのループを抜けるようにする必要がある
*/
/*例
#include <iostream>
#include <vector>

int main() {
  std::vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    std::cin >> A.at(i);
  }
  for (int i = 0; i < 3; i++) {
    std::cin >> B.at(i);
  }

  bool answer = false;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (A.at(i) == B.at(j)) {
        answer = true;
      }
    }
  }
  if (answer) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}

*/
/*
多重ループのbreak/continue
#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  bool finished = false;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      sum += i * j;

      if (sum > 1000) {
        cout << i << ", " << j << endl;
        finished = true;
        break;
      }
    }

    if (finished) {
      break;
    }
  }

  cout << sum << endl;
}

*/
/*
#include <bits/stdc++.h>
using namespace std;

void func() {
  int sum = 0;
  bool finished = false;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      sum += i * j;

      if (sum > 1000) {
        cout << i << ", " << j << endl;
        finished = true;
        break;
      }
    }

    if (finished) {
      break;
    }
  }

  cout << sum << endl;
}
int main() { func(); }

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, count;
  cin >> N >> S;
  vector<int> A(N), P(N);
  count = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i) + P.at(j) == S) {
        count++;
      }
    }
  }
  cout << count << endl;
}
