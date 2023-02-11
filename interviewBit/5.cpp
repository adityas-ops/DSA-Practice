// question : find largst contigous subarray sum which has maximum sum
// for example ; arr[] = {1,2,3,4,-10}
// so answer is : 10
#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int>arr){
    int j = 0;
    int temp = 0;
    int maxi = INT_MIN;
    while(j<arr.size()){
        temp += arr[j];
        maxi = max(maxi, temp);
        if(temp < 0){
            temp = 0;
        }
        j++;
    }
    return maxi;
}

// second method 
int maxSum1(vector<int>arr){
    int n = arr.size();
    int maxi = arr[0];
    int j = 0;
    int temp = 0;
    while(j<n){
        temp += arr[j];
        if(temp > maxi){
            maxi = temp;
        }
        if(temp < 0){
            temp = 0;
        }
        j++;
    }
    return maxi;
}

int main(){
    int arr[] = {1,2,3,4,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    cout<<maxSum(a)<<endl;
    cout<<maxSum1(a)<<endl;
}