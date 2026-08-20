#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num[]={1,2,3,4,5};
    int sz = 5;
    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < sz; i++)
    {
        if (num[i] < num[smallest])
        {
            smallest = i;
        }
        if (num[i] > num[largest])
        {
            largest = i;
        }
    }
    swap(num[smallest], num[largest]);
    for (int i = 0; i < sz; i++)
    {
        cout<<num[i];
    }
    
    
    return 0;
}