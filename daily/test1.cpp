#include <bits/stdc++.h>
using namespace std;

 int findKthPositive(vector<int>& arr, int k) {
        // creating firstly vector 

        int n = arr[arr.size()-1]+k+1;
        vector<int>temp;
        for(int i = 1; i<=n;i++){
            temp.push_back(i);
        }
        // print temp
        for(auto a:temp){
            cout<<a<<" ";
        }
        cout<<endl;
        for(int i = 0; i<arr.size();i++){
           auto it = find(temp.begin(), temp.end(),arr[i]);
           if(it != temp.end()){
               temp.erase(it);
           }
        }

        return temp[k-1];

    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a[] = { 2,3,4,7,11};
    vector<int>arr(a,a+5);
    int k = 5;
    cout<<findKthPositive(arr,k);

    return 0;
}