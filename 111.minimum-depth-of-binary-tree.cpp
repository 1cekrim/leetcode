/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
class Solution
{
 public:
    int minDepth(TreeNode* root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        minDepthInternal(root, 1);

        return min;
    }

    void minDepthInternal(TreeNode* now, int depth)
    {
        if (depth >= min)
        {
            return;
        }

        if (now->left == nullptr && now->right == nullptr)
        {
            min = depth;
        }

        if (now->left != nullptr)
        {
            minDepthInternal(now->left, depth + 1);
        }

        if (now->right != nullptr)
        {
            minDepthInternal(now->right, depth + 1);
        }
    }

    int min = 2147483647;
};
