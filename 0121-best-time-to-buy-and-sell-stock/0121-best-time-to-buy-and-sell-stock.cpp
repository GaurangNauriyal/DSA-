class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            int sell = prices[i];
            if(sell < buy){

                buy = sell;
            }
            else{
                profit = max(profit, sell - buy);
            }
        }
        return profit;
    }
};