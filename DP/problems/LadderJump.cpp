class Solution
{
public:
    // Function to count number of ways to reach the nth stair.

    int solve(int n, vector<int> &dp)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;

        // look up in dp
        if (dp[n] != 0)
            return dp[n];

        int ans = (solve(n - 1, dp) + solve(n - 2, dp)) % 1000000007;

        return dp[n] = ans;
    }
    int countWays(int n)
    {

        vector<int> dp(n + 1, 0);
        // bottom up approach just like fibonacci series

        // dp[0]=1;
        // dp[1]=1;
        // dp[2]=2;
        // for(int i=3;i<=n;i++){
        //     dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        // }
        // return dp[n];

        // top down approach(recursive)
        return solve(n, dp);

        /*
         *****bottom up space optimised
        int a=1,b=1;
        
        int c=1;
        for(int i=2;i<=n;i++){
            
               c=a+b; 
            
            
            a=b;
            b=c;
        }
        return c;
        
        */
    }
};
