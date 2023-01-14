#include <iostream>

using namespace std;

int main()
{
    float r, H;
    float A, V;
    const float pi = 3.14;

    cout << "Podaj promień:" << endl;
    cin >> r;
    cout << "Podaj wysokość walca:" << endl;
    cin >> H;

    A = (2 * pi * r * H) + (2 * pi * r * r);
    V = pi * r * r * H;

    cout << "Pole powierzchni tego walca to: " << A << ", a jego objętość to: " << V << "." << endl;

    return 0;
}
