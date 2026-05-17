#include<iostream>
using namespace std;

int SumOfDigit(int num)
{
    int sumDigit=0;

    while (num>0)
    {
        int lastsum = num%10;
        num = num/10;
        sumDigit+=lastsum;
    }
    return sumDigit;
}
int main()
{
    int num;
    cout<<"Enter a number ";
    cin>>num;
    cout<<"The sum of number from 1 to " <<num<< " is "<<SumOfDigit(num);
    return 0;
}