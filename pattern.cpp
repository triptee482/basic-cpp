#include <iostream>
void printHollowRectangle(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                std::cout << " * ";
            }
            else
            {
                std::cout << "   ";
            }
        }
        std::cout << std::endl;
    }
}

void printHollowtriangle(int n){
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
    }

}

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    // printHollowRectangle(n);




    return 0;
}