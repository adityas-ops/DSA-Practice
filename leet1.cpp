#include <bits/stdc++.h>
using namespace std;
 int maximizeGreatness(vector<int>& nums) {
    vector<int>temp(nums.begin(),nums.end());
    sort(temp.begin(),temp.end());
    int count = 0;
    for(int i = 0; i<nums.size();i++){
       for(int j = 0; j<temp.size();j++){
        if(nums[i]<temp[j]){
            count++;
            temp.erase(temp.begin()+j);
            break;
        }

       }

    }
    return count;
    }

// optimize above code 
int optimize(vector<int>nums){
    int count = 0;
    int n = nums.size();
    // cout<<"numbr"<<n<<endl;
    sort(nums.begin(),nums.end());
    vector<int>temp(nums.begin(),nums.end());
    int i = 0;
    while(i<nums.size()){
        if(nums[0]<temp[i]){
            break;
        }
        i++;
    }
    temp.erase(temp.begin(),temp.begin()+i);
    int d=0;
    for(int i = 0; i<temp.size();i++){
        if(temp[i] == temp[i+1]){
            d++;
        }

    }
    count = temp.size();
    if(d > 1){
        return count-1;
    }
        return count;
}


int main() {
    int arr[] = {1,3,5,2,1,3,1};
   int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);
    cout<<maximizeGreatness(v)<<endl;
    cout<<optimize(v)<<endl;
    return 0;
}
