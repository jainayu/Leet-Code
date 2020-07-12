class Solution {
public:
    uint32_t reverseBits(uint32_t num) {
        unsigned int  NUMBER_OF_BITS = sizeof(num) * 8; 
        unsigned int reverseNum = 0, i;
        for (i = 0; i < NUMBER_OF_BITS; i++) {
            if((num & (1 << i))) {
                reverseNum |= (1 << ((NUMBER_OF_BITS - 1) - i));
            }
        } 
        return reverseNum; 
    }
};
