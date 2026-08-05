#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int>&nums){
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
         
    }
    return ans;
}
int main()
{
    vector<int>nums = {3,2,3,2,4};
    cout<<singleElement(nums);
   
    return 0;
}