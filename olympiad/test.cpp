#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	// char list[4] = {'d', 'a', 'w', 'g'};
	char list[] = "dawg";
	// int list[4] = {4, 2, 3, 1};
	std::sort(list, list + 4);
	for (auto i : list) std::cout << i;

	char li2[] = "adgw";
	if (list == li2) std::cout << "yup";

	// std::sort doesn't work on std::string, btw

	int l[4] = {5, 3, 4, 4};
	std::sort(l, l + 4);
	for (auto i : l) std::cout << i;

	int a;
	std::cin >> a;
	std::cout << a;

	return 0;
}