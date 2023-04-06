class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int n:nums){
            pq.push(n);
            if(pq.size()>2)
                pq.pop();
        }
        int ans=1;
        ans*=(pq.top()-1);
        pq.pop();
        ans*=(pq.top()-1);
        return ans;

    }
};