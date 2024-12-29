// Online C++ compiler to run C++ program online
#include <iostream>
int main()
{
    int i, j, n;
    //   n=5;
    std::cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}