#include <iostream>
#include <cstdlib>
#include <fstream>

bool isPrime(long long a);
bool isSuperPrime(long long a);

int main()
{
    std::ifstream in ("liczby.txt");
    std::ofstream out1 ("pierwsze.txt");
    std::ofstream out2 ("superpierwsze.txt");

    int numPrimes = 0;
    int numSuperPrimes = 0;
    long long a;
    while(!in.eof())
    // int N = 1000;
    // while (N)
    {
        // N --;
        in >> a;
        if (isPrime(a))
        {
            numPrimes ++;
            out1 << a << '\n';
            if (isSuperPrime(a))
            {
                numSuperPrimes ++;
                out2 << a << '\n';
            }
        }
    }
    in.close();
    out1.close();
    out2.close();

    std::cout << "Liczba liczb pierwszych: " << numPrimes << '\n';
    std::cout << "Liczba liczb superpierwszych: " << numSuperPrimes << '\n';

    return EXIT_SUCCESS;
}

bool isPrime(long long a)
{
    if (a < 2) return 0;
    for (long long i = 2; i*i <= a; i++)
        if (a % i == 0) return 0;
    return 1;
}
bool isSuperPrime(long long a)
{
    if (!isPrime(a))
        return 0;
    int x = 0;
    while (a)
    {
        x += a % 10;
        a /= 10;
    }
    return isPrime(x);
}

