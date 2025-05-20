class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxProfit = 0;
        int bestbuy = prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i] > bestbuy){
                mxProfit = max(mxProfit, prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        if(mxProfit > 0){
            return mxProfit;
        }
        return 0;
    }
};