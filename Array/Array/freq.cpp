#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[]={2,5,2,7,5,2,9};
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            cout<<arr[i];
            count++;
        }
        
    }
    cout<<count;
    return 0;
}