#include <iostream>

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int data[n][2];
	for (auto i = 0; i < n; i++) std::cin >> data[i][0] >> data[i][1];
	for (auto i : data) std::cout << i[0] + i[1] << ' ' << i[0] * i[1] << '\n';

	return 0;
}