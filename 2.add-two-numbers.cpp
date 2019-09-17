/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode dummy(-1);
        ListNode* now = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            if (l1 != nullptr)
            {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                carry += l2->val;
                l2 = l2->next;
            }

            now->next = new ListNode(carry % 10);
            carry /= 10;

            now = now->next;
        }

        return dummy.next;
    }
};
