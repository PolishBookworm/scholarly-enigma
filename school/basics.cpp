#include <iostream>
#include <cmath>

void strings()
{
    std::string first = "Frodo";
    std::string last = "Baggins";
    std::string full = first + ' ' + last;

    std::string str = "Hello ";
    std::cout << str.append("world!") << std::endl;
    std::cout << str.length() << std::endl;
    std::cout << str.size() << std::endl;

    std::cout << str[0] << std::endl;
    str[0] = 'J';
    std::cout << str << std::endl;

    std::cout << "\"Hello,\" said Charles. \\ \'" << std::endl;
    std::cout << "New\nline" << std::endl;
    std::cout << "No tab\n\ttab" << std::endl;

    std::string input;
    std::cout << "What\'s ur name?" << std::endl;
    // std::cin >> input;
    getline(std::cin, input);
    std::cout << "Hello " << input << std::endl;
}

void math()
{
    std::cout << std::max(5, 10) << std::endl;
    std::cout << std::min(5, 10) << std::endl;

    std::cout << sqrt(64) << std::endl;
    std::cout << round(2.6) << std::endl;
    std::cout << ceil(4.4) << std::endl;
    std::cout << floor(5.6) << std::endl;
    std::cout << log(2) << std::endl; // natural logarithm
    std::cout << abs(-2) << std::endl;
    std::cout << fabs(-2.5) << std::endl; // abs for floats
}

void ternary()
{
    // The ternary operator

    int a = 2, b = 3;


    // Instead of:
    // if (a > b)
    // {
    //     cout << "Yup" << endl;
    // } else
    // {
    //     cout << "Nope" << endl;
    // }
    // Write this:

    std::string result = (a > b) ? "Yup" : "Nope";
    std::cout << result << std::endl;

}

void switch_()
{
    int a = 3;
    switch (a)
    {
        case 1:
            std::cout << "Myyy precious" << std::endl;
            break;
        case 2:
            std::cout << "Mithrandir" << std::endl;
            break;
        default:
            std::cout << "Some LotR msg" << std::endl;
    }
}

void forEach()
{
    int nums[5] = {10, 20, 30, 40, 50};
    for (auto i : nums) std::cout << i << std::endl;
}

int main()
{
    forEach();

    return 0;
}
