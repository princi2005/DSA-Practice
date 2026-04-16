//calculate decimal to binary number 
#include<iostream>
using namespace std;

int decToBinary(int DecNum){
    int ans=0;
    int power=1;

    while (DecNum>0)
    {
        int rem = DecNum % 2;
        DecNum/=2;
        ans+=(rem * power);
        power*=10;
    }
    return ans;
}
int main(){

    for (int i = 1; i <= 10; i++)
    {
        cout<<decToBinary(i)<<endl;
    }
    return 0;
}