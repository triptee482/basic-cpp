#include <iostream>
int power(int n, int m)
{
    int i, temp;
    temp = 1;

    for (i = 1; i <= m; i++)
    {
        temp = temp * n;
    }

    return temp;
}

int main()
{
    int n, temp, total, length;
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
        std::cout<<n<<" is a armstong number";
    }else{
        std::cout<<n<<" is not a armstrong number";
    }

    return 0;
}