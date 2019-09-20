/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
 public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result;
        result.reserve(rowIndex + 1);

        for (int m = 0; m < rowIndex; ++m)
        {
            if (m == 0)
            {
                result.emplace_back(1);
            }
            else
            {
                size_t c = 1;
                for (int k = 0; k < m; ++k)
                {
                    c *= rowIndex - k;
                    c /= k + 1;
                }

                result.emplace_back(c);
            }   
        }
        result.emplace_back(1);

        return result;
    }
};
