// Solution 01
class Solution {
public:
    int addDigits(int num) {
        return num == 0 ? 0: num % 9 == 0 ? 9 : num % 9;
    }
};

// Solution 02
class Solution {
public:
    int addDigits(int num) {
        return num == 0 ? 0 : 1 + (num - 1) % 9;
    }
};

