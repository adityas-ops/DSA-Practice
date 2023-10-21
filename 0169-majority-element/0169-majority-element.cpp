class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]]++;
        }
//         
        int maxSecond = INT_MIN;
        int maxFirst = INT_MIN;
        for(auto i:mp){
            if(i.second>maxSecond){
                maxSecond = i.second;
                maxFirst = i.first;
            }
        }
        return maxFirst;
    }
};