class Solution {
public:
    int n,m;
    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            myfunc(board,i,0);
            myfunc(board,i,n-1);
        }
        for(int j=0;j<n;j++){
            myfunc(board,0,j);
            myfunc(board,m-1,j);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='T')
                    board[i][j]='O';
            }
        }
        return;
    }
    void myfunc(vector<vector<char>>& board,int r,int c){
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != 'O') {
            return;
        }
        board[r][c]='T';
        myfunc(board,r+1,c);
        myfunc(board,r-1,c);
        myfunc(board,r,c+1);
        myfunc(board,r,c-1);
    }
};