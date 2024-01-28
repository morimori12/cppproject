#include <iostream>

int main() {
  std::string S;
  std::cin >> S;
  int figure = 1;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      figure++;
    }
    if (S.at(i) == '-') {
      figure--;
    }
  }

  std::cout << figure << std::endl;
}

// 文字列→string型,文字→char型
/*文字列変数.size()→文字列の長さ取得
文字列変数.at(i)→i文字目にアクセスできる(i:添え字)
添え字の値が正しい範囲内似ないとエラーを吐く
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "こんにちは\nAtCoder";

  \nで改行できる
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;

  cout << a << endl;
  cout << b << endl;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る

  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}
getlineで行単位での入力を受け取る。
*/