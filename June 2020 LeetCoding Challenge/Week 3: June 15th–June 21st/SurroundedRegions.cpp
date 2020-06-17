class Solution {
    void check(vector<vector<char> >&vec,int i,int j,int row,int col){
		if(vec[i][j]=='O'){
			vec[i][j]='1';
			if(i>1)
				check(vec,i-1,j,row,col);
			if(j>1)
				check(vec,i,j-1,row,col);
			if(i+1<row)
				check(vec,i+1,j,row,col);
			if(j+1<col)
				check(vec,i,j+1,row,col);
		}
	}
public:
	void solve(vector<vector<char>>& board) {
        if(board.empty()) return;
        int i,j;
        int n=board.size();
        int m=board[0].size();

		for(i=0; i<n; i++){
			check(board, i, 0, n, m);
			if(m > 1)
				check(board, i, m-1, n, m);
		}
		for(j=1; j+1<m; j++){
			check(board, 0, j, n, m);
			if(n > 1)
				check(board, n-1, j, n, m);
		}
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				if(board[i][j]=='O')
					board[i][j]='X';
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				if(board[i][j]=='1')
					board[i][j]='O';
    }
	
};
