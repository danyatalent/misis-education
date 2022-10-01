#include <iostream>
#include <string>
#include <algorithm>

void no()
{
    std::cout << "-1" << std::endl;
}

void solve()
{
    int a(0), b(0);
    std::string s;
    std::cin >> a >> b;
    std::cin >> s;
    int n = s.size();
        
    for (int i = 0; i < n; i++){
        if (s[i] != '?'){
            if (s[n - i - 1] == '?') s[n - i - 1] = s[i];
            else if (s[n - i - 1] != s[i]) {
                no();
                return;
             }   
         }
    }

    a -= std::count(s.begin(), s.end(), '0');
    b -= std::count(s.begin(), s.end(), '1');
    int questions = std::count(s.begin(), s.end(), '?');

    bool quesMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
    if (a < 0 || b < 0 || a + b != questions || (quesMid && a % 2 == 0 && b % 2 == 0)){
        no();
        return;
    }

    if (a % 2 == 1 || b % 2 == 1){
        if (s[s.size() / 2] != '?'){
            no();
            return;
        }
        if (a % 2 == 1){
            a--;
            s[s.size() / 2] = '0';
        } else {
            b--;
            s[s.size() / 2] = '1';
        }
    }
    
    if (a % 2 == 1 || b % 2 == 1){
        no();
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            if(a > 0){
                a -= 2;
                s[i] = s[s.size() - i - 1] = '0';
            } else {
                b -= 2;
                s[i] = s[s.size() - i - 1] = '1';
            }
        }
    }
    std::cout << s << std::endl;
}

int main()
{
    int t(0);
    std::cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
