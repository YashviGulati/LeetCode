/*
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), find the minimum number of conference rooms required.

Example 1:

Input: [[0, 30],[5, 10],[15, 20]]
Output: 2

Example 2:

Input: [[7,10],[2,4]]
Output: 1
*/

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return 0;
        vector <int> start;
        vector <int> endd;
        for(int i=0;i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            endd.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(endd.begin(),endd.end());
        int spt=0;
        int ept=0;
        int count=0;
        while(spt<intervals.size()){
            if(start[spt]>=endd[ept]){
                count--;
                ept++;
            }
            count++;
            spt++;
        }
        return count;
    }
};
