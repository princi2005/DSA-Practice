#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[]={12,5,18,3,9};
    int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
           largest=arr[i];
           cout<<"Position "<<i<<endl;
        }
        
    }
    cout<<"largest value "<< largest;
    return 0;
}