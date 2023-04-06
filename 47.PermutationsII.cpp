class Solution {
public:
 void myfunc(vector<int> &nums, set<vector<int>> &sol, int index){
         if(index == nums.size()){
            sol.insert(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            myfunc(nums, sol, index+1);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> sol;
        vector<vector<int>> ans;
        myfunc(nums,sol,0);
        for(auto x: sol)
            ans.push_back(x);
        return ans; 
    }
   
};

