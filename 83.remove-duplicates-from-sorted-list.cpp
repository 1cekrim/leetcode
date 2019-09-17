/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }

        ListNode *last = head, *first = head;
        head = head->next;

        while (head != nullptr)
        {
            if (last->val != head->val)
            {
                last->next = head;
                last = head;
            }
            head = head->next;
        }

        last->next = nullptr;

        return first;
    }
};