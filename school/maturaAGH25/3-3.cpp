#include <iostream>
#include <fstream>

bool find (std::string str, char ch);
bool tonika (std::string akord);
bool subdominanta (std::string akord);
bool dominanta (std::string akord);

int main(int argc, char const *argv[])
{
	std::ifstream in("takty.txt");
	// std::ifstream in("takty_przyklad.txt");
	// int N = 10;
	int N = 1000;

	int P = 0;
	int D = 0;
	int WD = 0;

	int before = -2;
	int bbefore = -2;
	for (int i = 0; i < N; i ++) {
		int n;
		in >> n;
		for (int j = 0; j < n; j ++) {
			std::string tmp;
			in >> tmp;
			int curr;
			if (tonika(tmp)) curr = 0;
			else if (subdominanta(tmp)) curr = 1;
			else if (dominanta(tmp)) curr = 2;

			if (before == 1 && curr == 0) P ++;
			else if (before == 2 && curr == 0) {
				D ++;
				if (bbefore == 1) WD ++;
			}

			bbefore = before;
			before = curr;
		}
	}


	std::cout << "plagalne: " << P << '\n';
	std::cout << "doskonałe: " << D << '\n';
	std::cout << "wielkie doskonałe: " << WD << '\n';

	in.close();
	return 0;
}

bool find (std::string str, char ch) {
	for (char c : str) if (c == ch) return 1;
	return 0;
}
bool tonika (std::string akord) {
	if (!find(akord, 'C')) return 0;
	if (!find(akord, 'E')) return 0;
	if (!find(akord, 'G')) return 0;
	return 1;
}
bool subdominanta (std::string akord) {
	if (!find(akord, 'F')) return 0;
	if (!find(akord, 'A')) return 0;
	if (!find(akord, 'C')) return 0;
	return 1;
}
bool dominanta (std::string akord) {
	if (!find(akord, 'G')) return 0;
	if (!find(akord, 'B')) return 0;
	if (!find(akord, 'D')) return 0;
	return 1;
}