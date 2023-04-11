// Spiral Matrix II
// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
// Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]

#include <bits/stdc++.h>
using namespace std;
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int top = 0, bottom = n-1, left = 0, right = n-1;
        int dir = 0;
        int num = 1;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    matrix[top][i] = num++;
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=bottom;i++){
                    matrix[i][right] = num++;
                }
                right--;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i] = num++;
                }
                bottom--;
            }
            else if(dir==3){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left] = num++;
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return matrix;
    }
int main() {
    int n;
    cin>>n;
    vector<vector<int>>matrix = generateMatrix(n);
    for(auto a:matrix){
        for(auto b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}