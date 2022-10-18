#include <iostream>
#include <array>


void solve()
{
    const int kSize = 8;
    std::array<std::array<bool,kSize>, kSize> cells_under_attack;
    for (int i = 1; i <= kSize; i++) {
        for (int j = 1; j <= kSize; j++) {
            cells_under_attack[i][j] = false;
        }
    }

    for (int i = 1; i <= kSize; i++) {
        for (int j = 1; j <= kSize; j++) {
            char ch(' ');
            std::cin >> ch;
            if (ch == '#') {
                cells_under_attack[i][j] = true;
            }
        }
    }
    for (int i = 2; i <= kSize - 1; i++) {
        for (int j = 2; j <= kSize - 1; j++) {
            if (cells_under_attack[i][j] && cells_under_attack[i - 1][j - 1] && cells_under_attack[i - 1][j + 1] && cells_under_attack[i + 1][j - 1] && cells_under_attack[i + 1][j + 1]) {
                std::cout << i << ' ' << j << std::endl;
                return;
            }
        }
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