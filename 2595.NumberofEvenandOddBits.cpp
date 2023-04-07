class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans(2,0);
        for(int i=0;i<32;i++){
            if(n & (1<<i)){
                if(i&1)
                    ans[1]++;
                else
                    ans[0]++;
            }
        }
        return ans;
    }
};