// Segregate 0s and 1s in an array
// Given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.
// example : A=[0,1,0,1]
// output : [0,0,1,1]

#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(vector<int> &A) {
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        A[i]=0;
    }
    for(int i=count;i<n;i++){
        A[i]=1;
    }
    return A;
}
// second method
vector<int> solve1(vector<int> &A) {
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            swap(A[i],A[count]);
            count++;
        }
    }
    return A;
}
// third method
vector<int> solve2(vector<int> &A) {
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            A[count++]=0;
        }
    }
    while(count<n){
        A[count++]=1;
    }
    return A;
}

int main(){
    int arr[] = {0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> A(arr, arr+n);
    vector<int> ans = solve1(A);
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}