#include<iostream>
using namespace std;

int main(){
    int smallestNum = INT8_MIN;
    int num[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        if (num[i] > smallestNum)
        {
           smallestNum = num[i];
        }
    }
    cout<<smallestNum;
   
    
    return 0;
}