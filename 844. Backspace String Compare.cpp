/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".

Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".

Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".

Note:

    1 <= S.length <= 200
    1 <= T.length <= 200
    S and T only contain lowercase letters and '#' characters.

*/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int flag=0;
        string s1="";
        string s2="";
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='#'){
                flag++;
            }
            else if(flag>0){
                flag--;
            }
            else 
                s1+=S[i];
        }
        flag=0;
        for(int i=T.length()-1;i>=0;i--){
            if(T[i]=='#'){
                flag++;
            }
            else if(flag>0){
                flag--;
            }
            else 
                s2+=T[i];
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        
        if(s1==s2)
            return true;
        return false;
    }
};
