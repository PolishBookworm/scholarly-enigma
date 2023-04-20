#include <iostream>

void display(int *fp, int a);

int main() {
    const int a = 20;
    int field[a][a] = {0};
    int *fp = &field[0][0];

    display(fp, a);

    return 0;
}

void display(int *fp, int a) {
    for (int i = 0; i < a; i ++) {
        for (int j = 0; j < a; j ++) std::cout << *(fp + i * 10 + j) << ' ';
        std::cout << std::endl;
    }
}
