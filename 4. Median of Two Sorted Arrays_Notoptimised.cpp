/*
There are two sorted arrays nums1 and nums2 of size m and n respectively.

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2!=0)
            return nums1[nums1.size()/2];
        else
            return double(double(nums1[nums1.size()/2]) + double(nums1[(nums1.size()/2)-1]))/2;
    }
};
