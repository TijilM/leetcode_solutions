class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        int mx= *max_element(nums.begin(),nums.end());
        int curr=0;
        int m=0;
        for(int i=0;i<n;i++){
            if(nums[i]==mx){
                curr++;
                m=max(m,curr);
            }
            else
                curr=0;
        }
        return m;
    }
};