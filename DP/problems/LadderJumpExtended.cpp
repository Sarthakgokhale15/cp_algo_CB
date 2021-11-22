#include <bits/stdc++.h>
using namespace std;

int ladders_top_down(int n, int k, int dp[])
{
    /****** base case    *****/
    if (n == 0)
        return 1; //   1 way to reach ground from ground(top )
    // if (k == 0)
    //     return 0; // no jumos are allowed so no way to reach top

    /******  look up in dp    *****/
 
    if (dp[n] != 0)
        return dp[n];

    /****** recursive case    *****/

    int ways = 0;
    for (int i = 1; i <=k; i++)
    {
        if (n - i >=0)
        {

            ways += ladders_top_down(n - i, k, dp);
        }
    }
    return dp[n] = ways; // store ans in dp array
}

int main()
{
    int n, k;
    cin >> n >> k;

    int dp[100]={0};
    cout <<"Ways :"<<ladders_top_down(n,k,dp)<<endl;

    return 0;
}