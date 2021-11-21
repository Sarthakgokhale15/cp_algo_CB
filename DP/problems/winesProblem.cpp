#include <bits/stdc++.h>
using namespace std;
// without dp resurcive approach
int profit1(int wines[], int i, int j, int y)
{

    // base case

    if (i > j)
        return 0;

    // resursive case
    int op1 = wines[i] * y + profit1(wines, i + 1, j, y + 1);
    int op2 = wines[j] * y + profit1(wines, i, j - 1, y + 1);
    return max(op1, op2);
}
// top down dp recursive solution
int profit2(int wines[], int i, int j, int y, int dp[][100])
{
    // base case
    if (i > j)
        return 0;

    // look up
    if (dp[i][j] != 0)
        return dp[i][j];

    int op1 = wines[i] * y + profit2(wines, i + 1, j, y + 1, dp);
    int op2 = wines[j] * y + profit2(wines, i, j - 1, y + 1, dp);

    return dp[i][j] = max(op1, op2);
}
int main()
{

    int wines[] = {10, 1, 10, 9};
    int n = sizeof(wines) / sizeof(wines[0]);

    int y = 1;
    int dp[100][100] = {0};
    cout << profit1(wines, 0, n - 1, y) << endl;
    cout << profit2(wines, 0, n - 1, y, dp) << endl;

    return 0;
}