#include <iostream>
using namespace std;

class myclass {
  // myclassクラスの非公開メンバ
  int a;

 public:
  void set_a(int num);
  int get_a();
};

void myclass::set_a(int num) { a = num; }

int myclass::get_a() { return a; }

int main() {
  myclass ob1, ob2;  // myclass型のオブジェクト

  ob1.set_a(10);  // ob1オブジェクトの変数aを10に設定
  ob2.set_a(99);  // ob2オブジェクトの変数aを99に設定

  cout << ob1.get_a() << endl;
  cout << ob2.get_a() << endl;
}

/*
変数aをpublicセクションで宣言すると、プログラム内のどこからでも変数aを参照できる
#include <iostream>
using namespace std;

class myclass {
 public:
  // aは公開変数
  int a;
  //したがって、set_a()関数とget_a()関数は必要ない
};

int main() {
  myclass ob1, ob2;  // myclass型のオブジェクト

  // 変数aは直接アクセスされる
  ob1.a = 10;
  ob2.a = 99;

  cout << ob1.a << endl;
  cout << ob2.a << endl;
}
*/