class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<=q && q<=e[i]){
                ans++;
            }
        }
        return ans;
    }
};