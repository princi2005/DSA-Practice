
#include<iostream>
#include<vector>
using namespace std;

int mountain(vector<int> &A)
{
	int st = 0, end = A.size()-1;
   
	while(st <= end)
	{
         int mid = st + (end - st)/2;
		if(A[mid-1] < A[mid] && A[mid] > A[mid+1])
		{
			return mid;
		}
		else if(A[mid-1] < A[mid])
		{
			st = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}	
int main()
{
	vector<int> Arr = {0,3,8,9,5,2};
	cout<<mountain(Arr);
	return 0;
}