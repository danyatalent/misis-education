#include <iostream>
#include<array>
#include <algorithm>

const int MAX_N = 101;
std::array<bool, MAX_N> game;

void solve()
{
    int n(0), zeros(0), last_zero(0), first_zero(102);
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> game[i];
        if (game[i] == false) {
            zeros++;
            last_zero = std::max(last_zero, i);
            first_zero = std::min(first_zero, i);
        }
    }
    if (first_zero == 102) {
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << last_zero - first_zero + 2 << std::endl;
    }
}



int main()
{
    std::ios_base::sync_with_stdio(false);
    int t(0);
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}