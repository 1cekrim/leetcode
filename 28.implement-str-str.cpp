/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */
#include <string>
#include <vector>
using namespace std;

class Solution
{
 public:
    vector<int>* GetPi(string pattern)
    {
        vector<int>* pi = new vector<int>(pattern.length(), 0);
        for (int i = 1, j = 0; i < pattern.length(); ++i)
        {
            while (j > 0 && pattern[i] != pattern[j])
            {
                j = (*pi)[j - 1];
            }

            if (pattern[i] == pattern[j])
            {
                (*pi)[i] = ++j;
            }
        }

        return pi;
    }

    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
        {
            return 0;
        }

        vector<int>* pi = GetPi(needle);
        const int n = haystack.length(), m = needle.length();

        for (int i = 0, j = 0; i < n; ++i)
        {
            while (j > 0 && haystack[i] != needle[j])
            {
                j = (*pi)[j - 1];
            }
            if (haystack[i] == needle[j])
            {
                if (j == m - 1)
                {
                    return i - m + 1;
                }
                else
                {
                    ++j;
                }
            }
        }

        return -1;
    }
};
