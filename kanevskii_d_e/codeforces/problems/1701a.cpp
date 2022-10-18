#include <iostream>
#include<array>

void solve()
{
    const int kSize = 2;
    std::array<std::array<bool, kSize>,kSize> field;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
            std::cin >> field[i][j];
        }
    }
    int res(0);
    if (field[0][0] && field[0][1] && field[1][0] && field[1][1]) {
        res = 2;
    }
    else if (!field[0][0] && !field[0][1] && !field[1][0] && !field[1][1]) {
        res = 0;
    }
    else{
        res = 1;
    }
    std::cout << res << std::endl;
}


int main()
{
    int t(0);
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}