#include <iostream>

struct Dot
{
    double x = 0;
    double y = 0;
};

int main() 
{
    Dot t;
    int dots = 0;
    int res = 0;
    while (std::cin >> t.x >> t.y) {
        dots += 1;
        if (t.x * t.x + t.y * t.y <= 4 || t.y >= 2 - (t.x * t.x)) {
            res += 1;
        }
    }
    std::cout << res / dots * 100 << '%';
    return 0;
}