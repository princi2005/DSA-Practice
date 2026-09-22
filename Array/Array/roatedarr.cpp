#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[]={1,2,3,4,5,6,7};
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[(i - k + n) % n];
    }
   
    
    return 0;
}