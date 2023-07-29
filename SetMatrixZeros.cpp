class Solution {
public:

    vector<vector<int>>zeroMatrix(vector<vector<int>>& matrix, int n, int m){
        
        // Take one additional row and col of size n and m respectively
        // int row[n] = {0};
        // int col[m] = {0};

        int row[n] ;
        int col[m] ;

        for (int i = 0; i < n; i++) {
                row[i] = 0;
            }

        for (int j = 0; j < m; j++) {
                col[j] = 0;
             }

        // Traverse the entire matrix
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j ++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }

        return matrix;
    }
    void setZeroes(vector<vector<int>>& matrix) {
    

        int n = matrix.size();
        int m = matrix[0].size();
        zeroMatrix(matrix, n, m);

    }
};