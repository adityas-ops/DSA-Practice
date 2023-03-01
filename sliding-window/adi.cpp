#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
 pair<int,int>p;
 p.first = 1;
    p.second = 1;
  // print pair
    // cout << p.first << " " << p.second << endl; 1
    // create vector of pairs
    vector<pair<int, int> > A;
    // insert pairs into the vector
    A.push_back(make_pair(1, 2));
    A.push_back(make_pair(2, -1));
    A.push_back(make_pair(3, 4));
    // print the vector
    for (int i = 0; i < A.size(); i++)
        cout << A[i].first << " "
             << A[i].second << endl;


}
return 0;
}
