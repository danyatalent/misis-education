// Правильные слова
// 1. После согласной идет гласная
// 2. После согласной n может идти любая буква или ничего
// input = слово, output = yes||no
#include <iostream>
#include <string>


int main()
{
    std::string s;
    std::cin >> s;
    bool fair = true;
    for (int i = 0; i < s.size(); i += 1) {
        if (s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e') {
            s[i] = 'a';
        }
    }

    if (s[s.size() - 1] != 'n' && s[s.size() - 1] != 'a') {
        fair = false;
    }
    else {
        char prev = s[0];
        for (int i = 1; i < s.size(); i += 1) {
            if ((prev != 'a' && prev != 'n') && (s[i] != 'a')) {
                fair = false;
                break;
            }
            prev = s[i];
        }
    }
    std::cout << (fair ? "yes" : "no") << std::endl;
    return 0;
}