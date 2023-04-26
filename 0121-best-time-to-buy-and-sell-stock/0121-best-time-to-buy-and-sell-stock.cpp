class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minB = INT_MAX;
        int ibuy = 0;
        int profit = 0;
        for(int i = 0; i<prices.size();i++){
            if(prices[i]<minB){
                ibuy = i;
                minB = prices[i];
            }
            profit = max(profit,prices[i]-prices[ibuy]);
        }
        return profit;
    }
};