// Longest Palindromic Substring
// Example 1:
// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
#include <bits/stdc++.h>
using namespace std;

int expandAroundCenter(string s,int i, int j){
    int n = s.size();
    while (i >= 0 && j < n && s[i] == s[j]) {
        i--;
        j++;
    }
    return j - i - 1;
}
string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0)
        return "";
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }

    }
    return s.substr(start, end - start + 1);
}

// second method 
string longestPalindrome1(string s) {
    int n = s.size();
    int start = 0;
    int res = 1;
    string ans;
    for(int i = 0; i<n;i++){
       int l = i-1;
         int r = i+1;
         while(l>= 0 && s[l] == s[i]){
                l--;
            }
            while(r<n && s[r] == s[i]){
                r++;
            }
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
             int length=(r-1)-(l+1)+1;  
            if(length>res)
            {
                res=length;
                start=l+1;
            }
    }
    return s.substr(start,res);

}
int main() {
    string s = "babad";
    cout << longestPalindrome1(s) << endl;
    return 0;
}