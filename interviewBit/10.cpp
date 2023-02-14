// Make equal elements Array
// Given an array of all positive integers and an element “x”. 
// You need to find out whether all array elements can be made equal or not by performing any of the 3 operations: add x to any element in array, subtract x from any element from array, do nothing.
//  This operation can be performed only once on an element of array.
// example :- A=[2,3,1]
// X=1
// output :- true

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int solve(vector<int> &A, int B) {
     int n=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1] || A[i]+B==A[i+1]){
            continue;
            // count++;
        }
        else return 0;
        }
     return 1;
}

int main(){
    int arr[] = {2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> A(arr, arr+n);
    int B = 1;
    cout<<solve(A, B)<<endl;
    set<int>s(A.begin(),A.end());
    for(auto i:s){
        cout<<i<<" ";
    }

    return 0;
}