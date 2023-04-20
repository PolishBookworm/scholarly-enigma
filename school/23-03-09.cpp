#include <iostream>
#include <string>
#include <algorithm>

bool ex6_5(int num1, int num2);
bool isPrime(int num);
bool ex6_6(int num);

int main(int argc, char const *argv[]) {
	// int n1, n2;
	// std::cin >> n1 >> n2;
	// if (ex6_5(n1,n2)) std::cout << "Yes\n";
	// else std::cout << "No\n";
	
	int num;
	std::cin >> num;
	if (ex6_6(num)) std::cout << "Yes\n";
	else std::cout << "No\n";
	return 0;
}

bool ex6_5(int num1, int num2) {
	if (!(isPrime(num1)) || !(isPrime(num2))) return false;
	auto str1 = std::to_string(num1);
	auto str2 = std::to_string(num2);
	std::reverse(str1.begin(), str1.end());
	if (str1 == str2) return true;
	return false;
}

bool ex6_6(int num) {
	if (num < 2 || isPrime(num)) return false;
	for (int i = 2; i*i <= num; i++) if (num % i == 0 && isPrime(i) && isPrime(num / i)) return true;
	return false;
}

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i*i <= num; i++) if (num % i == 0) return false;
	return true;
}