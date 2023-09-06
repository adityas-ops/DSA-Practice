/*

intput 123
output 321

*/
#include<bits/stdc++.h>
using namespace std;

 int reverseInt(int n){
      long r=0;      // decleare r 
      int x = n;
        while(x){
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        }
        if(r>INT_MAX || r<INT_MIN) return 0; // check range if r is outside the range then return 0  
        return int(r);  // if r in the 32 bit range then return r
 }

int main(){
    int n;
    cin>>n;
    // reverse the integer
   cout<<reverseInt(n)<<endl;
        return 0;
}