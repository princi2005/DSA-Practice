#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[]={2,7,11,15,3,6};
    int target = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == target)
            {
                cout<<arr[i]<<arr[j]<<" ";
                return 0;
            }
            
        }
        
        
    }
    
    return 0;
}