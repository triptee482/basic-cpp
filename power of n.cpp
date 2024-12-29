#include <iostream>

int main()
{

    int n = 5, temp = 1;

    for (int i = 1; i <= n; i++)
    {
        temp = temp * n;
    }

    std::cout << n << " power of " << n << " = " << temp;

    return 0;
}