// find maximum subArray of k length.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

 double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0; 
        int j = 0;
        double sum = 0;
        double maxSum = INT_MIN;
        while(j<n){
            sum += nums[j];
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                maxSum = max(maxSum, sum/k);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return maxSum;
    }

int main(){
    // int a[] = {1,12,-5,-6,50,3};
    int a[] = {1,12,-5,-6,50,3};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>nums(a,a+n);
    int k = 4;
    cout<<findMaxAverage(nums,k)<<endl;
}