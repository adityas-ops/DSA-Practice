#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

 vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        const int n = A.size();
        unordered_set<int> s;
        vector<int> r(n);
        for (int i = 0; i < n; ++i) {
            s.insert(A[i]);
            for (int j = 0; j <= i; ++j) {
                r[i] += s.count(B[j]);
            }
            
            
        }
        return r;
    }
int main() {
    std::vector<int> vec1 = {1, 3};
    std::vector<int> vec2 = {3, 1};
    std::vector<int> vec3 = findThePrefixCommonArray(vec1, vec2);
    for (auto i : vec3) {
        std::cout << i << std::endl;
    }
    return 0;
}
