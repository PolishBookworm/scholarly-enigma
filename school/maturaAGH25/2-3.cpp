#include <iostream>
#include <fstream>
#include <string>

int gcd(int a, int b);

int main(int argc, char const *argv[])
{
	int N = 1000;
	// int N = 30;
	std::ifstream in("studenci.txt");
	// std::ifstream in("studenci_przyklad.txt");
	int cols;
	in >> cols;

	std::string first;
	in >> first;

	int len = first.length();

	int index = cols/gcd(cols,len);


	std::string tmp;
	for (int i = 1; i < index; i ++) in >> tmp;
	std::cout << tmp;

	in.close();
	return 0;
}

int gcd(int a, int b) {
	if (a < b) std::swap(a,b);
	if (b == 0) return a;
	return gcd(b, a%b);
}