/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution
{
 public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> data;
        int n = 0;
        for (auto& num : nums)
        {
            const int t = target - num;
            auto i = data.find(t);
            if (i != data.end())
            {
                return { i->second, n };
            }

            data.insert({ num, n++ });
        }

        return std::vector<int>();
    }
};
