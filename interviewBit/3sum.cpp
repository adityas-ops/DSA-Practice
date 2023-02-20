// 3 sum
// example
// input: 1 2 3 4 5 6 7 8 9 15 : k = 16
// output: 3 5 8
// 1 + 5 + 10 = 16
// 1 + 6 + 9 = 16
// 2 + 4 + 10 = 16
// 2 + 5 + 9 = 16
// 3 + 4 + 9 = 16
// 3 + 5 + 8 = 16
// we need to find only one answer
#include<iostream>
#include <vector>
using namespace std;

// this approach is brute force approach
vector<int>Tsum(vector<int>a){
    vector<int> ans;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==16){
                    ans.push_back(a[i]);
                    ans.push_back(a[j]);
                    ans.push_back(a[k]);
                    return ans;
                }
            }
        }
    }
    return ans;
}

// now we optimize above function and change time complexity to 
// O(n^2) and space complexity to O(1)
vector<int> Tsum1(vector<int>a){
    vector<int> ans;
    int n=a.size();
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(a[i]+a[j]+a[k]==16){
                ans.push_back(a[i]);
                ans.push_back(a[j]);
                ans.push_back(a[k]);
                return ans;
            }
            else if(a[i]+a[j]+a[k]<16){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return ans;
}

// above function is also not optimized because we are using extra space
// to store answer
// now we optimize above function and change time complexity to
// O(n) and space complexity to O(1)


int main(){
    int arr[]={1,2,3, 4, 5, 6 ,7 ,8, 9 ,15};
    int k=16;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    vector<int> ans = Tsum(a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}