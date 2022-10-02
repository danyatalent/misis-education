#include <iostream>
#include <iomanip>
#include <cmath>

const double pi = acos(-1);

int main()
{
    int n(0), r(0);
    std::cin >> n >> r;
    double result(0);
    result = r * (sin(pi / n) / (1 - sin(pi / n)));
    std::cout << std::setprecision(8) << result << std::endl;
    return 0;

}
