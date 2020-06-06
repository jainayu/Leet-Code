class Solution {
public:
    int n;
    vector <int> vect;
    Solution(vector<int>& w) {
        srand(time(NULL));
        n = w[0];
        for(int i = 1; i < w.size(); i++){
            w[i] += w[i - 1];
            n = w[i];
        }
        vect = w;
    }
    
    int pickIndex() {
        return upper_bound(vect.begin(), vect.end(), rand() % vect.back()) - vect.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
