#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;
	std::cin >> n >> m;
	char msg[n];
	char frag[m];
	std::cin >> msg >> frag;
	std::sort(frag, frag + m);

	std::vector<int> results;
	for (auto i = 0; i <= n - m; i ++)
	{
		char cache[m];
		for (auto j = 0; j < m; j ++) cache[j] = msg[j+i];
		std::sort(cache, cache + m);
		bool isOk = 1;
		for (auto j = 0; j < m; j ++) if (frag[j] != cache[j])
		{
			isOk = 0;
			break;
		}
		if (isOk) results.push_back(i+1);
	}

	std::cout << results.size() << '\n';
	for (auto i : results) std::cout << i << ' ';

	return 0;
}