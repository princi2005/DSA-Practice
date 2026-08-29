#include <iostream>
using namespace std;

int main()
{
    int a = 24;
    int b = 36;
    int cf = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            cf = i;
        }
        
    }
    cout<<"HCF/GCD: "<<cf;
    
    return 0;
}