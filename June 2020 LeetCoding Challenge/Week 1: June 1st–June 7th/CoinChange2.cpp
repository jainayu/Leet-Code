class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if (amount == 0) 
            return 1; 
        if (amount < 0) 
            return 0; 
        if (coins.size() <=0 && amount >= 1) 
            return 0; 
        
        vector<vector<int> > table(amount+1, vector<int> (coins.size(), 0));
        int x=0, y=0;
        for (int i = 0; i < coins.size(); i++) 
            table[0][i] = 1;
        
        for (int i = 1; i < amount + 1; i++) 
        { 
            for (int j = 0; j < coins.size(); j++) 
            { 
                x = (i-coins[j] >= 0) ? table[i - coins[j]][j] : 0; 
                y = (j >= 1) ? table[i][j - 1] : 0;
                table[i][j] = x + y; 
            } 
        } 
        return table[amount][coins.size() - 1];
    }
};
