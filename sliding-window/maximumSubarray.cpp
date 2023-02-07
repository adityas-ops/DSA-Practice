
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include<set>
using namespace std;

// question is : maximum of all subArray of size k
// for example : arr[] = {1,2,3,4,5,6,7,8,9,10} and k = 3
// then subArray are : {1,2,3} {2,3,4} {3,4,5} {4,5,6} {5,6,7} {6,7,8} {7,8,9}
// {8,9,10} we need to find maximum element from all element and store it so
// answer is : 3,4,5,6,7,8,9,10

// firstly we need the data structure which give maximum element
// so we use max heap

// lets try another method with two vector and heap
// this may take more time due to find element
vector<int> solve1(vector<int> &arr, int k) {
  vector<int> ans;
  vector<int> helper;
  for (int i = 0; i < k; i++) {
    helper.push_back(arr[i]);
  }
  make_heap(helper.begin(), helper.begin() + k);
  ans.push_back(helper[0]);
  for (int i = 1; i < arr.size() - k + 1; i++) {
    auto it = find(helper.begin(), helper.end(), arr[i - 1]);
    helper.erase(it);
    helper.push_back(arr[i + k - 1]);
    make_heap(helper.begin(), helper.end());
    ans.push_back(helper[0]);
  }
  return ans;
}

// this is more efficient method
vector<int>slidingMaximum(const vector<int> &A, int B) {
  int len = A.size();
 vector<int> ans;
int start = 0;
int end = 0;
multiset<int, greater<int> > s;
 while (end < len)
  {
    s.insert(A[end]);
    if (end - start + 1 == B)
    {
      ans.push_back(*s.begin());
      if (s.find(A[start]) != s.end())
      {
        s.erase(s.find(A[start]));
      }
      start++;
    }
    end++;
  }
  return ans;
}

int main() {
  //    int arr[] = {1,2,3,4,5,6,7,8,9,10};
  // int arr[] = {10,9,8,7,6,5,4,3,2,1};
  //    int n = sizeof(arr)/sizeof(arr[0]);
  //    vector<int>a(arr,arr+n);
  //    make_heap(arr,arr+n);
  //     cout<<arr[0]<<endl;
  //     pop_heap(arr,arr+n);
  //     cout<<arr[0];
  // int k = 3;
  // vector<int>ans = maxEle(arr,n,k);
  // for(int i = 0; i<ans.size(); i++){
  //     cout<<ans[i]<<" ";
  // }
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> ans = solve1(a, k);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
    cout << endl;   
  vector<int>ans1 = slidingMaximum(a,k);
  for(int i = 0; i<ans1.size();i++){
        cout<<ans1[i]<<" ";
  }
  
  return 0;
}