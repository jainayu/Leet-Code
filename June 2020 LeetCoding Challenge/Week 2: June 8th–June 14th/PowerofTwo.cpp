//Solution 1

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0){
            return false;
        }
        return (ceil(log2(n)) == floor(log2(n))); 
    }
};

//Solution 2

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n==1){
            return true;
        }
        if(n%2 != 0 || n <= 0){
            return false;
        }
        while(n%2 == 0){
            n/=2;
        }
        if(n==1){
            return true;
        }
        return false;
    }
};
