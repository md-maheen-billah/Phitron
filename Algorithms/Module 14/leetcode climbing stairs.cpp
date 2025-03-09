class Solution {
    public:
        int fibonacci(int n,int dp[]) //using memoization
        {
            if (n < 3)
                return n; // if value of n is less than 2 then return the value.
            if(dp[n]!= -1)
                return dp[n];
            dp[n]= fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
            return dp[n];
        }
        int climbStairs(int n) {
            int dp[n+1];
            memset(dp,-1,sizeof(dp));
            int ans = fibonacci(n,dp);
            return ans;
        }
    };