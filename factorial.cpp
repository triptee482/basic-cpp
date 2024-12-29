#include <iostream>
int main()
{
    int i, n, temp;
    n = 0;
    temp = 1;

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            temp = temp * i;
        }
    }
    else
    {
        for (i = -1; i >= n; i--)
        {
            temp = temp * i;
        }
    }

    std::cout << "factorial of " << n << "=" << temp;

    return 0;
}