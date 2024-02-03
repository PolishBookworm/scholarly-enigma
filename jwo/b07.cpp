#include <iostream>

int main() {
    int n;
    std::cin >> n;
    unsigned int data[n];
    for (int i = 0; i < n; i ++) std::cin >> data[i];

    // prefix sums
    long sums[n+1] = {0};
    sums[0] = 0;
    for (int i = 1; i <= n; i ++) sums[i] = sums[i-1] + data[i-1];

    int q;
    std::cin >> q;
    while (q--) {
        int a,b;
        std::cin >> a >> b;
        if (a == b) std::cout << data[a-1] << '\n';
        else std::cout << sums[b] - sums[a-1] << '\n';
    }

    return 0;
}
