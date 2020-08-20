class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        
        map<int, int> nMap;
        for (auto n: nums){
            if(nMap.find(n) != nMap.end() && nMap[n] + 1 > nums.size() / 2){
                return n;
            } else {
                nMap[n]++;
            }
        }
        
        return -1;
    }
};
