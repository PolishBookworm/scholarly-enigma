#include <iostream>
#include <string>
#include <vector>

bool isAnagram(std::string anagram, char *str, int *len);

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;
	std::cin >> n >> m;
	std::string msg;
	std::string frag;
	std::cin >> msg >> frag;

	std::vector<int> results;
	for (auto i = 0; i <= n - m; i ++)
	{
		if (isAnagram(frag, &msg[i], &m)) results.push_back(i+1);
	}

	std::cout << results.size() << '\n';
	for (auto i : results) std::cout << i << ' ';

	return 0;
}

bool isAnagram(std::string original, char *str, int *len)
{
	for (auto i = 0; i < *len; i ++) for (auto j = 0; j < original.length(); j ++)
	{
		if (str[i] == original[j])
		{
			original = original.substr(0,j) + original.substr(j+1);
			break;
		}
	}
	if (original != "") return false;
	return true;
}