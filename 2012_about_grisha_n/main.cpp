#include <iostream>

int main() {
#ifndef ONLINE_JUDGE
    freopen("../2012_about_grisha_n/in.txt", "rt", stdin);
    freopen("../2012_about_grisha_n/out.txt", "wt", stdout);
#endif

    int firstHourProblemsNumber;
    std::cin >> firstHourProblemsNumber;

    auto problemsLeft = 12 - firstHourProblemsNumber;
    auto result = problemsLeft * 45 <= 240 ? "YES" : "NO";

    std::cout << result << std::endl;

    return 0;
}
