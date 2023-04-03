#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        // your code here
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        char c = s[n-1];
        // change into integer
        int x = c - '0';
        cout<<x-48<<endl;

    }
    return 0;
}