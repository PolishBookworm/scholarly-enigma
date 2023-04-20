#include <iostream>
#include <algorithm>

int main() {
    unsigned int n;
    std::cout << "How many elements?\n";
    std::cin >> n;
    int table[n];

    float avg;
    std::cout << "Please input elements:\n";
    for (unsigned int i = 0; i < n; i ++) {
        std::cin >> table[i];
        avg += table[i];
    }
    avg /= n;

    std::cout << "Elements greater than average:\n";
    for (unsigned int i = 0; i < n; i ++) {
        if (table[i] > avg) {
            std::cout << table[i] << '\n';
        }
    }

    return 0;
}
