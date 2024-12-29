#include <iostream>
 
  int main(){

  int n=5;

    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n;j++)
        {
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    
    for(int l=1;l<=n;l++){
        for(int m=1;m<=l;m++){
            std::cout<<" ";
        }
        for(int p=l;p<=n;p++){
            std::cout<<"* ";
        }
            std::cout<<std::endl;
    }
            
    return 0;
  }