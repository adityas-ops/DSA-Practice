#include<iostream>
#include<vector>
using namespace std;

vector<int>Sort(vector<int>a){
 int i = 0;
 int j = a.size()-1;
    vector<int>ans;
    while(i<=j){
        if(a[i]>a[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(a[j]);
            j--;
        }
    }
    return ans;
}

int main(){
    int a[]={5,7,4,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>v(a,a+n);
    vector<int>ans = Sort(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}