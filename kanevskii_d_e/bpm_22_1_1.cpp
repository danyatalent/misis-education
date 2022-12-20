#include <iostream>
#include <cmath>

int main()
{
    const double a = 0.1;
    const double b = 1;
    const double eps = 0.0001;
    const double step = 0.05;
    
    int i = 1;
    double sum = 0;
    std::cout << "x\t" << "sum\n";

    for (double x = a; x <= b + 0.01; x += step) { 
        double member = std::pow(-1, i + 1) * (std::pow(x, 2*i + 1) / (4 * i * i - 1));
        sum += member;
        i = 2;

        while (std::abs(member) >= eps) { 
            member = std::pow(-1, i + 1) * (std::pow(x, 2*i + 1) / (4 * i * i - 1));
            sum += member;
            i += 1;
        }
        std::cout << x << '\t' << sum << std::endl;
    }
    return 0;
}