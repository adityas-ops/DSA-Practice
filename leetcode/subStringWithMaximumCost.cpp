#include <bits/stdc++.h>
using namespace std;

//  Find the Substring With Maximum Cost
// You are given a string s, a string chars of distinct characters and an integer array vals of the same length as chars.

// The cost of the substring is the sum of the values of each character in the substring. The cost of an empty string is considered 0.

// The value of the character is defined in the following way:

// If the character is not in the string chars, then its value is its corresponding position (1-indexed) in the alphabet.
// For example, the value of 'a' is 1, the value of 'b' is 2, and so on. The value of 'z' is 26.
// Otherwise, assuming i is the index where the character occurs in the string chars, then its value is vals[i].
// Return the maximum cost among all substrings of the string s.

// Input: s = "adaa", chars = "d", vals = [-1000]
// Output: 2
// Explanation: The value of the characters "a" and "d" is 1 and -1000 respectively.
// The substring with the maximum cost is "aa" and its cost is 1 + 1 = 2.
// It can be proven that 2 is the maximum cost.


int maximumCostSubstring(string s, string chars, vector<int>& vals) {
    int maxCost = 0;
    int cost = 0;
    unordered_map<char,int>mp;
    for(int i=0;i<chars.size();i++){
        mp[chars[i]] = vals[i];
    }
    unordered_map<char,int>mp1;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i]) != mp.end()){
            mp1[s[i]] = mp[s[i]];
        }
        else{
            mp1[s[i]] = s[i] - 'a' + 1;
        }
    }
    for(int i=0;i<s.size();i++){
        cost = 0;
        for(int j=i;j<s.size();j++){
            cost += mp1[s[j]];
            maxCost = max(maxCost,cost);
        }
    }
    return maxCost;
}
// optimize the above function 
int maximumCostSubstring1(string s, string chars, vector<int>& vals) {
    int maxCost = 0;
    int cost = 0;
    unordered_map<char,int>mp;
    for(int i=0;i<chars.size();i++){
        mp[chars[i]] = vals[i];
    }
    unordered_map<char,int>mp1;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i]) != mp.end()){
            mp1[s[i]] = mp[s[i]];
        }
        else{
            mp1[s[i]] = s[i] - 'a' + 1;
        }
    }
   // store map value in another vector
    vector<int>mp2;
    for(int i=0;i<s.size();i++){
        mp2.push_back(mp1[s[i]]);
    }
   // use kadane algorithm
    int max_so_far = 0;
    int max_ending_here = 0;
    for(int i=0;i<mp2.size();i++){
        max_ending_here = max_ending_here + mp2[i];
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}


int main() {
    string s = "adaa";
    string chars = "d";
    int arr[] = {-1000};
    vector<int> val(arr,arr+sizeof(arr)/sizeof(arr[0]));
    cout << maximumCostSubstring(s, chars, val) << endl;

    return 0;
}