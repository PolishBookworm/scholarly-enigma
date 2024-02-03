#include <iostream>
#include <algorithm>

int main() {
    unsigned int n;
    std::cin >> n;
    unsigned int bottles[n];
    for (int i = 0; i < n; ++ i) std::cin >> bottles[i];
    std::sort(bottles, bottles + n);
    short Z;
    std::cin >> Z;
    for (int i = 0; i < Z; ++ i) {
        int S;
        std::cin >> S;
        bool sol = 0;
        for (int j = 0; j < n-1; ++ j) {
            unsigned int b = j+1, e = n-1;
            int val = S-bottles[j];
            while (b < e) {
                unsigned int mid = (b+e) / 2;
                if (bottles[mid] >= val) e = mid;
                else b = mid + 1;
            }
            if (bottles[b] == val) sol = 1;
        }
        if (sol == 1) std::cout << "TAK\n";
        else std::cout << "NIE\n";
    }

    return 0;
}
