/*
A
B B 
C C C
D D D D
E E E E E
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<=i;j++){
            cout<<char(65+i)<<" ";
        }
        cout<<endl;
    }
}