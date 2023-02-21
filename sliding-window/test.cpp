// given a map we need to copy all element into vector 
// a 4
// b 3
// c 2
// d 1
// answer is aaaabbbccd
#include <algorithm>
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;


string copyE(map<char,int>m){
    vector<pair<char,int> > v;
    for(auto it:m){
        v.push_back(it);
    }
    string ans;
    for(auto it:v){
        while(it.second--){
            ans+=it.first;
        }
    }
    return ans;
}

// optimized solution
string copy2(map<char,int>m){
    string ans;
    for(auto it:m){
        ans+=string(it.second,it.first);
    }
    return ans;
}


int main(){
    map<char,int> m;
    m['a']=4;
    m['b']=3;
    m['c']=2;
    m['d']=1;
    string s = copy2(m);
    cout<<s;
    return 0;
}