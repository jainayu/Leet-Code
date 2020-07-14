class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour = hour == 12 ? 0 : hour;
        return abs(hour*30 + minutes * 0.5 - minutes * 6) > 180 ?
            360 - abs(hour*30 + minutes * 0.5 - minutes * 6) : 
            abs(hour*30 + minutes * 0.5 - minutes * 6);
    }
};
