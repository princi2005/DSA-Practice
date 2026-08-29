#include <iostream>
using namespace std;

int main()
{
    int n = 70;
    int org = n;
    int sum = 0;
    while (n>0)
    {
        int digit = n % 10;
        int multiply = digit * digit * digit;
        sum+=multiply;
        n=n/10; 
    }
    if (org == sum)
    {
        cout<<"Its Armstrong number";
    }
    else{
        cout<<"Its not Armstrong";
    }
    
    return 0;
}