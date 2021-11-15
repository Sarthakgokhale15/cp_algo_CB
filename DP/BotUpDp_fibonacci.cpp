#include <bits/stdc++.h>
using namespace std;

// Space complexity = O(N)
int fib(int n)
{
    // since this is not a recursive solution we can make dp array inside this function itself
    int dp[100] = {0};
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// space is optimised i.e O(1) only a and b are stored
int fibOptimised(int n)
{
    if (n == 0 || n == 1)
        return n;
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{

    int n;
    cin >> n;

    cout << fib(n) << endl;
    cout << fibOptimised(n) << endl;

    return 0;
}