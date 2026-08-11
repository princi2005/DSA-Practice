#include <iostream>
#include<vector>
using namespace std;

vector<int> linear(vector<int>arr, int target)
{
    vector<int> ans;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+ arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
        
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {2, 4, 8, 10, 12};
    int target = 6;

    vector<int> ans = linear(arr,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}