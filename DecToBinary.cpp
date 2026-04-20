//convert decimal to binary number 

#include<iostream>
using namespace std;

int DecToNum(int decNum)
{
    int ans = 0;
    int power = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans = ans + (rem*power);
        power *= 10;
    }
    return ans;
}
int main(){

    for (int i = 1; i <= 10; i++)
    {
        cout<<DecToNum(i)<<endl;
    }
    
    return 0;
}