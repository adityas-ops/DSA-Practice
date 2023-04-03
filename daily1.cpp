#include <bits/stdc++.h>
using namespace std;

 long long zeroFilledSubarray(vector<int>& nums) {
    // find continuous zero and count 
    int n = nums.size();
    int zero = 0;
    for(int i = 0; i<n;i++){
        if(nums[i] == 0){
            // count continuous zero
            int j = i;
            int count = 0;
            while(j<n && nums[j] == 0){
                j++;
                i++;
                count++;
            }
           count = 2*count-1;
              zero += count;
        }

    }
    return zero;
    }
long long zeroFilledSubarray1(vector<int>& nums) {
    // find continuous zero and count 
    long long res = 0;
        long long counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                counter++;
            }else{
                // cout<<"counter if : "<<counter<<endl;
                res+=(counter*(counter+1))/2;
                // cout<<"result : "<<res<<endl;
                counter = 0;
            }
        }// 3*4
        if(counter){
            //  cout<<"counter : "<<counter<<endl;
            res+=(counter*(counter+1))/2; 
            // cout<<"result : "<<res<<endl;
            counter = 0;
        }
        return res;
    }
int main() {
    int nums[] = {1,3,0,0,2,0,0,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    vector<int> v(nums, nums+n);
    cout<<zeroFilledSubarray1(v)<<endl;
    return 0;
}
