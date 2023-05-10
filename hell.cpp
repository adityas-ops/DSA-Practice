#include <bits/stdc++.h>
using namespace std;

int main() {
   string s = "aditya";
   vector<char>v(s.begin(),s.end());
    for(auto i : v) {
         cout << i << endl;
    }
    cout<<v.size()<<endl;
    return 0;
}