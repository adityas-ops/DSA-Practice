#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        if(nums.size() < 3){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.push_back(v);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        return ans;
    }
    void twoSum(int i, int j, vector<int>&nums,int target,vector<vector<int> >&ans){
        int a1 = nums[i-1];
        while(i<j){
            if(nums[i]+nums[j] > target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                vector<int> temp;
                temp.push_back(a1);
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                ans.push_back(temp);
                i++;
                j--;

            }
        }
    }

    // second other method 
    vector<vector<int> >threeSum1(vector<int>& nums){
        vector<vector<int> > ans;
        if(nums.size() < 3){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            twoSum(i+1,nums.size()-1,nums,-nums[i],ans);
        }
        return ans;

    }
    
int main() {
    int arr[] = {-1,0,1,2,-1,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    vector<vector<int> > ans = threeSum1(v);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

1530+1300 