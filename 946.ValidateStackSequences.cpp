class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int j=0;
        for(auto x :pushed){
            stk.push(x);
            while(!stk.empty() && popped[j]==stk.top()){
                stk.pop();
                j++;
            }
        }
        return stk.empty();
    }
};