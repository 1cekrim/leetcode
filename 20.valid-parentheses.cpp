/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
#include <map>
#include <stack>
#include <string>

class Solution
{
 public:
    bool isValid(std::string s)
    {
        static std::map<char, char> brace = {
            { '(', ')' }, { '{', '}' }, { '[', ']' }
        };

        std::stack<char> stack;

        for (auto& c : s)
        {
            char top = stack.empty() ? 'a' : stack.top();

            if (brace[top] == c)
            {
                stack.pop();
            }
            else
            {
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
