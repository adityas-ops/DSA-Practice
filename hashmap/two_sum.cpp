// question is : given an array you find two element which sum is equal to given number 
#include<bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

pair<int, int>twoSum(vector<int>a, int target){
    unordered_map<int,int>m;
    for(int i=0;i<a.size();i++){
        if(m.find(target-a[i]) != m.end()){
            return make_pair(m[target-a[i]],i);
        }
        m[a[i]] = i;
    }
    return make_pair(-1,-1);
  
}

int main(){
    int arr[] = {3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    vector<int>a(arr,arr+n);
    pair<int, int>ans = twoSum(a,target);
    cout<<ans.first<<" "<<ans.second<<endl;
}