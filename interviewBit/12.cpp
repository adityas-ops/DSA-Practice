// Array Sum
// https://www.interviewbit.com/problems/array-sum/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<int>addArrays(vector<int> &A, vector<int> &B) {
    int n1=A.size();
    int n2=B.size();
    int n=max(n1,n2);
    vector<int> ans(n);
    int carry=0;
    int i=n1-1;
    int j=n2-1;
    int k=n-1;
    while(i>=0 && j>=0){
        int sum=A[i]+B[j]+carry;
        ans[k]=sum%10;
        carry=sum/10;
        i--;
        j--;
        k--;
    }
    while(i>=0){
        int sum=A[i]+carry;
        ans[k]=sum%10;
        carry=sum/10;
        i--;
        k--;
    }
    while(j>=0){
        int sum=B[j]+carry;
        ans[k]=sum%10;
        carry=sum/10;
        j--;
        k--;
    }
    if(carry){
        ans.insert(ans.begin(),carry);
    }
    return ans;
}

int main(){
    int a1[]={9, 9, 1};
    int a2[]={1, 2, 1};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    vector<int> A(a1, a1+n1);
    vector<int> B(a2, a2+n2);
    vector<int> ans = addArrays(A,B);
    for(auto i:ans){
        cout<<i<<" ";
    }
}