/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }

        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
        {
            return false;
        }

        if (p->val != q->val)
        {
            return false;
        }

        if (p->left == nullptr && q->left == nullptr && p->right == nullptr &&
            q->right == nullptr)
        {
            return true;
        }

        if ((p->left == nullptr && q->left != nullptr) ||
            (p->left != nullptr && q->left == nullptr) ||
            (p->right == nullptr && q->right != nullptr) ||
            (p->right != nullptr && q->right == nullptr))
        {
            return false;
        }

        bool left = true, right = true;

        if (p->left != nullptr && q->left != nullptr)
        {
            if (p->left->val != q->left->val)
            {
                left = false;
            }
            else
            {
                left = isSameTree(p->left, q->left);
            }
        }

        if (p->right != nullptr && q->right != nullptr)
        {
            if (p->right->val != q->right->val)
            {
                right = false;
            }
            else
            {
                right = isSameTree(p->right, q->right);
            }
        }

        return left && right;
    }
};
