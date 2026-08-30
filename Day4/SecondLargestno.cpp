#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            
            second = arr[i];
        }
    }

    cout << second;

    return 0;
}