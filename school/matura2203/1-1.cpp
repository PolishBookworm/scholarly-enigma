#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	// int N = 9;
	int N = 125;
	// std::ifstream in("szachy_przyklad.txt");
	std::ifstream in("szachy.txt");

	int resNum = 0;
	int resMax = 0;

	for (int i = 0; i < N; i ++) {
		std::string tmp;
		int yay[8];
		int numLines = 8;
		for (int j = 0; j < 8; j ++) yay[j] = 1;
		for (int j = 0; j < 8; j ++) {
			in >> tmp;
			for (int k = 0; k < 8; k ++) {
				if (yay[k] == 1 && tmp[k] != '.') {
					numLines --;
					yay[k] = 0;
				}
			}
		}
		if (numLines > 0) {
			resNum ++;
			resMax = std::max(resMax, numLines);
		}
	}

	in.close();

	std::cout << resNum << ' ' << resMax;

	return 0;
}
