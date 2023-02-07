#include <iostream>
#include <map>
using namespace std;

int main() {
  string s1 = "earth";
  string s2 = "heart";
  map<char, int> mp1;
  map<char, int> mp2;
  for (int i = 0; i < s1.length(); i++) {
    mp1[s1[i]]++;
  }
  for (int i = 0; i < s2.length(); i++) {
    mp2[s2[i]]++;
  }
  if (mp1 == mp2) {
    cout << "Anagram" << endl;
  } else {
    cout << "Not Anagram" << endl;
  }
}
