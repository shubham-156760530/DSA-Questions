// Use catalan number for calculating number of unique bst's.
// Use dp to calculate catalan number for efficient solution

int numTrees(int n) {
        int dp[n+1];
        for(int i  = 0; i <= n; i++)dp[i] = 0;
        dp[0] = 1; dp[1] = 1;
        
        for(int i = 2; i <= n; i++){
            int l = 0;
            int r = i-1;
            while(l <= (i-1)){
                dp[i] += dp[l]*dp[r];
                l++;
                r--;
            }
        }
        
        return dp[n];
    }