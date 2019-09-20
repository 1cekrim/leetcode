/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    int maxProfit(vector<int>& prices)
    {
        int result = 0, buyPrice = 2147483647;

        for (auto& price : prices)
        {
            if (buyPrice > price)
            {
                buyPrice = price;
            }
            else if (price - buyPrice > result)
            {
                result = price - buyPrice;
            }
        }

        return result;
    }
};
