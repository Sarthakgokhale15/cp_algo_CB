#include <bits/stdc++.h>
using namespace std;

int minSteps_TopDown(int n, int dp[])
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    // look up if n is alredy computed
    if (dp[n] != 0)
    {
        return dp[n];
    }
    // compute for n if dp[n] is not known
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    // calculate  f(n/3)
    if (n % 3 == 0)
    {
        op1 = 1 + minSteps_TopDown(n / 3, dp);
    }
    // calculate f(n/2)
    if (n % 2 == 0)
    {

        op2 = 1 + minSteps_TopDown(n / 2, dp);
    }
    // always calculate f(n-1)

    op3 = 1 + minSteps_TopDown(n - 1, dp);

    // store ans in dp array
    return dp[n] = min(op1, min(op2, op3));
}
int minSteps_BottomUp(int n)
{
    int dp[100] = {0};
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int a = 0;
        if (i % 3 == 0)
        {
            a = 3;
        }

        if (i % 2 == 0)
        {
            a = 2;
        }
        if (i % 3 == 0 && i % 2 == 0)
        {
            a = 3;
        }

        dp[i] = 1 + min(dp[i / a], dp[i - 1]);
        // dp[i] = 1 + min(dp[i / 3], min(dp[i / 2], dp[i - 1]));
    }

    return dp[n];
}

int main()
{

    int n;
    cin >> n;
    int dp[100] = {0};
    cout << minSteps_TopDown(n, dp) << endl;
    return 0;
}