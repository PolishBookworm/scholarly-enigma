#include <iostream>
#include <stack>

bool checkIfOk(bool *terrain, int n, int x, int y);

int main(int argc, char const *argv[])
{
	short m,n;
	std::cin >> m >> n;
	bool terrain[m][n]; // 0 is ocean, 1 is land

	for (int i = 0; i < m; i ++)
	{
		std::string tmp;
		std::cin >> tmp;
		for (int j = 0; j < n; j ++)
		{
			if (tmp[j] == 'l')
				terrain[i][j] = 1;
			else
				terrain[i][j] = 0;
		}
	}

	// for (int i = 0; i < m; i ++)
	// 	for (int j = 0; j < n; j ++)
	// 		std::cout << terrain[i][j];

	bool reachable[m][n];

	for (int i = 0; i < m; i ++)
		for (int j = 0; j < n; j ++)
			reachable[i][j] = 0;

	std::stack<int> toDo[2];

	for (int i = 0; i < m; i ++)
	{
		if (terrain[i][0] && !reachable[i][0])
		{
			reachable[i][0] = 1;
			toDo[0].push(i);
			toDo[1].push(0);
		}
		if (terrain[i][n-1] && !reachable[i][n-1])
		{
			reachable[i][n-1] = 1;
			toDo[0].push(i);
			toDo[1].push(n-1);
		}
	}

	for (int i = 0; i < n; i ++)
	{
		if (terrain[0][i] && !reachable[0][i])
		{
			reachable[0][i] = 1;
			toDo[0].push(0);
			toDo[1].push(i);
		}
		if (terrain[m-1][i] && !reachable[m-1][i])
		{
			reachable[m-1][i] = 1;
			toDo[0].push(m-1);
			toDo[1].push(i);
		}
	}

	while (toDo[0].size())
	{
		int x = toDo[0].top();
		int y = toDo[1].top();
		toDo[0].pop();
		toDo[1].pop();

		if (y > 0)
		{
			if (terrain[x][y-1] && !reachable[x][y-1])
			{
				reachable[x][y-1] = 1;
				toDo[0].push(x);
				toDo[1].push(y-1);
			}
		}

		if (y < n-1)
		{
			if (terrain[x][y+1] && !reachable[x][y+1])
				{
					reachable[x][y+1] = 1;
					toDo[0].push(x);
					toDo[1].push(y+1);
				}
		}

		if (x > 0)
		{
			if (terrain[x-1][y] && !reachable[x-1][y])
				{
					reachable[x-1][y] = 1;
					toDo[0].push(x-1);
					toDo[1].push(y);
				}
		}

		if (x < m-1)
		{
			if (terrain[x+1][y] && !reachable[x+1][y])
				{
					reachable[x+1][y] = 1;
					toDo[0].push(x+1);
					toDo[1].push(y);
				}
		}

	}

	int result = 0;

	for (int i = 0; i < m; i ++)
		for (int j = 0; j < n; j ++)
			if (terrain[i][j] && !reachable[i][j])
				result ++;

	std::cout << result;

	return 0;
}
