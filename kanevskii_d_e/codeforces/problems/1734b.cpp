#include <iostream>

void solve()
{
    int n(0);
    std::cin >> n;
    for (int i = 0 ;i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << (j == 0 || j == i ? '1' : '0') << ' ';
        }
        std::cout << std::endl;
    }
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