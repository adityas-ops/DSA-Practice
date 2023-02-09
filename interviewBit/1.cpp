// rotate array by 1
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    // int b  = 5;
    vector<int>ans(a.size()*2,0);
    // for(int i = 0; i<n;i++){
    //     ans.push_back(a[(i+b)%n]);
    // }
    // for(int i = 0; i<n;i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    for(int i = 0; i<a.size();i++){
        ans[i] = a[i];
        ans[i+a.size()] = a[(a.size() - i) % a.size()];;
    }
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}