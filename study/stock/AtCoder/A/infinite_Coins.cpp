#include <iostream>
using namespace std;
int main() {
  int N, A;
  cin >> N >> A;
  /*500円は無限にあるので払えるかどうかは500で割ったときの余り(N%500)とAの大小関係で判断する*/
  if ((N % 500) <= A) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}