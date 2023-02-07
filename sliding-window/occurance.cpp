#include <iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;

// question : count occurrence of anagram  in given string
// this is question is affected by leetcode question in which we find all anagram in string 
// and return first occurance index number 
// here string and pattern is given
// firstly we know that what is anagram
// anagram is a word or phrase formed by rearranging the letters of a different
// word or phrase, typically using all the original letters exactly once. for
// example : listen and silent are anagram here we have to find the number of
// anagram in the given string

vector<int>solve(string s, string p){
   vector<int>ans;
  if(p.length() > s.length()){
    return ans;
  }
  map<char, int>mp1;
  map<char, int>mp2;
  for(int i = 0; i < p.length(); i++){
    mp1[p[i]]++;
    mp2[s[i]]++;
  }
  if(mp1 == mp2){
    ans.push_back(0);
  }
  for(int i =1; i<s.length();i++){
    mp2[s[i-1]]--;
    if(mp2[s[i-1]] == 0){
      mp2.erase(s[i-1]);
    }
    mp2[s[i+p.length()-1]]++;
    if(mp1 == mp2){
      ans.push_back(i);
    }
  }
  return ans;
 
}

int main() {
  string str = "forxxorfxdofr";
  string pat = "for";
  vector<int>ans = solve(str, pat);
  for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
  }

 
  return 0;
}