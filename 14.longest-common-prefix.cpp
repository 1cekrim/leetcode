/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
class Solution
{
 public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.empty())
        {
            return "";
        }

        string result;

        const int len = min_element(strs.begin(), strs.end(),
                                    [](string& p1, string& p2) -> bool {
                                        return p1.length() < p2.length();
                                    })
                            ->length();

        for (int i = 0; i < len; ++i)
        {
            char now = strs[0][i];
            if (std::find_if(strs.begin(), strs.end(),
                             [now, i](string& str) -> bool {
                                 return now != str[i];
                             }) != strs.end())
            {
                return result;
            }
            result += now;
        }

        return result;
    }
};
