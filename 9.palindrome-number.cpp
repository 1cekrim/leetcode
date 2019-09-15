/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include <string>
class Solution
{
 public:
    bool isPalindrome(int x)
    {
        if (x < 0 || x != 0 && x % 10 == 0)
        {
            return false;
        }
        std::string str = std::to_string(x);
        int lp = 0, rp = str.size() - 1;
        while (lp < rp)
        {
            if (str[lp++] != str[rp--])
            {
                return false;
            }
        }
        return true;
    }
};
