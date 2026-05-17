#include<iostream>
using namespace std;

int fibonachi(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
   
    int a = 0; 
    int b = 1;
    int c;

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    
       return b;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number is " << fibonachi(n);

    return 0;
}