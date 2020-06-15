class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i] == needle[0]){
                if(needle.compare(haystack.substr(i, needle.size())) == 0){
                    return i;
                }
            }
        }
        return -1;
    }
};
