#include <iostream>
#include <string>
#include <algorithm>

void solve()
{
    int n(0), k(0), zeros(0), units(0);
    std::string s;
    std::cin >> n >> k >> s;
    bool answer = true;

    for (int i = 0; i < k; i++) {
        int tmp = -1;
        for (int j = i; j < n; j += k) {
            if (s[j] != '?') {
                if (tmp != -1 && tmp != s[j] - '0') {
                    answer = false;
                    break;
                }
                tmp = s[j] - '0';
            }
        }
        if (tmp != -1) {
            if (tmp == 0) zeros++;
            else units++;
        }
    }

    if (std::max(zeros, units) > k / 2) answer = false;

    std::cout << (answer ? "YES" : "NO") << std::endl;
}

int main()
{
    int t(0);
    std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
