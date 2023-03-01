#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       int count = 0;
       int nn = 0;
        for(int i = 0; i<=n/2;i++){ 
            if((s[i] == '1' && s[n-i-1] == '0' )|| (s[i] == '0' && s[n-i-1] == '1' ) ){
                count++;
            }
            else{
            break;
           }
        }
        if(2*count >= n){
            cout<<0<<endl;
        }
        else{
            cout<<n-2*count<<endl;
        }
    }
    return 0;
}



