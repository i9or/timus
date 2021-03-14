#include <iostream>

int main() {
#ifndef ONLINE_JUDGE
    freopen("../1409_two_gangsters/in.txt", "rt", stdin);
    freopen("../1409_two_gangsters/out.txt", "wt", stdout);
#endif

    int firstGangsterCans, secondGangsterCans;
    std::cin >> firstGangsterCans >> secondGangsterCans;

    std::cout << secondGangsterCans - 1 << " " << firstGangsterCans - 1 << std::endl;

    return 0;
}
