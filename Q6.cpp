class Solution {
public:

    
    int maxProfit(vector<int>& prices) {
        
        int least=INT_MAX;
        int profit_today=0;
        int overall_profit=0;
        
        for(int i=0;i<prices.size();i++){
            least=min(least,prices[i]);
            profit_today=prices[i]-least;
            overall_profit=max( profit_today, overall_profit);
        }
        
       return  overall_profit;
    }
};