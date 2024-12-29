#include <iostream>
int main()
{
    int n = 10;
    int m = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for (int x = 1; x <= m; x++)
    {
        for (int y = 1; y <= m + 1; y++)
        {
            std::cout << "  ";
        }
        for (int z = 1; z <= m - 1; z++)
        {
            std::cout << " *";
        }
        std::cout << std::endl;
    }
    std::cout << "merry christmas";

    return 0;
}