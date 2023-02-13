// question is find kth largest number 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int maxEle(vector<int>a,int k){
    priority_queue<int,vector<int>,greater<int> >minHeap;
    for(int i = 0; i<a.size();i++){
        minHeap.push(a[i]);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    return minHeap.top();
}

// print k largest element 
void printKlargest(vector<int>a,int k){
    priority_queue<int,vector<int>,greater<int> >minHeap;
    for(int i = 0; i<a.size();i++){
        minHeap.push(a[i]);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,5,4,7,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    int k = 3;
   cout<<maxEle(a,k)<<endl;
    printKlargest(a,k);
}