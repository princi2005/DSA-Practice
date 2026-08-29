#include <iostream>
using namespace std;

int main()
{
    int n = 145;
    int org = n;

    int factorial[10] = {
        1, 1, 2, 6, 24,
        120, 720, 5040, 40320, 362880
    };

    int sum = 0;

    while(n > 0)
    {
        int digit = n % 10;
        sum += factorial[digit];
        n = n / 10;
    }

    if(org == sum)
        cout << "its strong no";
    else
        cout << "its not strong";

    return 0;
}