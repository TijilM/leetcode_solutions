class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        int i=0;
        int mx=0;
        for(int n : gain){
            int curr=v[i]+n;
            v.push_back(curr);
            mx=max(mx,curr);
            i++;
        }
        // for(auto x : v)
        //     cout<<x<<" ";
        return mx;
    }
};