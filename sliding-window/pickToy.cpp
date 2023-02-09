// problem :- john go to mall with his mom, john request to his mom to buy some toys
// mom agree with john but put two condition to john
// 1. first condition is john pick the toy one by one in continuous , he cannot choose random toy 
// 2. you can choose only two type of toy otherwise not 
#include<iostream>
#include <string>
#include<unordered_map>
using namespace std;

int solve(string s){
    int n = s.length();
    int i = 0;
    int j = 0;
    int maxi = -1;
    unordered_map<char,int>m;
    while(j<n){
        m[s[j]]++;
        if(m.size() == 2){
           
            maxi = max(maxi,j-i+1);
             cout<<s.substr(i,j)<<endl;

            j++;
        }
        else if(m.size() > 2){
            while(m.size() > 2){
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
    // let a = car , b = animal c = helicopter 
    string s = "abaccab";
    cout<<solve(s)<<endl;
    return 0;
}