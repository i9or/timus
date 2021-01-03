#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
  #ifndef ONLINE_JUDGE
   freopen("in.txt", "rt", stdin);
   freopen("out.txt", "wt", stdout);
  #endif

  std::vector<double> numbers;
  unsigned long long inputNumber;

  while (std::cin >> inputNumber) {
    numbers.push_back(sqrt(inputNumber));
  }

  std::cout << std::fixed;
  std::cout << std::setprecision(4);

  for (int i = numbers.size()-1; i >= 0; --i) {
    std::cout
      << numbers[i]
      << std::endl;
  }

  return 0;
}
