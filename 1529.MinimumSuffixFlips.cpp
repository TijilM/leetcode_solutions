class Solution {
public:
    int minFlips(string target) {
        int n=target.size();
        int ans=0;
        if(target[0]-'0')
            ans++;
        for(int i=0;i<n-1;i++){
            if(target[i]!=target[i+1])
                ans++;
        }
        return ans;
    }
};