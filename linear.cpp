#include<iostream>
using namespace std;
int linear(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
           return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={2,4,8,10,12};
    int size = 5;
    int target = 8;

    cout<<linear(arr,size,target);
    return 0;
}