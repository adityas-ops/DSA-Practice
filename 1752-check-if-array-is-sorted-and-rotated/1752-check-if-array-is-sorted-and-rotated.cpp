class Solution {
public:
    
    bool checked(vector<int>& nums){
        bool check = true;
         for(int i = 0; i<nums.size()-1;i++){
             if( nums[i]>nums[i+1]){
                 check = false;
             }
         }
        return check;
    }
    
    bool check(vector<int>& nums) {
        bool check = true;
         for(int i = 0; i<nums.size()-1;i++){
             if( nums[i]>nums[i+1]){
                 check = false;
             }
         }
        if(check == true){
           
            return true;
        }
        else{
             // cout<<"check in"<<endl;
             bool ans = true;
        vector<int>v1;
        vector<int>v2;
        int i;
        for( i=0; i<nums.size();i++){
            if(nums[i] > nums[i+1]){
                break;
            }
            else{
                v1.push_back(nums[i]);
            }
        }
         v1.push_back(nums[i]);
        i++;
        for( ; i<nums.size();i++){
            v2.push_back(nums[i]);
        }   
        
//          check n1 is greater or n2
            if(v1[0] < v2[0]){
                vector<int>v3(v1.begin(),v1.end());
                for(auto i:v2){
                    v3.push_back(i);
                }   
                ans = checked(v3);
            }
            else{
                vector<int>v3(v2.begin(),v2.end());
                 for(auto i:v1){
                    v3.push_back(i);
                } 
                ans = checked(v3);     
            }           
        
        return ans;
        
        }
    }
};