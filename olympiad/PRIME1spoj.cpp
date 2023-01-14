#include <iostream>

bool isPrime(unsigned long num);

int main()
{
    int t;
    std::cin >> t;
    unsigned long data[t][2];

    for (int i = 0; i < t; i ++)
    {
        std::cin >> data[i][0];
        std::cin >> data[i][1];
    }

    for (int i = 0; i < t; i ++)
    {
        for (unsigned long j = data[i][0]; j <= data[i][1]; j ++)
        {
            if (isPrime(j)) std::cout << j << '\n';
        }
        std::cout << '\n';
    }

    return 0;
}

bool isPrime(unsigned long num)
{
    if (num < 2) return false;
    for (unsigned int i = 2; i*i <= num; i ++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
