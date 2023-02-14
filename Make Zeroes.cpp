    //   Logic:
       
    //   1. First of all create a temporary matrix 
    //   2. Find your zero in temp matrix 
    //   3. but make matrix of condition as 0 in original matrix
    //   4. Your variable must be inside second loop so that if 0 encounters twice in row it must be solved

    // Code :

    class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();

        // temporary matrix
        int mat[n][m];
        
        for(int i =0;i<n;i++){
            for(int j =0;j<m; j++){
                // copying temp matrix
                mat[i][j] = matrix[i][j];
            }
        }
        for(int i =0;i<n;i++){
            for(int j =0; j<m; j++){
               if(mat[i][j] == 0){
                // to avoid chances of missing 2 0 in a single row
                    int sum = 0;
                   if(i-1>=0){
                       sum += mat[i-1][j];

                    //    make changes in original matrix
                       matrix[i-1][j] = 0;
                   }
                   if(j+1<m){
                       sum += mat[i][j+1];

                    //    make changes in original matrix
                       matrix[i][j+1] = 0;
                   }
                   if(i+1<n){
                       sum += mat[i+1][j];

                    //    make changes in original matrix
                       matrix[i+1][j] = 0;
                   }
                   if(j-1>=0){
                       sum += mat[i][j-1];

                    //    make changes in original matrix
                       matrix[i][j-1] = 0;
                   }
                   matrix[i][j] = sum;
               }
            }
        }
    }
};