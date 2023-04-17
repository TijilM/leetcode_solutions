class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool> ans;
        int p = max_element(candies.begin(),candies.end())-candies.begin();
        cout<<candies[p];
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extra >= candies[p])
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};