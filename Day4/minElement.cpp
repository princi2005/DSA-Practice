#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    // int maxElement = INT16_MIN;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
    //    maxElement = max(maxElement,arr[i]);
            if(arr[i] < max){
                max = arr[i];
            }
    }
    cout<<max;
    return 0;
}