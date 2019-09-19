/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int maxDepth(TreeNode* root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        
        maxDepthInternal(root, 0);

        return max;
    }

    void maxDepthInternal(TreeNode* root, int depth)
    {
        if (root == nullptr)
        {
            return;
        }
        
        ++depth;
        if (depth > max)
        {
            max = depth;
        }

        maxDepthInternal(root->left, depth);
        maxDepthInternal(root->right, depth);
    }

    int max = -2147483648;
};
