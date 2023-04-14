class Solution {
public:
bool safe(int row,int col, vector<string>& board,int n){
        for(int i = 0; i < n; i++) {
		    if(board[i][col] == 'Q') 
            return false; 
		    if(row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q')
             return false;
		    if(row - i >= 0 && col + i <  n && board[row - i][col + i] == 'Q') 
            return false;
	    }
	    return true;
    }
    void dfs(int i,int n,vector<string> board,int &ans)
    {
        if(i==n){
            ans++;
            return;
        }
        for(int j=0;j<n;j++){
            if(safe(i,j,board,n))
            {
                board[i][j] = 'Q';
                dfs(i+1,n,board,ans);
                board[i][j] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board(n, string(n, '.'));       
        dfs(0,n,board,ans);
        return ans;
    }
};