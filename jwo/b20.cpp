#include <iostream>

void insert(int k, int x, int N, int tree[]);
int query(int v, int p, int q, int l, int r, int N, int tree[]);
void display(int N, int tree[]);

int main(int argc, char const *argv[])
{
	int z;
	std::cin >> z;
	
	while (z--)
	{
		int n, m;
		std::cin >> n >> m;
		int N = 1;
		while (N < n) N *= 2;
		N *= 2;
		int tree[N] = {0};

		for (int i = 0; i < n; i ++)
		{
			int tmp;
			std::cin >> tmp;
			insert(i, tmp, N, tree);
		}
		// display(N, tree);
		while (m--)
		{
			std::string func;
			std::cin >> func;
			int a, b;
			std::cin >> a >> b;
			if (func[0]=='M')
			{
				a --;
				b --;
				std::cout << query(1, a, b, 0, N/2-1, N, tree) << '\n';
			} 
			else 
			{
				a --;
				insert(a, b, N, tree);
				// display(N, tree);
			}
		}
	}

	return 0;
}

void insert(int k, int x, int N, int tree[])
{
	k += N/2;
	tree[k] = x;
	for (int i = k/2; i > 0; i /= 2) tree[i] = std::max(tree[2*i+1], tree[2*i]);
}

int query(int v, int p, int q, int l, int r, int N, int tree[])
{
	if (p<=l && q >=r)
	{
		// std::cout <<"1"; 
		return tree[v];
	}
	int ans = -2147483648;
	int mid = (l+r)/2;
	if (p <= mid)
	{
		// std::cout<<"2";
		ans = std::max(query(2*v, p, q, l, mid, N, tree), ans);
	}
	if (q > mid)
	{
		// std::cout <<"3";
		ans = std::max(query(2*v+1, p, q, mid+1, r, N, tree), ans);
	}
	return ans;
}

void display(int N, int tree[])
{
	std::cout << '\n';
	for (int i = 0; i < N; i ++) std::cout << tree[i]<<'\n';
	std::cout << '\n';
}
