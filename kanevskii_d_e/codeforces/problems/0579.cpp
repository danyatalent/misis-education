#include <iostream>


int main()
{
    int n(0);
    std::cin >> n;
    int counter = 0;
    while (n > 0) {
        counter += n & 1;
        n >>= 1;
    }
    std::cout << counter << std::endl;
}