#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& price)
    {
        
        if (price.empty()) return 0;

        int maxProfit = 0;
        int bestbuy = price[0];

        for (int i = 1; i < price.size(); i++) {

            if (price[i] > bestbuy) {
                maxProfit = max(maxProfit, price[i] - bestbuy);
            }

            bestbuy = min(bestbuy, price[i]);
        }

        return maxProfit;
    }
};