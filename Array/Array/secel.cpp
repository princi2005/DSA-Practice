#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[]={7,2,9,4,1,8};
    int largest = arr[0];
    int secondlargest = 0;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
           secondlargest=largest;
           largest=arr[i];
        }
        else if (secondlargest < arr[i] && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    
    cout<<"second largest value = "<<secondlargest;
    return 0;
}