#include <iostream>

int main()
{
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;
    std::cout<<"You entered: "<<n<<std::endl;

    int reverse = 0;

    while (n != 0)
    {
        reverse = (reverse + n % 10) * 10;
        n /= 10;
    }

    reverse /= 10;

    std::cout << "reverse: " << reverse;

    return 0;
}