class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int flag = -10000000;
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < columns ; j ++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0 ; k < rows ; k++)
                    {
                        if (matrix[k][j] != 0)
                            matrix[k][j] = flag;
                    }
                    for (int k = 0 ; k < columns ; k++)
                    {
                        if (matrix[i][k] != 0)
                            matrix[i][k] = flag;
                    }
                }
            }
        }
        
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < columns ; j ++)
            {
                if (matrix[i][j] == flag)
                    matrix[i][j] = 0;
            }
        }
    }
};
