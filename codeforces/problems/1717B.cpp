#include <iostream>
#include <vector>
#include <string>

int main()
{
    int t(0);
    std::cin >> t;
   // std::vector<std::string> result;
   // result.reserve(100);

    while(t--)
    {
       // result.push_back("");
        int n(0), k(0), r(0), c(0);
        std::cin >> n >> k >> r >> c;
        r -= 1, c -= 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if ((i + j + (k - r) + (k - c)) % k == 0){
                  //  result[t] += "X";
                  std::cout << "X";
                } else {
                  //  result[t] += ".";
                  std::cout << ".";
                }
            }
            // result[t] += "\n";
            std::cout << '\n';
        }
    }
  /*  for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << "\n";
    }*/
}
