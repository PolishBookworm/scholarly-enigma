#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int sum = a + b;
    if (sum == 21) std::cout << "Blackjack!";
    else std::cout << sum;

    return 0;
}
