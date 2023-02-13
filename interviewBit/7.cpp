// Maximum Absolute Difference
// You are given an array of N integers, A1, A2 ,..., AN. Return maximum value of f(i, j) 
// for all 1 ≤ i, j ≤ N. f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| 
// denotes absolute value of x.
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int Maxim(vector<int>arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxi1 = INT_MIN;
    int mini1 = INT_MAX;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]+i);
        mini = min(mini,arr[i]+i);
        maxi1 = max(maxi1,arr[i]-i);
        mini1 = min(mini1,arr[i]-i);
    }
    return max(maxi-mini,maxi1-mini1);
}

int main(){
    int arr[] = {1,3,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    cout<<Maxim(a)<<endl;
    return 0;

}
