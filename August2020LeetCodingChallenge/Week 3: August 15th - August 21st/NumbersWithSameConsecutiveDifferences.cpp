class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> curr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 2; i <= N; ++i) {
            vector<int> recent;
            for (int x : curr) {
                int y = x % 10;
                if (x > 0 && y + K < 10) {
                    recent.push_back(x * 10 + y + K);
                }
                if (x > 0 && K > 0 && y - K >= 0) {
                    recent.push_back(x * 10 + y - K);
                }
            }
            curr = recent;
        }
        return curr;
    }
};
