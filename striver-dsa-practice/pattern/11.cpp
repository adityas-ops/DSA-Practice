/*
1
01
101
0101
10101
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            cout<<j%2;
        }
        cout<<endl;
        
    }
}