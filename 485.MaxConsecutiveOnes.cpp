class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int a=1;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            a*=nums[i];
            if(a==1){
                curr++;
                ans=max(ans,curr);
            }
            else{
                a=1;
                curr=0;
            }
        }
        return ans;
    }
};