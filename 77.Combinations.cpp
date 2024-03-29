class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<int> nums;
        func(ans,curr,n,k,1);
        return ans;
    }
    void func(vector<vector<int>>&ans, vector<int> &curr,int n,int k,int start){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if(curr.size()>k)
            return;

        for(int i=start;i<n;i++){
            curr.push_back(i);
            func(ans,curr,n,k,i+1);
            curr.pop_back();
        }
    }
};