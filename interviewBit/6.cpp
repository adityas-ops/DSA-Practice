// given question is adding number digit 
// we have to return adding 1 
// example 1,2,3 return 1,2,4 => 123+1 = 124
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


vector<int>plusOne(vector<int>arr){
    int n = arr.size();
    vector<int>ans;
    __int128 num = 0;
     for(int i = n-1;i>=0;i--){
        __int128 digit = pow(10,n-i-1);
       __int128 num1 = digit * arr[i];
         num+=num1;
     }
     num = num+1;
     while(num>0){
        int rem = num%10;
        ans.push_back(rem);
        num = num/10;
     }
     reverse(ans.begin(),ans.end());
     return ans;
}

// optimise solution for above function 
vector<int>plusOne1(vector<int>arr){
    int n = arr.size();
    vector<int>ans;
    int carry = 1;
    for(int i = n-1;i>=0;i--){
        int sum = arr[i] + carry;
        ans.push_back(sum%10);
        carry = sum/10;
    }
    if(carry){
        ans.push_back(carry);
    }
    int m = ans.size();
    int j = m-1;
    while(ans[j] ==  0){
        ans.pop_back();
        j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int arr[] = { 0, 0, 4, 4, 6, 0, 9, 6, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    vector<int>ans = plusOne1(a);
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}