#include <iostream>
#include <algorithm>

int binsearch(unsigned int n, int data[], int val);

int main() {
    long long z;
    std::cin >> z;

    while (z--) {
        short N, Q;
        std::cin >> N;
        int V[N];
        for (short i = 0; i < N; i ++) std::cin >> V[i];
        std::cout << "before sort";
        std::sort(V, V + N);
        std::cout << "after sort";

        // prefix sums
        long long sums[N+1] = {0};
        sums[N] = 0;
        for (int i = N-1; i >= 1; i ++) sums[i] = sums[i+1] + V[i-1];
        std::cout << "here";

        std::cin >> Q;

        while (Q--) {
            long long P;
            std::cin >> P;
            // short res = 0;
            // while (P > 0) {
            //     P -= V[N - 1 - res];
            //     res ++;
            // }
            // std::cout << res << '\n';
            std::cout << "qwertyuiop";
            std::cout << binsearch(N, V, P) << '\n';
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
