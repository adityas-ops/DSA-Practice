#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<unordered_map>
using namespace std;

int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // set<double>s;
        unordered_map<double,int> m;
        int i = 0;
        int j = nums.size()-1;
        while(j-i>=1){
            // 
            double sum = nums[i]+nums[j];
            double avg = sum/2.0;
            m[avg]++;
           

            i++;
            j--;
        }
        // print set value
        // for(auto it:s){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // return s.size();
        // print map value
        // for(auto it:m){
        //     cout<<it.first<<" "<<it.second;
        // }
        // cout<<endl;

        return m.size();

    }


int main(){
    int arr[] = {4,1,4,0,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<distinctAverages(v)<<endl;
}