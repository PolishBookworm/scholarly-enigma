#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int data[4];
	for (int i = 0; i < 4; i ++) std::cin >> data[i];
	for (auto i : data) std::cout << i << '\n';
}