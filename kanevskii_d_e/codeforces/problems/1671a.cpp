#include <iostream>
#include <string>
#include <cmath>


void solve()
{
    std::string s;
    std::cin >> s;
    int curr_a(0), curr_b(0);
    bool answer = true;

    for (int i = 0; i < s.size(); i++) {
        if ((i == 0 || s[i] != s[i - 1]) && (i == s.size() - 1 || s[i] != s[i + 1])) {
            std::cout << "no" << std::endl;
            return;
        }
    }
    std::cout << "yes" << std::endl;
    return;
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