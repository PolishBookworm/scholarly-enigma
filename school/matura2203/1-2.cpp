#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	// int N = 9;
	int N = 125;
	// std::ifstream in("szachy_przyklad.txt");
	std::ifstream in("szachy.txt");

	int resNum = 0;
	int resMin = 64;

	for (int i = 0; i < N; i ++) {
		std::string tmp;

		int num = 0;
		int fig[6]; // kwshgp
		for (int k = 0; k < 6; k ++) fig[k] = 0;
		for (int j = 0; j < 8; j ++) {
			in >> tmp;
			for (int k = 0; k < 8; k ++) {
				if (tmp[k] != '.') {
					num ++;

					switch (tmp[k]) {
					case 'K':
							// std::cout << tmp[k] << ' ';
							fig[0] ++;
							break;

					case 'k':
							// std::cout << tmp[k] << ' ';
							fig[0] --;
							break;

					case 'W':
							// std::cout << tmp[k] << ' ';
							fig[1] ++;
							break;

					case 'w':
							// std::cout << tmp[k] << ' ';
							fig[1] --;
							break;

					case 'S':
							// std::cout << tmp[k] << ' ';
							fig[2] ++;
							break;

					case 's':
							// std::cout << tmp[k] << ' ';
							fig[2] --;
							break;

					case 'H':
							// std::cout << tmp[k] << ' ';
							fig[3] ++;
							break;

					case 'h':
							// std::cout << tmp[k] << ' ';
							fig[3] --;
							break;

					case 'G':
							// std::cout << tmp[k] << ' ';
							fig[4] ++;
							break;

					case 'g':
							// std::cout << tmp[k] << ' ';
							fig[4] --;
							break;

					case 'P':
							// std::cout << tmp[k] << ' ';
							fig[5] ++;
							break;

					case 'p':
							// std::cout << tmp[k] << ' ';
							fig[5] --;
							break;

					default:
						std::cout << "sth went wrong " << tmp[k] << '\n';
						break;

					}
				// for (int f = 0; f < 6; f ++) std::cout << fig[f] << ' ';
				// std::cout << '\n';
				}
			}
		}
		bool ok = 1;
		for (int f = 0; f < 6 && ok; f ++) if (fig[f] != 0) ok = 0;
		// if (white == black) {
		// 	resNum ++;
		// 	resMin = std::min(resMin, 2*black);
		// }
		// for (int f = 0; f < 6; f ++) std::cout << fig[f] << ' ';
		// std::cout << "\n\n";
		if (ok) {
			resNum ++;
			resMin = std::min(resMin, num);
		}
	}

	in.close();

	std::cout << resNum << ' ' << resMin;

	return 0;
}

// takich samych...