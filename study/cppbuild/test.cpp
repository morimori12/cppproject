#include <iostream>
#include <vector>

int main() {
  int N, S;
  std::cin >> N >> S;
  std::vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    std::cin >> P.at(i);
  }

  int ans = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i) + P.at(j) == S) {
        ans++;
      }
    }
  }

  std::cout << ans << std::endl;
}