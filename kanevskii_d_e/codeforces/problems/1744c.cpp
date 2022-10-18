#include <iostream>
#include <string>
#include <array>


void solve()
{
    int n(0), max_steps(0);
    char c(' ');
    std::string s;

    std::cin >> n >> c >> s;
    if (c == 'g') {
        std::cout << 0 << std::endl;
        return;
    }
    // for (int i = 0; i < n; i++) {
    //     if (s[i] == c) {
    //         int steps(0);
    //         for (int j = i + 1; j < 2 *n; j++) {
    //             steps++;
    //             if (s[j % n] == 'g') {
    //                 max_steps = std::max(steps, max_steps);
    //                 break;
    //             }
    //         }
    //     }
    // }
    int first_green = s.find('g'), first = s.find(c);
    int last_green = s.rfind('g'), last = s.rfind(c);
    std::cout << max_steps << std::endl;
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