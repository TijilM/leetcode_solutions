class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        int cnt=1;
        for(int i=1;i<n;i++){
            cnt*=2;
            int l=ans.size(); 
            for(int j=l-1;j>=0;j--){
                ans.push_back(cnt+ans[j]);
            }
        }
        return ans;
    }
};
