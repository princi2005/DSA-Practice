#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,7,5,9};
    int size = 6;
    int smallest = INT8_MAX;
    int largest = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        else if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<"Smallest No is "<<smallest<<endl;
    cout<<"Largest No is "<<largest;
    return 0;
}