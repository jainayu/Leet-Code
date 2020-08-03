class Solution {
public:
    bool detectCapitalUse(string word) {
        regex r("[A-Z]*|.[a-z]*");
        
        return regex_match(word.begin(), word.end(), r) ? true : false ;
    }
};
