#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &num, int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> num={1,2,3,4,5,6};
    
    reverseArray(num,num.size());
    for(int x : num){
        cout << x << " ";
    }
    return 0;
}