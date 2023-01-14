#include <iostream>
#include <cmath>

float proWay(float x, float a, float b, float c, int k, int l, int m);
float normalWay(float x, float a, float b, float c, int k, int l, int m);
float rec(float x, int n);
float it(float x, int n);

int main()
{
    std::cout << "a*x^k + b*x^l + c*x^m" << std::endl;
    float x, a, b, c;
    int k, l, m;
    std::cout << "Please input variables in the following order: x, a, b, c, k, l, m:" << std::endl;
    std::cin >> x;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> k;
    std::cin >> l;
    std::cin >> m;

    // std::cout << std::endl << proWay(x, a, b, c, k, l, m) << std::endl;
    std::cout << std::endl << normalWay(x, a, b, c, k, l, m) << std::endl;

    return 0;
}

float proWay(float x, float a, float b, float c, int k, int l, int m)
{
    return a * pow(x, k) + b * pow(x, l) + c * pow(x, m);
}

float normalWay(float x, float a, float b, float c, int k, int l, int m)
{
    // return a * rec(x, k) + b * rec(x, l) + c * rec(x, m);
    return a * it(x, k) + b * it(x, l) + c * it(x, m);
}

float rec(float x, int n)
{
    if (n == 0) return 1.0;
    return x * rec(x, n-1);
}

float it(float x, int n)
{
    float result = 1;
    while (n > 0)
    {
        result *= x;
        n--;
    }
    return result;
}
