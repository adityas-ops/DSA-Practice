// merge interval 
// Given an array of intervals where intervals[i} = [starti, endi}, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
// Input: intervals = [[1,3},[2,6},[8,10},[15,18}}
// Output: [[1,6},[8,10},[15,18}}
// Explanation: Since intervals [1,3} and [2,6} overlap, merge them into [1,6}.


#include <bits/stdc++.h>
using namespace std;


 vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
     vector<vector<int>> output;
        for(auto interval : intervals){
            if(output.empty() || output.back()[1] < interval[0]){
                output.push_back(interval);
            }
            else{
                output.back()[1] = max(output.back()[1], interval[1]);
            }
        }
        return output;
    }
int main() {
   vector<vector<int>>intervals = {{1,3},{8,10},{15,18},{2,6}};
    vector<vector<int>>result = merge(intervals);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}