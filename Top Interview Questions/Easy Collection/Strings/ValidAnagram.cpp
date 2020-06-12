class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26, 0);
        map<char, int>freqT;
        if(s.size()!=t.size()){
            return false;
        }
        
        for(int i=0; i<s.size(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(auto it=freq.begin(); it!=freq.end(); it++){
            if((*it) != 0)
                return false;
        }
        return true;
        
    }
};
