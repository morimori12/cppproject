/*
キーポイント
・関数を使うとプログラムのまとまった機能を簡単に使うことができる
・C++で用意されている、関数等がまとまっているもののことをSTLという
・関数名(引数1, 引数2, ...)で関数を呼び出せる
・関数に( )で渡す値のことを引数という
・関数の計算結果のことを返り値または戻り値という
・引数と返り値は型のルールが決まっており、間違えるとコンパイルエラーになる

min(a,b):aとbのうち小さい方の値を返す
max(a,b):aとbのうち大きい方の値を返す
swap(a,b):変数aと変数bの値を交換する
sort(vec.begin(),vec.end()):配列変数vecをソートする(要素を小さい順に並びかえる)
reverse(vec.begin(),vec.end())配列変数vecの要をの並びを逆にする。

*/

#include <iostream>
// using namespace std;

int main() {
  int A, B, C;
  int high, low, diff;
  std::cin >> A >> B >> C;

  high = std::max(std::max(A, B), C);
  low = std::min(std::min(A, B), C);

  diff = high - low;
  std::cout << diff << std::endl;
}