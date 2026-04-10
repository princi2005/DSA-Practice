#include<iostream>
using namespace std;

int SumOfDigit(int num){
    int digitSum = 0;
    while(num > 0)
    {
        int lastdigit = num%10;
        num = num/10;
        digitSum = digitSum+lastdigit;
    }
    return digitSum;
}
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    cout<<"The sum of number from 1 to " <<num<< " is "<<SumOfDigit(num);
    return 0;
}