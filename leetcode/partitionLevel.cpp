// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.
// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
// Return a list of integers representing the size of these parts.
// Input: s = "ababcbacadefegdehijhklij"
// Output: [9,7,8]
// Explanation:
// The partition is "ababcbaca", "defegde", "hijhklij".
// This is a partition so that each letter appears in at most one part.
// A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

#include <bits/stdc++.h>
using namespace std;
 vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> ans;
        vector<int> last(26,-1);
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        int start = 0;
        int end = 0;
        for(int i=0;i<n;i++){
            end = max(end,last[s[i]-'a']);
            if(i==end){
                ans.push_back(end-start+1);
                start = end+1;
            }
        }
        return ans;
    }
int main() {
    string s = "ababcbacadefegdehijhklij";
    vector<int> ans = partitionLabels(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}