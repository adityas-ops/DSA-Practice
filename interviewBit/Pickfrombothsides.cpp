// question : Given an integer array A of size N.

// You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.

// Find and return this maximum possible sum.

// NOTE: Suppose B = 4 and array A contains 10 elements then:
// example =  A = [5, -2, 3 , 1, 2], B = 3
// ans = 8

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>a,int b){
    int n = a.size();
    int sum = 0;
    for(int i = 0; i<b;i++){
        sum += a[i];
    }
    int ans = sum;
    for(int i = 0; i<b;i++){
        sum -= a[b-i-1];
        sum += a[n-i-1];
        ans = max(ans,sum);
    }
    return ans;
}
// using sliding windows method 
int solve1(vector<int>&a,int b){
    
}



int main(){

    int arr[] = {1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    int b = 1;
    cout<<solve(a,b)<<endl;
}