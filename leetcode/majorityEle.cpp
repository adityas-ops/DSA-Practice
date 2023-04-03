#include <bits/stdc++.h>
using namespace std;

 int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int idx = 0;
        int maxi = 0;
        int count = 0;
        for(int i = 0; i<n;){
            int j = i;
            while(j<n && nums[i] == nums[j]){
                count++;
                j++;
            }
            if(count > maxi){
                maxi = count;
                idx = i;
            }
            count = 0;
            i = j;
        }
        // cout<<maxi<<endl;
        return nums[idx];
    }
int main() {
    int arr[] = {2,2,1,1,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<majorityElement(v)<<endl;
    return 0;
}