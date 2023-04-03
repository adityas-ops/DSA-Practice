#include <bits/stdc++.h>
using namespace std;

// create function of solution 
void solve(vector<int>a){
    // create another vector which store same element of vector a expect the current element
    for(int i = 0; i<a.size();i++){
        vector<int>temp;
        for(int j = 0; j<a.size();j++){
            if(i!=j){
                temp.push_back(a[j]);
            }
        }
        // find maximum element of temp vector
        int max = *max_element(temp.begin(),temp.end());
        int cc= a[i]-max;
        // b.push_back(cc);
        cout<<cc<<" ";
    }
    cout<<endl;
}

// above function takes more time 
// so we can optimize this code 
void solve1(vector<int>a){
    vector<int>temp(a.begin(),a.end());
    vector<int>ithMax;
    sort(temp.begin(),temp.end());
    for(int i = 0; i<a.size();i++){
        int max = temp[temp.size()-1];
        if(a[i] != max){
            ithMax.push_back(max);
        }
        else{
            ithMax.push_back(temp[temp.size()-2]);
        }
    }
    for(int i = 0; i<a.size();i++){
        int cc = a[i]-ithMax[i];
        cout<<cc<<" ";
    }
    cout<<endl;
 
}

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
        solve1(a);
    }
    return 0;
}