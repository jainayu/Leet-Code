//Solution 1
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int aXorb = 0;  
        for (auto n : nums) aXorb ^= n;
        int lastBit = aXorb & (-aXorb);  
        int a = 0, b = 0;
        for (auto n : nums) {
            if (n & lastBit) {
                a = a ^ n;
            } else {
                b = b ^ n;
            }
        }
        return vector<int>{a, b};  
    }
};

//Solution 2
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        if(nums.size() == 0) return res;
        map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        map<int, int>::iterator itr; 
         for(itr = freq.begin(); itr != freq.end(); ++itr) { 
            if(itr->second != 2){
                res.push_back(itr->first);
            }
        }
        return res;
    }
};
