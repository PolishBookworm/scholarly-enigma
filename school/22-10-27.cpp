#include <iostream>
#include <cmath>

using std::cout, std::cin;

int main()
{
    float a = 0, xi, xi_1, delta;
    while (a <= 0)
    {
        cin >> a;
    }
    cin >> delta;

    xi = a;
    xi_1 = 0;

    while (delta < fabs(xi - xi_1))
    {
        xi_1 = xi;
        xi = ((xi + (a / xi)) / 2);
    }

    cout << xi;

    return 0;
}
