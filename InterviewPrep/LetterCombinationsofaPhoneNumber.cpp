class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0) return res;
        
        vector<string> comb = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(res, digits, "", 0, comb);
        return res;
    }
   void  helper (vector<string>& res, string digits, string curr, int index, vector<string> comb){
        if(index == digits.size()){
            res.push_back(curr);
            return;
        }
        string letters = comb[digits[index] - '0'];
        for(int i = 0; i < letters.length(); i++){
            helper(res, digits, curr+letters[i], index + 1, comb);
        }
    }
};
