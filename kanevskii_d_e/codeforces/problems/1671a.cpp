#include <iostream>
#include <string>
#include <cmath>


bool is_prime(int& x)
{
    for (int i = 2; i < std::sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}


void solve()
{
    std::string s;
    std::cin >> s;
    int curr_a(0), curr_b(0);
    bool answer = true;

    s[0] == 'a' ? curr_a = 1 : curr_b = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'a' && curr_b == 0) {
            curr_a++;
        }
        else if (s[i] == 'b' && curr_a == 0) {
            curr_b++;
        }
        else if (s[i] == 'b' && curr_a != 0) {
            if (!is_prime(curr_a)) {
                std::cout << "no" << std::endl;
                return;
            } else {
                curr_a = 0;
                curr_b++;
            }
        }
        else if (s[i] == 'a' && curr_b != 0) {
            if (!is_prime(curr_b)) {
                std::cout << "no" << std::endl;
                return;
            } else {
                curr_b = 0;
                curr_a++;
            }
        }

    }
    if (curr_a > 0) {
        std::cout << (is_prime(curr_a) ? "yes" : "No") << std::endl;
    }
    else if (curr_b > 0) {
        std::cout << (is_prime(curr_b) ? "yes" : "No") << std::endl;
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