// print all rows of pascal triangle
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >pascalTriangle(int k){
    vector<vector<int> > ans;
    vector<int> temp;
    temp.push_back(1);
    ans.push_back(temp);
    for(int i=1;i<k;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<i;j++){
            temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
        }
        temp.push_back(1);
        ans.push_back(temp);
    }
    return ans;
}


int main(){
    int k = 5;
    vector<vector<int> > ans = pascalTriangle(k);
    for(auto it:ans){
        for(auto it2:it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}