#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target = 7;
    cout<<binarysearch(arr,n,target);
    return 0;
}