#include <iostream>
#include <array>
#include <string>

const int MAX_CHAR = 26;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t(0);
    std::cin >> t;
    while(t--){
        int n(0), k(0);
        std::string s;
        std::array<int, MAX_CHAR> special_alph;
        std::cin >> n >> s >> k;

        for (int i = 0; i < MAX_CHAR; i++){
            special_alph[i] = 0;
        }

        for (int i = 0; i < k; i++){
            char ch;
            std::cin >> ch;
            special_alph[ch - 'a'] = 1;
        }

        int count(0), answer(0);
        for (int i = 0; i < n; i++){
            if(special_alph[s[i] - 'a'] == 1){
                answer = count > answer ? count : answer;
                count = 1;
            } else {
                count++;
            }
        }
        std::cout << answer << '\n';
    }
}
