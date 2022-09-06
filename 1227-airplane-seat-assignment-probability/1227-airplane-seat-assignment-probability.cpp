class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        vector<double> dp(2);
        dp[0] = 1.0;  // zero-indexed
        for (int i = 2; i <= n; ++i) {
            dp[(i - 1) % 2] = 1.0 / i + dp[(i - 2) % 2] * (i - 2) / i;
        }
        return dp[(n - 1) % 2];
    }
};