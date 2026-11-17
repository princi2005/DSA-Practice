#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int totalSum = 0;

    // Calculate total sum
    for (int i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }

    int leftSum = 0;

    // Find pivot index
    for (int i = 0; i < nums.size(); i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            cout << "Pivot Index: " << i;
            return 0;
        }

        leftSum += nums[i];
    }

    cout << "Pivot Index: -1";

    return 0;
}