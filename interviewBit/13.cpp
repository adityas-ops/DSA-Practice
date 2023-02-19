// question is : 
// given an array we need to square and arrange into acending order 
// for example 6,4,3,7
// output should be 9,16,49,64
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>solve(vector<int> &A) {
    vector<int>ans;
    for(int i=0;i<A.size();i++){
        ans.push_back(A[i]*A[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
// another method without using sort function 
// we need to use O(n) time complexity
// we can use two pointer method

vector<int>solve1(vector<int> &A) {
    vector<int>ans;
    int i = 0;
    int j = A.size()-1;
    while(i<=j){
        if(A[i]*A[i]>A[j]*A[j]){
            ans.push_back(A[i]*A[i]);
            i++;
        }
        else{
            ans.push_back(A[j]*A[j]);
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
// above function is wrong because it's give us incorrect answer
// for example 5,7,4,8,9
// output should be 16,25,49,64,81
// but it's give us 16,49,25,64,81
// so we need to rewrite function again with correct code
// correct code is below


int main(){
    int arr[] = {5,7,4,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    vector<int>ans = solve1(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}