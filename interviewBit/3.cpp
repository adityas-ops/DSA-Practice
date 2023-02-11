// Minimum Lights to Activate
// https://www.interviewbit.com/problems/minimum-lights-to-activate/
//
// You are given an array of N length, where each element is a lamp. Lamp has a
// range of activation such that it can activate itself and all the lamps in the
// range [i-r, i+r] where i is the current lamp and r is its range of
// activation. Initially all the lamps are deactivated. Return the minimum
// number of lamps that should be activated such that all the lamps are
// activated.
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int solve(vector<int> &A, int B) {
  int n = A.size();
  int i = 0;
  int count = 0;
  bool bulbFound = false;
  int bulbFoundAt = 0;
  while (i < n) {
    int j = i + B - 1;
    bulbFound = false;
    while (j >= (i - B) && j >= 0 && j <= n) {
      if (A[j] == 1) {
        count++;
        bulbFoundAt = j;
        bulbFound = true;

        i = bulbFoundAt + B;
        break;
      }
      j--;
    }
    if (!bulbFound) {
      return -1;
    }
  }
  return count;
}

// second method

int solve1(vector<int> &lights, int size) {

  int n = lights.size();
  vector<pair<int, int> > lightable;
  for (int i = 0; i < n; i++) {
    if (lights[i] == 1) {
      int maxi = max(0, i - size + 1);
      int mini = min(n - 1, i + size - 1);
      // lightable.push_back({maxi, mini});
    }
    int lightableSize = lightable.size();
    if (lightableSize == 0) {
      return -1;
    }
    if (lightable[0].first != 0)
      return -1;
    if (lightable[lightableSize - 1].second != n - 1)
      return -1;
    int currentCovered = -1, minimumNumberOfLights = 0, previousCoverage;
    for (int i = 0; i < lightableSize - 1; i++) {
      if (lightable[i].first == currentCovered + 1) {
        currentCovered = lightable[i].second;
        minimumNumberOfLights++;
      } else if (lightable[i].first > currentCovered + 1)
        return -1;
      else if (lightable[i + 1].first > currentCovered + 1) {
        currentCovered = lightable[i].second;
        minimumNumberOfLights++;
      }
      if (lightable[i].first == lightable[i + 1].first)
        currentCovered = lightable[i + 1].second;
    }
    if (currentCovered + 1 < lightable[lightableSize - 1].first)
      return -1;
    else if (currentCovered < lightable[lightableSize - 1].second)
      minimumNumberOfLights++;
    return minimumNumberOfLights;
  }
}
int main() {
  int arr[] = {0, 0, 1, 1, 1, 0, 0, 1};
  vector<int> A(arr, arr + 7);
  int B = 3;
  cout << solve(A, B) << endl;
}