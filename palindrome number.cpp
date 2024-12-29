#include <iostream>
int main()
{
    int n, reverse, temp;
    std::cout << "enter a number ";
    std::cin >> n;
    temp = n;

    for (; n != 0;)
    {
        reverse = (reverse + (n % 10)) * 10;
        n = n / 10;
    }
    reverse = reverse / 10;

    if (temp == reverse)
    {
        std::cout << "it is a palindrome number";
    }
    else
    {

        std::cout << "it is not a palindrome number";
    }

    return 0;
}