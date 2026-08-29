#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1 || n==0)
    {
        return n;
    }
    return n*fact(n-1);
}
int main()
{
    int n = 145;
    int org = n;
    int fac=0;
    while (n>0)
    {
        int digit = n%10;
        fac +=fact(digit) ;
        n=n/10;
    }
    if (org == fac)
    {
        cout<<"its strong no";
    }
    else{
        cout<<"its not strong";
    }
    
    return 0;
}