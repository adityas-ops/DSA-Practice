/*
 

print diamond 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mid = n/2;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = 0; j<(i*2+1);j++){
            cout<<"*";
        }
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<i;j++){
            cout<<" ";
        }
        for(int j = 0; j<2*(n-i)-1;j++){
            cout<<"*";
        }
        for(int j = 0; j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
        return 0;
}