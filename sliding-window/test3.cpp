#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    string s = "abaccab";
    int n = s.length();
    vector<int>v(26,0);
    for(int i = 0; i<26;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n;i++){
        v[s[i] - 'a']++;
    }
    for(int i = 0; i<26;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    unordered_map<char, int>mp;
    string sa = "aabbsss";
    for(int i = 0; i<sa.length();i++){
        mp[sa[i]]++;
    }
    cout<<mp[sa[4]]<<endl;

    return 0;
}