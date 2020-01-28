/*
Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minP=1;
        int maxP=1;
        int result=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                swap(minP,maxP);
            
            minP=min(minP*nums[i],nums[i]);
            maxP=max(maxP*nums[i],nums[i]);
            result=max(result,maxP);
            
        }
        
        return result;
    }
};
