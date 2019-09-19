/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <map>
#include <vector>
using namespace std;

class Solution
{
 public:
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        searchInternal(root, 1);
        return vector<vector<int>>(result.rbegin(), result.rend());
    }

    void searchInternal(TreeNode* now, int depth)
    {
        if (now == nullptr)
        {
            return;
        }

        if (depth > result.size())
        {
            result.emplace_back(1, now->val);
        }
        else
        {
            result[depth - 1].emplace_back(now->val);
        }

        searchInternal(now->left, depth + 1);
        searchInternal(now->right, depth + 1);
    }

    vector<vector<int>> result;
};
