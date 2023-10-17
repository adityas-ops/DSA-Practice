class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int v = nums.size()-k;
       if(nums.size()>v){
            reverse(nums.begin(),nums.begin()+v);
        reverse(nums.begin()+v,nums.end());
        reverse(nums.begin(),nums.end());
       }
        else{
             for(int i = 0; i<k;i++){
            int temp = nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(), temp);
        }
        }
        
    }
    
};