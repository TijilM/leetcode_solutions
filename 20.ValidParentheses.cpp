class Solution {
public:
    bool isValid(string s) {
         stack<char> t;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (t.empty()) {
                    return false;
                }
                if (s[i] == ')' && t.top() != '(') {
                    return false;
                }
                if (s[i] == '}' && t.top() != '{') {
                    return false;
                }
                if (s[i] == ']' && t.top() != '[') {
                    return false;
                }
                t.pop();
            } else {
                t.push(s[i]);
            }
        }
        
        if (!t.empty()) {
            return false;
        }
        return true;
    }
};