class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int> (n));
        int k = n*n;
        int left=0,right=n-1,bottom=n-1,top=0;
        int curr=1;
        while(k){
            for(int i=left;i<=right;i++){
                mat[top][i]=curr;
                curr++;
                k--;
            }
            top++;
            for(int i =top;i<=bottom;i++){
                mat[i][right]=curr;
                curr++;
                k--;
            }
            right--;

            if(left<=right){
                for(int j=right;j>=left;j--){
                    mat[bottom][j]=curr;
                    curr++;
                    k--;
                }
                bottom--;
            }
            if(top<=bottom){
                for(int j=bottom;j>=top;j--){
                    mat[j][left]=curr;
                    curr++;
                    k--;
                }
                left++;
            }
        }
        return mat;
    }
};