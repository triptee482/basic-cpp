#include <iostream>
int main()
{
    int i, n, cnt;
    std::cin>>n;
    cnt = 1;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
        if (cnt > 2)
        {
            break;
        }
    }
    if (cnt == 2)
    {
        std::cout << n << " is a prime number";
    }
    else
    {
        std::cout << n << " is not a prime number";
    }
}