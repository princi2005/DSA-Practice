#include <iostream>
using namespace std;

int main()
{
    int a = 36;
    int b = 24;
    while (b!=0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    return 0;
}