#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

int main()
{
	int testCases;
	std::cin >> testCases;
	std::string dummy;
	getline(std::cin, dummy);
	for (int testcase = 0; testcase < testCases; testcase++)
	{
		std::string text;
		getline(std::cin, text);
		std::cout << text << '\n';
	}
}