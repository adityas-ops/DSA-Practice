// You are given a 0-indexed array of string words and two integers left and right.

// A string is called a vowel string if it starts with a vowel character and ends with a vowel character where vowel characters are 'a', 'e', 'i', 'o', and 'u'.

// Return the number of vowel strings words[i] where i belongs to the inclusive range [left, right]

#include<bits/stdc++.h>
using namespace std;


int vowelStrings(vector<string>& words, int left, int right) {
    int count = 0;
    for(int i = left; i<=right; i++){
        string s = words[i];
        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
            if(s[s.length()-1]=='a' || s[s.length()-1]=='e' || s[s.length()-1]=='i' || s[s.length()-1]=='o' || s[s.length()-1]=='u'){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string arr[] = {"hey","aeo","mu","ooo","artro"};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<string>words(arr,arr+n);
    int left = 1;
    int right = 4;
    cout<<vowelStrings(words,left,right);
}