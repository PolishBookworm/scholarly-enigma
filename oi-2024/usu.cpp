#include <iostream>

int main(int argc, char const *argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	unsigned long a,b;
	std::cin >> a >> b;
	unsigned long res = b - a;
	if (res%2==1)
	{
		if (res%4==1)
			res--;
		else
			res++;
	}
	std::cout << res;
	return 0;
}