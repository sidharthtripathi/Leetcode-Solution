class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int mini = prices[0];
        for(int &i : prices){
            if(i<mini){
                mini = i;
            }
            int today_profit = i - mini;
            if(today_profit > max_profit)
                max_profit = today_profit;
        }
        return max_profit;
    }
};