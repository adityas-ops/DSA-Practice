// qustion is move all zero to end
#include<iostream>
#include<vector>
using namespace std;

vector<int>moveZero(vector<int>arr){
    int n = arr.size();
    int i = 0;
    int j = 0;
    while(j<n){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    return arr;
}

int main(){
    int arr[] = {1,2,0,4,3,0,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    vector<int>ans = moveZero(a);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}