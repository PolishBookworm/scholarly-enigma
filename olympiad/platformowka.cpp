#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	long long data[4];
	for (auto i = 0; i < 4; i ++) std::cin >> data[i];
	if (data[0] > data[2])
	{
		auto a = data[0];
		data[0] = data[2];
		data[2] = a;
		a = data[1];
		data[1] = data[3];
		data[3] = a;
	}

	if (data[1] < data[2]) std::cout << "NIE\n";
	else if (data[3] < data[1]) std::cout << data[3] - data[2] << '\n';
	else std::cout << data[1] - data[2] << '\n';

	return 0;
}