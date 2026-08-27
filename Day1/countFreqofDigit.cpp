#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,1,2,2,4};
    int n = 5;
   
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
          {
           
              count++;
           }
        }
        cout << arr[i] << " -> " << count << endl; 
    }
    
    return 0;
}