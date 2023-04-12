class Solution {
public:
    string removeStars(string s) {
     string ans="";
     stack<char> stk;
     for(int i=0;i<s.size();i++){
         if(s[i]=='*' && !stk.empty()){
             stk.pop();
         }
         else{
             stk.push(s[i]);
         }
     }   
     while(!stk.empty()){
         ans+=stk.top();
         stk.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};