#include <iostream>

int sumDivisors(int num) {
    int result = 0;
    for (int i = 1; i*i <= num; i ++) {
        if (num % i == 0) {
            if (num / i == i) result += i;
            else result += i + (num / i);
        }
    }
    return result;
}


int numDivisors(int num) {
    int result = 0;
    for (int i = 1; i*i <= num; i ++) {
        if (num % i == 0) {
            if (num / i == i) result += 1;
            else result += 2;
        }
    }
    return result;
}


int main() {
    int n;
    std::cout << "How many elements? ";
    std::cin >> n;
    int nums[n];
    std::cout << "Enter elements:\n";
    for (int i = 0; i < n; i ++) std::cin >> nums[i];
    std::cout << '\n';

    int max_ = nums[0];
    for (int i = 1; i < n; i ++) if (nums[i] > max_) max_ = nums[i];
    std::cout << max_ << "\n\n";

    for (int i = 0; i < n; i ++) std::cout << sumDivisors(nums[i]) << '\n';
    std::cout << '\n';

    for (int i = 0; i < n; i ++) std::cout << numDivisors(nums[i]) << '\n';
    std::cout << '\n';

    for (int i = 0; i < n; i ++) if (numDivisors(nums[i]) == 2) std::cout << nums[i] << '\n';


    return 0;
}
