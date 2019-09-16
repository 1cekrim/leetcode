/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include <string>
using namespace std;
class Solution
{
 public:
    int lengthOfLastWord(string s)
    {
        int t, i = s.length() - 1;
        for (;i >= 0 && s[i] == ' '; --i);
        for (t = i; i >= 0 && s[i] != ' '; --i);
        return t - i;
    }
};
