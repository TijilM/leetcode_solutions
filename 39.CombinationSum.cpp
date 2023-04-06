class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        vector<vector<int>> ans;
        func(curr,candidates,ans,0,0,target);
        return ans;
    }
    void func(vector<int> & curr,vector<int> &candidates,vector<vector<int>> &ans,int sum,int start,int target){
        if(sum>target)
            return ;
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            func(curr,candidates,ans,sum+candidates[i],i,target);
            curr.pop_back();
        }
    }
};40. Combination Sum II