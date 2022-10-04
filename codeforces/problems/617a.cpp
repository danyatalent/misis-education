#include <iostream>

int main()
{
    int a(0), steps(0);
    std::cin >> a;
    while (a >= 5) {
        steps += 1;
        a -= 5;
    }
    std::cout << (a == 0 ? steps : ++steps) << std::endl;
    return 0;
}