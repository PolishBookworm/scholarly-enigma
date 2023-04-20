#include <iostream>
#include <cmath>

int pala(int limit);
// 0.398 0.420 0.401 0.401 0.396
int triangleInequalityMin(int limit);
// 0.469 0.476 0.476 0.462 0.465
int triangleInequalityAnd(int limit);
// 0.268 0.261 0.256 0.268 0.273
int wSqrt(int limit);
// low accuracy bc of sqrt()
// 0.011 0.011 0.013 0.012 0.013
int dickson(int limit);
int dicksonFactor(int r, int s);
// repetitioms
// 0.008 0.006 0.007 0.008 0.008

int main() {
    int limit = 1000;
    // std::cout << pala(limit) << std::endl;
    // std::cout << triangleInequalityMin(limit) << std::endl;
    // std::cout << triangleInequalityAnd(limit) << std::endl;
    // std::cout << wSqrt(limit) << std::endl;
    std::cout << dickson(limit) << std::endl;
    return 0;
}

int pala(int limit) {
    int counter = 0;
    for (int i = 1; i <= limit; i ++) for (int j = i; j <= limit; j ++) for (int k = j; k <= limit; k ++) if (i*i + j*j == k*k) {
        std::cout << i << ' ' << j << ' ' << k << std::endl;
        counter ++;
    }

    return counter;
}

int triangleInequalityMin(int limit) {
    int counter = 0;
    for (int i = 1; i <= limit; i ++) for (int j = i; j <= limit; j ++) for (int k = j; k <= std::min(limit, i + j); k ++) if (i*i + j*j == k*k) {
        std::cout << i << ' ' << j << ' ' << k << std::endl;
        counter ++;
    }

    return counter;
}

int triangleInequalityAnd(int limit) {
    int counter = 0;
    for (int i = 1; i <= limit; i ++) for (int j = i; j <= limit; j ++) for (int k = j; k <= limit && k < i + j; k ++) if (i*i + j*j == k*k) {
        std::cout << i << ' ' << j << ' ' << k << std::endl;
        counter ++;
    }

    return counter;
}

int wSqrt(int limit) {
    int counter = 0;
    for (int i = 1; i <= limit; i ++) for (int j = i; j <= limit; j ++) {
        float k = sqrt(i*i + j*j);
        if (k <= limit && k == floor(k)) {
            std::cout << i << ' ' << j << ' ' << k << std::endl;
            counter ++;
        }
    }
    return counter;
}

int dickson(int limit) {
    int counter = 0;

    for (int r = 2; r <= limit; r += 2)
        for (int s = 1; s < r; s ++)
            if (dicksonFactor(r, s) == 1) counter ++;

    return counter;
}

int dicksonFactor(int r, int s) {
    if (r*r / 2 % s == 0) {
        int t = r*r / (2*s);
        int a = r + s;
        int b = r + t;
        int c = r + s + t;
        if (c > 1000) return 2;
        std::cout << a << ' ' << b << ' ' <<  c << std::endl;
        return 1;
    }
    return 0;
}
