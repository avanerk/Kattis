#include <iostream>
#include <string>

int main() {
	
	std::string m, d;

	std::cin >> m >> d;

	std::string res = (m.length() >= d.length()) ? "go" : "no";

	std::cout << res << std::endl;

}
