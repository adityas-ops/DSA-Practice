//  Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
// example
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

#include <bits/stdc++.h>
using namespace std;
  void rotate(vector<vector<int>>& matrix) {
    // first reverse the matrix 
        reverse(matrix.begin(),matrix.end());
        // then transpose
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
int main() {
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(auto a:matrix){
        for(auto b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}
