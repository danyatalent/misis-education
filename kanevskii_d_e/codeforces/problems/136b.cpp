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
    for (int i = s.length() - 1; i >= 0; i--) {
        result += int(s[i] - '0') * std::pow(3, s.length() - i - 1);
    }
    return result;
}


std::string tor(const std::string& a, const std::string& b) 
{
    std::string result = "";
    for (int i = a.length() - 1; i >= 0; i--) {
        int tmp = ((a[i] - '0') + (b[i] - '0')) % 3;
        result.append(std::to_string(tmp));
    }
    std::reverse(result.begin(), result.end());
    return result;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    int a(0), c(0), result(0);
    std::cin >> a >> c;
    bool answer = false;
    std::string ternary_a = int_to_ternary(a);
    // std::cout << test_a << std::endl;
    // std::cout << ternary_to_int(test_a);
    // std::reverse(ternary_a.begin(), ternary_a.end());
    while (!answer) {
        std::string ternary_number = int_to_ternary(result);
        while (ternary_number.length() != ternary_a.length()) {
            if (ternary_a.length() > ternary_number.length()) {
                ternary_number.insert(0, 1, '0');
            }
            else {
                ternary_a.insert(0, 1, '0');
            }
        }
        // std::reverse(ternary_number.begin(), ternary_number.end());

        if (tor(ternary_a, ternary_number) == int_to_ternary(c)) {
            answer = true;
        }
        else {
            result += 1;
        }
    }
    std::cout << result << std::endl;
}