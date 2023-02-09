// question is : given a string s and a string p 
// find the smallest substring in s which contains all the characters in p
// in continuous method 
// example : s = "ADOBECODEBANC" , p = "ABC"
// output : "ADOBANC" // because it is continuous 

#include<iostream>
#include <string>
#include<unordered_map>
using namespace std;

string solve(string s, string p){
    int i = 0;
    int j = 0;
    int n = s.length();
    int m = p.length();
    int count = 0;
    int arr[26] = {0};
    int brr[26] = {0};
    for(int i = 0; i < m; i++){
        brr[p[i] - 'A']++;
    }
    int mini = INT_MAX;
    string ans = "";
    while(j<n){
        arr[s[j] - 'A']++;
        if(arr[s[j] - 'A'] <= brr[s[j] - 'A']){
            count++;
        }
        if(count == m){
            while(arr[s[i] - 'A'] > brr[s[i] - 'A']){
                arr[s[i] - 'A']--;
                i++;
            }
            if(mini > j-i+1){
                mini = j-i+1;
                ans = s.substr(i,j-i+1);
            }
        }
        j++;
    }
    return ans;
}
// second method using unordered_map
string solve1(string s, string p){
    int i = 0;
    int j = 0;
    int n = s.length();
    int m = p.length();
    int count = 0;
    unordered_map<char,int>mp;
    unordered_map<char,int>mp1;
    for(int i = 0; i < m; i++){
        mp1[p[i]]++;
    }
    int mini = INT_MAX;
    string ans = "";
    while(j<n){
        mp[s[j]]++;
        //        
        if(mp[s[j]] <= mp1[s[j]]){
            count++;
        }
        if(count == m){
            while(mp[s[i]] > mp1[s[i]]){
                mp[s[i]]--;
                i++;
            }
            if(mini > j-i+1){
                mini = j-i+1;
                ans = s.substr(i,j-i+1);
            }
        }
        j++;
    }
    return ans;
}

int main(){

  string s = "ADOBECODEBANC";
  string p = "ABC";
  cout<<solve(s,p)<<endl;

    return 0;
}