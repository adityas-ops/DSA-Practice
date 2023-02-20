// this is another quetion of 3 sum 
// but this time we have to find the number of triplets 
// which sum to 0
#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector< vector<int> > Tsum(vector<int>arr){
    vector<vector<int> > ans;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k]==0){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                ans.push_back(temp);
                j++;
                k--;
            }
            else if(arr[i]+arr[j]+arr[k]<0){
                j++;
            }
            else{
                k--;
            }
        }
    }
    set<vector<int> > s;
    for(int i=0;i<ans.size();i++){
        s.insert(ans[i]);
    }
    ans.clear();
    for(auto it=s.begin();it!=s.end();it++){
        ans.push_back(*it);
    }
    return ans;
}

int main(){
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    vector<vector<int> > ans = Tsum(a);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}