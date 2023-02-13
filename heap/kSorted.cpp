// question :-  it is also called nearly sorted array 
// we have to sort the array in k sorted manner
// k is the number of swaps allowed
// we have to sort the array in O(nlogk) time but this is optimize method 
// k sorted means :-
// an element which is sitauted on index 1 it can be k side left or k side right 
// but it can not be more than k side left or k side right
// for example :-  k=3
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>sorted(vector<int>arr, int k){
    priority_queue<int, vector<int>, greater<int> >minHeap;
    vector<int>ans;
    for(int i = 0; i<arr.size();i++){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        ans.push_back(minHeap.top());
        minHeap.pop();
    }

    return ans;
}

int main(){

    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    int k = 3;
    vector<int>ans = sorted(a,k);
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}