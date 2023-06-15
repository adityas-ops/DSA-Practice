#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int s = n%10;
            if(n%s == 0){
                sum++;
            }
            n = n/10;
    }
    cout<<sum;
}