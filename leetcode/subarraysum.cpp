// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Input: nums = [1,1,1], k = 2
// Output: 2

#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
                count++;
            }
        }

    }
    return count;
}

// above function takes more time 
// we should optimize the time then 
// we need to kadane algorithm in this function
int subarraySum1(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    int sum = 0;
    unordered_map<int,int>mp;
    mp[0] = 1;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}

int main() {
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<subarraySum1(nums,k)<<endl;

    return 0;
}