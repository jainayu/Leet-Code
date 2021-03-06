class Solution {
public:
    int titleToNumber(string s) {
        int res = 0, power = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            res += (s[i] - 'A' + 1) * pow(26, power++);
        }
        return res;
    }
};
