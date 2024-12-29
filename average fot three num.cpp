#include <iostream>

int main()
{

    int num1, num2, num3;
    num1 = 2;
    num2 = 4;
    num3 = 6;
    int total = num1 + num2 + num3;

    std::cout << "average of three numbers: "
              << total / 3
              << std::endl;
}