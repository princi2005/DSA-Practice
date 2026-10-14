#include <iostream>
using namespace std;

int main()
{
    int nums[]={1,2,3,1};
    int n = 4;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (nums[i]==nums[j])
            {
                count++; 
            }   
        }
    }
    if (count < 0)
    {
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    
    return 0;
}