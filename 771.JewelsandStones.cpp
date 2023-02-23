
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(char ch:jewels)
            mp[ch]++;
        int ans=0;
        for(char ch:stones){
            if(mp[ch])
                ans++;
        }
        return ans;
    }
};