#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int st = 0; st< n; st++)
    {
       for (int end = st; end < n; end++)
       {
            cout<<end;
       }
       cout<<endl;
    }
    return 0;
}