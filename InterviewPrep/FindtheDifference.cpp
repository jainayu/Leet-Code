class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> cMap;
        
        for(auto c : s) {
            cMap[c]++;
        }
        for(auto c : t) {
            if(cMap.find(c) != cMap.end() && cMap[c] == 0 || cMap.find(c) == cMap.end()){
                return c;
            } else {
                cMap[c]--;
            }
        }
        return '!';
    }
};
