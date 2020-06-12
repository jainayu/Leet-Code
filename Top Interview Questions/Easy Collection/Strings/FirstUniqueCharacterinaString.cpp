class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>freq;
        
        for(int i=0; i<s.size(); i++){
            if(freq.find(s[i])!=freq.end()){
                ++freq.at(s[i]);
            } else {
                freq.insert(pair<char, int>(s[i], 1));
            }
        }
        
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
