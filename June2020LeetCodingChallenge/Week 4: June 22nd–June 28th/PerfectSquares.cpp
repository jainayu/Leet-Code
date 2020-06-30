class Solution {
public:
    int numSquares(int n) {
        if(n<=0) return 0;
        
        static vector<int> countPerfectSquares({0});
        
        while (countPerfectSquares.size() <= n)
        {
            int m = countPerfectSquares.size();
            int countSquares = INT_MAX;
            for (int i = 1; i*i <= m; i++)
            {
                countSquares = min(countSquares, countPerfectSquares[m - i*i] + 1);
            }
            
            countPerfectSquares.push_back(countSquares);
        }
        
        return countPerfectSquares[n];
        
        
    }
};
