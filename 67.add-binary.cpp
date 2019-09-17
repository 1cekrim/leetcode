/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
 public:
    string addBinary(string a, string b)
    {
        string result;
        int carry = 0;

        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry == 1; --i, --j)
        {
            carry += (i >= 0 && a[i] == '1') ? 1 : 0;
            carry += (j >= 0 && b[j] == '1') ? 1 : 0;
            result = (carry % 2 == 1 ? '1' : '0') + result;
            carry /= 2;
        }

        return result;
    }
};
