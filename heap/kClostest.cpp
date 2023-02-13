// find k closest number of given number from vector 
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<utility>
using namespace std;

// fist approach is by sorting 
vector<int>kClosest1(vector<int>a, int k, int x){
   sort(a.begin(),a.end());
    vector<int>ans;
    unordered_map<int, int>mp;
    for(int i = 0; i<a.size();i++){
        int first = a[i];
        int second = abs(a[i]-x);
        mp[first] = second;
    }
    

}


// vector<int>kClosest(vector<int>a,int k, int x){
//     priority_queue<pair<int,int> >maxHeap;
//     for(int i = 0; i<a.size();i++){
//         maxHeap.push({abs(a[i]-x),a[i]});
//         if(maxHeap.size()>k){
//             maxHeap.pop();
//         }
//     }
//     vector<int>ans;
//     while(maxHeap.size()>0){
//         ans.push_back(maxHeap.top().second);
//         maxHeap.pop();
//     }
//     return ans;
// }

int main(){
    int arr[] = {5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    int k = 3;
    int x = 7;
    vector<int>ans = kClosest1(a,k,x);
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}