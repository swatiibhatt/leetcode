class Solution {
public:
     int divide(int dividend, int divisor) {
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX; 
        }
        int ans=dividend/divisor;
        return ans;
    }
};