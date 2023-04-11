// The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.
// For example, "ACGAATTCCG" is a DNA sequence.
// When studying DNA, it is useful to identify repeated sequences within the DNA.
// Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order
// Example 1:
// Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
// Output: ["AAAAACCCCC","CCCCCAAAAA"]

#include <bits/stdc++.h>
using namespace std;
 vector<string> findRepeatedDnaSequences(string s) {
    unordered_map<string, int> m;
    vector<string> res;
    for (int i = 0; i + 9 < s.size(); i++) {
        string t = s.substr(i, 10);
        if (m[t]++ == 1){
            res.push_back(t);
        }
          
    }
    return res;

}
int main() {
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> res = findRepeatedDnaSequences(s);
    for (auto i : res)
        cout << i << endl;


    return 0;
}