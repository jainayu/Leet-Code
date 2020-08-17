class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int state[2][4] = {INT_MIN, 0, INT_MIN, 0};
        int len = prices.size(), i, curr = 0, next =1;
        for(i=0; i<len; ++i)
        {
            state[next][0] = max(state[curr][0], -prices[i]);
            state[next][1] = max(state[curr][1], state[curr][0]+prices[i]);
            state[next][2] = max(state[curr][2], state[curr][1]-prices[i]);
            state[next][3] = max(state[curr][3], state[curr][2]+prices[i]);
            swap(next, curr);
        }
        return max(state[curr][1], state[curr][3]);
    }
};
