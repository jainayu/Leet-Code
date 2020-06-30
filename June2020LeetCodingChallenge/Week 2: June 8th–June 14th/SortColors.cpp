//Solution 01
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        while (mid <= high) { 
            switch (nums[mid]) { 
                case 0: 
                    swap(nums[low++], nums[mid++]); 
                    break; 
                case 1: 
                    mid++; 
                    break; 
                case 2: 
                    swap(nums[mid], nums[high--]); 
                    break; 
            } 
        } 
        
        return;
    }
};

//Solution 02
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int temp=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] > nums[j]){
                   temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return;
    }
};
