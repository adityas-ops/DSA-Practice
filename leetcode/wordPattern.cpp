// Given a pattern and a string s, find if s follows the same pattern.
// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.
// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true

#include <bits/stdc++.h>
using namespace std;

 bool wordPattern(string pattern, string s) {
          int n=pattern.size(),m=s.size();
        vector<string> v;
        string str;
        for(int i=0;i<m;i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
            else{
                v.push_back(str);
                str="";
            }
        }
        v.push_back(str);
        if(v.size()!=n){
            return false;
        }
        map<char,string> hash;
        for(int i=0;i<n;i++){
            if(hash.find(pattern[i])==hash.end()){
                hash[pattern[i]]=v[i];
            }
            else{
                auto it=hash.find(pattern[i]);
                if(it->second!=v[i]){
                    return false;
                }
            }
        }
        auto it=hash.begin();
        set<string> st;
        for(;it!=hash.end();it++){
            st.insert(it->second);
        }
        if(st.size()!=hash.size()){
            return false;
        }
        return true;


 }
int main() {
    string pattern = "abba";    
    string s = "dog cat cat dog";
    wordPattern(pattern,s)?cout<<"T":cout<<'F'<<endl;
    return 0;
}