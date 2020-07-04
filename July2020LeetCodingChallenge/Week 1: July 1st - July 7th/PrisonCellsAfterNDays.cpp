class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        map <int, vector <int> > mMap;
        if(N == 0) {
            return cells;
        }
        set <vector <int> > visited;
        visited.insert(cells);
        for(int i = 1; i<=14 ; i++ ){
           vector <int> temp(8);
           for(int j = 1; j < 7; j++){
              if(cells[j - 1] ^ cells[j + 1] == 0){
                 temp[j] = 1;
              }
           }
           cells = temp;
           mMap[i] = temp;
           visited.insert(temp);
        }
        return mMap[N % 14 == 0? 14 : N % 14];
    }
};
