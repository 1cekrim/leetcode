/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
class Solution
{
 public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int result = 0;

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[result] != nums[i])
            {
                nums[++result] = nums[i];
            }
        }

        return ++result;
    }
};
