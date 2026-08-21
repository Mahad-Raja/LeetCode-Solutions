class Solution {
public:
    bool isSafe(int row, int col, vector<string> &board, int n){
        int duprow = row;
        int dupcol = col;

        while(dupcol >= 0){
            if(board[duprow][dupcol] == 'Q') return false;
            dupcol--;
        }
        dupcol = col;

        while(duprow < n && dupcol >= 0){
            if(board[duprow][dupcol] == 'Q') return false;
            duprow++;
            dupcol--;
        }

        duprow = row;
        dupcol = col;

        while(duprow >= 0 && dupcol >= 0){
            if(board[duprow][dupcol] == 'Q') return false;
            dupcol--;
            duprow--;
        }
        return true;
    }
    void solve(int idx, vector<string> &board, vector<vector<string>> &ans,int n){
        if(idx >= n){
            ans.push_back(board);
            return;
        }
        for(int i=0 ; i<n ; i++){
            if(isSafe(i, idx, board, n) == true){
                board[i][idx] = 'Q';
                solve(idx + 1, board, ans, n);
                board[i][idx] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(0, board, ans, n);
        return ans;
    }
};