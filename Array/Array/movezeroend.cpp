#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[]={0,5,0,3,8,0,2};
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           j++;
        }
    }
    for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
    return 0;
}