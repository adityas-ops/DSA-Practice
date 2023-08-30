#include<bits/stdc++.h>
using namespace std;

// Input: words = ["cd","ac","dc","ca","zz"]
// Output: 2
// Explanation: In this example, we can form 2 pair of strings in the following way:
// - We pair the 0th string with the 2nd string, as the reversed string of word[0] is "dc" and is equal to words[2].
// - We pair the 1st string with the 3rd string, as the reversed string of word[1] is "ca" and is equal to words[3].
// It can be proven that 2 is the maximum number of pairs that can be formed.


int maximumNumberOfStringPairs(vector<string>& words) {
    int count = 0;
    unordered_map<string,int> mp;
    for(int i=0;i<words.size();i++){
        string temp = words[i];
        reverse(temp.begin(),temp.end());
        if(mp.find(temp)!=mp.end()){
            count++;
            mp[temp]--;
            if(mp[temp]==0){
                mp.erase(temp);
            }
        }else{
            mp[words[i]]++;
        }
    }
    return count;
    }
int main(){
   vector<string> words = {"aa","ab"};
    cout<<maximumNumberOfStringPairs(words);

    return 0;
}