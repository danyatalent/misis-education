#include <iostream>
#include <array>

const int MAX_N = 101;
std::array<int, MAX_N> a;
std::array<int, MAX_N> hash;

void solve()
{
    int n(0);
    std::cin >> n;

    for (int i = 0; i < MAX_N; i++) {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int tmp(0);
        std::cin >> tmp;
        hash[tmp] += 1;
    }

    if (hash[0] > 0) {
        std::cout << n - hash[0] << std::endl;
        return;
    }
    
    for (int i = 1; i < MAX_N; i++) {
        if (hash[i] > 1) {
            std::cout << n << std::endl;
            return;
        }
    }
    std::cout << n + 1 << std::endl;
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