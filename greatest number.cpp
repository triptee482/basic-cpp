#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "enter number 1: ";
    std::cin >> num1;
    std::cout<<"enter number 2: ";
    std::cin >> num2;
    std::cout<<"enter number 3: ";
    std::cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        std::cout << num1 << " is greatest number";
    }
    else if (num2 > num1 && num2 > num3)
    {
        std::cout << num2 << " is greatest number";
    }
    else
    {
        std::cout << num3 << " is greatest number";
    }

    return 0;
}