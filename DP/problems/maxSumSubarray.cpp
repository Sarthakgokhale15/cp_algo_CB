class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        // dp solution taking o(n space)
        //         vector<int>dp(n,0);
        //         dp[0]=nums[0];

        //         for(int i=1;i<n;i++){

        //             dp[i]=max(0,dp[i-1])+nums[i];

        //         }
        //         return *max_element(dp.begin(),dp.end());

        // space optimised solution

        int sum = 0;
        int max_sum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (max_sum < sum)
                max_sum = sum;
            if (sum < 0)
                sum = 0;
        }

        return max_sum;
    }
};