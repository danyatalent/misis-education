#include <iostream>
#include <string>


void solve()
{
    int n(0);
    std::cin >> n;
    std::string s;
    while (n--) {
        std::cin >> s;
        if (s.size() > 10) {
            std::cout << s[0] << std::to_string(s.size() - 2) << s[s.size() - 1] << std::endl;
        }
        else {
            std::cout << s << std::endl;
        }
    }
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    solve();
    return 0;
}