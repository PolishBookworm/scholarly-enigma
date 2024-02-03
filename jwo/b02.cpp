#include <iostream>

int main() {
    unsigned int z;
    std::cin >> z;
    for (int i =0; i < z; ++ i) {
        unsigned long p;
        unsigned long long q;
        std::cin >> p >> q;
        unsigned long b = 1;
        unsigned long e = 1000*1000;
        unsigned long s;
        bool sol = 0;
        // while (b <= e ) {
        //     s = (b + e)/2;
        //     unsigned long long func = s*s*s + p*s;
        //     if (func < q) b = s + 1;
        //     else if (func > q) e = s-1;
        //     else {
        //         sol = 1;
        //         break;
        //     }
        // }
        // if (sol == 1) std::cout << s << '\n';
        // else std::cout << "NIE\n";

        while (b < e ) {
            s = (b + e)/2;
            unsigned long long func = s*s*s + p*s;
            if (func >= q) e = s;
            else b = s + 1;
        }
        s = (b + e)/2;
        if (s*s*s + p*s == q) std::cout << s << '\n';
        else std::cout << "NIE\n";

    }

    return 0;
}
