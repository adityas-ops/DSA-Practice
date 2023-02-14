// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k){
    int n = nums.size();
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        if(mp.find(nums[i])!=mp.end()){
            if(abs(mp[nums[i]]-i)<=k){
                return true;
            }
        }
        mp[nums[i]] = i;
    }
    return false;
}
// above function can be created by sliding windows method 
bool containsNear(vector<int>&nums, int k){
    int n = nums.size();
    int i = 0;
    int j = 0;
    unordered_map<int,int>mp;
    while(j<n){
        mp[nums[j]]++;
        if(j-i+1>=k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        if(mp[nums[j]]>1){
            return true;
        }
        j++;
    }   
    return false;

}

int main(){
    int a[] =  {1,2,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>nums(a,a+n);
    int k = 3;
    cout<<containsNearbyDuplicate( nums, k)<<endl;
    cout<<containsNear(nums,k)<<endl;
    return 0;
}
