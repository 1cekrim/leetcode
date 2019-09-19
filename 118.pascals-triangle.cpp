/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;

        if (numRows == 0)
        {
            return result;
        }
        
        result.reserve(numRows);
        result.emplace_back();
        result[0].emplace_back(1);

        for (int i = 1; i < numRows; ++i)
        {
            result.emplace_back();
            result[i].reserve(i + 1);
            result[i].emplace_back(1);

            for (int j = 1; j < i; ++j)
            {
                result[i].emplace_back(result[i - 1][j - 1] + result[i - 1][j]);
            }

            result[i].emplace_back(1);
        }

        return result;
    }
};
