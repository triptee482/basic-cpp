#include <iostream>
int main()
{

    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    for (int i = 1, comp = -1; i <= n*2; i++)
    {
        if (i <= n)
        {
            comp++;
        }
        else
        {
            comp--;
        }

        int spaceCond = (n - comp);
        for (int j = 1; j <= spaceCond; j++)
        {
            std::cout << "  ";
        }
        for (int k = i; k <= (comp * 2) + i; k++)
        {
            int comp2 = (comp * 3 + i)/2 +1;
            if (k == i || k == (comp * 2 + i) || i == n || k == comp2)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}