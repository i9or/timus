#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
  #ifndef ONLINE_JUDGE
   freopen("in.txt", "rt", stdin);
   freopen("out.txt", "wt", stdout);
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
