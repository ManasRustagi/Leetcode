class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        return (n<2 ? double(1) : double(1)/double(2));
    }
};