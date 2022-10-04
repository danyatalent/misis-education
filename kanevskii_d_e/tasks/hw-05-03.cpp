#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


const int a(0), b(1);
const double step(0.1), epsilon(0.0001);


int factorial(const int& n)
{
    int result(1);
    if (n == 0) return 1;
    else {
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}


double s(const double& x, const int& i)
{
    return (std::pow(2 * x, i) / factorial(i));
}


double f(const double& x)
{
    return std::pow(M_E, 2 * x);
}


int main()
{
    double sum = 0;
    double member = 0;
    int i = 0;
    std::cout << "x " << "s(x) " << "f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        sum = member = s(x, 0);
        i = 1;
        while (std::abs(member) > epsilon) { 
            member = s(x, i);
            sum += member;
            i++;
        }
        std::cout << x << ' ' << sum << ' ' << f(x) << std::endl;
    }    
}