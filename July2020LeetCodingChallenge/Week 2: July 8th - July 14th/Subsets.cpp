class Solution {
    void subsetsValue(vector<int>& nums, vector<vector<int> >& result, vector<int>& subset, int index) { 
        result.push_back(subset); 
        for (int i = index; i < nums.size(); i++) { 
            subset.push_back(nums[i]); 
            subsetsValue(nums, result, subset, i + 1); 
            subset.pop_back(); 
        } 

        return; 
    } 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset; 
        vector<vector<int> > result; 
        int index = 0; 
        subsetsValue(nums, result, subset, index); 
        return result; 
    }
};
