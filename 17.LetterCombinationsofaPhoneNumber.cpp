class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> ans;
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int idx=0;
        string curr="";
        myfun(idx,digits,curr, ans,pad);
        return ans;
    }
    void myfun(int idx,string digits,string &curr,vector<string> &ans,vector<string> &pad){
        if(idx == digits.size()){
            ans.push_back(curr);
            return;
        }
        string value = pad[digits[idx]-'0'];
        for(int i=0; i<value.size(); i++){
            curr.push_back(value[i]);
            myfun(idx+1,digits,curr,ans,pad);
            curr.pop_back();
        }

    }
};