#include <iostream>

int main() {
    int Z;
    std::cin >> Z;

    while (Z--) {
        long long num;
        std::cin >> num;
        std::string res = "";
        while (num) {
            res = std::to_string(num % 2) + res;
            num /= 2;
        }
        if (res=="") std::cout << 0 << '\n';
        else std::cout << res << '\n';
    }

    return 0;
}
