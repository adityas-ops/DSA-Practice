class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int one = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                int temp = 0;
                while (i < nums.size() && nums[i] == 1) {
                    temp++;
                    i++;
                }
                if (temp > one) {
                    one = temp;
                }
            }
        }
        return (one == INT_MIN) ? 0 : one;
    }
};