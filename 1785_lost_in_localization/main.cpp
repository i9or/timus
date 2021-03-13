#include <iostream>

int main() {
#ifndef ONLINE_JUDGE
    freopen("../1785_lost_in_localization/in.txt", "rt", stdin);
    freopen("../1785_lost_in_localization/out.txt", "wt", stdout);
#endif

    int inputNumber;
    std::cin >> inputNumber;

    if (inputNumber <= 4) std::cout << "few" << std::endl;
    else if (inputNumber <= 9) std::cout << "several" << std::endl;
    else if (inputNumber <= 19) std::cout << "pack" << std::endl;
    else if (inputNumber <= 49) std::cout << "lots" << std::endl;
    else if (inputNumber <= 99) std::cout << "horde" << std::endl;
    else if (inputNumber <= 249) std::cout << "throng" << std::endl;
    else if (inputNumber <= 499) std::cout << "swarm" << std::endl;
    else if (inputNumber <= 999) std::cout << "zounds" << std::endl;
    else if (inputNumber >= 1000) std::cout << "legion" << std::endl;

    return 0;
}
