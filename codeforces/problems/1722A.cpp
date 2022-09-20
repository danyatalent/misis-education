#include <iostream>
#include <string>

int count(char& ch, std::string& s)
{
	int tmp = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ch) tmp += 1;
	}
	return tmp;
}

int main()
{
	int t(0), len(5);
	std::cin >> t;
	std::string s;
	std::string timur = "Timur";


	while (t--) {
		int n(0);
		std::cin >> n >> s;
		if (n != len) std::cout << "NO\n";
		else {
			int tmp = 0;
			for (int i = 0; i < timur.size(); i += 1) {
				if (count(timur[i], s) == 1) tmp += 1;
			}
			if (tmp == 5) std::cout << "YES\n";
			else std::cout << "NO\n";
		}
	}
	return 0;
}
