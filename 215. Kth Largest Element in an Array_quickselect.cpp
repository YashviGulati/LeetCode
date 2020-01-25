/*
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:

Input: [3,2,1,5,6,4] and k = 2
Output: 5

Example 2:

Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4

Note: This code was taken from the link: https://leetcode.com/problems/kth-largest-element-in-an-array/discuss/205552/C%2B%2B-quick-select-O(n)-run-time
*/

class Solution {
public:        
    int findKthLargest(vector<int>& nums, int k) {
        
        int n = nums.size();
        int arr[n];
        for (int i = 0; i < n; ++i){arr[i] = nums[i];}
        int result = kth_smallest(arr, 0, n-1, n-k+1);
        return result;                
    }

private:
    int partition(int arr[], int l, int r)
    {
        int x = arr[r], i = l;
        for (int j = l; j <= r-1; ++j)
        {
            if (arr[j] <= x)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[r]);
        return i;
    }    
    
    int kth_smallest(int arr[], int l, int r, int k)
    {
        if (k < 0 || k > r-l+1) {return -1;}

        //partition the array (similar to quicksort)
        int index = partition(arr, l, r);

        //if position same as k return rank-k element
        if (index - l == k - 1)
            return arr[index];

        //if rank-k element is less, look in left sub-array
        if (index - l > k - 1)
            return kth_smallest(arr, l, index - 1, k);
        else //look in right sub-array
            return kth_smallest(arr, index + 1, r, k - index + l - 1);
    }        
        
};
