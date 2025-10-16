#include <cstdio>
#include <algorithm>

bool goesThrough(int w1, int z1, int w2, int z2);

int main()
{
	int n, m;
	std::scanf("%d%d", &n, &m);
	m--;
	int obw[n][2];
	for (int i = 0; i < n; i ++) std::scanf("%d%d", &obw[i][0], &obw[i][1]);

	int maxObw1[2] = {obw[m][0], obw[m][1]};
	int left = 0;
	for (int i = m-1; i >= 0; i --)
	{
		if (!goesThrough(maxObw1[0], maxObw1[1], obw[i][0], obw[i][1]))
		{
			left ++;
			maxObw1[0] = std::min(maxObw1[0], obw[i][0]);
			maxObw1[1] = std::max(maxObw1[1], obw[i][1]);
		}
		// std::cout << left << '\n';
	}
	// std::cout << '\n';
	

	int maxObw2[2] = {obw[m][0], obw[m][1]};
	int right = 0;
	for (int i = m + 1; i < n; i ++)
	{
		if (!goesThrough(maxObw1[0], maxObw1[1], obw[i][0], obw[i][1]))
		{
			right ++;
			maxObw1[0] = std::min(maxObw1[0], obw[i][0]);
			maxObw1[1] = std::max(maxObw1[1], obw[i][1]);
		}
		// std::cout << right << '\n';
	}
	// std::cout << '\n';
	

	std::printf("%d", std::min(left, right));

	return 0;
}

bool goesThrough(int w1, int z1, int w2, int z2)
{
	return (w1 >= z2) || (w2 >= z1);
}