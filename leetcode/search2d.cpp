#include <bits/stdc++.h>
using namespace std;


// brute force method 
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(auto a:matrix){
        for(auto b:a){
            if(b==target){
                return true;
            }
        }
    }
    return false;
 }

// binary search method
bool searchMatrix1(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = (n*m)-1;
    cout<<"n "<<n<<"m "<<m<<endl;
    while(low<=high){

        int mid = (low+high)/2;
        // this will cause overflow for large values of low and high
        // so we use the below method
        // int mid = low + floor(high-low)/2;
        cout<<"mid:- "<<mid<<endl;
        if(matrix[mid/m][mid%m]==target){
            cout<<"case 1: "<<matrix[mid/m][mid%m]<<endl;
            return true;
        }
        else if(matrix[mid/m][mid%m]>target){
            cout<<"case 2: "<<matrix[mid/m][mid%m]<<endl;
            high = mid-1;
        }
        else{
            cout<<"case 3: "<<matrix[mid/m][mid%m]<<endl;
            low = mid+1;
        }
    }
    return false;
}

// above function return false value for 
//  {{1,4},{2,5}};
//  2
//  but it should return true
//  because 2 is present in the matrix
// now update above function 
//  and it will return true
bool searchMatrix2(vector<vector<int> > arr, int target)
{
    int row = 0;
    int col = arr[row].size() - 1;
    while (row < arr.size() && col >= 0) {
        if (arr[row][col] == target) {
            return true;
        }
 
        // Target lies in further row
        if (arr[row][col] < target) {
            row++;
        }
        // Target lies in previous column
        else {
            col--;
        }
    }
    return false;
}
int main() {
    vector<vector<int>>matrix = {{1,4},{2,5}};
    int target = 2;
    searchMatrix2(matrix,target) ? cout<<"true" : cout<<"false";
    return 0;
}