class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& a, int k) {
        int n = a.size();
        vector<int> dp(n, 0);

        for (int i = 0; i < n; i++) {
            int max_val = 0;

            for (int j = 1; j <= k && i - j + 1 >= 0; j++) {
                max_val = max(max_val, a[i - j + 1]);

                if (i >= j) {
                    dp[i] = max(dp[i], dp[i - j] + j * max_val);
                } else {
                    dp[i] = max(dp[i], j * max_val);
                }
            }
        }

        return dp[n - 1];
    }
};