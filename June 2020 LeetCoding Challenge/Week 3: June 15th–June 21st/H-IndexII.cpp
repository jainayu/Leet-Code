class Solution {
public:
    int hIndex(vector<int>& citations) {
        int left = 0;
        int n = citations.size(); 
        int right= n-1;
        int mid;
        while(left<=right)
        {
            mid = (left+right)>>1;
            if(citations[mid] == (n - mid)){ 
                return citations[mid];
            } else if(citations[mid] > (n-mid)){ 
                right = mid - 1;
            } else { 
                left = mid + 1;
            }
        }
        return n - (right+1);
    }
};
