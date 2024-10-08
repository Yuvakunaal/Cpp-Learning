// leetcode - 121 : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Description : You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Learn from : https://youtu.be/WBzZCm46mFo?si=QWlEsDONlBO42GZ0

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices)
{
    int max_profit = 0;
    int best_buy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > best_buy)
        {
            max_profit = max(max_profit, prices[i] - best_buy);
        }
        best_buy = min(best_buy, prices[i]);
    }
    return max_profit;
}

int main()
{
    vector<int> vec = {7,1,5,3,6,4};
    int res = maxProfit(vec);
    cout << "Maximum Profit = " << res << "\n";
    return 0;
}