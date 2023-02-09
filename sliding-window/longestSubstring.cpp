#include <climits>
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

// question is : find longest substring which is contains k unique character 
// given string is str = aabacbebebe
// and k = 3
// it means we need to find substring which contains 3 unique character


// this is my method where i use some function of string and an function which give me unique number
// this solution may fail in some case
int checkUnique(string s){
    int count = 0;
    int arr[26] = {0};
    for(int i = 0; i < s.size(); i++){
        if(arr[s[i] - 'a'] == 0){
            count++;
        }
        arr[s[i] - 'a']++;
    }
    return count;
}
int maxSub(string s, int k){
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    string temp="";
    while(j<s.length()){
        char c = s[j];
        temp.append(1,c);
        if(checkUnique(temp) == k){
            // cout<<"String "<<i<<" : "<<j<<" : "<<temp<<endl;
            maxi = max(maxi, j-i+1);
            j++;
        }
        else if(checkUnique(temp) > k){
          while(checkUnique(temp)>k){
                temp.erase(0,1);
                i++;
          }
        }
        else{
            j++;
        }


    }
    return maxi;

}

// 2nd approach we use unordered_map
// time complexity : O(n)
// space complexity : O(n)
int maxSub1(string s, int k){
    int i = 0;
    int j = 0;
    int maxi = -1;
    unordered_map<char,int> m;
    while(j<s.length()){
        m[s[j]]++;
        if(m.size() == k){
            maxi = max(maxi, j-i+1);
            j++;
        }
        else if(m.size() > k){
            while(m.size() > k){
                m[s[i]]--;
                if(m[s[i]] == 0){
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        else{
            j++;
        }
    }
    return maxi;
}

int main(){
    string str = "pxrjxkitzyxacbhhkicqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtacio";
    int k = 2;
    cout << maxSub(str,k) << endl;
    cout << maxSub1(str,k) << endl;
    
    return 0;
}