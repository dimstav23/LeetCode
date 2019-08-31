class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int rows = grid.size();
        if (rows == 0)
            return islands;
        int cols = grid[0].size();
        
        for (int i = 0; i < rows ; i++)
        {
            for (int j = 0 ; j < cols ; j++)
            {
                if (grid[i][j] == '1')
                {
                    islands++;
                    spread(i,j,grid,islands,rows,cols);
                }
            }
        }
        
        return islands;
    }
    
    void spread(int row, int col, vector<vector<char>>& grid, int islands, int rows, int cols)
    {
        grid[row][col] += islands;
        if (row-1 >= 0)
        {
            if (grid[row-1][col] == '1')
            {
                grid[row-1][col] += islands;
                spread(row-1,col,grid,islands,rows,cols);
            }
        }
        if (row+1 < rows)
        {
            if (grid[row+1][col] == '1')
            {
                grid[row+1][col] += islands;
                spread(row+1,col,grid,islands,rows,cols);
            }
        }
        if (col-1 >= 0)
        {
            if (grid[row][col-1] == '1')
            {
                grid[row][col-1] += islands;
                spread(row,col-1,grid,islands,rows,cols);
            }
        }
        if (col+1 < cols)
        {
            if (grid[row][col+1] == '1')
            {
                grid[row][col+1] += islands;
                spread(row,col+1,grid,islands,rows,cols);
            }
        }
    }
    
};
