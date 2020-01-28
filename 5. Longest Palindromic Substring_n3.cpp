/*
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Example 2:

Input: "cbbd"
Output: "bb"

*/

class Solution {
public:
    
    bool isPalin(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        int start=0,end=0,maxx=0;
        string ans="";
       for(int i=0;i<s.length();i++){
           for(int j=i+1;j<s.length();i++){
               if(isPalin(s,i,j)){
                   if(maxx<j-i){
                       maxx=j-i;
                       start=i;
                       end=j;
                   }
               }
           }
       }
    for(int i=start;i<end;i++)
        ans+=s[i];
    return ans;
    }
};
