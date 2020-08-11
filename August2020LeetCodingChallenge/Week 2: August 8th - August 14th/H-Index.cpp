class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int res = 0;
        for (int i = citations.size() - 1; i>=0; i--){
            int count = citations.size() - i;
            if(citations[i] >= count){
                res = count;
            } else {
                break;
            }
        }
        return res;
    }
};
