#include<iostream>
using namespace std;

void twosum (int arr[], int n,int target)
{
	
	for(int i = 0; i<n; i++)
	{
	    for(int j = i+1; j<n; j++)
		{
			if(arr[i]+arr[j] == target)
			{
                cout<<"target :"<<target<<endl;
				cout<<i <<" "<<j;
			}
		}
	} 
}

int main()
{
	int arr[]= {2,7,11,12};
	int n = 4;
    int target = 9;
	twosum(arr,n,target);
	return 0;
}