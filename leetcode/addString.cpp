// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
// Input: num1 = "11", num2 = "123"
// Output: "134"
#include <bits/stdc++.h>
using namespace std;


  string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        int i = n1-1;
        int j = n2-1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0 || carry){
            int sum = 0;
            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            sum+=carry;
            carry = sum/10;
            sum = sum%10;
            ans = to_string(sum)+ans;
        }
        return ans;
    }
int main() {
    string num1 = "11";
    string num2 = "123";
    cout<<addStrings(num1,num2)<<endl;
    return 0;
}