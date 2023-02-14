// this is a test of simple implement of sliding window 
#include<iostream>
#include <string>
#include<vector>
using namespace std;

// print all subarray of given array
void printS(string s, int k){
    // using while loop
    int i =0;
    int j = 0;
    while(j<s.length()){
        // use sliding method 
     if(j-i+1 < k){
            j++;
     }else if(j-i+1 == k){
            // print the subarray
            for(int x = i; x<=j; x++){
                cout<<s[x];
            }
            cout<<endl;
            j++;
        }else if(j-i+1 > k){
            i++;
        }
    }
}

int main(){
    string s = "adityasharma";
    int k = 3;
    printS(s, k);
    return 0;
}