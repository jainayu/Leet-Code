class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> result(intervals.size());
        map<int, int> iMap;
        for(int i = 0; i < intervals.size(); i++){
            iMap[intervals[i][0]] = i;
        }
        for(int i = 0; i < intervals.size(); i++){ 
               result[i]  = iMap.lower_bound(intervals[i][1]) != end(iMap)
                   ? iMap.lower_bound(intervals[i][1]) -> second
                   : -1;
        }
        return result;
    }
};
