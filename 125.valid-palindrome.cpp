/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include <algorithm>
#include <numeric>
#include <string>
#include <functional>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str;

        for (int i = 0; i < s.size(); ++i)
        {
            if (isalnum(s[i]))
            {
                str += tolower(s[i]);
            }
        }

        for (int lp = 0, rp = str.size() - 1; lp < rp; ++lp, --rp)
        {
            if (str[lp] != str[rp])
            {
                return false;
            }
        }

        return true;
    }
};
