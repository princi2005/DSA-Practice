#include<iostream>
using namespace std;

int trailingZeroes(int n)
{
    int count = 0;

    while(n > 0)
    {
        n = n / 5;
        count += n;
    }

    return count;
}

int main(){
    
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"The sum of number from 1 to " <<n<< " is "<<trailingZeroes(n);
    return 0;
}