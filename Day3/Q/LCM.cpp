#include <iostream>
using namespace std;

int main()
{
    int a = 24;
    int b = 36;
    int lf = 0;
    for (int i = 1;; i++)
    {
        if (i%a == 0 && i%b == 0)
        {
            lf = i;
            break;
        }
        
    }
    cout<<lf;
    return 0;
}