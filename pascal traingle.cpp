#include <iostream>
using namespace std;

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
int main()
{

    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int k = n; k >= i; k--){
            cout<<" ";
        }
        int f = 1;
        for(int j = 1; j<=i; j++){
            cout<<f<<" ";
            f = f * (i - j) / j;
        }
        cout<<endl;
    }

    return 0;
}