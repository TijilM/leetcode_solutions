class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        long long int ans=0;
        for(int i =0;i<reward1.size();i++){
            pq.push(reward1[i]-reward2[i]);
            if(pq.size()>k)
                pq.pop();
            ans+=reward2[i];
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};