#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 3, 0, 5, 2};
    int n = 6;

    int j = n - 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}