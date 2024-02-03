#include <iostream>

int binsearch(unsigned int n, int data[], int val);

int main() {
    unsigned int Z;
    std::cin >> Z;
    for (unsigned int i = 0; i < Z; ++ i) {
        unsigned int n;
        std::cin >> n;
        n ++;
        int data[n];
        for (int j = 0; j < n-1; ++ j) std::cin >> data[j];
        data[n-1] = data[n-2] + 1;
        unsigned int q;
        std::cin >> q;
        for (int j = 0; j < q; ++ j) {
            int val;
            std::cin >> val;
            unsigned int a = binsearch(n, data, val);
            unsigned int b = binsearch(n, data, val+1);
            if (data[a] != val) std::cout << 0 << '\n'; // maybe not needed
            else std::cout << b-a << '\n';
        }


    }

    return 0;
}

int binsearch(unsigned int n, int data[], int val) {
    unsigned int b = 0, e = n-1;
    while (b < e) {
        unsigned int mid = (b+e) / 2;
        if (data[mid] >= val) e = mid;
        else b = mid + 1;
    }
    return b;
}
