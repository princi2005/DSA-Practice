#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    vector<int> ans;
    
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if(pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    int target = 26;
    vector<int> nums = {2, 7, 11, 15};

    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << ans[1];
    return 0;
}


