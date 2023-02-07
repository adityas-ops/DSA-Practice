#include <climits>
#include<iostream>
#include<vector>
using namespace std;


// question : this is sliding windows question but variable size window which is change by condition 
// for example : arr[] = {1,2,3,4,5,6,7,8,9,10} and k = ? and sum  = 15
// now we need to find all windows which sum is 15
// so answer is : {1,2,3,4,5} {4,5,6} {7,8}

// this is brute force method
// time complexity : O(n^2)
// space complexity : O(1)
vector<vector<int> > solve(vector<int> &arr, int sum){
    vector<vector<int> > ans;
    for(int i = 0; i < arr.size(); i++){
        int temp = 0;
        for(int j = i; j < arr.size(); j++){
            temp += arr[j];
            if(temp == sum){
                vector<int> tempAns;
                for(int k = i; k <= j; k++){
                    tempAns.push_back(arr[k]);
                }
                ans.push_back(tempAns);
            }
        }
    }
    return ans;
}

int maxiSub(vector<int>arr,int sum){
    int i = 0;
    int j = 0;
    int temp = 0;
    int maxi = INT_MIN;
    while(j<arr.size()){
        temp += arr[j];
        if(temp == sum){
            maxi = max(maxi, j-i+1);

        }
        else if(temp > sum){
            temp -= arr[i];
            i++;
        }
        j++;
    }
    return maxi;
}

int main(){
    int arr[] = {4,1,1,1,2,3,5};
    vector<int> v(arr, arr + sizeof(arr)/sizeof(arr[0]));
    vector<vector<int> > ans = solve(v, 5);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"maximum : " <<maxiSub(v, 5) << endl;
    return 0;
}