#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    int t(0);
    std::cin >> t;
    std::vector<int> result;
    result.reserve(10000);
    while(t--){
        int n(0), m(0), sx(0), sy(0), d(0);
        std::cin >> n >> m >> sx >> sy >> d;

        if(std::min(sx - 1, m - sy) <= d && std::min(n - sx, sy - 1) <= d){
            result.push_back(-1);
        }
        else{
            result.push_back(abs(n - 1) + abs(m - 1));
        }
    }

    for(int i = 0; i < result.size(); i++) std::cout << result[i] << std::endl;
    return 0;
}
