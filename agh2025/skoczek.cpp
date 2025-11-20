#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int C[N];
	for (int i = 0; i < N; i ++) std::cin >> C[i];

	int pos = 0;
	int energy = 0;
	int res = 0;
	while (pos < N-1) {
		energy += C[pos];
		int max = 0;
		int maxPos = pos;
		for (int i = 1; i <= energy && pos+i < N; i ++) {
			if (C[pos+i]-i >= max) {
				max = C[pos+i]-i;
				maxPos = i;
			}
		}
		if ((pos + maxPos) == pos) pos = N;
		else {
			pos += maxPos;
			energy -= maxPos;
		}
		res ++;
	}
	if (pos == N) std::cout << "BRAK\n";
	else std::cout << res << '\n';


	return 0;
}