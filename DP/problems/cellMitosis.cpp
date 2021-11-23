#include <bits/stdc++.h>
using namespace std;

/******INTUITION**************/
// case 1: f(n/2) cost=x
// case 2: f(n-1) cost=y
// case 3: f(n+1) cost=z

// for bottom up dp f(n+1) technically cannot be optimal solution beacuse it take more cost
// if n is even then cost -->>>> min of f(n/2)+x   and    f(n-1)+y

// if n is odd f(n/2 ) is not posiible  cost->>>>min  of  f(n+1)/2)+x+z  and f(n-1)+y

// edge case for n==2   ->n is even cost=min of f(n/2)+x  and f(n-1)+y   --->>>min( 0 +x  ,0+y  )->>min(x,y)
int solve(int n, int x, int y, int z)
{
    int dp[n + 1] = {0};
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = min(x, y);
    for (int i = 3; i <= n; i++)
    {

        // if n is even
        if (i % 2 == 0)
        {
            dp[i] = min(x + dp[i / 2], y + dp[i - 1]);
        }

        // if n is odd
        else
        {
            dp[i] = min(x + dp[(i + 1) / 2] + z, dp[i - 1] + y);
        }
    }
    return dp[n];
}

int main()
{

    int n, x, y, z;
    cin >> n >> x >> y >> z;
    // int dp[n+1]={0};
    cout << solve(n, x, y, z);
    return 0;
}