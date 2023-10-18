class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zero;
        vector<int>nonZero;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 0){
                zero.push_back(nums[i]);
            }
            else{
                nonZero.push_back(nums[i]);
            }
        }
        nonZero.insert(nonZero.end(),zero.begin(),zero.end());
         // nonZero.insert(nonZero.end(),zero.begin(),zero.end());
        nums.clear();
        nums = nonZero;
        
    }
};