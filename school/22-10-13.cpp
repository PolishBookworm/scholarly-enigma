#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Please provide triangle side lengths." << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    // Checks for no-triangle scenario
    if (!((a + b > c) && (b + c > a) && (c + a > b)))
    {
        cout << "Triangle doesn't exist";
    }

    else
    {
        // Classifies by angles
        if ((a*a + b*b == c*c) || (b*b + c*c == a *a) || (c*c + a*a == b*b))
        {
            cout << "Right triangle" << endl;
        }
        else if ((a*a + b*b < c*c) || (b*b + c*c < a*a) || (c*c + a*a < b*b))
        {
            cout << "Obtuse tiangle" << endl;
        }
        else
        {
            cout << "Acute triangle" << endl;
        }

        // Classifies by sides
        if (a == b && b == c)
        {
            cout << "Equilateral triangle" << endl;
        }
        else if (a == b || b == c || c == a)
        {
            cout << "Isoceles triangle" << endl;
        }
        else
        {
            cout << "Obtuse triangle" << endl;
        }

        // Calculates perimeter & area (using Heron's formula)
        float P = a + b + c;
        float s = P / 2;
        float A = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Perimeter = " << P << endl;
        cout << "Area = " << A << endl;

    }

    return 0;
}
