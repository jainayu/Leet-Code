class Solution {
public:
    int longestPalindrome(string s) {
        int odds = 0;
        for (char ch = 'A'; ch <= 'z'; ch++){
            odds += count(s.begin(), s.end(), ch) & 1;
        }
        return s.size() - odds + (odds > 0);
    }
};
