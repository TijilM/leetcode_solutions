class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;
        unordered_map<char, int> mp;
        for(char ch : s) {
            mp[ch]++;
            if (mp[ch] % 2 == 1)
                odd++;
            else    
                odd--;
        }
        if (odd > 1)
            return s.length() - odd + 1;
        return s.length();
    }
};