#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;


void mapOccur(string s){
    unordered_map<char,int>mp;
    for(int i = 0; i<s.size();i++){
        mp[s[i]]++;
    }
    int ans = 0;
    char a;
    for(auto x:mp){
        ans = max(ans,x.second);
        a = x.first;
    }
    cout<<a<<" -> "<<ans<<endl;
}


int main(){
  string s = "aditya";
 mapOccur(s);
}