#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;
	int result[n];
	int cache[2] = {0};
	for (int i = 0; i < n; i ++)
	{
		std::cin >> cache[1];
		result[i] = cache[1] - cache[0];
		cache[0] = cache[1];
	}
	for (auto i : result) std::cout << i << ' ';

	return 0;
}