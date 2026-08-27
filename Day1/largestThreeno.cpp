#include <iostream>
using namespace std;

int main()
{
    int num1;
    cin>>num1;

    int num2;
    cin>>num2;

    int num3;
    cin>>num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout<<num1<<" is a Largest no";
    }

    else if (num2 >= num3)
    {
        cout<<num2<<" is a Largest no";
    }

    else 
    {
        cout<<num3<<" is a Largest no";
    }
    

    return 0;
}