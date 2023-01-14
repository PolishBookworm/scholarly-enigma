#include <iostream>

using std::cin, std::cout, std::endl;

int sumDivisors(int num)
{
    int result = 0;
    for (int i = 1; i*i <= num; i ++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
            {
                result += i;
            }
            else
            {
                result += i + (num / i);
            }
        }
    }
    return result;
}


int numDivisors(int num)
{
    int result = 0;
    for (int i = 1; i*i <= num; i ++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
            {
                result += 1;
            }
            else
            {
                result += 2;
            }
        }
    }
    return result;
}


int main()
{
    int n;
    cout << "How many elements? ";
    cin >> n;
    int nums[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i ++) cin >> nums[i];
    cout << endl;

    int max_ = nums[0];
    for (int i = 1; i < n; i ++) if (nums[i] > max_) max_ = nums[i];
    cout << max_ << "\n\n";

    for (int i = 0; i < n; i ++) cout << sumDivisors(nums[i]) << '\n';
    cout << '\n';

    for (int i = 0; i < n; i ++) cout << numDivisors(nums[i]) << '\n';
    cout << '\n';

    for (int i = 0; i < n; i ++) if (numDivisors(nums[i]) == 2) cout << nums[i] << '\n';


    return 0;
}
