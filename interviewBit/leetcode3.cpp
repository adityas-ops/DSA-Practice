#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double>s;
        int i = 0;
        int j = nums.size()-1;
        while(j-1>1){
            s.insert((nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        // print set value
        for(auto it:s){
            cout<<it<<" ";
        }
        cout<<endl;
        return s.size();

    }


int main(){
    int arr[] = {4,1,4,0,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<distinctAverages(v)<<endl;
}