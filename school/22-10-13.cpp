#include <iostream>
#include <cmath>

int main() {
    float a, b, c;
    std::cout << "Please provide triangle side lengths.\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    // Checks for no-triangle scenario
    if (!((a + b > c) && (b + c > a) && (c + a > b))) std::cout << "Triangle doesn't exist";

    else {
        // Classifies by angles
        if ((a*a + b*b == c*c) || (b*b + c*c == a *a) || (c*c + a*a == b*b)) std::cout << "Right triangle\n";
        else if ((a*a + b*b < c*c) || (b*b + c*c < a*a) || (c*c + a*a < b*b)) std::cout << "Obtuse tiangle\n";
        else std::cout << "Acute triangle\n";

        // Classifies by sides
        if (a == b && b == c) std::cout << "Equilateral triangle\n";
        else if (a == b || b == c || c == a) std::cout << "Isoceles triangle\n";
        else std::cout << "Obtuse triangle\n";

        // Calculates perimeter & area (using Heron's formula)
        float P = a + b + c;
        float s = P / 2;
        float A = sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "Perimeter = " << P << '\n';
        std::cout << "Area = " << A;

    }

    return 0;
}
