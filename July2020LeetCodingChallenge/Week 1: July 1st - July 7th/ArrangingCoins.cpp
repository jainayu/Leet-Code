//Simple maths solution

class Solution {
public:
    int arrangeCoins(int n) {
        /*
        k(k+1)≤2N
        This could be solved by completing the square technique, that results in the following answer:
        k = sqrt(2N-(1/4)) - 1/2
        */
        return sqrt(2*(long)n + 0.25) - 0.5;
    }
};
