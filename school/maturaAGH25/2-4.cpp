#include <iostream>
#include <fstream>

bool isPrime(int a);

int main(int argc, char const *argv[])
{
	int N = 1000;
	// int N = 30;
	std::ifstream in("studenci.txt");
	// std::ifstream in("studenci_przyklad.txt");
	int cols;
	in >> cols;

	int numB = 0;
	int lastA = 0;

	for (int j = 0; j < N; j ++) {
		std::string tmp;
		in >> tmp;
		char first = tmp[0];
		if ((first == 'A' || first == 'E' || first == 'I' || first == 'O' || first ==  'U' || first == 'Y') && (isPrime(j+1)))
			lastA = j;
		else
			numB ++;
	}

	// std::cout << numB << ' ' << lastA;
	std::cout << numB - (N-lastA-1) + 1;

	in.close();
	return 0;
}

bool isPrime(int a) {
	if (a < 2) return 0;
	for (int i = 2; i*i <= a; i ++) if (a % i == 0) return 0;
	return 1;
}