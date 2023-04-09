class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<int>>ans;
        unordered_map<char,int> mp1;
        unordered_map<string,int> mp2;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(mp2.find(s)==mp2.end()){
                mp2[s]=ans.size();
                vector<int> temp;
                temp.push_back(i);
                ans.push_back(temp);
            }
            else{
                ans[mp2[s]].push_back(i);
            }
        }
        vector<vector<string>> res;
        for(int i=0;i<ans.size();i++){
            vector<string> temp;
            for(int j=0;j<ans[i].size();j++){
                temp.push_back(strs[ans[i][j]]);
            }
            res.push_back(temp);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};