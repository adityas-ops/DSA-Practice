/*
A
AB
ABC
ABCD
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            cout<<char(65+j-1)<<" ";
        }
        cout<<endl;
    }
}