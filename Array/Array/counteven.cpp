#include <iostream>
using namespace std;

int main()
{
    int num[]={3, 8, 5, 10, 7, 2};
    int n = 6;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
       if (num[i]%2==0)
       {
          count++;
       }
    }
    cout<<count;
    return 0;
}