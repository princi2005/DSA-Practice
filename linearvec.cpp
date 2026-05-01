#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.push_back(6);
    int target = 6;
     for (int i = 0; i <num.size() ; i++)
    {
        if (num[i]==target)
        {
            cout<<i;
        }
        
    }
    return 0;

}