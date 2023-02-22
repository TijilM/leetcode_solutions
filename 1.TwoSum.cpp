class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int com= target-nums[i];
            if(mp.find(com)!=mp.end())
            {
                result.push_back(mp[com]);
                result.push_back(i);
                break;
            }
            else{
                mp.insert({nums[i],i});
            }
        }
        return result;
    }
};