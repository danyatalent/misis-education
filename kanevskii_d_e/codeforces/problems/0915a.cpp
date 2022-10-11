#include <iostream>
#include <array>
#include <algorithm>

const int MAX_N = 100;
std::array<int, MAX_N> buckets;


void solve()
{
    int n(0), k(0), hours(0), min_hours(101);
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> buckets[i];
    }

    for (int i = 0; i < n; i++) {
        if (k % buckets[i] == 0) {
            hours = k / buckets[i];
            min_hours = std::min(hours, min_hours);
        }
    }

    std::cout << min_hours << std::endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    solve();
    return 0;
}