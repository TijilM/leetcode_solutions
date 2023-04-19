class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n=word1.size();
        int m=word2.size(); int t;
        if(n < m) t=n;
        else t=m;
        int i=0;
        for(;i<t;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        while(i<n){
            ans+=word1[i];
            i++;
        }
        while(i<m){
            ans+=word2[i];
            i++;
        }
        return ans;

    }
};