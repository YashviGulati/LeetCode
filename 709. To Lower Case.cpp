/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

 

Example 1:

Input: "Hello"
Output: "hello"

Example 2:

Input: "here"
Output: "here"

Example 3:

Input: "LOVELY"
Output: "lovely"
*/

class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if(int(str[i])>=64 && int(str[i])<=90)
                str[i]=str[i]+32;
        }
        return str;
    }
};
