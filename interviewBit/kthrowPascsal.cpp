// find kth row of pascal triangle
#include<iostream>
#include<vector>
using namespace std;

vector<int>kthPascal(int k){
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<=k;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<i;j++){
            // cout<<ans[j-1]<<"+"<<ans[j]<<" ";
            temp.push_back(ans[j-1]+ans[j]);
        }
        // cout<<endl;
        temp.push_back(1);
        ans=temp;
    }
    return ans;
}

// second method
vector<int>kthPascal2(int k){
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<=k;i++){
        ans.push_back(1);
        for(int j=i-1;j>0;j--){
            ans[j]=ans[j]+ans[j-1];
        }
    }
    return ans;
}

int main(){
    int k = 3;
    vector<int> ans = kthPascal2(k);
    for(auto it:ans){
        cout<<it<<" ";
    }
}