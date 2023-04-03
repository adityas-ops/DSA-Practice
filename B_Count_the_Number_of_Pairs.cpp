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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int a = (int)s[i];
            v[i] = a;
        }
        // for(int i = 0; i<n;i++){
        //     cout<<e<<" ";
        // }
        // cout<<endl;
        int count = 0;
        for (int e : v)
        {
            if (e >= 65 && e <= 90)
            {
                int temp = e + 32;
                vector<int>::iterator it;
                it = find(v.begin(), v.end(), temp);
                if (it != v.end())
                {
                    count++;
                    v.erase(it);
                    // delete e element
                    v.erase(v.begin());
                }
            }
            else if (e >= 97 && e <= 122)
            {
                int temp = e - 32;
                vector<int>::iterator it;
                it = find(v.begin(), v.end(), temp);
                if (it != v.end())
                {
                    count++;
                    v.erase(it);
                    // delete e element
                    v.erase(v.begin());
                }
            }
        }
        for (int j = 0; j < k; j++)
        {
            for (int i = 0; i < v.size(); i++)
            {
                vector<int>::iterator it;
                it = find(v.begin() + i, v.end(), v[i]);
                if (it != v.end())
                {
                    count++;
                    v.erase(it);
                    v.erase(v.begin());
                    break;
                }
            }
        }

            cout << count << endl;
            // print vector after this/
            // for(int i = 0; i<v.size();i++){
            //     cout<<v[i]<<" ";
            // }
        }
        return 0;
    }
