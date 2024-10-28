class Solution
{
public:
  int countFriendsPairings(int n)
  {
    // code here
    const int mod = 1e9 + 7;
    int dp[n];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
      dp[i] = dp[i - 1] + dp[i - 2] * (i - 1);
    }

    return dp[n];
  }
};
