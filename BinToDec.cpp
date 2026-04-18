//convert binary to decimal number.

#include<iostream>
using namespace std;

int BinToDecimal(int BinNum){
    int ans = 0;
    int power = 1;

    while (BinNum > 0)
    {
        int rem = BinNum % 10;
        BinNum/=10;
        ans += rem*power;
        power *= 2;
    }
    return ans;
}

int main(){

    cout<<BinToDecimal(110010)<<endl;
    return 0;
}