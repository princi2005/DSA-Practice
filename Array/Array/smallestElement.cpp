
#include<iostream>
using namespace std;

int smallestElement (int arr[], int n)
{
	int smallestElement = arr[0];
	for(int i = 0; i<n; i++)
	{
		if(smallestElement > arr[i])
		{
			smallestElement = arr[i];
		}
	}
	return smallestElement; 
}

int main()
{
	int arr[] = {12,5,6,8,9};
	int n = 5;
	cout<<smallestElement(arr,n);
	return 0;
}