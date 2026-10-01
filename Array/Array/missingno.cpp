#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 5, 6};

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i] ;
    }

    int missing = total - sum;

    cout << missing;

    return 0;
}