bool compare(vector <int> a, vector <int> b){
    if(a[0] == b[0])
        return a[1] > b[1];
    return a[0] < b[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), compare);
        vector < vector <int> > res;
        for(int i = people.size()-1; i>=0; i--){
            res.insert(res.begin() + people[i][1], people[i]);
        }
      return res;
    }
};
