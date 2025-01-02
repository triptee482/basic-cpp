#include <iostream>

int main()
{

    int i, n, num1, num2, total = 0;
    n = 6;
    num1 = 0;
    num2 = 1;


    std::cout << num1 << ", " << num2 << ", ";
    for (i = 1; i <= n; i++)
    {
        
        total = num1 + num2;
        num1 = num2;
        num2 = total;
        std::cout << total << ", ";
    }

    return 0;
}
