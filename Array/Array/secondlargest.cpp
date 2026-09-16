#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int largest=0;
    int seclargest=0;
    for (int i = 0; i < n; i++)
    {
       if (largest<arr[i])
       {
           seclargest=largest;
           largest=arr[i];
       }
    }
    cout<<seclargest;
    return 0;
}