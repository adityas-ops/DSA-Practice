#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "123";
    // change into int
    int n = s.size();
    int num = 0;
    for(int i=0;i<n;i++){
        num = num*10 + (s[i]-'0');
    }
    cout<<num<<endl;
    return 0;
}