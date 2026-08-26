#include<iostream>
using namespace std;

void largestElement (int arr[], int n)
{
	int j = 0;
	for(int i = 0; i<n; i++)
	{
		if(arr[i] != 0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	} 

}

int main()
{
	int arr[]= {0,1,0,3,12};
	int n = 5;
	largestElement(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< ",";
    }
    
	return 0;
}