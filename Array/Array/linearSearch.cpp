#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size,int target){
   for (int i = 0; i < size; i++)
   {
     if (arr[i] == target)
     {
        return i;
     }
   }
   return -1;
   
}
int main()
{
    int arr[] = {1,3,6,31,7,4};
    int size = 6;
    int target = 31;
    cout<<LinearSearch(arr,size,target);
    return 0;
}