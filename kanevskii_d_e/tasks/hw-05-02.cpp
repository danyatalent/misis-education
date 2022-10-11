#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

const int a(0), b(1);
const double step(0.05), epsilon(0.001);


double s(const double& x, const int& i)
{
    return (std::pow(x, i) * std::sin(i * M_PI_4));
}


double f(const double& x)
{
    return ((x * std::sin(M_PI_4)) / (1 - 2 * x * std::cos(M_PI_4)));
}


int main()
{
    int i = 1;
    double sum = 0;
    double member = 0;
    std::cout << "x " << "s(x) " << "f(x)" << std::endl;
    for (double x = a; x < b + step; x += step) {
        member = s(x, 1);
        sum = member;
        i = 2;
        while (std::abs(member) > epsilon || i % 4 == 0) {
            member = s(x, i);
            sum += member;
            i++;
        }
        std::cout << x << ' ' << sum << ' ' << f(x) << std::endl;
    }
}