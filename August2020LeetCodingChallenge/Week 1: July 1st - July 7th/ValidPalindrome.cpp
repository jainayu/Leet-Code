class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        for_each(s.begin(), s.end(), [](char& c) {
		    c = ::tolower(c);
	    });
        while(i<=j){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                if((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')){
                    if(s[i]!=s[j]){
                        return false;
                    }
                    i++;
                    j--;
                } else {
                    j--;
                }
            } else {
                i++;
            }
        }
        return true;
    }
};
