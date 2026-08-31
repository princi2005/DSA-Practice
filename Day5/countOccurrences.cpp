#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 5, 1, 6};
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        bool alreadyCounted = false;

        // Check: kya ye element pehle aa chuka hai?
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        cout << arr[i] << " :- " << count << endl;
    }

    return 0;
}