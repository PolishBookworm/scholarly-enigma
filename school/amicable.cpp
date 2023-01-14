#include <iostream>

int sumProperDivisors(int num);

int main()
{
    int limit; // limit applies to smaller number of amicable pair
    std::cin >> limit;
    for (int num = 1; num <= limit; num ++)
    {
        if ((sumProperDivisors(num) > num) && (sumProperDivisors(sumProperDivisors(num)) == num))
        {
            std::cout << num << ", " << sumProperDivisors(num) << std::endl;
        }
    }
    return 0;
}

int sumProperDivisors(int num)
{
    int result = 0;
    for (int i = 1; i*i <= num; i ++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
            {
                result += i;
            }
            else
            {
                result += i + (num / i);
            }
        }
    }
    return result - num;
}
