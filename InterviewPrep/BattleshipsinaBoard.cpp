// Solution 1

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int numBattleShips = 0;
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == 'X'){
                    numBattleShips++;
                    remove(board, i, j);
                }       
            }
        }
        return numBattleShips;
    }
    
    void remove(vector<vector<char>>& board, int i, int j){
        if(i < 0 || i >= board.size() || j < 0 || j>=board[i].size() || board[i][j] == '.'){
            return;
        }
        board[i][j] = '.';
        remove(board, i + 1, j);
        remove(board, i - 1, j);
        remove(board, i, j + 1);
        remove(board, i, j - 1);
    }
    
};

// Solution 2

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int numBattleShips = 0;
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(i > 0 && board[i - 1][j] == 'X'){
                    continue;
                }
                if(j > 0 && board[i][j - 1] == 'X'){
                    continue;
                }
                numBattleShips++;
            }
        }
        return numBattleShips;
    }
};

