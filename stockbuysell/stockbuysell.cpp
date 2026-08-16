#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>prices)
{
	int maxprofit = 0 , buy = prices[0];
	for(int i = 0; i<prices.size(); i++)
	{
		if(prices[i] > buy)
		{
			maxprofit = max(maxprofit, prices[i] - buy);
		}
		buy = min(buy,prices[i]);
	}
	return maxprofit;	
}
int main()
{
	vector<int> prices = {7,1,5,3,6,4};
	cout<<maxProfit(prices);
	return 0;
}