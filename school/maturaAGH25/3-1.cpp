#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ifstream in("takty.txt");
	// std::ifstream in("takty_przyklad.txt");
	// int N = 10;
	int N = 1000;

	// ABCDEFG
	int S[7];
	int A[7];
	int T[7];
	int B[7];

	for (int i = 0; i < N; i ++) {
		int n;
		in >> n;
		for (int j = 0; j < n; j ++) {
			std::string tmp;
			in >> tmp;
			S[(int) tmp[0] - 65] ++;
			A[(int) tmp[1] - 65] ++;
			T[(int) tmp[2] - 65] ++;
			B[(int) tmp[3] - 65] ++;
		}
	}

	int maxi = 0;
	int max_val = 0;
	for (int i = 0; i < 7; i ++) {
		if (S[i] > max_val) {
			maxi = i;
			max_val = S[i];
		}
	}

	std::cout << "S: " << (char) (maxi + 65) << '\n';

	maxi = 0;
	max_val = 0;
	for (int i = 0; i < 7; i ++) {
		if (A[i] > max_val) {
			maxi = i;
			max_val = A[i];
		}
	}

	std::cout << "A: " << (char) (maxi + 65) << '\n';

	maxi = 0;
	max_val = 0;
	for (int i = 0; i < 7; i ++) {
		if (T[i] > max_val) {
			maxi = i;
			max_val = T[i];
		}
	}

	std::cout << "T: " << (char) (maxi + 65) << '\n';

	maxi = 0;
	max_val = 0;
	for (int i = 0; i < 7; i ++) {
		if (B[i] > max_val) {
			maxi = i;
			max_val = B[i];
		}
	}

	std::cout << "B: " << (char) (maxi + 65) << '\n';

	in.close();
	return 0;
}