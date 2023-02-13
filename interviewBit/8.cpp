// find peak element and return 1 otherwise return 0
//  peak element is the element which left elements are smaller and right elements are greater then peak elment

#include <cmath>
#include<iostream>
#include<vector>
using namespace std;


int isPeak(vector<int>a){
    int n = a.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(a[i]<a[i+1]){
            i++;
        }
        if(a[j]<a[j-1]){
            j--;
        }
        if(a[i]>=a[i+1] && a[j]>=a[j-1]){
            break;
        }
    }
    if(i==j){
        return 1;
    }
    return 0;
}

// above function is not give correct answer 
// for this test case
// 5, 1, 4, 3, 6, 8, 10, 7, 9
// it give 0 but it should give 1
// because 6 is the peak element 
// and 6 is greater then all left elements and smaller then right elements
// An elment to satisfy the condition must be greater than the maximum of all the element
//  on its left side and it must be less than the minimum of all the element on the right
//   side.
//   so we can find the maximum and minimum element in the array
//   and then check if the element is greater then maximum and smaller then minimum

int maxi(vector<int>v){
    int n = v.size();
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}
int mini(vector<int>v){
    int n = v.size();
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        mini = min(mini,v[i]);
    }
    return mini;
}

int isPeak1(vector<int>a){
    int n = a.size();
    for(int i = 1;i<n-1;i++){
        if(a[i]>maxi(vector<int>(a.begin(),a.begin()+i)) && a[i]<mini(vector<int>(a.begin()+i+1,a.end()))){
            cout<<a[i]<<endl;
            return 1;
        }
    }
    return 0;
}
// above function is give correct answer but it takes more time 
// because it is using two for loop
// An Efficient Solution can solve this problem in O(N) time using O(N) extra space. Below is detailed solution.

// Create two arrays leftMax[] and rightMin[].
// Traverse input array from left to right and fill leftMax[] such that leftMax[i] contains maximum element from 0 to i-1 in input array.
// Traverse input array from right to left and fill rightMin[] such that rightMin[i] contains minimum element from to N-1 to i+1 in input array.
// Traverse input array. For every element A[i], check if A[i] is greater than leftMax[i] and smaller than rightMin[i]. If yes, return 1.
// If loops exits and no such element found return 0
 int isPeak2(vector<int>&a){
    int n = a.size();
    vector<int>leftMax(n);
    vector<int>rightMin(n);
    leftMax[0] = a[0];
    rightMin[n-1] = a[n-1];
    for(int i = 1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],a[i]);
    }
    // print left max array 
    cout<<"left max Array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<leftMax[i]<<" ";
    }
    cout<<endl;
    for(int i = n-2;i>=0;i--){
        rightMin[i] = min(rightMin[i+1],a[i]);
    }
    // print right min array
    cout<<"right min Array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<rightMin[i]<<" ";
    }
    cout<<endl;
    for(int i = 1;i<n-1;i++){
        if(a[i]>leftMax[i-1] && a[i]<rightMin[i+1]){
            return 1;
        }
    }
    return 0;
 }


int main(){
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    cout<<isPeak1(a)<<endl;
    cout<<isPeak2(a)<<endl;
    return 0;

}