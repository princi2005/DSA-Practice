#include <iostream>
using namespace std;

int main()
{
    int n = 28;
    int org = n;
    int sum  = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i == 0)
        {
           sum = sum+i;
        }
    }
    if (org == sum)
    {
        cout<<"Its perfect no";
    }
    else{
        cout<<"Its not perfect no";
    }
    
    return 0;
}