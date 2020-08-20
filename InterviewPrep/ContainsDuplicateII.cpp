class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> nMap;
        for(int i = 0; i < nums.size();  i++){
            int curr = nums[i];
            if(nMap.find(curr) != nMap.end() && i - nMap[curr] <= k){
                return true;
            } else {
                nMap[curr] = i;
            }
        }
        return false;
    }
};
