/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetric(TreeNode* root)
    {
        if (root == nullptr)
        {
            return true;
        }

        return isSymmetricInternal(root->left, root->right);
    }

    bool isSymmetricInternal(TreeNode* left, TreeNode* right)
    {
        if (left == nullptr && right == nullptr)
        {
            return true;
        }

        if (left != nullptr && right != nullptr && left->val == right->val)
        {
            return isSymmetricInternal(left->left, right->right) && isSymmetricInternal(left->right, right->left);
        }

        return false;
    }
};
