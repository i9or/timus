#include <iostream>

int main() {
#ifndef ONLINE_JUDGE
    freopen("../1293_eniya/in.txt", "rt", stdin);
    freopen("../1293_eniya/out.txt", "wt", stdout);
#endif

    int numberOfPanels;
    int dimensionA;
    int dimensionB;
    std::cin >> numberOfPanels >> dimensionA >> dimensionB;

    int result = numberOfPanels * 2 * dimensionA * dimensionB;

    std::cout << result << std::endl;

    return 0;
}
