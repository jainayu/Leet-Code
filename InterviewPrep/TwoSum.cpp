// Solution 01

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res = {0, 0};
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    res[0] = i;
                    res[1] = j;
                    break;
                }
            }
        }
        return res;
    }
};

// Solution 02

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> h;
        vector<int> res = {0, 0};
        
        for(int i = 0; i < nums.size(); i++){
            int r = target - nums[i];
            if(h.find(r) != h.end()){
                res[0] = h[r];
                res[1] = i;
                return res;
            }
            h[nums[i]] = i;
        }
        return res;
    }
};
