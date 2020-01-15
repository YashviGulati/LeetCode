/*
You have N bulbs in a row numbered from 1 to N. Initially, all the bulbs are turned off. We turn on exactly one bulb everyday until all bulbs are on after N days.

You are given an array bulbs of length N where bulbs[i] = x means that on the (i+1)th day, we will turn on the bulb at position x where i is 0-indexed and x is 1-indexed.

Given an integer K, find out the minimum day number such that there exists two turned on bulbs that have exactly K bulbs between them that are all turned off.

If there isn't such day, return -1.

Example 1:

Input: 
bulbs: [1,3,2]
K: 1
Output: 2
Explanation:
On the first day: bulbs[0] = 1, first bulb is turned on: [1,0,0]
On the second day: bulbs[1] = 3, third bulb is turned on: [1,0,1]
On the third day: bulbs[2] = 2, second bulb is turned on: [1,1,1]
We return 2 because on the second day, there were two on bulbs with one off bulb between them.

Example 2:

Input: 
bulbs: [1,2,3]
K: 1
Output: -1

*/

class Solution {
public:
    int kEmptySlots(vector<int>& bulbs, int k) {
        int n=bulbs.size();
        vector <int> pos(n+1,0);
        for(int i=0;i<n;i++)
            pos[bulbs[i]]=i;
        
        int res=INT_MAX;
        int low=1, high=1+k+1;
        for(int i=1;high<=n;i++){
            if(pos[i]>pos[low] && pos[i]>pos[high])
                continue;
            
            if(i==high)
                res=min(res, max(pos[low],pos[high])+1);
            
            low=i;
            high=i+k+1;
            
        }
        
         return res==INT_MAX?-1:res;
    }
};
