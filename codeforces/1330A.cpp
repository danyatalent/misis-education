#include <iostream>
#include <array>
#include <vector>

int main()
{
    const int MAX_V = 201;
    std::array<bool, MAX_V> achieve;
    std::vector<int> result;
    int t(0);
    std::cin >> t;
    while(t--){
        int n(0), x(0);
        std::cin >> n >> x;
        for(int i = 1; i <= n + x; i++){
            achieve[i] = false;
        }

        for(int i = 1; i <= n; i++){
            int rank(0);
            std::cin >> rank;
            achieve[rank] = true;
        }

        for(int i = n + x; i > 0; i--){
            int r(0);
            for(int j = 1; j <= i; j++){
                if(!achieve[j]) r++;
            }
            if(r <= x){
                result.push_back(i);
                break;
            }
        }
    }

    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << std::endl;
    }
}
