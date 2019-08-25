class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int columns = board[0].size();
        //cases
        int liveToDie = 2;
        int liveToLive = 3;
        int dieToLive = 4;
        
        for (int i = 0 ; i < rows ; i++)
        {
            for (int j = 0 ; j < columns ; j++)
            {
                int countLive = 0;
                //scan the neighbours
                
                for (int m = i-1 ; m <= i+1 ; m++)
                {
                    for (int l = j-1; l <= j+1 ; l++)
                    {
                        if (m == i && l == j)
                        {
                            ; //skip the in-check cell
                        }
                        else if (m >= 0 && l >= 0 && m < rows && l < columns)
                        {
                            if (board[m][l] == 1 || board[m][l] == 2 || board[m][l] == 3)
                            {
                                countLive++;
                            }
                        }
                    }
                }                
                
                //find the next state of the cell
                if (board[i][j] == 1 && countLive < 2)
                    board[i][j] = liveToDie;
                else if (board[i][j] == 1 && (countLive == 2 || countLive == 3))
                    board[i][j] = liveToLive;
                else if (board[i][j] == 1 && countLive > 3)
                    board[i][j] = liveToDie;
                else if (board[i][j] == 0 && countLive == 3)
                    board[i][j] = dieToLive;
                
            }
        }
        
        for (int i = 0 ; i < rows ; i++)
        {
            for (int j = 0 ; j < columns ; j++)
            {
                if (board[i][j] == liveToDie)
                    board[i][j] = 0;
                else if (board[i][j] == dieToLive || board[i][j] == liveToLive)
                    board[i][j] = 1;
            }
        }
        
    }
};
