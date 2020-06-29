//Solution 01

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> rec(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                rec[j] += rec[j - 1];
            }
        }
        return rec[n - 1];
    }
};

//Solution 02


class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};
