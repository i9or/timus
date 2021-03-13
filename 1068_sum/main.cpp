#include <iostream>

int main() {
  #ifndef ONLINE_JUDGE
   freopen("../1068_sum/in.txt", "rt", stdin);
   freopen("../1068_sum/out.txt", "wt", stdout);
  #endif

  int inputNumber;
  std::cin >> inputNumber;

  auto startN = inputNumber < 1 ? inputNumber : 1;
  auto endN = inputNumber < 1 ? 1 : inputNumber;

  int sum{0};
  for (int n = startN; n <= endN; ++n) {
    sum += n;
  }

  std::cout << sum << std::endl;

  return 0;
}
