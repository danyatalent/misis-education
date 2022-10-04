#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

std::string int_to_ternary(const int& number) {
    std::string result = "";
    int x = number;
    while (x > 0) {
        result.append(std::to_string(x % 3));
        x /= 3;
    }
    std::reverse(result.begin(), result.end());
    return result;
}


int ternary_to_int(const std::string& s)
{
    int result = 0;
    for (int i = s.length(); i >= 0; i--) {
        result += int(s[i] - '0') * std::pow(3, s.length() - i - 1);
    }
    return result;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    int a(0), c(0), result(0);
    std::cin >> a >> c;
    bool answer = false;
    std::string test_a = int_to_ternary(a);
    std::cout << test_a << std::endl;
    std::cout << ternary_to_int("112");
    // while (!answer) {
        
    // }
}