// non overlaping interval 
// Given an array of intervals intervals where intervals{i} = {starti, endi}, return the minimum 
// number of intervals you need to remove to make the rest of the intervals non-overlapping.
// Input: intervals = {{1,2},{2,3},{3,4},{1,3}}
// Output: 1
// Explanation: {1,3} can be removed and the rest of the intervals are non-overlapping.

#include <bits/stdc++.h>
using namespace std;
 int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    if(n==0){
        return 0;
    }
    sort(intervals.begin(),intervals.end());
    int count = 0;
    int end = intervals[0][1];
    for(int i=1;i<n;i++){
        if(intervals[i][0]<end){
            count++;
            end = min(end,intervals[i][1]);
        }
        else{
            end = intervals[i][1];
        }
    }
    return count;
}
int main() {
  vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
    cout<<eraseOverlapIntervals(intervals)<<endl;
    return 0;
}