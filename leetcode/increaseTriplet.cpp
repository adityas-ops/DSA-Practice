// Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
// Input: nums = [1,2,3,4,5]
// Output: true
// Explanation: Any triplet where i < j < k is valid.

#include <bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    if(n<3){
        return false;
    }
    int first = INT_MAX;
    int second = INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]<=first){
            first = nums[i];
        }
        else if(nums[i]<=second){
            second = nums[i];
        }
        else{
            return true;
        }
    }
    return false;

}
int main() {
    vector<int> nums = {5,4,3,2,1};
    cout<<increasingTriplet(nums)<<endl;
    return 0;
}