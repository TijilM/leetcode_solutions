class Solution {
public:
    int visited[101][101];
    queue<pair<int,int>>q;
    void dfs(int i,int j,queue<pair<int,int>>&q,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=grid.size()|| j>=grid.size() || visited[i][j])  return;
        visited[i][j]=true;
        if(grid[i][j]==0){q.push({i,j});
        return;}
        dfs(i+1,j,q,grid);
        dfs(i-1,j,q,grid);
        dfs(i,j+1,q,grid);
        dfs(i,j-1,q,grid);

    }
    int shortestBridge(vector<vector<int>>& grid) {
        memset(visited,0,sizeof(visited));
        int flag=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)     {
                    flag =1;
                    dfs(i,j,q,grid);
                    break;
                }
            }
            if(flag)break;
        }
        int dist=0;
        vector<int> nrow = { 1,-1,0,0};
        vector<int> ncol = { 0,0,-1,1};
        while(!q.empty()){
            int s =q.size();
            while(s--){
                int curRow = q.front().first;
                int curCol = q.front().second;
                if(grid[curRow][curCol]==1)return dist;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nextRow= curRow+nrow[i];
                    int nextCol= curCol+ncol[i];
                    if(nextRow>=0 && nextCol>=0 &&nextCol<grid.size() && nextRow<grid[0].size() && !visited[nextRow][nextCol])
                    {
                        visited[nextRow][nextCol]=1;
                        q.push({nextRow,nextCol});
                    }
                }
            }
            dist++;
        }
        return dist;
    }
};