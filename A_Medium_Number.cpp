#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        vector<int>v;
        int n = 3;
        while (n--) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        // find medium number which is not maximum nor minimum
        int medium = v[1];
        cout << medium << endl;
    }
    return 0;
}