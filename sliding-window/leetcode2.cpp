//Minimum Difference Between Highest and Lowest of K Scores
// You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.
// Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.
// Return the minimum possible difference.
#include <climits>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n-k+1;i++){
            ans=min(ans,nums[i+k-1]-nums[i]);
            cout<<ans<<" ";
        }
        cout<<endl;
        return ans;
    }

    // using sliding window
    int minimumDifference1(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;
        int i=0;
        int j=k-1;
        while(j<n){
            ans=min(ans,nums[j]-nums[i]);
            i++;
            j++;
        }
        return ans;
    }

    int main(){
        int arr[]={9,4,1,7};
        int k=2;
        int n = sizeof(arr)/sizeof(arr[0]);
        vector<int> nums(arr, arr+n);
        cout<<minimumDifference1(nums,k);
        return 0;
    }