#include <iostream>
#include <map>
using namespace std;

// question : count occurrence of anagram  in given string
// here string and pattern is given
// firstly we know that what is anagram
// anagram is a word or phrase formed by rearranging the letters of a different
// word or phrase, typically using all the original letters exactly once. for
// example : listen and silent are anagram here we have to find the number of
// anagram in the given string

int main() {
  string str = "forxxorfxdofr";
  string pat = "for";
  int n = str.length();
  map<char, int> mp;
  for (int i = 0; i < n; i++) {
    mp[str[i]]++;
  }
  // print map
  for (auto &p : mp) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}