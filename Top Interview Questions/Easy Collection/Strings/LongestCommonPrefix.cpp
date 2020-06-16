class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string pre;
        pre = strs[0];
        for(int i=1; i<strs.size(); i++){
            int j=0;
            while(j < strs[i].size()){
                if(strs[i][j] == pre[j]){
                    j++;
                } else {
                    break;
                }
            }
            pre.resize(j);
            if(pre.empty()) break;
        }
        return pre;
    }
};
