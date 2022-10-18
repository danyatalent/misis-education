#include <iostream>
#include <array>

const int MAX_N = 101;
std::array<int, MAX_N> gifts;

void solve()
{
    int n(0);
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp(0);
        std::cin >> tmp;
        gifts[tmp] = i;
    }
    for (int i = 1; i <= n; i++) {
        std::cout << gifts[i] << ' ';
    }
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    solve();
    return 0;
}