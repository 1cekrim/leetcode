/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    int maxProfit(vector<int>& prices)
    {
        int result = 0;

        for (int i = 1; i < prices.size(); ++i)
        {
            if (int t = prices[i] - prices[i - 1]; t > 0)
            {
                result += t;
            }
        }

        return result;
    }
};
