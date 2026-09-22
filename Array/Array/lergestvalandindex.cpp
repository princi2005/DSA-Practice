#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[]={12,5,18,3,9};
    int largest = arr[0];
    int index=0;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
           
            largest=arr[i];
            index=i;
        }
        
    }
     cout<<index<<endl;
    cout<<largest;
    return 0;
}