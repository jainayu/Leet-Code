bool sortingColumnDiff( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[1] > v2[1]; 
} 
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<vector<int> > difference(costs.size(), vector<int> (2, 0));
        int A_cnt=0, B_cnt=0, min_cost=0,j=0;
        int total_person = costs.size();
        for(int i=0; i<total_person; ++i){
            difference[i][0] = i;
            difference[i][1] = abs(costs[i][0] - costs[i][1]);
        }
        sort(difference.begin(),difference.end(),sortingColumnDiff);
        for(int i=0;i<total_person; ++i){
            j=difference[i][0];
            if(costs[j][0]<=costs[j][1] && A_cnt<total_person/2 || B_cnt==total_person/2){
                A_cnt++;
                min_cost+=costs[j][0];
            }
            else{
                B_cnt++;
                min_cost+=costs[j][1];
            }
        }
        return min_cost;
        
    }
};
