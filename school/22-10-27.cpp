#include <iostream>
#include <cmath>

int main() {
    float a = 0, xi, xi_1, delta;
    while (a <= 0) std::cin >> a;
    std::cin >> delta;

    xi = a;
    xi_1 = 0;

    while (delta < fabs(xi - xi_1)) {
        xi_1 = xi;
        xi = ((xi + (a / xi)) / 2);
    }

    std::cout << xi;

    return 0;
}
