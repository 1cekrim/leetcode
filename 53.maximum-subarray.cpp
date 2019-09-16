/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
#include <vector>
using namespace std;
class Solution
{
 public:
    int maxSubArray(vector<int>& nums)
    {
        int result = -2147483648;
        for (int i = 0, s = 0; i < nums.size(); ++i)
            result = (s = s < 0 ? nums[i] : s + nums[i]) > result ? s : result;
        return result;
    }
};
