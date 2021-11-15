#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[])
{
    // basse case
    if (n == 1 || n == 0)
    {
        return n;
    }
    // check if fib (n) is already computed and stored in dp array or not
    if (dp[n] != 0)
    {
        // if already computed return dp[n] else compute separately
        return dp[n];
    }

    // compute fib(n)
    int ans = fib(n - 1, dp) + fib(n - 2, dp);
    // store in dp array
    dp[n] = ans;
    // return val stored in dp array
    return dp[n];
}
int main()
{

    int n;
    cin >> n;
    // lets make dp array of val 0
    int dp[100] = {0};
    // its a recursive solution so we have to make dp array inside main and pass it to fib
    cout << fib(n, dp) << endl;

    return 0;
}