#include <bits/stdc++.h>
using namespace std;


//  Given two arrays of unique digits nums1 and nums2, return the smallest number that contains at least one digit from each array.
// Input: nums1 = [4,1,3], nums2 = [5,7]
// Output: 15
// Explanation: The number 15 contains the digit 1 from nums1 and the digit 5 from nums2. It can be proven that 15 is the smallest number we can have.
// Input: nums1 = [3,5,2,6], nums2 = [3,1,7]
// Output: 3
// Explanation: The number 3 contains the digit 3 which exists in both arrays.

int minNumber(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> common;
    std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(common));
    if(common.size() != 0){
        return common[0];
    }
    else{
        int n1 = nums1[0];
        int n2 = nums2[0];
        if(n1 == 0){
            return n2*10;
        }
        else if(n2 == 0){
            return n1*10;
        }
        else{
            if(n1>n2){
                return n2*10+n1;
            }
            else{
                return n1*10+n2;
            }
        }
    }
}

int main() {
    int arr1[] = {4,1,3};
    int arr2[] = {5,7};
    vector<int> nums1(arr1, arr1 + sizeof(arr1) / sizeof(int));
    vector<int> nums2(arr2, arr2 + sizeof(arr2) / sizeof(int));
    cout << minNumber(nums1, nums2) << endl;
    return 0;
}