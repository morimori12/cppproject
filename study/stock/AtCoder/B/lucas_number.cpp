#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  // リュカ数列の初期化
  vector<int64_t> L(N + 1);
  L[0] = 2;
  L[1] = 1;

  // 2番目以降のリュカ数を求める

  for (int i = 2; i <= N; i++) {
    L[i] = L[i - 1] + L[i - 2];
  }

  cout << L[N] << endl;
}