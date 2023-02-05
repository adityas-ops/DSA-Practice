#include <iostream>
#include <map>
using namespace std;

// question : Given two strings s1 and s2, return true if s2 contains a
// permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of
// s2.

bool checkInclusion(string s1, string s2) {
  int n1 = s1.length();
  int n2 = s2.length();
  if (n1 > n2) {
    return false;
  }
  int count1[26] = {0};
  int count2[26] = {0};
  for (int i = 0; i < n1; i++) {
    count1[s1[i] - 'a']++;
    count2[s2[i] - 'a']++;
  }
  for (int i = n1; i < n2; i++) {
    bool flag = true;
    for (int j = 0; j < 26; j++) {
      if (count1[j] != count2[j]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      return true;
    }
    count2[s2[i] - 'a']++;
    count2[s2[i - n1] - 'a']--;
  }
  bool flag = true;
  for (int j = 0; j < 26; j++) {
    if (count1[j] != count2[j]) {
      flag = false;
      break;
    }
  }
  if (flag) {
    return true;
  }
  return false;
}

// let us try brute force
bool check(string s1, string s2) {
  map<char, int> m1;
  map<char, int> m2;
  bool flag = false;
  for (int i = 0; i < s1.length(); i++) {
    m1[s1[i]]++;
  }
  for (int i = 0; i < s2.length() - s1.length() + 1; i++) {
    for (int j = i; j < i + s1.length(); j++) {
      m2[s2[j]]++;
    }
    if (m1 == m2) {
      flag = true;
      // break;
    }
    m2.clear();
  }
  return flag;
}

int main() {
  string s1 = "ab";
  string s2 = "eidbaooo";
  cout << checkInclusion(s1, s2) << endl;
  cout << check(s1, s2) << endl;
  return 0;
}
