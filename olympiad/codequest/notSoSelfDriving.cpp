#include <iostream>

std::string action(float v, float s);

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	float data[n][2];
	for (auto i = 0; i < n; ++ i)
	{
		std::string tmp;
		std::cin >> tmp;
		int pos = tmp.find(':');
		data[i][0] = std::stof(tmp.substr(0,pos));
		data[i][1] = std::stof(tmp.substr(pos+1));
	}

	for (auto i : data) std::cout << action(i[0], i[1]) << '\n';

	return 0;
}

std::string action(float v, float s)
{
	if (s/v <= 1) return "SWERVE";
	if (s/v <= 5) return "BRAKE";
	return "SAFE";
}