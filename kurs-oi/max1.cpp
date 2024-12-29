#include <iostream>

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	int max = 0;
	for (int i = 0; i < n; i ++)
	{
		int tmp;
		std::cin >> tmp;
		if (tmp > max)
			max = tmp;
	}
	std::cout << max;

	return 0;
}