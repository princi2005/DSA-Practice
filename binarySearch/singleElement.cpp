#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int st = 0;
    int end = nums.size() - 1;

    while (st < end) {

        int mid = st + (end - st) / 2;

        // mid ko even index banayenge
        if (mid % 2 == 1) {
            mid--;
        }

        if (nums[mid] == nums[mid + 1]) {
            // Pair complete hai
            // Single element right side me hai
            st = mid + 2;
        }
        else {
            // Pair break hai
            // Single element left side ya mid par hai
            end = mid;
        }
    }

    return nums[st];
}

int main() {

    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    cout << "Single element = "
         << singleNonDuplicate(nums);

    return 0;
}