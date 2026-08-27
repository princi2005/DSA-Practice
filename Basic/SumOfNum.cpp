#include<iostream>
using namespace std;

int sum(int n){
   
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}
int main(){
   
    cout<<"The sum of number from 1 to " << " is "<<sum(5);
    return 0;
}