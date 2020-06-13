class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0 || n==1){
            return nums;
        }
        
        sort(nums.begin(), nums.end());
        vector<int> count(n, 1);
        vector<int> previous(n, -1);
        
        int max = 0, index = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (nums[i] % nums[j] == 0) {
                    if (1 + count[j] > count[i]) {
                        count[i] = count[j] + 1;
                        previous[i] = j;
                    }
                }
            }
            if (count[i] > max) {
                max = count[i];
                index = i;
            }
        }
         vector<int>res;
         while (index != -1) {
            res.push_back(nums[index]);
            index = previous[index];
        }
        
        
        return res;
    }
};
