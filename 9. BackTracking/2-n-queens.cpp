class Solution {
public:
    bool isSafe(vector<vector<int>> board, int x, int y){
        int n = board.size();
        int row = 0, col = 0;
        
        for(row = 0; row < x; row++) 
            if(board[row][y] == 1) return false;
        for(row = x, col = y; row >= 0 && col >= 0; row--, col--) 
            if(board[row][col] == 1) return false;
        for(row = x, col = y; row >= 0 && col < n; row--, col++) 
            if(board[row][col] == 1) return false;
            
        return true;
        
    }
        
    
    bool solve(vector<vector<int>> &board, vector<vector<string>> &ans, int x){
        int n = board.size();
        if(x >= n){
            vector<string> v;
            for(int i = 0; i < board.size(); i++){
                string temp = "";
                for(int j = 0; j < board.size(); j++){
                    if(board[i][j] == 0) temp.push_back('.');
                    else temp.push_back('Q');
                }
                v.push_back(temp);
            }
            ans.push_back(v);
            
            return true;
        }
        
        bool res = false;
        for(int col = 0; col < n; col++){
            if(isSafe(board, x, col)){
                board[x][col] = 1;
                res = solve(board, ans, x + 1) || res;
                board[x][col] = 0;
            }
        }
        
        return res;

        
    }
        
        
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int> (n, 0));
        vector<vector<string>> ans;
        
        solve(board, ans, 0);
        return ans;
    }
};