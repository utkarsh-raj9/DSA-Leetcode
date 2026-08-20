class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int index = INT_MAX;
       int profit = 0;
       for(int i = 0;i<prices.size();i++){
        if(prices[i]<index){
            index = prices[i];
            }
        int currentprofit = prices[i] - index;
        if(currentprofit>profit){
            profit = currentprofit;
        }
       }
       return profit;
 }
};