class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;
        int dim = matrix.size();
        int rows = dim%2==0 ? dim/2 : dim/2 + 1;
        
        for (int i = 0 ; i < rows ; i++)
        {
            for (int j = i ; j < dim-i-1 ; j++)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[dim-1-j][i];
                matrix[dim-1-j][i] = matrix[dim-1-i][dim-1-j];
                matrix[dim-1-i][dim-1-j] = matrix[j][dim-1-i];
                matrix[j][dim-1-i] = temp;
            }
        }              
    }
};
