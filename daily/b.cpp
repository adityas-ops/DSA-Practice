// 6316. Rearrange Array to Maximize Prefix Score
// You are given a 0-indexed integer array nums . You can rearrange the elements of nums to any order (including the given order).
// Let prefix be the array containing the prefix sums of nums after rearranging it. In other words, prefix [i] is the sum of the elements from 0 to i in nums after rearranging it. The score of nums is the number of positive integers in the array prefix.
// Return the maximum score you can achieve
// example 
// Input: nums = [2,-1,0,1,-3,3,-3]
// Output: 6
// Explanation: We can rearrange the array into nums = [2,3,1,-1,-3,0,-3].
// prefix = [2,5,6,5,2,2,-1], so the score is 6.
// It can be shown that 6 is the maximum score we can obtain.

#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& nums) {
   sort(nums.begin(), nums.end());
    int n = nums.size(), i = 0;
    while (i < n && nums[i] < 0) i++;
    vector<int>temp(nums.begin()+i,nums.end());
    vector<int> prefix(n-i, 0);
    // calculate prefix sum
    prefix[0] = temp[0];
    for(int i = 1;i<temp.size();i++){
        prefix[i] = prefix[i-1]+temp[i];
    } 
    // count score which is greater than zero
    int score = 0;
    for (int j = 0; j < n; j++) {
        if (prefix[j] > 0) score++;
    }
    return score;
    
  

}

// above function give wrong answer so we create another function 
int maxScore1(vector<int>& nums) {
//     Sort the array in descending order.
// Initialize two pointers i and j to the beginning and end of the array, respectively.
// Initialize a variable count to 0.
// While i <= j:
// a. If nums[i] >= 0, add it to the prefix sum array and increment i.
// i. Increment count if nums[i] > 0.
// b. If nums[j] < 0, add it to the prefix sum array and decrement j.
// i. Increment count if nums[j] > 0.
// c. If nums[i] < 0 and nums[j] >= 0, add the larger of the two to the prefix sum array.
// i. If nums[i] is larger, increment i and count if nums[i] > 0.
// ii. If nums[j] is larger, decrement j and count if nums[j] > 0.
// Return count.
sort(nums.rbegin(),nums.rend());
// print all element s
// for(int a:nums){
//     cout<<a<<" ";
// }
// cout<<endl;
// make prefix sum 
int n = nums.size();
vector<int>prefix(n,0);
    prefix[0] = nums[0];
    for(int i = 1; i<n;i++){
        prefix[i] = prefix[i-1]+nums[i];
    }
    int score = 0;
     for (int j = 0; j < n; j++) {
        if (prefix[j] > 0) score++;
    }
    return score;
    
}

int main(){
    int arr[] = {2,-1,0,1,-3,3,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+n);
    cout<<maxScore1(nums);
}