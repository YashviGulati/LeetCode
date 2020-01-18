/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) 
            return "";
        
        string res = "";
        sort(strs.begin(), strs.end());
        string first = strs[0]; 
        string last = strs[n-1];
        int limit = min(first.length(), last.length());
        for(int i = 0; i < limit; i++) 
        {
            if(first[i] == last[i])
                res += first[i];
            else 
                break;
        }
        return res;
    }
};
