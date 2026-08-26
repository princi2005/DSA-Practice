
#include<iostream>
using namespace std;

int largestElement (int arr[], int n)
{
	int largestElement = arr[0];
	for(int i = 0; i<n; i++)
	{
		if(largestElement < arr[i])
		{
			largestElement = arr[i];
		}
	}
	return largestElement; 
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = 5;
	cout<<largestElement(arr,n);
	return 0;
}