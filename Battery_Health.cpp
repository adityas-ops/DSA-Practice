#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
       int x;
       cin>>x;
       if(x >= 80){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}