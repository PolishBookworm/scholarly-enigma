#include <iostream>

int main() {
    float r, H;
    float A, V;
    const float pi = 3.14;

    std::cout << "Podaj promień:\n";
    std::cin >> r;
    std::cout << "Podaj wysokość walca:\n";
    std::cin >> H;

    A = (2 * pi * r * H) + (2 * pi * r * r);
    V = pi * r * r * H;

    std::cout << "Pole powierzchni tego walca to: " << A << ", a jego objętość to: " << V << ".";

    return 0;
}
