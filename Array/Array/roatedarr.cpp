#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;

    k = k % n;

    // Reverse complete array
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse first k elements
    for (int i = 0, j = k-1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse remaining elements
    for (int i = k, j = n-1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}