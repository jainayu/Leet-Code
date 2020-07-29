class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastBuy =0, lastSell = 0;
        int afterBuying = INT_MIN;
        int afterSelling = 0;
        
        for(int i = 0 ; i < prices.size(); i++){
            lastBuy = afterBuying;
            afterBuying = max(afterBuying, lastSell - prices[i]);
            lastSell = afterSelling;
            afterSelling = max(afterSelling, lastBuy + prices[i]);
        }
        
        return afterSelling;
    }
};
