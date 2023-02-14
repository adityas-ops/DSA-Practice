// Substrings of Size Three with Distinct Characters
// Input: s = "xyzzaz"
// Output: 1
// Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
// The only good substring of length 3 is "xyz".

#include<iostream>
#include<string>
#include<set>
using namespace std;

int countGoodSubstrings(string s) {
    int n=s.length();
    int count=0;
    for(int i=0;i<n-2;i++){
        set<char> st;
        for(int j=i;j<i+3;j++){
            st.insert(s[j]);
        }
        if(st.size()==3){
            count++;
        }
        
    }

    return count;
}

// second method
int countGoodSubstrings1(string s) {
    int n=s.length();
    int count=0;
    for(int i=0;i<n-2;i++){
        if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
            count++;
        }
    }

    return count;
}
int main(){
    string s = "aababcabc";
    cout<<countGoodSubstrings(s);
    cout<<countGoodSubstrings1(s);
    return 0;
}