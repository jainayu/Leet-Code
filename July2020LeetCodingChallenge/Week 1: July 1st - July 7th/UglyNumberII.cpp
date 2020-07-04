class Solution {
public:
    int nthUglyNumber(int n) {
        if(n <= 0) {
            return false; 
        }
        if(n == 1) {
            return true;
        } 
        int p2 = 0, p3 = 0, p5 = 0;
        vector<int> u(n);
        u[0] = 1;
        for(int i  = 1; i < n ; i ++)
        {
            u[i] = min(u[p2] * 2, min(u[p3] * 3, u[p5] * 5));
            if(u[i] == u[p2] * 2) p2++; 
            if(u[i] == u[p3] * 3) p3++;
            if(u[i] == u[p5] * 5) p5++;
        }
        return u[n-1];
    }
};
