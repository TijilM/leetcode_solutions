class Solution {
public:
    
    int countTriples(int n) {
        int ans=0,k,temp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                temp= i*i +j*j;
                k=sqrt(temp);
                if(k*k==temp && k <=n)
                    ans++;
            }
        }
        return ans;
    }
};
37. Sudoku Solver