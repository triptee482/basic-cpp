#include <iostream>
#include <string>
using namespace std;
int main()
{

    string name;
    cout << "name: ";
    cin >> name;

    float age;
    cout << "age: ";
    cin >> age;
    if (age < 10 || age > 100)
    {
        cout << "age is invailid";
        return 0;
    }

    char gender;
    cout << "Gender: ";
    cin >> gender;

    if (gender == 'F' || gender == 'f')
    {
        cout << "ms ";
    }
    else if (gender == 'M' || gender == 'm')
    {
        cout << "mr ";
    }

    if (age >= 18)
    {
        cout << name << " you are eligible for vote";
    }
    else
    {
        cout << name << " you are not eligible for vote";
    }
    

    return 0;
}
