/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector<int> result(digits);
        int carry = 0;

        ++(*result.rbegin());
        
        for (auto i = result.rbegin(); i != result.rend(); ++i)
        {
            if (carry == 1)
            {
                ++(*i);
                carry = 0;
            }

            if (*i == 10)
            {
                ++carry;
                *i = 0;
            }
        }

        if (carry == 1)
        {
            result.insert(result.begin(), 1);
        }

        return result;
    }
};
