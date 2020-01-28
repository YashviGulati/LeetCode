/*
Given an integer n, return the number of trailing zeroes in n!.

Example 1:

Input: 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:

Input: 5
Output: 1
Explanation: 5! = 120, one trailing zero.
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        long long int divider = 5;
        while ((n/divider) > 0) {
            count += n/divider;
            divider = divider * 5;
        }
        return count;
    }
};
