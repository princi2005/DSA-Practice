#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSubArray(vector<int>& nums){
    int currSum=0;
    int maxSum = INT_MIN;
    
    for(int val:nums){

        currSum+=val;
        maxSum=max(currSum,maxSum);

        if (currSum < 0)
        {
           currSum = 0;
        }
        
    }
    return maxSum;
}

int main(){
    vector<int> nums = {1,-3,5,8,-7};
    cout<<MaxSubArray(nums);
}