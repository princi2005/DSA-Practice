#include<iostream>
using namespace std;

int SumOfNum(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"The sum of number from 1 to " <<n<< " is "<<SumOfNum(n);
    return 0;
}