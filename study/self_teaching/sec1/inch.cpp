#include <iostream>
using namespace std;
int main() {
  double feet;
  const double conversion_factor = 12;
  do {
    cout << "フィート数を入力してください(0で終了):";
    cin >> feet;

    if (feet != 0) {
      double inches = feet * conversion_factor;
      cout << feet << "フィートは" << inches << "インチです"
           << "\n";
    }
    /*do-while文の外部で入力すると出力結果のループとなるためdo-while文の中に入力を入れる*/
  } while (feet != 0.0);
  return 0;
}
