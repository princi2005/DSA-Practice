#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}