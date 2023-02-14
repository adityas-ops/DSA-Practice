// fink k-beauty numbers
// The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:

// It has a length of k.
// It is a divisor of num.
// Given integers num and k, return the k-beauty of num.
// example 
// input : num = 240, k = 2
// output : 2

#include<iostream>
#include<vector>
using namespace std;


int divisorSubstrings(int num, int k) {
        string str = to_string(num);
        int n = str.length();
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<n){
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                string s = str.substr(i,k);
                int x = stoi(s);
                if(x != 0){
                    if(num%x == 0){
                        count++;
                    }
                }
                j++;
            }else if(j-i+1 > k){
                i++;
            }
        }
        return count;
}

int main(){
    int num = 240;
    int k = 2;
    cout<<divisorSubstrings(num, k)<<endl;
    return 0;
}
