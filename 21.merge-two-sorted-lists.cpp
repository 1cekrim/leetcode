/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
 public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* now = nullptr;

        ListNode temp(-2147483648);
        now = &temp;

        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val < l2->val)
            {
                now->next = l1;
                l1 = l1->next;
            }
            else
            {
                now->next = l2;
                l2 = l2->next;
            }
            now = now->next;
        }

        if (l1 != nullptr)
        {
            now->next = l1;
        }
        else if (l2 != nullptr)
        {
            now->next = l2;
        }

        return temp.next;
    }
};
