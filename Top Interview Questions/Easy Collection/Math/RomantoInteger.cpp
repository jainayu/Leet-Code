class Solution {
    int value(char ch) { 
        switch(ch){
            case 'I':
                return 1; 
            case 'V' :
                return 5; 
            case 'X' :
                return 10; 
            case 'L' :
                return 50; 
            case 'C' :
                return 100; 
            case 'D' :
                return 500; 
            case 'M' :
                return 1000; 
            default :
                return -1;
        }
    } 
public:
    int romanToInt(string s) {
        int prev = 0, res = 0;
        for(int i = s.size() - 1; i>=0; i--){
            if(value(s[i]) >= prev){
                res += value(s[i]);
            } else {
                res -= value(s[i]);
            }
            prev = value(s[i]);
        }
        return res;
    }
};
