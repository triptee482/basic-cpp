#include <iostream>
long long power(int n, int m)
{
    int i;
    long long temp;
    temp = 1;

    for (i = 1; i <= m; i++)
    {
        temp = temp * n;
    }

    return temp;
}

int main()
{
    long long n, temp, total;
    int length;
    std::cout<<"enter a number: ";
    std::cin>>n;
    temp=n;
    total=0;
    length = std::to_string(n).length();


    while(temp != 0){
        total= total + power(temp % 10, length);
        temp= temp / 10;
    }

    if(n == total){
        std::cout<<n<<" is an armstong number";
    }else{
        std::cout<<n<<" is not an armstrong number";
    }

    return 0;
}