//Solution 1

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    
        // O(n), using extra space
        priority_queue <int, vector<int>, greater<int>> minHeap;
        for(int n: nums){
            minHeap.push(n);
            if (minHeap.size() > k){
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};

// Solution 2

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // O(nlogn)
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};
