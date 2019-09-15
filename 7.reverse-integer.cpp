/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
class Solution
{
 public:
    int reverse(int x)
    {
        int result = 0;

        while (x != 0)
        {
            int t = x % 10;
            x /= 10;
            if ((result > 214748364) || (result < -214748364) ||
                (result == 214748364 && t > 7) ||
                (result == -214748364 && t < -8))
            {
                return 0;
            }
            result *= 10;
            result += t;
        }
        return result;
    }
};
