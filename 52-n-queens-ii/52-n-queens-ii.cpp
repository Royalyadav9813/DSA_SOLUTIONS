class Solution {
public:
 // this vector keeps possible board configurations
 vector<vector<string>> res;
    
// checks whether the position is safe for queen or not
    bool is_Safe(vector<string>& board , int row , int column)
    {
        for(int index = row ; index >= 0 ; index--)
            if(board[index][column] == 'Q')
                return false;
        
        for(int index = row , jindex = column ; index >= 0 && jindex >=0 ; index-- , jindex--)
            if(board[index][jindex] == 'Q')
                return false;
        
        for(int index = row , jindex = column ; index >= 0 && jindex < board.size() ; index-- , jindex++)
            if(board[index][jindex] == 'Q')
                return false;
        
        return true;
    }
    
    // checks all possible configurations by backtracking
    void placequeen(vector<string>& board , int row)
    {
        if(row == board.size())
        {
            res.push_back(board);
            return;
        }
        
        for(int index = 0 ; index < board.size() ; index++)
        {
            if(is_Safe(board , row , index))
            {
                
                board[row][index] = 'Q';
                placequeen(board , row + 1);
                board[row][index] = '.';
            }
        }
    }
    
    
    int totalNQueens(int n) {

         if(n <= 0)
            return res.size();
        
        vector<string> board(n,string(n,'.'));
        placequeen(board,0);
        
        return res.size();

    }
};