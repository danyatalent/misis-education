#include <iostream>
#include <cmath>

int number_of_twos(int x) 
{
    int res(0);
    while (x > 0) {
        if (x % 2 == 0) {
            res++;
            x /= 2;
        }
        else {
            break;
        }
    }
    return res;
}


void solve()
{
    int n(0), twos(0);
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a(0);
        std::cin >> a;
        int x = number_of_twos(a);
        twos += x;
    }
    //std::cout << twos << std::endl;
    if (twos >= n) {
        std::cout << 0 << std::endl;
        return;
    }
    else {
        int steps(0);
        int p = log2(n);
        twos += p;
        steps++;
        if (twos >= n) {
            std::cout << steps << std::endl;
            return;
        }
        else {
            while (p--) {
                for (int i = 1; i <= n; i++) {
                    if (number_of_twos(i) == p) {
                        steps++;
                        twos += p;
                    }
                    if (twos >= n) {
                        std::cout << steps << std::endl;
                        return;
                    }
                }
            }
            std::cout << -1 << std::endl;
            return;
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