#include <iostream>
#include <math.h>

void decimalToBinary(int num);

int main() {
	decimalToBinary(2343);

	return 0;
}

void decimalToBinary(int num) {
	int n = ceil(log2(num));
	int result[n];

	for (int i = n-1; i >= 0; i --) {
		result[i] = num % 2;
		num /= 2;
	}

	for (auto i : result) std::cout << i;
	std::cout << '\n';
}