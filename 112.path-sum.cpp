/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    bool hasPathSum(TreeNode* root, int sum)
    {
        if (root == nullptr)
        {
            return false;
        }

        target = sum;

        hasPathSumInternal(root, 0);

        return flag;
    }

    void hasPathSumInternal(TreeNode* now, int sum)
    {
        if (flag)
        {
            return;
        }

        const int nowSum = now->val + sum;

        if (now->left == nullptr && now->right == nullptr)
        {
            if (nowSum == target)
            {
                flag = true;
                return;
            }
        }

        if (now->left != nullptr)
        {
            hasPathSumInternal(now->left, nowSum);
        }

        if (now->right != nullptr)
        {
            hasPathSumInternal(now->right, nowSum);
        }
    }

    int target;
    bool flag = false;
};
