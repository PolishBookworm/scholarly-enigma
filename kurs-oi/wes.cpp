#include <iostream>

long long gcd(long long a, long long b);

int main() {
	int z;
	std::cin >> z;
	while (z--) {
		long long n,d;
		std::cin >> n >> d;
		long long x = gcd(n,d);
		if (x == 1) std::cout << n << '\n';
		else std::cout << n/x << '\n';	
	}
	
	return 0;
}

// long long gcd(long long a, long long b) {
// 	bool ctrl = 1;
// 	if (a < b) std::swap(a,b);
// 	while (ctrl) {
// 		a %= b;
// 		if (a == 0) ctrl = 0;
// 	}
// 	return b;
// }

long long gcd(long long a, long long b) {
	if (a < b) std::swap(a,b);
	if (b == 0) return a;
	return (gcd(b,a%b));
}