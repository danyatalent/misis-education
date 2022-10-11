#include <iostream>
#include <string>
#include <algorithm>
#include <array>

const int MAX_N = 5;

std::array<std::string, MAX_N> field;

void solve() 
{
    int n(0), m(0);
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> field[i][j];
        }
    }
    if (n == 1 || m == 1) {
        std::cout << "YES" << std::endl;
        return;
    }

    int x(6), y(6);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == 'R') {
                y = std::min(y, i);
                x = std::min(x, j);
            }
        }
    }
    std::cout << (field[y][x] == 'R' ? "YES" : "NO") << std::endl;
    
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