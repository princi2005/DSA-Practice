#include<iostream>
using namespace std;
int remove(int arr[],int size){
    
 for (int i = 0; i < size; i++)
 {
    while (arr[i] == arr[i])
    {
        cout<<"duplicate"<<i;
    }
    
 }
 
    
}
int main(){
    int arr[]={1,1,2,3,4};
    int size = 5;
    cout<<remove(arr,size);
    return 0;
}