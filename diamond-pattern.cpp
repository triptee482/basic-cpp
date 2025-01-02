#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    for (int i = 1, comp = -1; i <= (n * 2); i++)
    {
        if (i <= ((n * 2) / 2))
        {
            comp++;
        }
        else
        {
            comp--;
        }

        int spacecond = (n * 2) - comp;
        for (int j = 1; j <= spacecond; j++)
        {
            std::cout << "  ";
        }

        for (int k = i; k <= (comp * 2) + i; k++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }
    return 0;
}