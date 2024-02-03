#include <iostream>

int pow(unsigned long long a, unsigned int k, unsigned int q);

int main() {
    int Z;
    std::cin >> Z;

    while (Z--) {
        unsigned int a, k, q;
        std::cin >> a >> k >> q;

        std::cout << pow(a,k,q) << '\n';

    }


    return 0;
}

int pow(unsigned long long a, unsigned int k, unsigned int q) {
    if (k == 0) return 1;
    else if (k % 2) return (a * pow(a, k-1, q)) % q;
    else {
        unsigned long long t = pow(a, k/2, q);
        return (t*t) % q;
    }
}
