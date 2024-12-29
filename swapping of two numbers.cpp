#include <iostream>

int main()
{
    int num1, num2, num3;
    num1 = 1;
    num2 = 2;
    std::cout << "before swapping\n";
    std::cout << "num1=" << num1 << std::endl;
    std::cout << "num2=" << num2 << std::endl;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    std::cout << "after swapping\n";
    std::cout << "num1=" << num1 << std::endl;
    std::cout << "num2=" << num2;

    return 0;
}