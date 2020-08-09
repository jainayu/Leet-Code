class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        unordered_set<string> freshSet; 
        unordered_set<string> rottenSet;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    freshSet.insert(""+ to_string(i) + to_string(j));
                } else if(grid[i][j] == 2){
                    rottenSet.insert(""+ to_string(i) + to_string(j));
                }
            }
        }
        
        int mins = 0;
        vector<vector<int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        
        while(freshSet.size() > 0){
            unordered_set<string> infectedSet;
            for(string s : rottenSet){
                int i = s[0] - '0';
                int j = s[1] - '0';
                
                for(vector<int> dir: dirs){
                    int nextI = i + dir[0];
                    int nextJ = j + dir[1];
                    if(freshSet.find("" + to_string(nextI) + to_string(nextJ)) != freshSet.end()){
                        freshSet.erase("" + to_string(nextI) + to_string(nextJ));
                        infectedSet.insert("" + to_string(nextI) + to_string(nextJ));
                    }
                }
            }
            if(infectedSet.size() == 0){
                return -1;
            }
            rottenSet = infectedSet;
            mins++;
        }
        
        return mins;
        
    }
};
