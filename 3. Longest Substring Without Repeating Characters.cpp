/*
Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 

Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int i=0,j=0;
        int n=s.length();
        set <char> mysett;
        while(i<n && j<n){
            if(mysett.find(s[j])==mysett.end()){
                mysett.insert(s[j]);
                j++;
                ans=max(ans,j-i);
            }
            else{
                mysett.erase(s[i]);
                i++;
        }
        }
    return ans;   
    }

};
