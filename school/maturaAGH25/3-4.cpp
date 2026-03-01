#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ifstream in("takty.txt");
	// std::ifstream in("takty_przyklad.txt");
	// int N = 10;
	int N = 1000;

	// SATB
	char curr[4];
	int len[4];
	int max[4];
	for (int i = 0; i < 4; i ++) {
		curr[i] = 'Q';
		len[i] = 0;
		max[i] = 0;
	}


	for (int i = 0; i < N; i ++) {
		int n;
		in >> n;
		for (int j = 0; j < n; j ++) {
			std::string tmp;
			in >> tmp;

			for (int k = 0; k < 4; k ++) {
				if (tmp[k] == curr[k]) len[k] ++;
				else {
					curr[k] = tmp[k];
					if (max[k] < len[k]) max[k] = len[k];
					len[k] = 1;
				}
			}
			
		}
	}

	int maxi = 0;
	int maxV;
	for (int i = 0; i < 4; i ++) {
		if (max[i] > maxi) {
			maxi = max[i];
			maxV = i;
		}
	}

	switch (maxV) {
		case 0:
			std::cout << "Sopran: " << maxi;
			break;
		case 1:
			std::cout << "Alt: " << maxi;
			break;
		case 2:
			std::cout << "Tenor: " << maxi;
			break;
		case 3:
			std::cout << "Bas: " << maxi;
			break;
		default:
			std::cout << "ups";
	}

	in.close();
	return 0;
}