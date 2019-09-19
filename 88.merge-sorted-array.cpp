/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
#include <vector>
using namespace std;

class Solution
{
 public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        std::vector<int> t;
        t.reserve(m + n);

        int i = 0, j = 0;
        
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                t.emplace_back(nums1[i++]);
            }   
            else
            {
                t.emplace_back(nums2[j++]);
            } 
        }

        while (i < m)
        {
            t.emplace_back(nums1[i++]);
        }

        while (j < n)
        {
            t.emplace_back(nums2[j++]);
        }

        nums1 = t;
    }
};
