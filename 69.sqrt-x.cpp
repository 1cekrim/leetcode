/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
class Solution
{
 public:
    int mySqrt(int x)
    {
        int result = 0;
        
        for (int i = 15; i >= 0; --i)
        {
            const unsigned int mult = 1 << i;
            const unsigned int now = result | mult;
            if (now * now <= x)
            {
                result |= mult;
            }
        }

        return result;
    }
};
