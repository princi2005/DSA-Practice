#include<iostream>
using namespace std;

void resverseArray(int arr[],int size){
    int start = 0, end = size = size-1;
    while(start < end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    
}
int main(){
    int arr[]={2,4,8,10,12,9};
    int size = 6;
    
    resverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}