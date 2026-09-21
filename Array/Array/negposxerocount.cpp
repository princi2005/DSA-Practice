#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[]={4,-2,7,0,-5,8,9};
    int poscount = 0;
    int nagcount=0;
    int zerocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            poscount++;
        }
        else if (arr[i] < 0)
        {
            nagcount++;
        }
        else if (arr[i] == 0)
        {

            zerocount++;
        }
        
    }
    cout<<poscount<<endl;
    cout<<nagcount<<endl;
    cout<<zerocount;
    return 0;
}