#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[]={5,3,4,3,2,5};
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
            if (arr[i] == arr[j])
            {
                 cout<<arr[i];
                return 0;
            }
            
       }
       
    }
    
    return 0;
}