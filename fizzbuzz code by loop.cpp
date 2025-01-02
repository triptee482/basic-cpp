#include <iostream>

int main()
{
        int n, i, num1, num2;
        num1 = 2;
        num2 = 5;

        std::cout << "enter a number: ";
        std::cin >> n;

        for (i = 1; i <= n; i++)
        {
                if (i % num1 == 0 && i % num2 == 0)
                {
                        std::cout << "FizzBuzz" << std::endl;
                }
                else if (i % num2 == 0)
                {
                        std::cout << "Buzz" << std::endl;
                }
                else if (i % num1 == 0)
                {
                        std::cout << "Fizz" << std::endl;
                }

                else
                {
                        std::cout << i << std::endl;
                }
        }

        return 0;
}