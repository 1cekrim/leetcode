/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    int searchInsert(vector<int>& nums, int target)
    {
        int result = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] >= target && (i == 0 || nums[i - 1] < target))
            {
                result = i;
                break;
            }
        }
        return result == -1 ? nums.size() : result;
    }
};
