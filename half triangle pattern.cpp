#include <iostream>
using namespace std;

int main()
{
        int n, i, total, eventotal, oddtotal;
        std::cout << "enter a number: ";
        std::cin >> n;
        total = 0;
        eventotal = 0;
        oddtotal = 0;

        for (i = 1; i <= n; i++)
        {
                total = total + i;
        }
        std::cout << "sum of first " << n << " numbers: " << total << std::endl;
        // sum of first n even numbers
        for (i = 1; i <= n * 2; i++)
        {
                if (i % 2 == 0)
                {
                        eventotal = eventotal + i;
                }
                else if (i % 2 != 0)
                {
                        oddtotal = oddtotal + i;
                }
        }
        std::cout << "summ of first " << n << "even number: " << eventotal << std::endl;
        std::cout << "sum of first " << n << "odd number: " << oddtotal << std::endl;

        return 0;
}