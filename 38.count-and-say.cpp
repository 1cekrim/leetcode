/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */
#include <string>

using namespace std;

class Solution
{
 public:
    string countAndSay(int n)
    {
        string now = "1";
        if (n == 1)
        {
            return now;
        }

        for (int i = 1; i < n; ++i)
        {
            string result;
            int count = 1;
            char chr = now[0];
            for (int j = 1; j < now.length(); ++j)
            {
                if (chr == now[j])
                {
                    ++count;
                }
                else
                {
                    result += to_string(count) + chr;
                    count = 1;
                    chr = now[j];
                }
            }
            result += to_string(count) + chr;
            now = result;
        }

        return now;
    }
};
