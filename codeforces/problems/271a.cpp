#include <iostream>

const int maxYear = 9999;

int main()
{
    int year(0);
    std::cin >> year;
    for (int currentYear = year + 1; currentYear <= maxYear; currentYear++) {
        int thounsands = currentYear / 1000;
        int hundreds = currentYear % 1000 / 100;
        int tens = currentYear % 100 / 10;
        int units = currentYear % 10;

        bool different = thounsands != hundreds;
        different = different && thounsands != tens;
        different = different && thounsands != units;
        different = different && hundreds != tens;
        different = different && hundreds != units;
        different = different && tens != units;
        if (different) {
            std::cout << currentYear << std::endl;
            break;
        }
    }
}