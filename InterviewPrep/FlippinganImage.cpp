class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++){
            int j = 0;
            int k = A[i].size() - 1;
            while(j < k){
                int temp = A[i][j];
                A[i][j++] = A[i][k];
                A[i][k--] = temp;
            }
            
            for(j = 0; j < A[i].size(); j++){
                A[i][j] = A[i][j] == 1 ? 0 : 1;
            }   
        }
        
        return A;
        
    }
};
