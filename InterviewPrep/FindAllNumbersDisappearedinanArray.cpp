class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        unordered_set<int> numbs;
        for(int i: nums){
            numbs.insert(i);
        }
        for(int i = 1; i <= nums.size(); i++){
            if(numbs.find(i) == numbs.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};
