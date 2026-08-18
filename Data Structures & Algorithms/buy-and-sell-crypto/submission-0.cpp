class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, maxProfit = 0;
        for(int i = 0, j = 1; j < prices.size(); j++) {
            if(prices[i] < prices[j]) {
                maxProfit = max(maxProfit, prices[j]-prices[i]);
            }
            else {
                i = j;
            }
        }
        return maxProfit;
    }
};
