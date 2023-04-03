#include <bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                if(nums[i] != nums[i+1]){
                    return nums[i];
                }
            }
            else if(i == nums.size()-1){
                if(nums[i] != nums[i-1]){
                    return nums[i];
                }
            }
            else{
                if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                    return nums[i];
                }
            }
        }
        return 0;
    }
int main() {
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<singleNumber(v)<<endl;
    return 0;
}