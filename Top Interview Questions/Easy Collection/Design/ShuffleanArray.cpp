class Solution {
    vector<int> vec;
public:
    Solution(vector<int>& nums) {
        this -> vec = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return vec;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> res(vec);
        for (int i = 0; i < res.size(); i++) {
            int pos = rand() % (res.size() - i);
            swap(res[i+pos], res[i]);
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
