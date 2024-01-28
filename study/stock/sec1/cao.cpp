#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  x = x * (a + b);
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x = x - 1;
  cout << x << endl;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 5;
  a -= 2;
  cout << a << endl; // 3

  int b = 3;
  b *= 1 + 2;
  cout << b << endl; // 9

  int c = 4;
  c /= 2;
  cout << c << endl; // 2

  int d = 5;
  d %= 2;
  cout << d << endl; // 1
}
x++ インクリメント
x-- デクリメント
*/