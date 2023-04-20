#include <iostream>

typedef std::pair<int,int> couple;

int gcd(int a, int b);
int lcm(int a, int b);
couple add(couple num1, couple num2);
couple subtract(couple num1, couple num2);
couple multiply(couple num1, couple num2);
couple divide(couple num1, couple num2);
couple simplify(couple num);

int main(int argc, char const *argv[]) {
	// int n;
	// std::cin >> n;
	// couple nums[n];
	// for (int i = 0; i < n; i ++) std::cin >> nums[i].first >> nums[i].second;
	// std::cout << "a - addition, s - subtraction, m - multiplication, d - division\n";
	// char operation;
	// std::cin >> operation;
	std::cout << add(std::make_pair(1,2), std::make_pair(1,2)).first << add(std::make_pair(1,2), std::make_pair(1,2)).second;
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) return b;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a,b);
}

couple add(couple num1, couple num2) {
	int a = lcm(num1.second, num2.second);
	int a1 = (int)((float)a / (float)num1.second);
	int a2 = (int)((float)a / (float)num2.second);
	return std::make_pair(num1.first*a1 + num2.first*a2,a);
}

couple subtract(couple num1, couple num2);
couple multiply(couple num1, couple num2) {
	return std::make_pair(num1.first*num2.first, num1.second*num2.second);
}

couple divide(couple num1, couple num2) {
	return std::make_pair(num1.first*num2.second, num1.second*num2.first);
}

couple simplify(couple num);