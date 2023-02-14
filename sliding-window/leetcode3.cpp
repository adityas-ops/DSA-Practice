// Given two binary strings a and b, return their sum as a binary string.
#include<iostream>
#include<string>
using namespace std;

 string addBinary(string a, string b) {
    int n1=a.size();
    int n2=b.size();
    int n=max(n1,n2);
    string ans(n,'0');
    int carry=0;
    int i=n1-1;
    int j=n2-1;
    int k=n-1;
    while(i>=0 && j>=0){
        int sum=a[i]-'0'+b[j]-'0'+carry;
        ans[k]=sum%2+'0';
        carry=sum/2;
        i--;
        j--;
        k--;

    }
    while(i>=0){
        int sum=a[i]-'0'+carry;
        ans[k]=sum%2+'0';
        carry=sum/2;
        i--;
        k--;
    }
    while(j>=0){
        int sum=b[j]-'0'+carry;
        ans[k]=sum%2+'0';
        carry=sum/2;
        j--;
        k--;
    }
    if(carry){
        ans.insert(ans.begin(),carry+'0');
    }
    return ans;
}
int main(){
    string a="11";
    string b="1";
    cout<<addBinary(a,b);
    return 0;
}