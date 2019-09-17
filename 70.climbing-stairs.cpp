/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
class Solution
{
 public:
    int climbStairs(int n)
    {
        int a = 1, b = 1;

        for (int i = 2; i <= n; ++i)
        {
            int t = a + b;
            a = b;
            b = t;
        }

        return b;
    }
};
