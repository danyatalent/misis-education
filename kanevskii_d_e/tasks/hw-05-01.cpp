#include <iostream>
#include <cmath>

const int a(-1), b(1);
const double step(0.1), epsilon(0.001);


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
    return (std::pow(-1, i) * (std::pow(x, 2 * i) / factorial(i * 2)));
}


int main()
{
    double sum = 0;
    int i = 0;
    double member = 0;
    std::cout << "x " << "s(x) " << "f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        member = s(x, 0);
        sum = member;
        // sum += member;
        i = 1;
        while (std::abs(member) > epsilon) {
            member = s(x, i); 
            sum += member;
            i++;
        }
        std::cout << (std::abs(x) < 0.09 ? 0 : x) << ' ' << sum << ' ' << std::cos(x) << std::endl;
    }
}