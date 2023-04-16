class Solution {
public:
    void solve(vector<vector<int>>& image,int r,int c,int color,int ori){
        if(r<0 || c >=image[0].size() || r>=image.size() || c<0 || image[r][c]!=ori || image[r][c]==color)
            return;

        image[r][c]=color;
        solve(image,r-1,c,color,ori);
        solve(image,r+1,c,color,ori);
        solve(image,r,c+1,color,ori);
        solve(image,r,c-1,color,ori);
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ori=image[sr][sc];
        solve(image,sr,sc,color,ori);
        return image;
    }
};