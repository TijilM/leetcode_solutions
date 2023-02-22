class Solution {
public:
    void myfunc(vector<int> &nums, vector<vector<int>> &sol, int index){
         if(index>=nums.size()){
            sol.push_back(nums);
            return;
        }
        for(int j=index ; j<nums.size();j++){
            swap(nums[index],nums[j]);
            myfunc(nums,sol,index+1);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> sol;
        int index = 0;
        myfunc(nums,sol,index);
        return sol; 
    }
};