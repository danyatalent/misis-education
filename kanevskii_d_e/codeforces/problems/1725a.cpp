#include <iostream>


void solve()
{
    long long n(0), m(0);
    std::cin >> n >> m;
    std::cout << (m == 1 ? n - 1 : (m - 1) * n) << std::endl;

}


int main()
{
    std::ios_base::sync_with_stdio(false);
    solve();
}