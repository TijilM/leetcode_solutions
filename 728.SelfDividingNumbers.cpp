class Solution {
public:
    bool isSelfDividing(int n){
        int k=n;
        while(k!=0){
            int z = k % 10;
            if(z==0)
                return false;
            if( n % z !=0)
                return false;
            k/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(isSelfDividing(i))
                ans.push_back(i);
        }
        return ans;
    }
};