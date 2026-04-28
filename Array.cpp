#include<iostream>
using namespace std;

int main(){
    int smallestNum = INT8_MIN;
    int num[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > smallestNum)
        {
           smallestNum = num[i];
           index = i;
        }
    }
    cout<<index;    
    return 0;
}