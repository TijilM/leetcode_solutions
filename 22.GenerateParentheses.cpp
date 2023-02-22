class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        make(n,0,0,"",result);
        return result;
    }
    private:
    void make(int n,int open,int close,string str,vector<string>& result){
        if(open==n and close==n){
            result.push_back(str);
            return;
        }
        if(open<n)
            make(n,open+1,close,str+"(",result);
        if(open>close)
            make(n,open,close+1,str+")",result);
    }
};