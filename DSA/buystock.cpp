#include <iostream>
using namespace std;

int main()
{
    int price[] = {3, 2, 6, 5, 0, 3};
    int n = 6;

    int bp = price[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (price[i] < bp)
        {
            bp = price[i];
        }
        else
        {
            int profit = price[i] - bp;

            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    cout << maxProfit;
    return 0;
}