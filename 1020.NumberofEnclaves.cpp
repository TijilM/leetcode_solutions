class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(i*j==0 || i==n-1 || j==m-1)
                    if(grid[i][j]==1)
                        check(i,j,grid,n,m); 
            
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]==1)
                    ans++;
        return ans;
    }
    void check(int i,int j,vector<vector<int>> & grid,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
            return;
        if(grid[i][j]==1)
            grid[i][j]=0;
        check(i+1,j,grid,n,m);
        check(i-1,j,grid,n,m);
        check(i,j+1,grid,n,m);
        check(i,j-1,grid,n,m);
        
    }
};