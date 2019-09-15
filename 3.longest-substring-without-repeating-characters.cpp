/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include <bitset>
#include <string>

class Solution
{
 public:
    int lengthOfLongestSubstring(std::string s)
    {
        std::bitset<256> check;
        const int length = s.size();
        int result = 0, lp = 0, rp = 0;
        while (lp < length && rp < length)
        {
            if (check[s[rp]])
            {
                check.reset(s[lp++]);
            }
            else
            {
                check.set(s[rp++]);
                const int tl = rp - lp;
                result = result > tl ? result : tl;
            }
        }
        return result;
    }
};
