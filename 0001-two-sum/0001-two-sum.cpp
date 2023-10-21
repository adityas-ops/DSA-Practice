class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++){
        if(m.find(target-a[i]) != m.end()){
            return {m[target-a[i]],i};
        }
        m[a[i]] = i;
    }
    return {-1,-1};
    }
};