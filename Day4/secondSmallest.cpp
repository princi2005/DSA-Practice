#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int smallest = arr[0];
    int second = arr[1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second)
        {
            second = arr[i];
        }
    }

    cout << second;

    return 0;
}