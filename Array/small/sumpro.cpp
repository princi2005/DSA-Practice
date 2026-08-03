#include <iostream>
using namespace std;

int main()
{
    // int sum = 0;
    int sz=5;
    int product = 1;
    int arr[]={1,2,3,4,5};
    for (int i = 0; i < sz; i++)
    {
        // sum+=arr[i];
        product*=arr[i];
    }
    cout<<product;
    return 0;
}