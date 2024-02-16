#include <iostream>
#include <vector>

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(std::vector<std::vector<int>> &children, int x) {
  // ベースケース
  if (children.at(x).size() == 0) {
    // 子組織から受け取ることは無いので1枚であることは確定している。
    return 1;
  }

  // 再帰ステップ
  int sum = 0;
  for (int c : children.at(x)) {
    sum += count_report_num(children, c);
  }

  sum += 1;  // x板の組織の報告書の枚数(1枚)を足す

  return sum;
}

// これ以降の行は変更しなくてよい

int main() {
  int N;
  std::cin >> N;

  std::vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    std::cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る
  std::vector<std::vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);              // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }

  // 各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    std::cout << count_report_num(children, i) << std::endl;
  }
}