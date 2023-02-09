// question is : find longest substring which has without repeat character 
// means it has all distict number
// for example : abcabcbb -> abc
#include<iostream>
#include <unordered_map>
using namespace std;



int solve(string s){
   unordered_map<char,int>map;
     int maxi=INT_MIN;
     int i=0;
     int j=0;
     if(s.size() == 0) return 0;
     while(j<s.size()){
      map[s[j]]++;
         j++;
         maxi=max(maxi,j-i);
       if(map.find(s[j]) != map.end()){
        //    cout<<maxi<<" ";
         while(map[s[j]] == 1){
             map[s[i]]--;
             i++;
             if(map[s[i]] == 0) map.erase(s[i]);
         }
       }
     }
return maxi;
}

int main(){
    string s="abcabc";
    cout<<"hello"<<endl;
    cout<<solve(s)<<endl;

}