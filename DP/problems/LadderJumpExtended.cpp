#include <bits/stdc++.h>
using namespace std;

int ladders_top_down(int n, int k, int dp[])
{
    /****** base case    *****/
    if (n == 0)
        return 1; //   1 way to reach ground from ground(top )
    // if (k == 0)
    //     return 0; // no jumps are allowed so no way to reach top

    /******  look up in dp    *****/

    if (dp[n] != 0)
        return dp[n];

    /****** recursive case    *****/

    int ways = 0;
    // iterate over all possible jumps we can take i.e from 1-k
    for (int i = 1; i <= k; i++)
    {
        // if we can reach n from n-i th position then only consider it else ignore i.e n-i >=0
        if (n - i >= 0)
        {

            ways += ladders_top_down(n - i, k, dp);
        }
    }
    return dp[n] = ways; // store ans in dp array
}

int ladders_bottom_up(int n, int k)
{

    int dp[100] = {0};
    dp[0] = 1; // start case

    for (int i = 1; i <= n; i++)
    {
        // this is for better and clean code to avoid ovelapping(ignorable)
        //  dp[i]=0 ;
        for (int j = 1; j <= k; j++)
        {
            // call only +ve states ignore all -ve states
            if (i - j >= 0)
            {

                dp[i] += dp[i - j];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}

int ladders_bottom_up_optimised(int n, int k)
{
    int dp[100] = {0};
    // technique ====>>> sliding window
    //  formula::::::::: dp[n]=dp[n-1]-dp[n-k-1]+dp[n-1]------> dp[n]=2*dp[n-1] -dp[n-k-1]
    // edge case for first k elements formula :::::: dp[n]=2*dp[n-1]+0 ---->bcoz dp[n-k] will be zero
    dp[0] = dp[1] = 1; // base case
    for (int i = 2; i <= k; i++)
    {
        dp[i] = 2 * dp[i - 1];
    }

    for (int i = k + 1; i <= n; i++)
    {
        dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
    }

    for (int i = 0; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}
int main()
{
    int n, k;
    cin >> n >> k;

    int dp[100] = {0};
    cout << "\n\n\nTOP-DOWN O(N*K) Ways :" << ladders_top_down(n, k, dp) << endl;
    cout << "BOTTOM UP O(N*K) Ways :\n"
         << ladders_bottom_up(n, k) << endl;
    cout << "OPTIMISED O(N) Ways :\n"
         << ladders_bottom_up_optimised(n, k) << endl;

    return 0;
}