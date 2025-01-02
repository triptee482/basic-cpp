#include <iostream>

int main()
{
        int n, i, total;
        std::cout << "enter a number: ";
        std::cin >> n;
        total = 0;

        /* for(i=1; i<=n; i++){
                 total = total + i;
         }*/
        // sum of first n even numbers
                 for (i = 1; i <= n * 2; i++)
                {
                        if (i % 2 != 0)
                        total = total + i;
                }
                
        std::cout << "sum of first an even number: " << " = " << total;

        return 0;
}