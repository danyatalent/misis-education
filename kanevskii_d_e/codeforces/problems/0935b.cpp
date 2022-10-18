#include <iostream>
#include <string>


void solve()
{
    int n(0), x(0), y(0), res(0);
    std::string s;
    std::cin >> n >> s;

    int x_prev(0), y_prev(0);
    bool kingdom = (s[0] == 'R' ? false : true);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x_prev = x;
            y_prev = y;
            x++;
        }
        else {
            x_prev = x;
            y_prev = y;
            y++;
        }

        if ((x_prev == y_prev && x_prev != 0) && y == y_prev && x > x_prev && kingdom) {
            res += 1;
            kingdom = false;
        }
        else if ((x_prev == y_prev && x_prev != 0) && x == x_prev && y > y_prev && !kingdom) {
            res += 1;
            kingdom = true;
        }
    }
    std::cout << res << std::endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    solve();
    return 0;
}