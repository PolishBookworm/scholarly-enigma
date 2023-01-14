#include <iostream>
#include <algorithm>

using std::cout, std::cin, std::endl;

int main()
{
    unsigned int n;
    cout << "How many elements?" << endl;
    cin >> n;
    int table[n];

    float avg;
    cout << "Please input elements:" << endl;
    for (unsigned int i = 0; i < n; i ++)
    {
        cin >> table[i];
        avg += table[i];
    }
    avg /= n;

    cout << "Elements greater than average:" << endl;
    for (unsigned int i = 0; i < n; i ++)
    {
        if (table[i] > avg)
        {
            cout << table[i] << endl;
        }
    }

    return 0;
}
