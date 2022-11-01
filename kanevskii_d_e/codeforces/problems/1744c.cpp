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
    int pointer = s.find(c), g_pointer = s.find('g');
    int tmp_pointer = s.find(c, pointer);
    while (tmp_pointer != pointer);
        if (tmp_pointer > tmp_g_pointer) {
            std::cout << n - pointer + g_pointer << std::endl;
            return;
        }
        else {
            max_steps = std::max(max_steps, g_pointer - pointer);
        }
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