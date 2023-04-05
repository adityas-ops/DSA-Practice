class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
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
};