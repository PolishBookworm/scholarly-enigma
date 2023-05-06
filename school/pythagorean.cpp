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
bool dicksonFactor(int r, int s);
int dickson(int limit);
// repetitions
// 0.008 0.006 0.007 0.008 0.008
bool dicksonFactorComparison(int r, int s);
int dicksonComparison(int limit);
// 0.007 0.007 0.007 0.007 0.007
// it works!

int main() {
    int limit = 1000;
    // std::cout << pala(limit) << '\n';
    // std::cout << triangleInequalityMin(limit) << '\n';
    // std::cout << triangleInequalityAnd(limit) << '\n';
    // std::cout << wSqrt(limit) << '\n';
    // std::cout << dickson(limit) << '\n';
    std::cout << dicksonComparison(limit) << '\n';
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
            if (dicksonFactor(r, s)) counter ++;

    return counter;
}

bool dicksonFactor(int r, int s) {
    if (r*r / 2 % s == 0) {
        int t = r*r / (2*s);
        int a = r + s;
        int b = r + t;
        int c = r + s + t;
        if (c > 1000) return false;
        std::cout << a << ' ' << b << ' ' <<  c << std::endl;
        return true;
    }
    return false;
}

int dicksonComparison(int limit) {
    int counter = 0;

    for (int r = 2; r <= limit; r += 2)
        for (int s = 1; s < r; s ++)
            if (dicksonFactorComparison(r, s)) counter ++;

    return counter;
}

bool dicksonFactorComparison(int r, int s) {
    if (r*r / 2 % s == 0) {
        int t = r*r / (2*s);
        if (s > t) return false;
        int a = r + s;
        int b = r + t;
        int c = r + s + t;
        if (c > 1000) return false;
        std::cout << a << ' ' << b << ' ' <<  c << std::endl;
        return true;
    }
    return false;
}