#include <cstdlib>
#include <iostream>
#include <fstream>

bool isPrime(int a);
bool isSuperPrime(int a);

int main(int argc, char const *argv[])
{
	std::ifstream in ("nums.txt");
	const int N = 5;
	
	int numPrimes = 0;
	int numSuperPrimes = 0;
	int primes[N] = {0};
	int superPrimes[N] = {0};
	for (int i = 0; i < N; i ++)
	{
		int tmp;
		in >> tmp;
		if (isPrime(tmp))
		{
			numPrimes ++;
			primes[i] = tmp;
		}
		if (isSuperPrime(tmp))
		{
			numSuperPrimes ++;
			superPrimes[i] = tmp;
		}

	}
	in.close();

	std::ofstream out1 ("primes.txt");
	out1 << numPrimes << std::endl;
	for (auto i : primes) if (i) out1 << i << std::endl;
	out1.close();
	
	std::ofstream out2 ("superPrimes.txt");
	out2 << numSuperPrimes << std::endl;
	for (auto i : superPrimes) if (i) out2 << i << std::endl;
	out2.close();

	return EXIT_SUCCESS;
}

bool isPrime(int a)
{
	if (a < 2) return 0;
	for (int i = 2; i*i <= a; i++)
		if (a % i == 0)
			return 0;
	return 1;
}

bool isSuperPrime(int a)
{
	if(!isPrime(a))
		return 0;
	int x = 0;
	while (a)
	{
		x += a % 10;
		a /= 10;
	}
	if(!isPrime(x))
		return 0;
	return 1;
}