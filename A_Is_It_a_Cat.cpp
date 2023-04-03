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


void solve(){
int n;
cin>>n;
string s;
cin>>s;
if((s[0] != 'm' && s[0] != 'M') || (s[n-1] != 'w' && s[n-1] != 'W')){
    cout<<"NO"<<endl;
    return;
}
for(int i = 0; i<n-1;i++){
    if(s[i] != s[i+1]){
        if((s[i] == 'm' || s[i]=='M') && (s[i+1] == 'e' || s[i+1] == 'E')){
            continue;
        }
        else if((s[i] == 'e' || s[i]=='E') && (s[i+1] == 'o' || s[i+1] == 'O')){
            continue;
        }
        else if((s[i] == 'o' || s[i]=='O') && (s[i+1] == 'w' || s[i+1] == 'W')){
            continue;
        }
        else if((s[i] == 'm' || s[i] == 'M') && (s[i+1] == 'm' || s[i+1] == 'M')){
            continue;
        }
        else if((s[i] == 'e' || s[i] == 'E') && (s[i+1] == 'e' || s[i+1] == 'E')){
            continue;
        }
        else if((s[i] == 'o' || s[i] == 'O') && (s[i+1] == 'o' || s[i+1] == 'O')){
            continue;
        }
        else if((s[i] == 'w' || s[i] == 'W') && (s[i+1] == 'w' || s[i+1] == 'W')){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
}
cout<<"YES"<<endl;

}


int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    solve();
}
return 0;
}
