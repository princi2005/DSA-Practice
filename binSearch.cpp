#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> arr, int tar)
{
    int st = 0;
    int end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1 = {-1, 0, 4, 5, 8, 10, 12};
    int targ1 = 12;
    cout << binSearch(arr1, targ1);
    return 0;
}