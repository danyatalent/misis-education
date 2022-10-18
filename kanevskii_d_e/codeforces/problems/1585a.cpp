#include <iostream>
#include <array>

const int MAX_N = 101;
std::array<int, MAX_N> flower;
std::array<bool, MAX_N> days;

void solve()
{
    int n(0);
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        flower[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        std::cin >> days[i];
    }
    int result = (days[1] ? 2 : 1);
    for (int i = 2; i <= n; i++) {
        if (!days[i] && !days[i - 1]) {
            std::cout << "-1" << std::endl;
            return;
        }
        else if (days[i] && !days[i - 1]) {
            result += 1;
        }
        else if (days[i] && days[i - 1]) {
            result += 5;
        }
    }
    std::cout << result << std::endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    int t(0);
    std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}