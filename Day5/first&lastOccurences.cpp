#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = 6;

    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    cout << "First = " << first << endl;
    cout << "Last = " << last;

    return 0;
}