#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}