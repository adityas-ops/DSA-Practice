// Maximum Sum Triplet
// https://www.interviewbit.com/problems/maximum-sum-triplet/
//
// Given an array A of N integers. Find the maximum sum of triplet (p, q, r)
// such that 0 <= p < q < r < N.
// Ap < Aq < Ar
// Input Format
// First and only argument is an integer array A.
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

// brute force method
int maxSum(vector<int> v) {
  int n = v.size();
  int maxi = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (v[i] < v[j] && v[j] < v[k]) {
          sum = v[i] + v[j] + v[k];
          maxi = max(maxi, sum);
        }
      }
    }
  }
  return maxi;
}
// optimize method
int maxSum1(vector<int> v) {
  int n = v.size();
  int maxi = INT_MIN;
  int sum = 0;
  vector<int> temp;
  int j = 0;
  while (temp.size() < 3 && j < n - 2) {
    int pointer = j;
    temp.push_back(v[j]);
    j++;
    for (int i = j; i < n; i++) {
      if (v[i] > v[pointer]) {
        temp.push_back(v[i]);
        pointer = i;
        if(temp.size() == 3){
            i++;
            temp.push_back(v[i]);
            pointer = i;
        }
      }
    }
    if (temp.size() < 3) {
      temp.clear();
      j++;
    }
  }
  // print element from temp
//   for (int i = 0; i < temp.size(); i++) {
//     cout << temp[i] << " ";
//   }
//   cout << endl;

  //
  for (int i = 0; i < temp.size() - 2; i++) {
    sum += (temp[i] + temp[i + 1] + temp[i + 2]);
    if (sum > maxi) {
      maxi = sum;
    }
    sum = 0;
  }
//   cout << maxi << endl;
return maxi;
}

// above solution is failed when v[0] is the largest number in vector


// optimize code
// using suffix method 
// and then find  Maximum Sum Triplet
// int maxEle(vector<int>&v){


// }

int main() {
  int arr[] = {32592, 18763, 1656,  17411, 6360,
               27625, 20538, 21549, 6484,  27596};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> v(arr, arr + n);
  //  cout<<maxSum(v)<<endl;
    cout << maxSum1(v) << endl;
}