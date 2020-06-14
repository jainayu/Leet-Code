class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<int> prices(n, INT_MAX);
        prices[src] = 0;
        
        for(int i=0; i<=K; i++){
            vector<int> temp(prices); 
            for(auto flight: flights){
                int cur = flight[0], next = flight[1], price = flight[2];
                if (prices[cur] == INT_MAX) continue;
                temp[next] = min(temp[next], prices[cur] + price);
            }
            prices = temp;
        }
        return prices[dst] == INT_MAX ? -1 : prices[dst];
    }
};
