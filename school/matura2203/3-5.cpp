#include <iostream>
#include <fstream>

int gcd(int x, int y);

int main() {
    // int n = 5;
    int n = 1000;
    std::ifstream in("liczby.txt");
    // std::ifstream in("liczby_przyklad.txt");
    int res = 0;
    // std::cout << "hi" << std::endl;
    for (int i = 0; i < n; i ++) {
        int M, a, b;
        // std::cout << "hi2" << std::endl;
        in >> M >> a >> b;
        // if (gcd(a,M)==1) res ++;
        int g = gcd(a,M);
        if (g == 1) res ++;
        else {
            // a = a % M;
            if (g == gcd(b,M)) {
                res ++;
                std::cout << ' ' << a << ' ' << b << ' ' << M << std::endl;
            }
        }
        // std::cout << "hi4" << std::endl;
    }
    in.close();
    std::cout << res;
    return 0;
}

int gcd(int x, int y) {
    if (x < y) std::swap(x,y);
    if (y == 0) return 0;
    if (x % y == 0) return y;
    return gcd(y,x%y);
}

