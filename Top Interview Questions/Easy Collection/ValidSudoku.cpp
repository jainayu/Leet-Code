class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> ch;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(ch.find(board[i][j]) != ch.end()){
                    return false;
                }
                if(board[i][j]!='.'){
                    ch.insert(board[i][j]);
                }
            }
            ch.clear();
        }
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(ch.find(board[j][i]) != ch.end()){
                    return false;
                }
                if(board[j][i]!='.'){
                    ch.insert(board[j][i]);
                }
            }
            ch.clear();
        }
        
        for(int k=0; k<9 ; k+=3){
            for(int l=0; l<9; l+=3){
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        if(ch.find(board[i+k][j+l]) != ch.end()){
                            return false;
                        }
                        if(board[i+k][j+l]!='.'){
                            ch.insert(board[i+k][j+l]);
                        }
                    }
                }
                ch.clear();
            }
        }
        return true;
    }
};
