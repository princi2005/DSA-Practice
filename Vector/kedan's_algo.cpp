#include <iostream>
#include <climits>
using namespace std;

int maxSubArray(int nums[], int size) {
    int maxsum = INT_MIN;
    int cursum = 0;

    for (int i = 0; i < size; i++) {
        cursum += nums[i];

        maxsum = max(maxsum, cursum);

        if (cursum < 0) {
            cursum = 0;
        }
    }

    return maxsum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;

    cout << maxSubArray(nums, size);

    return 0;
}