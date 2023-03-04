#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>a = {1,2,3,4,5};
    // print vector 
    for(auto a:a){
        cout<<a<<endl;
    }
    int sum = accumulate(a.begin(),a.end(),0);
    cout<<"sum is : "<<sum<<endl;
}