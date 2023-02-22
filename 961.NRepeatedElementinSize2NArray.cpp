class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second == nums.size()/2)
                ans=i->first;
        }
        return ans;
    }
};