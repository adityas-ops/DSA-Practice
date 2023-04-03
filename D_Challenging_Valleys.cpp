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
        vector<int>a;
        while(n--){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i = 1; i<n-1;i++){
            if(a[i-1]>a[i]){
                continue;
            }
            

        }
        cout<<"YES"<<endl;
    }
    return 0;
}